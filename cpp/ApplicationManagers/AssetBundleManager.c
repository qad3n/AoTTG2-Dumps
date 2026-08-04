// Type: ApplicationManagers.AssetBundleManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/ApplicationManagers/AssetBundleManager.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/AssetBundleManager.cs
// --------------------------------

// ApplicationManagers.AssetBundleManager.<ConfirmVideoPlayerUrls>d__9$$.ctor
// il2cpp: void ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__9___ctor (ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__9_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x44ad1e0

void ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__9___ctor
               (ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__9_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AssetBundleManager.<ConfirmVideoPlayerUrls>d__9$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__9__System_IDisposable_Dispose (ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__9_o* __this, const MethodInfo* method);
// 0x44af320

void ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__9__System_IDisposable_Dispose
               (ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__9_o *__this,
               MethodInfo *method)

{
  return;
}


// ApplicationManagers.AssetBundleManager.<ConfirmVideoPlayerUrls>d__9$$MoveNext
// il2cpp: bool ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__9__MoveNext (ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__9_o* __this, const MethodInfo* method);
// 0x44af330

bool_conflict
ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__9__MoveNext
          (ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__9_o *__this,MethodInfo *method)

{
  int *piVar1;
  byte bVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UI_CustomAssetVideoUrlPopup_o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  Il2CppClass *pIVar3;
  bool_conflict bVar4;
  uint uVar5;
  int32_t iVar6;
  UI_InGameMenu_o *pUVar7;
  UI_CustomAssetVideoUrlPopup_o *pUVar8;
  System_Collections_Generic_List_VideoPlayer__o *pSVar9;
  System_String_array *pSVar10;
  UI_CustomAssetVideoUrlPopup_o *pUVar11;
  System_Object_array *pSVar12;
  System_String_o *pSVar13;
  long lVar14;
  undefined8 *puVar15;
  Il2CppClass *in_RCX;
  UI_CustomAssetVideoUrlPopup_o *unaff_RBX;
  int iVar16;
  UI_InGameMenu_o *pUVar17;
  UI_CustomAssetVideoUrlPopup_o *pUVar18;
  uint uVar19;
  UI_InGameMenu_o **ppUVar20;
  UI_CustomAssetVideoUrlPopup_o *in_stack_ffffffffffffff88;
  System_Collections_Generic_List_VideoPlayer__o **in_stack_ffffffffffffff90;
  Il2CppObject *pIVar21;
  
  pUVar18 = (UI_CustomAssetVideoUrlPopup_o *)__this;
  if (g_data_057aea01 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_LoadAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AssetBundle_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VideoPlayer_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VideoPlayer_GetComponentsInChildren_VideoPlayer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Video_VideoPlayer_GetEnu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Video_VideoPlayer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_VideoPlayer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pUVar18 = (UI_CustomAssetVideoUrlPopup_o *)&".prefab";
    il2cpp_runtime_helper_023445d0();
    g_data_057aea01 = '\x01';
  }
  pIVar21 = (Il2CppObject *)0x0;
  iVar16 = (__this->fields).__1__state;
  pUVar11 = (UI_CustomAssetVideoUrlPopup_o *)__this;
  if (iVar16 == 1) {
    (__this->fields).__1__state = -1;
    pUVar7 = (__this->fields)._menu_5__2;
joined_r0x044af4cd:
    pUVar11 = (UI_CustomAssetVideoUrlPopup_o *)__this;
    if ((pUVar7 != (UI_InGameMenu_o *)0x0) &&
       (pUVar8 = (pUVar7->fields)._customAssetVideoUrlPopup, pUVar8 != (UI_CustomAssetVideoUrlPopup_o *)0x0))
    {
      if ((char)(pUVar8->fields).Done == '\0') {
        (__this->fields).__2__current = (Il2CppObject *)0x0;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
      }
      if ((pUVar8->fields).Result == 1) {
        return 0;
      }
      pSVar9 = (__this->fields)._videoPlayers_5__3;
      if (pSVar9 != (System_Collections_Generic_List_VideoPlayer__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff98,
                   (System_Collections_Generic_List_object__o *)pSVar9,MethodInfo_List_1_T_Enumerator_UnityEngine_Video_VideoPlayer_GetEnu);
        pUVar11 = (UI_CustomAssetVideoUrlPopup_o *)&MethodInfo_Boolean_MoveNext;
        __this_02.fields._8_8_ = in_stack_ffffffffffffff90;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
        __this_02.fields._current = pIVar21;
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
        if ((char)bVar4 == '\0') {
          __this_03.fields._8_8_ = in_stack_ffffffffffffff90;
          __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
          __this_03.fields._current = pIVar21;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
          return 0;
        }
label_044afaa4:
        il2cpp_runtime_helper_022b2c90();
label_044afaa9:
        pIVar3 = MethodInfo_Void_Add;
        pUVar18 = (UI_CustomAssetVideoUrlPopup_o *)*in_stack_ffffffffffffff90;
        if (pUVar18 != (UI_CustomAssetVideoUrlPopup_o *)0x0) {
          piVar1 = (int *)((long)&(pUVar18->fields).m_CancellationTokenSource + 4);
          *piVar1 = *piVar1 + 1;
          lVar14 = (pUVar18->fields).m_CachedPtr;
          in_RCX = pIVar3;
          if (lVar14 != 0) goto label_044afad2;
        }
      }
    }
  }
  else {
    if (iVar16 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pUVar7 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (pUVar7 != (UI_InGameMenu_o *)0x0) goto label_044af498;
label_044af5a5:
      (__this->fields)._menu_5__2 = (UI_InGameMenu_o *)0x0;
label_044af5f5:
      ppUVar20 = &(__this->fields)._menu_5__2;
      il2cpp_runtime_helper_022b4080(ppUVar20,0);
      pUVar7 = *ppUVar20;
    }
    else {
      pUVar7 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (pUVar7 == (UI_InGameMenu_o *)0x0) goto label_044af5a5;
label_044af498:
      in_RCX = TypeInfo_InGameMenu;
      bVar2 = (TypeInfo_InGameMenu->_2).naturalAligment;
      if ((pUVar7->klass->_2).naturalAligment < bVar2) {
        pUVar17 = (UI_InGameMenu_o *)0x0;
      }
      else {
        pUVar17 = (UI_InGameMenu_o *)0x0;
        if ((pUVar7->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_InGameMenu) {
          pUVar17 = pUVar7;
        }
      }
      ppUVar20 = &(__this->fields)._menu_5__2;
      (__this->fields)._menu_5__2 = pUVar17;
      if ((pUVar7->klass->_2).naturalAligment < bVar2) goto label_044af5f5;
      pUVar17 = (UI_InGameMenu_o *)0x0;
      if ((pUVar7->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == in_RCX) {
        pUVar17 = pUVar7;
      }
      il2cpp_runtime_helper_022b4080(ppUVar20,pUVar17);
      pUVar7 = *ppUVar20;
    }
    if (pUVar7 == (UI_InGameMenu_o *)0x0) {
      return 0;
    }
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
    pUVar18 = (UI_CustomAssetVideoUrlPopup_o *)0x0;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar8 = (UI_CustomAssetVideoUrlPopup_o *)
               System_Collections_Generic_Dictionary_object__object___get_Item
                         (__this_00,(Il2CppObject *)(__this->fields).bundle,MethodInfo_AssetBundle_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        return 0;
      }
      pSVar9 = (System_Collections_Generic_List_VideoPlayer__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_VideoPlayer);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)pSVar9,MethodInfo_List_1_UnityEngine_Video_VideoPlayer);
      in_stack_ffffffffffffff90 = &(__this->fields)._videoPlayers_5__3;
      (__this->fields)._videoPlayers_5__3 = pSVar9;
      il2cpp_runtime_helper_022b4080(in_stack_ffffffffffffff90,pSVar9);
      unaff_RBX = (UI_CustomAssetVideoUrlPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      pUVar18 = unaff_RBX;
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)unaff_RBX,MethodInfo_List_1_System_String);
      if ((pUVar8 != (UI_CustomAssetVideoUrlPopup_o *)0x0) &&
         (pUVar18 = pUVar8, in_stack_ffffffffffffff88 = unaff_RBX,
         pSVar10 = UnityEngine_AssetBundle__GetAllAssetNames
                             ((UnityEngine_AssetBundle_o *)pUVar8,(MethodInfo *)0x0),
         pSVar10 != (System_String_array *)0x0)) {
        uVar5 = (uint)pSVar10->max_length;
        in_RCX = (Il2CppClass *)(ulong)uVar5;
        if (0 < (int)uVar5) {
          uVar19 = 0;
          if (uVar5 != 0) {
            do {
              in_RCX = (Il2CppClass *)(long)(int)uVar19;
              pUVar11 = (UI_CustomAssetVideoUrlPopup_o *)pSVar10->m_Items[(long)in_RCX];
              if (pUVar11 == (UI_CustomAssetVideoUrlPopup_o *)0x0) goto label_044afacd;
              pUVar18 = pUVar11;
              bVar4 = System_String__EndsWith((System_String_o *)pUVar11,".prefab",(MethodInfo *)0x0);
              if ((char)bVar4 != '\0') {
                pUVar11 = (UI_CustomAssetVideoUrlPopup_o *)
                          UnityEngine_AssetBundle__LoadAsset_object_
                                    ((UnityEngine_AssetBundle_o *)pUVar8,(System_String_o *)pUVar11,
                                     MethodInfo_GameObject_LoadAsset_GameObject);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pUVar18 = pUVar11;
                bVar4 = UnityEngine_Object__op_Equality
                                  ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if ((char)bVar4 == '\0') {
                  if ((pUVar11 == (UI_CustomAssetVideoUrlPopup_o *)0x0) ||
                     (pUVar18 = pUVar11,
                     pSVar12 = UnityEngine_GameObject__GetComponentsInChildren_object_
                                         ((UnityEngine_GameObject_o *)pUVar11,1,MethodInfo_VideoPlayer_GetComponentsInChildren_VideoPlayer),
                     pSVar12 == (System_Object_array *)0x0)) goto label_044afacd;
                  iVar16 = (int)pSVar12->max_length;
                  if (in_stack_ffffffffffffff88 == (UI_CustomAssetVideoUrlPopup_o *)0x0) {
                    if (0 < iVar16) {
                      unaff_RBX = (UI_CustomAssetVideoUrlPopup_o *)0x0;
                      if (iVar16 == 0) break;
                      while( true ) {
                        pUVar11 = (UI_CustomAssetVideoUrlPopup_o *)pSVar12->m_Items[(long)unaff_RBX];
                        if (pUVar11 == (UI_CustomAssetVideoUrlPopup_o *)0x0) goto label_044afacd;
                        pUVar18 = pUVar11;
                        iVar6 = UnityEngine_Video_VideoPlayer__get_source
                                          ((UnityEngine_Video_VideoPlayer_o *)pUVar11,(MethodInfo *)0x0);
                        if (iVar6 == 1) {
                          pUVar18 = (UI_CustomAssetVideoUrlPopup_o *)
                                    UnityEngine_Video_VideoPlayer__get_url
                                              ((UnityEngine_Video_VideoPlayer_o *)pUVar11,(MethodInfo *)0x0);
                          bVar4 = System_String__IsNullOrEmpty((System_String_o *)pUVar18,(MethodInfo *)0x0);
                          if ((char)bVar4 == '\0') goto label_044afaa9;
                        }
                        uVar5 = (uint)pSVar12->max_length;
                        unaff_RBX = (UI_CustomAssetVideoUrlPopup_o *)((long)&unaff_RBX->klass + 1);
                        if ((int)uVar5 <= (int)(uint)unaff_RBX) break;
                        if (uVar5 <= (uint)unaff_RBX) goto label_044afa9f;
                      }
                    }
                  }
                  else if (0 < iVar16) {
                    pUVar11 = (UI_CustomAssetVideoUrlPopup_o *)0x0;
                    if (iVar16 != 0) {
                      do {
                        iVar16 = (int)pUVar11;
                        __this_01 = (UI_CustomAssetVideoUrlPopup_o *)pSVar12->m_Items[iVar16];
                        if (__this_01 == (UI_CustomAssetVideoUrlPopup_o *)0x0) goto label_044afacd;
                        pUVar18 = __this_01;
                        iVar6 = UnityEngine_Video_VideoPlayer__get_source
                                          ((UnityEngine_Video_VideoPlayer_o *)__this_01,(MethodInfo *)0x0);
                        if (iVar6 == 1) {
                          pUVar18 = (UI_CustomAssetVideoUrlPopup_o *)
                                    UnityEngine_Video_VideoPlayer__get_url
                                              ((UnityEngine_Video_VideoPlayer_o *)__this_01,(MethodInfo *)0x0)
                          ;
                          bVar4 = System_String__IsNullOrEmpty((System_String_o *)pUVar18,(MethodInfo *)0x0);
                          pIVar3 = MethodInfo_Void_Add;
                          if ((char)bVar4 != '\0') goto label_044af820;
                          pUVar18 = (UI_CustomAssetVideoUrlPopup_o *)*in_stack_ffffffffffffff90;
                          if (pUVar18 == (UI_CustomAssetVideoUrlPopup_o *)0x0) goto label_044afacd;
                          piVar1 = (int *)((long)&(pUVar18->fields).m_CancellationTokenSource + 4);
                          *piVar1 = *piVar1 + 1;
                          lVar14 = (pUVar18->fields).m_CachedPtr;
                          in_RCX = pIVar3;
                          if (lVar14 == 0) goto label_044afacd;
                          uVar5 = *(uint *)&(pUVar18->fields).m_CancellationTokenSource;
                          if (uVar5 < *(uint *)(lVar14 + 0x18)) {
                            *(uint *)&(pUVar18->fields).m_CancellationTokenSource = uVar5 + 1;
                            *(UI_CustomAssetVideoUrlPopup_o **)(lVar14 + 0x20 + (long)(int)uVar5 * 8) =
                                 __this_01;
                            il2cpp_runtime_helper_022b4080(lVar14 + (long)(int)uVar5 * 8 + 0x20);
                            pUVar18 = in_stack_ffffffffffffff88;
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize
                                      ((System_Collections_Generic_List_object__o *)pUVar18,
                                       (Il2CppObject *)__this_01,
                                       *(MethodInfo_362C220 **)
                                        (*(long *)((long)(pIVar3->_1).byval_arg.data + 0xc0) + 0x70));
                            pUVar18 = in_stack_ffffffffffffff88;
                          }
                          pSVar13 = UnityEngine_Video_VideoPlayer__get_url
                                              ((UnityEngine_Video_VideoPlayer_o *)__this_01,(MethodInfo *)0x0)
                          ;
                          in_RCX = (Il2CppClass *)&MethodInfo_Boolean_Contains;
                          in_stack_ffffffffffffff88 = pUVar18;
                          bVar4 = System_Collections_Generic_List_object___Contains
                                            ((System_Collections_Generic_List_object__o *)pUVar18,
                                             (Il2CppObject *)pSVar13,MethodInfo_Boolean_Contains);
                          if ((char)bVar4 != '\0') goto label_044af820;
                          pUVar18 = in_stack_ffffffffffffff88;
                          pSVar13 = UnityEngine_Video_VideoPlayer__get_url
                                              ((UnityEngine_Video_VideoPlayer_o *)__this_01,(MethodInfo *)0x0)
                          ;
                          lVar14 = MethodInfo_Void_Add;
                          piVar1 = (int *)((long)&(pUVar18->fields).m_CancellationTokenSource + 4);
                          *piVar1 = *piVar1 + 1;
                          in_RCX = (Il2CppClass *)(pUVar18->fields).m_CachedPtr;
                          if (in_RCX == (Il2CppClass *)0x0) goto label_044afacd;
                          uVar5 = *(uint *)&(pUVar18->fields).m_CancellationTokenSource;
                          in_stack_ffffffffffffff88 = pUVar18;
                          if (uVar5 < *(uint *)&(in_RCX->_1).namespaze) {
                            *(uint *)&(pUVar18->fields).m_CancellationTokenSource = uVar5 + 1;
                            pUVar18 = (UI_CustomAssetVideoUrlPopup_o *)
                                      (&(in_RCX->_1).byval_arg.data + (int)uVar5);
                            (&(in_RCX->_1).byval_arg.data)[(int)uVar5] = pSVar13;
                            il2cpp_runtime_helper_022b4080();
                            goto label_044af820;
                          }
                          in_RCX = *(Il2CppClass **)(*(long *)(lVar14 + 0x20) + 0xc0);
                          System_Collections_Generic_List_object___AddWithResize
                                    ((System_Collections_Generic_List_object__o *)pUVar18,
                                     (Il2CppObject *)pSVar13,(in_RCX->_1).interopData);
                          pUVar11 = (UI_CustomAssetVideoUrlPopup_o *)(ulong)(iVar16 + 1U);
                          uVar5 = (uint)pSVar12->max_length;
                          if ((int)uVar5 <= (int)(iVar16 + 1U)) goto label_044af720;
                        }
                        else {
label_044af820:
                          pUVar11 = (UI_CustomAssetVideoUrlPopup_o *)(ulong)(iVar16 + 1U);
                          uVar5 = (uint)pSVar12->max_length;
                          if ((int)uVar5 <= (int)(iVar16 + 1U)) goto label_044af720;
                        }
                        if (uVar5 <= (uint)pUVar11) break;
                      } while( true );
                    }
                    break;
                  }
                }
              }
label_044af720:
              uVar19 = uVar19 + 1;
              uVar5 = (uint)pSVar10->max_length;
              in_RCX = (Il2CppClass *)(ulong)uVar5;
              if ((int)uVar5 <= (int)uVar19) goto label_044afa58;
            } while (uVar19 < uVar5);
          }
label_044afa9f:
          il2cpp_runtime_helper_022b2ca0();
          goto label_044afaa4;
        }
label_044afa58:
        if (in_stack_ffffffffffffff88 != (UI_CustomAssetVideoUrlPopup_o *)0x0) {
          if (*(int *)&(in_stack_ffffffffffffff88->fields).m_CancellationTokenSource == 0) {
            return 0;
          }
          pUVar7 = (__this->fields)._menu_5__2;
          if ((pUVar7 != (UI_InGameMenu_o *)0x0) &&
             (pUVar18 = (pUVar7->fields)._customAssetVideoUrlPopup,
             pUVar11 = (UI_CustomAssetVideoUrlPopup_o *)__this,
             pUVar18 != (UI_CustomAssetVideoUrlPopup_o *)0x0)) {
            UI_CustomAssetVideoUrlPopup__Show
                      (pUVar18,(System_Collections_Generic_List_string__o *)in_stack_ffffffffffffff88,
                       (MethodInfo *)0x0);
            pUVar7 = (__this->fields)._menu_5__2;
            goto joined_r0x044af4cd;
          }
        }
      }
    }
  }
label_044afacd:
  lVar14 = il2cpp_runtime_helper_022b2c90();
label_044afad2:
  uVar5 = *(uint *)&(pUVar18->fields).m_CancellationTokenSource;
  if (uVar5 < *(uint *)(lVar14 + 0x18)) {
    in_RCX = (Il2CppClass *)(ulong)(uVar5 + 1);
    *(uint *)&(pUVar18->fields).m_CancellationTokenSource = uVar5 + 1;
    *(UI_CustomAssetVideoUrlPopup_o **)(lVar14 + 0x20 + (long)(int)uVar5 * 8) = pUVar11;
    il2cpp_runtime_helper_022b4080(lVar14 + (long)(int)uVar5 * 8 + 0x20);
    pUVar18 = pUVar11;
    UnityEngine_Video_VideoPlayer__get_url((UnityEngine_Video_VideoPlayer_o *)pUVar11,(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b2c90();
  }
  System_Collections_Generic_List_object___AddWithResize
            ((System_Collections_Generic_List_object__o *)pUVar18,(Il2CppObject *)pUVar11,
             *(MethodInfo_362C220 **)(*(long *)((long)(in_RCX->_1).byval_arg.data + 0xc0) + 0x70));
  UnityEngine_Video_VideoPlayer__get_url((UnityEngine_Video_VideoPlayer_o *)pUVar11,(MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
  puVar15 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar15 = pUVar11->klass;
  __cxa_throw(puVar15,&PTR_PTR_05215060,0);
}


// ApplicationManagers.AssetBundleManager.<ConfirmVideoPlayerUrls>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__9_o* __this, const MethodInfo* method);
// 0x44afbf0

Il2CppObject *
ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AssetBundleManager.<ConfirmVideoPlayerUrls>d__9$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__9__System_Collections_IEnumerator_Reset (ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__9_o* __this, const MethodInfo* method);
// 0x44afc00

void ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__9__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__9_o *__this,
               MethodInfo *method)

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


// ApplicationManagers.AssetBundleManager.<ConfirmVideoPlayerUrls>d__9$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__9__System_Collections_IEnumerator_get_Current (ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__9_o* __this, const MethodInfo* method);
// 0x44afc40

Il2CppObject *
ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__9__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AssetBundleManager.<LoadBundle>d__8$$.ctor
// il2cpp: void ApplicationManagers_AssetBundleManager__LoadBundle_d__8___ctor (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x44ad150

void ApplicationManagers_AssetBundleManager__LoadBundle_d__8___ctor
               (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AssetBundleManager.<LoadBundle>d__8$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AssetBundleManager__LoadBundle_d__8__System_IDisposable_Dispose (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o* __this, const MethodInfo* method);
// 0x44afc50

void ApplicationManagers_AssetBundleManager__LoadBundle_d__8__System_IDisposable_Dispose
               (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  UnityEngine_Networking_DownloadHandler_o *pUVar5;
  UnityEngine_Networking_DownloadHandler_c *pUVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  UnityEngine_Networking_UnityWebRequest_o *pUVar8;
  UnityEngine_Networking_UnityWebRequest_c *pUVar9;
  VirtualInvokeData *pVVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [12];
  
  iVar4 = (__this->fields).__1__state;
  if (iVar4 - 4U < 2) {
label_044afc78:
    if (g_data_057aea04 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057aea04 = '\x01';
    }
    (__this->fields).__1__state = -3;
    pUVar5 = (__this->fields).__7__wrap4;
    if (pUVar5 != (UnityEngine_Networking_DownloadHandler_o *)0x0) {
      pUVar6 = pUVar5->klass;
      uVar1._0_1_ = (pUVar6->_2).rank;
      uVar1._1_1_ = (pUVar6->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar7 = (pUVar6->_1).interfaceOffsets;
        lVar12 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar12) == TypeInfo_IDisposable) {
            pVVar10 = &(pUVar6->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar12);
            goto label_044afd0b;
          }
          lVar12 = lVar12 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar12);
      }
      pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pUVar5,TypeInfo_IDisposable,0);
label_044afd0b:
      (*pVVar10->methodPtr)(pUVar5,pVVar10->method);
      lVar12 = 0;
      goto joined_r0x044afcf5;
    }
  }
  else if (iVar4 != -3) {
    if (iVar4 != -4) {
      return;
    }
    goto label_044afc78;
  }
  lVar12 = 0;
joined_r0x044afcf5:
  do {
    if (g_data_057aea03 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057aea03 = '\x01';
    }
    (__this->fields).__1__state = -1;
    pUVar8 = (__this->fields)._dlreq_5__4;
    if (pUVar8 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      pUVar9 = pUVar8->klass;
      uVar2._0_1_ = (pUVar9->_2).rank;
      uVar2._1_1_ = (pUVar9->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar7 = (pUVar9->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar13) == TypeInfo_IDisposable) {
            pVVar10 = &(pUVar9->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar13);
            goto label_044afd9d;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar13);
      }
      pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pUVar8,TypeInfo_IDisposable,0);
label_044afd9d:
      (*pVVar10->methodPtr)(pUVar8,pVVar10->method);
    }
    if (lVar12 == 0) {
      return;
    }
    auVar14 = il2cpp_runtime_helper_022fefe0();
    if (auVar14._8_4_ != 1) break;
    plVar11 = (long *)__cxa_begin_catch();
    lVar12 = *plVar11;
    __cxa_end_catch();
  } while( true );
  if (g_data_057aea03 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057aea03 = '\x01';
  }
  (__this->fields).__1__state = -1;
  pUVar8 = (__this->fields)._dlreq_5__4;
  if (pUVar8 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    pUVar9 = pUVar8->klass;
    uVar3._0_1_ = (pUVar9->_2).rank;
    uVar3._1_1_ = (pUVar9->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar7 = (pUVar9->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar12) == TypeInfo_IDisposable) {
          pVVar10 = &(pUVar9->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar12);
          goto label_044afe6d;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar12);
    }
    pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pUVar8,TypeInfo_IDisposable,0);
label_044afe6d:
    (*pVVar10->methodPtr)(pUVar8,pVVar10->method);
  }
  _Unwind_Resume(auVar14._0_8_);
}


// ApplicationManagers.AssetBundleManager.<LoadBundle>d__8$$MoveNext
// il2cpp: bool ApplicationManagers_AssetBundleManager__LoadBundle_d__8__MoveNext (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o* __this, const MethodInfo* method);
// 0x44afeb0

bool_conflict
ApplicationManagers_AssetBundleManager__LoadBundle_d__8__MoveNext
          (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  UI_CustomAssetUrlPopup_o *pUVar7;
  UnityEngine_Networking_DownloadHandler_o *pUVar8;
  UnityEngine_Networking_DownloadHandler_c *pUVar9;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  UnityEngine_Networking_UnityWebRequest_c *pUVar11;
  Il2CppClass *pIVar12;
  long lVar13;
  code *vtableDispatch;
  bool_conflict bVar14;
  UnityEngine_AssetBundle_o *pUVar15;
  UnityEngine_Object_o *pUVar16;
  System_String_o *pSVar17;
  UI_InGameMenu_o *pUVar18;
  UnityEngine_Networking_UnityWebRequest_o *pUVar19;
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *pUVar20;
  Il2CppMethodPointer *ppIVar21;
  uint64_t uVar22;
  Il2CppObject *pIVar23;
  Il2CppClass *pIVar24;
  long *plVar25;
  undefined8 uVar26;
  Il2CppClass *pIVar27;
  Il2CppObject **ppIVar28;
  long lVar29;
  long lVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [12];
  
  if (g_data_057aea02 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AssetBundle_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DownloadHandlerFile);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityWebRequest);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057aea02 = '\x01';
  }
  switch((__this->fields).__1__state) {
  case 0:
    (__this->fields).__1__state = -1;
    pSVar17 = (__this->fields).bundle;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar14 = Utility_Util__IsValidFileName(pSVar17,method);
    if ((char)bVar14 == '\0') {
      return 0;
    }
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
    if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_044b0bb8:
      il2cpp_runtime_helper_022b2c90();
label_044b0bbd:
      pIVar24 = (Il2CppClass *)method;
      il2cpp_runtime_helper_022b2c90();
      goto label_044b0bc2;
    }
    pIVar24 = (Il2CppClass *)(__this->fields).bundle;
    bVar14 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       (pSVar6,(Il2CppObject *)pIVar24,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar14 != '\0') {
      if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
      if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pUVar16 = (UnityEngine_Object_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar6,(Il2CppObject *)(__this->fields).bundle,MethodInfo_AssetBundle_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar24 = (Il2CppClass *)0x0;
        bVar14 = UnityEngine_Object__op_Inequality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar14 != '\0') {
          return 0;
        }
        goto label_044b0173;
      }
      goto label_044b0bdb;
    }
label_044b0173:
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
    if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044b0bc7;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar6,(Il2CppObject *)(__this->fields).bundle,(Il2CppObject *)0x0,MethodInfo_Void_set_Item);
    if ((char)(__this->fields).editor != '\0') {
label_044b0213:
      if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
      pIVar24 = (Il2CppClass *)(__this->fields).bundle;
      pIVar27 = pIVar24;
      if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pIVar27 = (Il2CppClass *)(__this->fields).bundle;
      }
      pSVar17 = System_String__Concat_3af7150
                          (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x70),"/",
                           (System_String_o *)pIVar27,(MethodInfo *)0x0);
      pIVar27 = (Il2CppClass *)0x0;
      pUVar15 = UnityEngine_AssetBundle__LoadFromFile(pSVar17,(MethodInfo *)0x0);
      if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044b0bd1;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar6,(Il2CppObject *)pIVar24,(Il2CppObject *)pUVar15,MethodInfo_Void_set_Item);
      pSVar6 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
      if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044b0bd6;
      pUVar16 = (UnityEngine_Object_o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar6,(Il2CppObject *)(__this->fields).bundle,MethodInfo_AssetBundle_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar14 = UnityEngine_Object__op_Inequality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar14 == '\0') {
        return 0;
      }
      pIVar27 = (Il2CppClass *)(__this->fields).bundle;
      if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ae9fa == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ConfirmVideoPlayerUrls_d__9);
        g_data_057ae9fa = '\x01';
      }
      pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_ConfirmVideoPlayerUrls_d__9);
      pIVar24 = (Il2CppClass *)0x0;
      System_Object___ctor(pIVar23,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar23[1].klass = 0;
      if (pIVar23 != (Il2CppObject *)0x0) {
        pIVar23[2].klass = pIVar27;
        il2cpp_runtime_helper_022b4080(pIVar23 + 2,pIVar27);
        (__this->fields).__2__current = pIVar23;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar23);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)pIVar23 >> 8),1);
      }
      goto label_044b0be0;
    }
    if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar17 = System_String__Concat_3af7150
                        (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x70),"/",
                         (__this->fields).bundle,(MethodInfo *)0x0);
    bVar14 = System_IO_File__Exists(pSVar17,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') goto label_044b0213;
    if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar17 = System_String__Concat_3af7150
                        (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x78),"/",
                         (__this->fields).bundle,(MethodInfo *)0x0);
    (__this->fields)._path_5__2 = pSVar17;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._path_5__2);
    bVar14 = System_IO_File__Exists((__this->fields)._path_5__2,(MethodInfo *)0x0);
    if ((char)bVar14 == '\0') {
      bVar14 = System_String__op_Equality
                         ((__this->fields).url,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                          (MethodInfo *)0x0);
      if ((char)bVar14 != '\0') {
        return 0;
      }
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar24 = TypeInfo_InGameMenu;
      pIVar27 = *(Il2CppClass **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (pIVar27 != (Il2CppClass *)0x0) {
        pIVar12 = (pIVar27->_1).image;
        bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
        if ((bVar1 <= (pIVar12->_2).naturalAligment) &&
           ((pIVar12->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
          (__this->fields)._menu_5__3 = (UI_InGameMenu_o *)pIVar27;
          pIVar12 = (pIVar27->_1).image;
          if (((pIVar12->_2).naturalAligment < bVar1) ||
             ((pIVar12->_2).typeHierarchy[(ulong)bVar1 - 1] != pIVar24)) {
            il2cpp_runtime_helper_022b2fd0(pIVar27);
            pIVar27 = pIVar24;
            goto label_044b0b45;
          }
          goto label_044b0b52;
        }
        goto label_044b0bef;
      }
label_044b0b45:
      (__this->fields)._menu_5__3 = (UI_InGameMenu_o *)0x0;
label_044b0b52:
      il2cpp_runtime_helper_022b4080(&(__this->fields)._menu_5__3);
      pUVar18 = (__this->fields)._menu_5__3;
      if (pUVar18 == (UI_InGameMenu_o *)0x0) goto label_044b0bfa;
      pUVar7 = (pUVar18->fields)._customAssetUrlPopup;
      if (pUVar7 != (UI_CustomAssetUrlPopup_o *)0x0) {
        method = (MethodInfo *)(__this->fields).url;
        UI_CustomAssetUrlPopup__Show(pUVar7,(System_String_o *)method,(MethodInfo *)0x0);
        pUVar18 = (__this->fields)._menu_5__3;
        if (pUVar18 != (UI_InGameMenu_o *)0x0) goto label_044b026f;
        goto label_044b0b9a;
      }
      goto label_044b0bff;
    }
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
    pIVar27 = (Il2CppClass *)(__this->fields).bundle;
    pIVar24 = (Il2CppClass *)0x0;
    pUVar15 = UnityEngine_AssetBundle__LoadFromFile((__this->fields)._path_5__2,(MethodInfo *)0x0);
    if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044b0be5;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar6,(Il2CppObject *)pIVar27,(Il2CppObject *)pUVar15,MethodInfo_Void_set_Item);
    pSVar6 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
    if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044b0bea;
    pUVar16 = (UnityEngine_Object_o *)
              System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar6,(Il2CppObject *)(__this->fields).bundle,MethodInfo_AssetBundle_get_Item);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar14 = UnityEngine_Object__op_Inequality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar14 == '\0') {
      return 0;
    }
    pIVar24 = (Il2CppClass *)(__this->fields).bundle;
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ae9fa == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ConfirmVideoPlayerUrls_d__9);
      g_data_057ae9fa = '\x01';
    }
    pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_ConfirmVideoPlayerUrls_d__9);
    pIVar27 = (Il2CppClass *)0x0;
    System_Object___ctor(pIVar23,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar23[1].klass = 0;
    if (pIVar23 != (Il2CppObject *)0x0) {
      pIVar23[2].klass = pIVar24;
      il2cpp_runtime_helper_022b4080(pIVar23 + 2,pIVar24);
      (__this->fields).__2__current = pIVar23;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar23);
      (__this->fields).__1__state = 2;
      return (bool_conflict)CONCAT71((int7)((ulong)pIVar23 >> 8),1);
    }
    goto label_044b0c04;
  case 1:
  case 2:
    (__this->fields).__1__state = -1;
    return 0;
  case 3:
    (__this->fields).__1__state = -1;
    pUVar18 = (__this->fields)._menu_5__3;
    if (pUVar18 == (UI_InGameMenu_o *)0x0) {
label_044b0b9a:
      il2cpp_runtime_helper_022b2c90();
label_044b0b9f:
      il2cpp_runtime_helper_022b2c90();
label_044b0ba4:
      il2cpp_runtime_helper_022b2c90();
label_044b0ba9:
      il2cpp_runtime_helper_022b2c90();
      pIVar24 = (Il2CppClass *)method;
label_044b0bae:
      method = (MethodInfo *)pIVar24;
      il2cpp_runtime_helper_022b2c90();
label_044b0bb3:
      il2cpp_runtime_helper_022b2c90();
      goto label_044b0bb8;
    }
label_044b026f:
    pUVar7 = (pUVar18->fields)._customAssetUrlPopup;
    if (pUVar7 == (UI_CustomAssetUrlPopup_o *)0x0) goto label_044b0b9f;
    if ((char)(pUVar7->fields).Done == '\0') {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      ppIVar28 = &(__this->fields).__2__current;
      il2cpp_runtime_helper_022b4080(ppIVar28,0);
      (__this->fields).__1__state = 3;
      return (bool_conflict)CONCAT71((int7)((ulong)ppIVar28 >> 8),1);
    }
    if (*(char *)((long)&(pUVar7->fields).Done + 1) == '\0') goto label_044b06a3;
    pSVar17 = (__this->fields).url;
    pUVar19 = (UnityEngine_Networking_UnityWebRequest_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityWebRequest);
    UnityEngine_Networking_UnityWebRequest___ctor(pUVar19,pSVar17,(MethodInfo *)0x0);
    (__this->fields)._dlreq_5__4 = pUVar19;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._dlreq_5__4,pUVar19);
    (__this->fields).__1__state = -3;
    method = (MethodInfo *)(__this->fields)._path_5__2;
    pUVar19 = (__this->fields)._dlreq_5__4;
    pIVar24 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_DownloadHandlerFile);
    UnityEngine_Networking_DownloadHandlerFile___ctor
              ((UnityEngine_Networking_DownloadHandlerFile_o *)pIVar24,(System_String_o *)method,
               (MethodInfo *)0x0);
    if (pUVar19 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) goto label_044b0bbd;
    UnityEngine_Networking_UnityWebRequest__set_downloadHandler
              (pUVar19,(UnityEngine_Networking_DownloadHandler_o *)pIVar24,(MethodInfo *)0x0);
    (__this->fields).__7__wrap4 = (UnityEngine_Networking_DownloadHandler_o *)pIVar24;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__7__wrap4);
    (__this->fields).__1__state = -4;
    pUVar19 = (__this->fields)._dlreq_5__4;
    if (pUVar19 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      pUVar20 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(pUVar19,(MethodInfo *)0x0);
      (__this->fields)._op_5__6 = pUVar20;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._op_5__6);
      (__this->fields)._maxBytes_5__7 = 1000000000;
      pUVar20 = (__this->fields)._op_5__6;
      if (pUVar20 != (UnityEngine_Networking_UnityWebRequestAsyncOperation_o *)0x0) goto label_044affa4;
      goto label_044b037d;
    }
label_044b0bc2:
    il2cpp_runtime_helper_022b2c90();
label_044b0bc7:
    il2cpp_runtime_helper_022b2c90();
    break;
  case 4:
    (__this->fields).__1__state = -4;
    pUVar20 = (__this->fields)._op_5__6;
    if (pUVar20 == (UnityEngine_Networking_UnityWebRequestAsyncOperation_o *)0x0) {
label_044b037d:
      il2cpp_runtime_helper_022b2c90();
      goto switchD_044aff80_caseD_5;
    }
label_044affa4:
    method = (MethodInfo *)0x0;
    bVar14 = UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)pUVar20,(MethodInfo *)0x0)
    ;
    if ((char)bVar14 == '\0') {
      pUVar20 = (__this->fields)._op_5__6;
      if (pUVar20 == (UnityEngine_Networking_UnityWebRequestAsyncOperation_o *)0x0) goto label_044b0ba4;
      pUVar19 = (pUVar20->fields)._webRequest_k__BackingField;
      if (pUVar19 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        uVar22 = UnityEngine_Networking_UnityWebRequest__get_downloadedBytes(pUVar19,(MethodInfo *)0x0);
        if (uVar22 <= (__this->fields)._maxBytes_5__7) {
          (__this->fields).__2__current = (Il2CppObject *)0x0;
          ppIVar28 = &(__this->fields).__2__current;
          il2cpp_runtime_helper_022b4080(ppIVar28,0);
          (__this->fields).__1__state = 4;
          return (bool_conflict)CONCAT71((int7)((ulong)ppIVar28 >> 8),1);
        }
        if (g_data_057aea04 == '\0') {
          il2cpp_runtime_helper_023445d0();
          g_data_057aea04 = '\x01';
        }
        (__this->fields).__1__state = -3;
        pUVar8 = (__this->fields).__7__wrap4;
        if (pUVar8 != (UnityEngine_Networking_DownloadHandler_o *)0x0) {
          pUVar9 = pUVar8->klass;
          uVar3._0_1_ = (pUVar9->_2).rank;
          uVar3._1_1_ = (pUVar9->_2).minimumAlignment;
          if ((ulong)uVar3 != 0) {
            pIVar10 = (pUVar9->_1).interfaceOffsets;
            lVar29 = 0;
            do {
              if (*(long *)((long)&pIVar10->interfaceType + lVar29) == TypeInfo_IDisposable) {
                ppIVar21 = &(&(pUVar9->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar29)].methodPtr
                ;
                goto label_044b09eb;
              }
              lVar29 = lVar29 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar29);
          }
          ppIVar21 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pUVar8,TypeInfo_IDisposable,0);
label_044b09eb:
          (**ppIVar21)(pUVar8,(MethodInfo *)ppIVar21[1]);
        }
        if (g_data_057aea03 == '\0') {
          il2cpp_runtime_helper_023445d0();
          g_data_057aea03 = '\x01';
        }
        (__this->fields).__1__state = -1;
        pUVar19 = (__this->fields)._dlreq_5__4;
        if (pUVar19 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
          return 0;
        }
        pUVar11 = pUVar19->klass;
        uVar5._0_1_ = (pUVar11->_2).rank;
        uVar5._1_1_ = (pUVar11->_2).minimumAlignment;
        if ((ulong)uVar5 != 0) {
          pIVar10 = (pUVar11->_1).interfaceOffsets;
          lVar29 = 0;
          do {
            if (*(long *)((long)&pIVar10->interfaceType + lVar29) == TypeInfo_IDisposable) {
              ppIVar21 = &(&(pUVar11->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar29)].methodPtr;
              goto label_044b0a7d;
            }
            lVar29 = lVar29 + 0x10;
          } while ((ulong)uVar5 << 4 != lVar29);
        }
        ppIVar21 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pUVar19,TypeInfo_IDisposable,0);
label_044b0a7d:
        (**ppIVar21)(pUVar19,(MethodInfo *)ppIVar21[1]);
        return 0;
      }
      goto label_044b0ba9;
    }
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
    method = (MethodInfo *)(__this->fields).bundle;
    pIVar24 = (Il2CppClass *)0x0;
    pUVar15 = UnityEngine_AssetBundle__LoadFromFile((__this->fields)._path_5__2,(MethodInfo *)0x0);
    if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044b0bae;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar6,(Il2CppObject *)method,(Il2CppObject *)pUVar15,MethodInfo_Void_set_Item);
    pSVar6 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
    if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044b0bb3;
    pUVar16 = (UnityEngine_Object_o *)
              System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar6,(Il2CppObject *)(__this->fields).bundle,MethodInfo_AssetBundle_get_Item);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar14 = UnityEngine_Object__op_Equality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      System_IO_File__Delete((__this->fields)._path_5__2,(MethodInfo *)0x0);
      goto label_044b0389;
    }
    pIVar27 = (Il2CppClass *)(__this->fields).bundle;
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ae9fa == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ConfirmVideoPlayerUrls_d__9);
      g_data_057ae9fa = '\x01';
    }
    pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_ConfirmVideoPlayerUrls_d__9);
    pIVar24 = (Il2CppClass *)0x0;
    System_Object___ctor(pIVar23,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar23[1].klass = 0;
    if (pIVar23 != (Il2CppObject *)0x0) {
      pIVar23[2].klass = pIVar27;
      il2cpp_runtime_helper_022b4080(pIVar23 + 2,pIVar27);
      (__this->fields).__2__current = pIVar23;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar23);
      (__this->fields).__1__state = 5;
      return (bool_conflict)CONCAT71((int7)((ulong)pIVar23 >> 8),1);
    }
    break;
  case 5:
switchD_044aff80_caseD_5:
    (__this->fields).__1__state = -4;
label_044b0389:
    (__this->fields)._op_5__6 = (UnityEngine_Networking_UnityWebRequestAsyncOperation_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._op_5__6,0);
    if (g_data_057aea04 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057aea04 = '\x01';
    }
    (__this->fields).__1__state = -3;
    pUVar8 = (__this->fields).__7__wrap4;
    if (pUVar8 != (UnityEngine_Networking_DownloadHandler_o *)0x0) {
      pUVar9 = pUVar8->klass;
      uVar2._0_1_ = (pUVar9->_2).rank;
      uVar2._1_1_ = (pUVar9->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar10 = (pUVar9->_1).interfaceOffsets;
        lVar29 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar29) == TypeInfo_IDisposable) {
            ppIVar21 = &(&(pUVar9->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar29)].methodPtr;
            goto label_044b05ce;
          }
          lVar29 = lVar29 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar29);
      }
      ppIVar21 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pUVar8,TypeInfo_IDisposable,0);
label_044b05ce:
      (**ppIVar21)(pUVar8,(MethodInfo *)ppIVar21[1]);
    }
    (__this->fields).__7__wrap4 = (UnityEngine_Networking_DownloadHandler_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__7__wrap4,0);
    if (g_data_057aea03 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057aea03 = '\x01';
    }
    (__this->fields).__1__state = -1;
    pUVar19 = (__this->fields)._dlreq_5__4;
    if (pUVar19 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      pUVar11 = pUVar19->klass;
      uVar4._0_1_ = (pUVar11->_2).rank;
      uVar4._1_1_ = (pUVar11->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar10 = (pUVar11->_1).interfaceOffsets;
        lVar29 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar29) == TypeInfo_IDisposable) {
            ppIVar21 = &(&(pUVar11->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar29)].methodPtr;
            goto label_044b067d;
          }
          lVar29 = lVar29 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar29);
      }
      ppIVar21 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pUVar19,TypeInfo_IDisposable,0);
label_044b067d:
      (**ppIVar21)(pUVar19,(MethodInfo *)ppIVar21[1]);
    }
    (__this->fields)._dlreq_5__4 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._dlreq_5__4,0);
label_044b06a3:
    (__this->fields)._menu_5__3 = (UI_InGameMenu_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._menu_5__3,0);
    (__this->fields)._path_5__2 = (System_String_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._path_5__2,0);
    return 0;
  default:
    goto switchD_044aff80_default;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar27 = pIVar24;
label_044b0bd1:
  pIVar24 = pIVar27;
  il2cpp_runtime_helper_022b2c90();
label_044b0bd6:
  il2cpp_runtime_helper_022b2c90();
label_044b0bdb:
  il2cpp_runtime_helper_022b2c90();
label_044b0be0:
  il2cpp_runtime_helper_022b2c90();
label_044b0be5:
  pIVar27 = pIVar24;
  il2cpp_runtime_helper_022b2c90();
label_044b0bea:
  pIVar24 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
label_044b0bef:
  il2cpp_runtime_helper_022b2fd0(pIVar27);
  pIVar27 = pIVar24;
label_044b0bfa:
  il2cpp_runtime_helper_022b2c90();
label_044b0bff:
  il2cpp_runtime_helper_022b2c90();
label_044b0c04:
  auVar32 = il2cpp_runtime_helper_022b2c90();
  uVar26 = auVar32._0_8_;
  if (auVar32._8_4_ == 1) {
    plVar25 = (long *)__cxa_begin_catch(uVar26);
    lVar29 = *plVar25;
    __cxa_end_catch();
    if (lVar29 == 0) {
switchD_044aff80_default:
      return 0;
    }
    ApplicationManagers_AssetBundleManager__LoadBundle_d__8__System_IDisposable_Dispose
              (__this,(MethodInfo *)pIVar27);
    uVar26 = il2cpp_runtime_helper_022fefe0(lVar29);
    if (lVar29 != 0) {
      ApplicationManagers_AssetBundleManager__LoadBundle_d__8__System_IDisposable_Dispose
                (__this,(MethodInfo *)pIVar27);
      lVar29 = il2cpp_runtime_helper_022fefe0(lVar29);
      bVar14 = il2cpp_runtime_helper_01f66400();
      if (g_data_057aea04 == '\0') {
        bVar14 = il2cpp_runtime_helper_023445d0();
        g_data_057aea04 = '\x01';
      }
      *(undefined4 *)(lVar29 + 0x10) = 0xfffffffd;
      plVar25 = *(long **)(lVar29 + 0x50);
      if (plVar25 == (long *)0x0) {
        return bVar14;
      }
      lVar29 = *plVar25;
      if ((ulong)*(ushort *)(lVar29 + 0x12e) != 0) {
        lVar13 = *(long *)(lVar29 + 0xb0);
        lVar30 = 0;
        do {
          if (*(long *)(lVar13 + lVar30) == TypeInfo_IDisposable) {
            auVar31._8_8_ = lVar13;
            auVar31._0_8_ = lVar29 + (long)*(int *)(lVar13 + 8 + lVar30) * 0x10 + 0x138;
            goto label_044b0f4f;
          }
          lVar30 = lVar30 + 0x10;
        } while ((ulong)*(ushort *)(lVar29 + 0x12e) << 4 != lVar30);
      }
      auVar31 = il2cpp_runtime_helper_02300d20(plVar25,TypeInfo_IDisposable,0);
label_044b0f4f:
      vtableDispatch = (code *)*auVar31._0_8_;
      bVar14 = (*vtableDispatch)(plVar25,auVar31._0_8_[1],auVar31._8_8_,vtableDispatch);
      return bVar14;
    }
  }
  _Unwind_Resume(uVar26);
}


// ApplicationManagers.AssetBundleManager.<LoadBundle>d__8$$<>m__Finally1
// il2cpp: void ApplicationManagers_AssetBundleManager__LoadBundle_d__8____m__Finally1 (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o* __this, const MethodInfo* method);
// 0x44b0f60

void ApplicationManagers_AssetBundleManager__LoadBundle_d__8____m__Finally1
               (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o *__this,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_Networking_UnityWebRequest_o *pUVar2;
  UnityEngine_Networking_UnityWebRequest_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *vtableDispatch;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (g_data_057aea03 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057aea03 = '\x01';
  }
  (__this->fields).__1__state = -1;
  pUVar2 = (__this->fields)._dlreq_5__4;
  if (pUVar2 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    return;
  }
  pUVar3 = pUVar2->klass;
  uVar1._0_1_ = (pUVar3->_2).rank;
  uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar4 = (pUVar3->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(long *)((long)&pIVar4->interfaceType + lVar5) == TypeInfo_IDisposable) {
        auVar6._8_8_ = pIVar4;
        auVar6._0_8_ = &(pUVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar5);
        goto label_044b0fef;
      }
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar5);
  }
  auVar6 = il2cpp_runtime_helper_02300d20(pUVar2,TypeInfo_IDisposable,0);
label_044b0fef:
  vtableDispatch = (code *)*auVar6._0_8_;
  (*vtableDispatch)(pUVar2,auVar6._0_8_[1],auVar6._8_8_,vtableDispatch);
  return;
}


// ApplicationManagers.AssetBundleManager.<LoadBundle>d__8$$<>m__Finally2
// il2cpp: void ApplicationManagers_AssetBundleManager__LoadBundle_d__8____m__Finally2 (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o* __this, const MethodInfo* method);
// 0x44b0ec0

void ApplicationManagers_AssetBundleManager__LoadBundle_d__8____m__Finally2
               (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o *__this,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_Networking_DownloadHandler_o *pUVar2;
  UnityEngine_Networking_DownloadHandler_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *vtableDispatch;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (g_data_057aea04 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057aea04 = '\x01';
  }
  (__this->fields).__1__state = -3;
  pUVar2 = (__this->fields).__7__wrap4;
  if (pUVar2 == (UnityEngine_Networking_DownloadHandler_o *)0x0) {
    return;
  }
  pUVar3 = pUVar2->klass;
  uVar1._0_1_ = (pUVar3->_2).rank;
  uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar4 = (pUVar3->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(long *)((long)&pIVar4->interfaceType + lVar5) == TypeInfo_IDisposable) {
        auVar6._8_8_ = pIVar4;
        auVar6._0_8_ = &(pUVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar5);
        goto label_044b0f4f;
      }
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar5);
  }
  auVar6 = il2cpp_runtime_helper_02300d20(pUVar2,TypeInfo_IDisposable,0);
label_044b0f4f:
  vtableDispatch = (code *)*auVar6._0_8_;
  (*vtableDispatch)(pUVar2,auVar6._0_8_[1],auVar6._8_8_,vtableDispatch);
  return;
}


// ApplicationManagers.AssetBundleManager.<LoadBundle>d__8$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AssetBundleManager__LoadBundle_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o* __this, const MethodInfo* method);
// 0x44b1000

Il2CppObject *
ApplicationManagers_AssetBundleManager__LoadBundle_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AssetBundleManager.<LoadBundle>d__8$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AssetBundleManager__LoadBundle_d__8__System_Collections_IEnumerator_Reset (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o* __this, const MethodInfo* method);
// 0x44b1010

void ApplicationManagers_AssetBundleManager__LoadBundle_d__8__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o *__this,MethodInfo *method)

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


// ApplicationManagers.AssetBundleManager.<LoadBundle>d__8$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AssetBundleManager__LoadBundle_d__8__System_Collections_IEnumerator_get_Current (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o* __this, const MethodInfo* method);
// 0x44b1050

Il2CppObject *
ApplicationManagers_AssetBundleManager__LoadBundle_d__8__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AssetBundleManager$$Init
// il2cpp: void ApplicationManagers_AssetBundleManager__Init (const MethodInfo* method);
// 0x44ac560

void ApplicationManagers_AssetBundleManager__Init(MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  
  if (g_data_057ae9f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AssetBundleManager_CreateSingleton_AssetBundleManager);
    g_data_057ae9f5 = '\x01';
  }
  if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar2 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_AssetBundleManager + 0xb8),MethodInfo_AssetBundleManager_CreateSingleton_AssetBundleManager);
  **(undefined8 **)(TypeInfo_AssetBundleManager + 0xb8) = pIVar2;
  method_00 = *(MethodInfo **)(TypeInfo_AssetBundleManager + 0xb8);
  il2cpp_runtime_helper_022b4080();
  ApplicationManagers_AssetBundleManager__ClearTemp(method_00);
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = System_IO_Directory__Exists
                    (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x70),(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    System_IO_Directory__CreateDirectory
              (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x70),(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = System_IO_Directory__Exists
                    (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x78),(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_IO_Directory__CreateDirectory
            (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x78),(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AssetBundleManager$$OnApplicationQuit
// il2cpp: void ApplicationManagers_AssetBundleManager__OnApplicationQuit (ApplicationManagers_AssetBundleManager_o* __this, const MethodInfo* method);
// 0x44acdc0

void ApplicationManagers_AssetBundleManager__OnApplicationQuit
               (ApplicationManagers_AssetBundleManager_o *__this,MethodInfo *method)

{
  int iVar1;
  MethodInfo *method_00;
  
  if (g_data_057ae9f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    g_data_057ae9f6 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AssetBundleManager[2].parameters + 4);
    method_00 = TypeInfo_AssetBundleManager;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AssetBundleManager[2].parameters + 4);
    method_00 = TypeInfo_AssetBundleManager;
  }
  TypeInfo_AssetBundleManager = method_00;
  if (iVar1 != 0) {
    ApplicationManagers_AssetBundleManager__ClearTemp(method_00);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  ApplicationManagers_AssetBundleManager__ClearTemp(method_00);
  return;
}


// ApplicationManagers.AssetBundleManager$$ClearTemp
// il2cpp: void ApplicationManagers_AssetBundleManager__ClearTemp (const MethodInfo* method);
// 0x44acc50

void ApplicationManagers_AssetBundleManager__ClearTemp(MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057ae9f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    g_data_057ae9f7 = '\x01';
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = System_IO_Directory__Exists
                    (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x78),(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    System_IO_Directory__Delete
              (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x78),1,(MethodInfo *)0x0);
  }
  return;
}


// ApplicationManagers.AssetBundleManager$$Clear
// il2cpp: void ApplicationManagers_AssetBundleManager__Clear (const MethodInfo* method);
// 0x44ace20

void ApplicationManagers_AssetBundleManager__Clear(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  bool_conflict bVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  long *plVar4;
  undefined1 auVar5 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar6;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSVar7;
  UnityEngine_Object_o *pUVar8;
  UnityEngine_Object_o *x;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  
  if (g_data_057ae9f8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_U);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AssetBundle_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    g_data_057ae9f8 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pSVar7 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)0x0;
  pUVar8 = (UnityEngine_Object_o *)0x0;
  if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 8);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear(pSVar1,MethodInfo_Void_Clear);
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
    if ((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (__this_03 = System_Collections_Generic_Dictionary_object__object___get_Values(pSVar1,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_U),
       __this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_40,
                 __this_03,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
      pSVar6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_40._0_8_;
      pSVar7 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)
               local_40._8_8_;
      while( true ) {
        do {
          x = local_30;
          __this.fields._8_8_ = pSVar7;
          __this.fields._dictionary = pSVar6;
          __this.fields._currentValue = (Il2CppObject *)x;
          bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                            (__this,(MethodInfo_3251CB0 *)&stack0xffffffffffffffa8);
          if ((char)bVar3 == '\0') {
            __this_00.fields._8_8_ = pSVar7;
            __this_00.fields._dictionary = pSVar6;
            __this_00.fields._currentValue = (Il2CppObject *)x;
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                      (__this_00,(MethodInfo_3251CA0 *)&stack0xffffffffffffffa8);
            goto label_044acfcf;
          }
          pUVar8 = x;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          local_30 = pUVar8;
        } while ((char)bVar3 == '\0');
        if (x == (UnityEngine_Object_o *)0x0) break;
        UnityEngine_AssetBundle__Unload((UnityEngine_AssetBundle_o *)x,1,(MethodInfo *)0x0);
        local_30 = pUVar8;
      }
      il2cpp_runtime_helper_022b2c90();
    }
  }
  do {
    auVar5 = il2cpp_runtime_helper_022b2c90();
    if (auVar5._8_4_ != 1) {
label_044ad07d:
      __this_02.fields._8_8_ = pSVar7;
      __this_02.fields._dictionary = pSVar6;
      __this_02.fields._currentValue = (Il2CppObject *)pUVar8;
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                (__this_02,(MethodInfo_3251CA0 *)&stack0xffffffffffffffa8);
      _Unwind_Resume(auVar5._0_8_);
    }
    plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_01.fields._8_8_ = pSVar7;
    __this_01.fields._dictionary = pSVar6;
    __this_01.fields._currentValue = (Il2CppObject *)pUVar8;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
              (__this_01,(MethodInfo_3251CA0 *)&stack0xffffffffffffffa8);
    x = pUVar8;
    if (lVar2 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar2);
      goto label_044ad07d;
    }
label_044acfcf:
    pUVar8 = x;
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pUVar8 = x;
    }
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Clear(pSVar1,MethodInfo_Void_Clear);
      return;
    }
  } while( true );
}


// ApplicationManagers.AssetBundleManager$$LoadBundle
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AssetBundleManager__LoadBundle (System_String_o* bundle, System_String_o* url, bool editor, const MethodInfo* method);
// 0x44ad0c0

System_Collections_IEnumerator_o *
ApplicationManagers_AssetBundleManager__LoadBundle
          (System_String_o *bundle,System_String_o *url,bool_conflict editor,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_00;
  
  if (g_data_057ae9f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadBundle_d__8);
    g_data_057ae9f9 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadBundle_d__8);
  uVar1 = 0;
  __this_00 = __this;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  if (__this != (Il2CppObject *)0x0) {
    __this[2].klass = (Il2CppClass *)bundle;
    il2cpp_runtime_helper_022b4080(__this + 2,bundle);
    __this[3].klass = (Il2CppClass *)url;
    il2cpp_runtime_helper_022b4080(__this + 3,url);
    *(char *)&__this[2].monitor = (char)editor;
    return (System_Collections_IEnumerator_o *)__this;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = uVar1;
  return extraout_RAX;
}


// ApplicationManagers.AssetBundleManager$$ConfirmVideoPlayerUrls
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls (System_String_o* bundle, const MethodInfo* method);
// 0x44ad170

System_Collections_IEnumerator_o *
ApplicationManagers_AssetBundleManager__ConfirmVideoPlayerUrls(System_String_o *bundle,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_00;
  
  if (g_data_057ae9fa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ConfirmVideoPlayerUrls_d__9);
    g_data_057ae9fa = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_ConfirmVideoPlayerUrls_d__9);
  uVar1 = 0;
  __this_00 = __this;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  if (__this != (Il2CppObject *)0x0) {
    __this[2].klass = (Il2CppClass *)bundle;
    il2cpp_runtime_helper_022b4080(__this + 2,bundle);
    return (System_Collections_IEnumerator_o *)__this;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = uVar1;
  return extraout_RAX;
}


// ApplicationManagers.AssetBundleManager$$GetAssetListFromBundle
// il2cpp: System_Collections_Generic_List_string__o* ApplicationManagers_AssetBundleManager__GetAssetListFromBundle (System_String_o* bundle, const MethodInfo* method);
// 0x44ad200

System_Collections_Generic_List_string__o *
ApplicationManagers_AssetBundleManager__GetAssetListFromBundle(System_String_o *bundle,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  bool_conflict bVar3;
  uint uVar4;
  System_Collections_Generic_List_string__o *pSVar5;
  UnityEngine_AssetBundle_o *__this_04;
  System_String_array *pSVar6;
  System_String_array *pSVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_05;
  System_Collections_Generic_List_string__o *collection;
  long *plVar10;
  System_String_array *in_RCX;
  System_String_o *unaff_RBX;
  long lVar11;
  MethodInfo *pMVar12;
  uint uVar13;
  undefined1 auVar14 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar15;
  Il2CppMethodPointer pIVar16;
  
  if (g_data_057ae9fb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AssetBundle_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"Custom/");
    il2cpp_runtime_helper_023445d0(&".prefab");
    g_data_057ae9fb = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar5,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
  if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_044ad60f:
    il2cpp_runtime_helper_022b2c90();
    pSVar9 = unaff_RBX;
  }
  else {
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar2,(Il2CppObject *)bundle,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      return pSVar5;
    }
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044ad60f;
    unaff_RBX = (System_String_o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar2,(Il2CppObject *)bundle,MethodInfo_AssetBundle_get_Item);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return pSVar5;
    }
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
    if (((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
        (__this_04 = (UnityEngine_AssetBundle_o *)
                     System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar2,(Il2CppObject *)bundle,MethodInfo_AssetBundle_get_Item),
        __this_04 == (UnityEngine_AssetBundle_o *)0x0)) ||
       (pSVar6 = UnityEngine_AssetBundle__GetAllAssetNames(__this_04,(MethodInfo *)0x0),
       pSVar6 == (System_String_array *)0x0)) goto label_044ad60f;
    uVar4 = (uint)pSVar6->max_length;
    if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) {
      if (0 < (int)uVar4) {
        lVar11 = 0;
        do {
          if (uVar4 <= (uint)lVar11) goto label_044ad5eb;
          if ((pSVar6->m_Items[lVar11] == (System_String_o *)0x0) ||
             (pSVar9 = System_String__Trim(pSVar6->m_Items[lVar11],(MethodInfo *)0x0),
             pSVar9 == (System_String_o *)0x0)) goto label_044ad60f;
          bVar3 = System_String__EndsWith(pSVar9,".prefab",(MethodInfo *)0x0);
          unaff_RBX = pSVar9;
          if ((char)bVar3 != '\0') {
            bVar3 = System_String__Contains_3afbe20(pSVar9,0x2f,(MethodInfo *)0x0);
            if ((char)bVar3 == '\0') goto label_044ad614;
            pSVar6 = System_String__Split(pSVar9,0x2f,0,(MethodInfo *)0x0);
            if (pSVar6 == (System_String_array *)0x0) goto label_044ad60f;
            in_RCX = (System_String_array *)pSVar6->max_length;
            if ((int)in_RCX != 0) goto label_044ad5f0;
            goto label_044ad5eb;
          }
          uVar4 = (uint)pSVar6->max_length;
          lVar11 = lVar11 + 1;
        } while ((int)lVar11 < (int)uVar4);
      }
      return (System_Collections_Generic_List_string__o *)0x0;
    }
    if ((int)uVar4 < 1) {
      return pSVar5;
    }
    uVar13 = 0;
    if (uVar4 != 0) {
      do {
        if ((pSVar6->m_Items[(int)uVar13] == (System_String_o *)0x0) ||
           (pSVar9 = System_String__Trim(pSVar6->m_Items[(int)uVar13],(MethodInfo *)0x0),
           pSVar9 == (System_String_o *)0x0)) goto label_044ad60f;
        bVar3 = System_String__EndsWith(pSVar9,".prefab",(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
label_044ad40a:
          uVar4 = (uint)pSVar6->max_length;
          if ((int)uVar4 <= (int)(uVar13 + 1)) {
            return pSVar5;
          }
        }
        else {
          bVar3 = System_String__Contains_3afbe20(pSVar9,0x2f,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            pSVar7 = System_String__Split(pSVar9,0x2f,0,(MethodInfo *)0x0);
            unaff_RBX = pSVar9;
            if (pSVar7 == (System_String_array *)0x0) goto label_044ad60f;
            in_RCX = (System_String_array *)pSVar7->max_length;
            if ((int)in_RCX == 0) break;
            pSVar9 = *(System_String_o **)
                      ((long)pSVar7->m_Items + (((long)in_RCX << 0x20) + -0x100000000 >> 0x1d));
            unaff_RBX = pSVar9;
            if (pSVar9 == (System_String_o *)0x0) goto label_044ad60f;
          }
          pSVar8 = System_String__Substring_3af8da0
                             (pSVar9,0,(pSVar9->fields)._stringLength + -7,(MethodInfo *)0x0);
          pSVar8 = System_String__Concat_3af7470("Custom/",bundle,"/",pSVar8,(MethodInfo *)0x0);
          lVar11 = MethodInfo_Void_Add;
          piVar1 = &(pSVar5->fields)._version;
          *piVar1 = *piVar1 + 1;
          in_RCX = (pSVar5->fields)._items;
          unaff_RBX = pSVar9;
          if (in_RCX == (System_String_array *)0x0) goto label_044ad60f;
          uVar4 = (pSVar5->fields)._size;
          if ((uint)in_RCX->max_length <= uVar4) {
            in_RCX = *(System_String_array **)(*(long *)(lVar11 + 0x20) + 0xc0);
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pSVar8,
                       (MethodInfo_362C220 *)in_RCX->m_Items[10]);
            goto label_044ad40a;
          }
          (pSVar5->fields)._size = uVar4 + 1;
          in_RCX->m_Items[(int)uVar4] = pSVar8;
          il2cpp_runtime_helper_022b4080(in_RCX->m_Items + (int)uVar4);
          uVar4 = (uint)pSVar6->max_length;
          if ((int)uVar4 <= (int)(uVar13 + 1)) {
            return pSVar5;
          }
        }
        uVar13 = uVar13 + 1;
        unaff_RBX = pSVar9;
      } while (uVar13 < uVar4);
    }
label_044ad5eb:
    pSVar6 = (System_String_array *)il2cpp_runtime_helper_022b2ca0();
label_044ad5f0:
    unaff_RBX = *(System_String_o **)((long)pSVar6->m_Items + (((long)in_RCX << 0x20) + -0x100000000 >> 0x1d))
    ;
    pSVar9 = unaff_RBX;
    if (unaff_RBX == (System_String_o *)0x0) goto label_044ad60f;
  }
label_044ad614:
  pSVar9 = System_String__Substring_3af8da0(pSVar9,0,(pSVar9->fields)._stringLength + -7,(MethodInfo *)0x0);
  System_String__Concat_3af7470("Custom/",bundle,"/",pSVar9,(MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae9fc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae9fc = '\x01';
  }
  pSVar15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar16 = (Il2CppMethodPointer)0x0;
  pSVar9 = (System_String_o *)0x0;
  pSVar5 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  pMVar12 = MethodInfo_List_1_System_String;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar5,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
  if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
  if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (pMVar12 = MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni,
     __this_05 = System_Collections_Generic_Dictionary_object__object___get_Keys
                           (pSVar2,(MethodInfo_3104A20 *)MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni),
     __this_05 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
               &stack0xffffffffffffff80,__this_05,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) {
      __this_00.fields._8_8_ = pIVar16;
      __this_00.fields._dictionary = pSVar15;
      __this_00.fields._currentKey = (Il2CppObject *)pSVar9;
      pMVar12 = MethodInfo_Boolean_MoveNext;
      bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                        (__this_00,(MethodInfo_3251B20 *)&stack0xffffffffffffff80);
      if ((char)bVar3 != '\0') goto label_044ad7fe;
    }
    else {
      while (__this.fields._8_8_ = pIVar16, __this.fields._dictionary = pSVar15,
            __this.fields._currentKey = (Il2CppObject *)pSVar9, pMVar12 = MethodInfo_Boolean_MoveNext,
            bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                              (__this,(MethodInfo_3251B20 *)&stack0xffffffffffffff80), (char)bVar3 != '\0') {
        pSVar8 = pSVar9;
        if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        collection = ApplicationManagers_AssetBundleManager__GetAssetListFromBundle(pSVar9,pMVar12);
        System_Collections_Generic_List_object___AddRange
                  ((System_Collections_Generic_List_object__o *)pSVar5,
                   (System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_Void_AddRange);
        pSVar9 = pSVar8;
      }
    }
    __this_01.fields._8_8_ = pIVar16;
    __this_01.fields._dictionary = pSVar15;
    __this_01.fields._currentKey = (Il2CppObject *)pSVar9;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_01,(MethodInfo_3251B10 *)&stack0xffffffffffffff80);
    return pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
label_044ad7fe:
  pSVar8 = pSVar9;
  if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ApplicationManagers_AssetBundleManager__GetAssetListFromBundle(pSVar9,pMVar12);
  auVar14 = il2cpp_runtime_helper_022b2c90();
  if (auVar14._8_4_ == 1) {
    plVar10 = (long *)__cxa_begin_catch(auVar14._0_8_);
    lVar11 = *plVar10;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar16;
    __this_02.fields._dictionary = pSVar15;
    __this_02.fields._currentKey = (Il2CppObject *)pSVar8;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251B10 *)&stack0xffffffffffffff80);
    if (lVar11 == 0) {
      return pSVar5;
    }
    il2cpp_runtime_helper_022fefe0(lVar11);
  }
  __this_03.fields._8_8_ = pIVar16;
  __this_03.fields._dictionary = pSVar15;
  __this_03.fields._currentKey = (Il2CppObject *)pSVar8;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_03,(MethodInfo_3251B10 *)&stack0xffffffffffffff80);
  _Unwind_Resume(auVar14._0_8_);
}


// ApplicationManagers.AssetBundleManager$$GetAssetList
// il2cpp: System_Collections_Generic_List_string__o* ApplicationManagers_AssetBundleManager__GetAssetList (const MethodInfo* method);
// 0x44ad650

System_Collections_Generic_List_string__o *
ApplicationManagers_AssetBundleManager__GetAssetList(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  long lVar1;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  bool_conflict bVar2;
  System_Collections_Generic_List_string__o *__this_05;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_06;
  System_Collections_Generic_List_string__o *collection;
  long *plVar3;
  MethodInfo *pMVar4;
  undefined1 auVar5 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar6;
  Il2CppMethodPointer pIVar7;
  System_String_o *bundle;
  System_String_o *pSVar8;
  
  if (g_data_057ae9fc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae9fc = '\x01';
  }
  pSVar6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar7 = (Il2CppMethodPointer)0x0;
  bundle = (System_String_o *)0x0;
  __this_05 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  pMVar4 = MethodInfo_List_1_System_String;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_05,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
  if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
  if ((__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (pMVar4 = MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni,
     __this_06 = System_Collections_Generic_Dictionary_object__object___get_Keys
                           (__this,(MethodInfo_3104A20 *)MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni),
     __this_06 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
               &stack0xffffffffffffffb8,__this_06,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    if (__this_05 == (System_Collections_Generic_List_string__o *)0x0) {
      __this_01.fields._8_8_ = pIVar7;
      __this_01.fields._dictionary = pSVar6;
      __this_01.fields._currentKey = (Il2CppObject *)bundle;
      pMVar4 = MethodInfo_Boolean_MoveNext;
      bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                        (__this_01,(MethodInfo_3251B20 *)&stack0xffffffffffffffb8);
      if ((char)bVar2 != '\0') goto label_044ad7fe;
    }
    else {
      while (__this_00.fields._8_8_ = pIVar7, __this_00.fields._dictionary = pSVar6,
            __this_00.fields._currentKey = (Il2CppObject *)bundle, pMVar4 = MethodInfo_Boolean_MoveNext,
            bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                              (__this_00,(MethodInfo_3251B20 *)&stack0xffffffffffffffb8), (char)bVar2 != '\0')
      {
        pSVar8 = bundle;
        if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        collection = ApplicationManagers_AssetBundleManager__GetAssetListFromBundle(bundle,pMVar4);
        System_Collections_Generic_List_object___AddRange
                  ((System_Collections_Generic_List_object__o *)__this_05,
                   (System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_Void_AddRange);
        bundle = pSVar8;
      }
    }
    __this_02.fields._8_8_ = pIVar7;
    __this_02.fields._dictionary = pSVar6;
    __this_02.fields._currentKey = (Il2CppObject *)bundle;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251B10 *)&stack0xffffffffffffffb8);
    return __this_05;
  }
  il2cpp_runtime_helper_022b2c90();
label_044ad7fe:
  pSVar8 = bundle;
  if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ApplicationManagers_AssetBundleManager__GetAssetListFromBundle(bundle,pMVar4);
  auVar5 = il2cpp_runtime_helper_022b2c90();
  if (auVar5._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar7;
    __this_03.fields._dictionary = pSVar6;
    __this_03.fields._currentKey = (Il2CppObject *)pSVar8;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_03,(MethodInfo_3251B10 *)&stack0xffffffffffffffb8);
    if (lVar1 == 0) {
      return __this_05;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar7;
  __this_04.fields._dictionary = pSVar6;
  __this_04.fields._currentKey = (Il2CppObject *)pSVar8;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_04,(MethodInfo_3251B10 *)&stack0xffffffffffffffb8);
  _Unwind_Resume(auVar5._0_8_);
}


// ApplicationManagers.AssetBundleManager$$LoadedBundle
// il2cpp: bool ApplicationManagers_AssetBundleManager__LoadedBundle (System_String_o* bundle, const MethodInfo* method);
// 0x44ad8d0

bool_conflict ApplicationManagers_AssetBundleManager__LoadedBundle(System_String_o *bundle,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  void *pvVar6;
  Il2CppClass *pIVar7;
  UnityEngine_AnimationClip_c *pUVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  char cVar10;
  bool_conflict bVar11;
  uint uVar12;
  UnityEngine_AssetBundle_o *__this;
  System_String_o *pSVar13;
  undefined8 uVar14;
  System_Exception_o *pSVar15;
  System_Type_o *pSVar16;
  UnityEngine_Component_array *pUVar17;
  UnityEngine_AnimationState_o *__this_00;
  UnityEngine_AnimationClip_o *__this_01;
  UnityEngine_AnimationEvent_array *pUVar18;
  long *plVar19;
  undefined8 *puVar20;
  UnityEngine_Object_o *pUVar21;
  UnityEngine_RuntimeAnimatorController_o *__this_02;
  UnityEngine_AnimationClip_array *str1;
  System_RuntimeTypeHandle_o handle;
  VirtualInvokeData *pVVar22;
  System_String_o *str0;
  System_String_o *str2;
  uint uVar23;
  System_Collections_Generic_Dictionary_object__object__o *pSVar24;
  long lVar25;
  long lVar26;
  uint uVar27;
  UnityEngine_AnimationClip_array *__this_03;
  long lStack_88;
  
  if (g_data_057ae9fd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AssetBundle_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae9fd = '\x01';
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) goto label_044ad952;
label_044ad8f3:
    pSVar24 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
  }
  else {
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) != 0) goto label_044ad8f3;
label_044ad952:
    il2cpp_runtime_helper_02337ed0();
    pSVar24 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
  }
  if (pSVar24 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    method = (MethodInfo *)bundle;
    bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       (pSVar24,(Il2CppObject *)bundle,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar11 == '\0') {
      return 0;
    }
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar24 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
    if (pSVar24 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar21 = (UnityEngine_Object_o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar24,(Il2CppObject *)bundle,MethodInfo_AssetBundle_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar11 = UnityEngine_Object__op_Inequality(pUVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      return bVar11;
    }
  }
  str1 = (UnityEngine_AnimationClip_array *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae9fe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AssetBundle_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae9fe = '\x01';
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) goto label_044ada98;
label_044ada2c:
    pSVar24 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
    if (pSVar24 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044adba7;
label_044adab5:
    bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       (pSVar24,&str1->obj,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar11 != '\0') {
      if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar24 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
      if (pSVar24 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pUVar21 = (UnityEngine_Object_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar24,&str1->obj,MethodInfo_AssetBundle_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar11 = UnityEngine_Object__op_Equality(pUVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar11 != '\0') goto label_044adbac;
        if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar24 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
        if ((pSVar24 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
           (__this = (UnityEngine_AssetBundle_o *)
                     System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar24,&str1->obj,MethodInfo_AssetBundle_get_Item), __this != (UnityEngine_AssetBundle_o *)0x0))
        {
          pSVar15 = (System_Exception_o *)
                    UnityEngine_AssetBundle__LoadAsset(__this,(System_String_o *)method,(MethodInfo *)0x0);
          if ((pSVar15 == (System_Exception_o *)0x0) ||
             (method = (MethodInfo *)TypeInfo_GameObject, pSVar15->klass == TypeInfo_GameObject)) {
            ApplicationManagers_AssetBundleManager__ValidateCustomPrefab
                      ((UnityEngine_GameObject_o *)pSVar15,method);
            return (bool_conflict)pSVar15;
          }
          goto label_044adc03;
        }
      }
      goto label_044adba7;
    }
  }
  else {
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) != 0) goto label_044ada2c;
label_044ada98:
    il2cpp_runtime_helper_02337ed0();
    pSVar24 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
    if (pSVar24 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044adab5;
label_044adba7:
    il2cpp_runtime_helper_022b2c90();
  }
label_044adbac:
  pSVar13 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Custom bundle not loaded: ");
  pSVar13 = System_String__Concat_3ae5ba0(pSVar13,(System_String_o *)str1,(MethodInfo *)0x0);
  uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar15 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar14);
  System_Exception___ctor_3cf6120(pSVar15,pSVar13,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_Object_LoadAsset);
  il2cpp_runtime_helper_022b2b10(pSVar15);
label_044adc03:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae9ff == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnimationEvent);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnimationState);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Animation);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Animator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&TypeRef_Component);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae9ff = '\x01';
  }
  handle.fields.value = TypeRef_Component.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar16 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  __this_03 = str1;
  if (pSVar15 == (System_Exception_o *)0x0) goto label_044ae229;
  pUVar17 = UnityEngine_GameObject__GetComponentsInChildren_4df78f0
                      ((UnityEngine_GameObject_o *)pSVar15,pSVar16,1,(MethodInfo *)0x0);
  if (pUVar17 == (UnityEngine_Component_array *)0x0) goto label_044ae229;
  iVar5 = (int)pUVar17->max_length;
  if (iVar5 < 1) {
    return iVar5;
  }
  uVar27 = 0;
  if (iVar5 == 0) {
label_044ae21e:
    do {
      il2cpp_runtime_helper_022b2ca0();
      __this_03 = str1;
label_044ae223:
      if (0 < (((UnityEngine_AnimationClip_o *)handle.fields.value)->fields)._isAnimatorMotion_k__BackingField
         ) {
label_044ae229:
        il2cpp_runtime_helper_022b2c90();
      }
label_044ae22e:
      il2cpp_runtime_helper_01f681a0(__this_03);
      pSVar16 = System_Object__GetType(&__this_03->obj,(MethodInfo *)0x0);
      il2cpp_runtime_helper_01f681a0(pSVar16);
      pSVar13 = (System_String_o *)
                (*(pSVar16->klass->vtable)._8_unknown.methodPtr)
                          (pSVar16,(pSVar16->klass->vtable)._8_unknown.method);
      str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Disallowed component (");
      str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&")");
      pSVar13 = System_String__Concat_3af7150(str0,pSVar13,str2,(MethodInfo *)0x0);
      uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
      pSVar15 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar14);
      System_Exception___ctor_3cf6120(pSVar15,pSVar13,(MethodInfo *)0x0);
      uVar14 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ValidateCustomPrefab);
      il2cpp_runtime_helper_022b2b10(pSVar15,uVar14);
      uVar14 = il2cpp_runtime_helper_022fefe0();
label_044ae181:
      uVar14 = il2cpp_runtime_helper_01f66400(uVar14);
      handle.fields.value = (System_RuntimeTypeHandle_Fields)il2cpp_runtime_helper_023051f0();
      if (handle.fields.value != 0) {
        pUVar8 = ((UnityEngine_AnimationClip_o *)handle.fields.value)->klass;
        uVar4._0_1_ = (pUVar8->_2).rank;
        uVar4._1_1_ = (pUVar8->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar9 = (pUVar8->_1).interfaceOffsets;
          lVar26 = 0;
          do {
            if (*(long *)((long)&pIVar9->interfaceType + lVar26) == TypeInfo_IDisposable) {
              pVVar22 = &(pUVar8->vtable)._0_Equals + *(int *)((long)&pIVar9->offset + lVar26);
              goto label_044ae1fd;
            }
            lVar26 = lVar26 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar26);
        }
        pVVar22 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(handle.fields.value,TypeInfo_IDisposable,0);
label_044ae1fd:
        (*pVVar22->methodPtr)(handle.fields.value);
      }
      if (lStack_88 == 0) {
        _Unwind_Resume(uVar14);
      }
      il2cpp_runtime_helper_022fefe0(lStack_88);
      str1 = __this_03;
    } while( true );
  }
label_044add3b:
  __this_03 = (UnityEngine_AnimationClip_array *)pUVar17->m_Items[(int)uVar27];
  if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  handle.fields.value = *(System_RuntimeTypeHandle_Fields *)(*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x18);
  if (handle.fields.value == 0) goto label_044ae229;
  if (__this_03 == (UnityEngine_AnimationClip_array *)0x0) goto label_044ae223;
  lVar26 = 0;
  do {
    uVar12 = (((UnityEngine_AnimationClip_o *)handle.fields.value)->fields)._isAnimatorMotion_k__BackingField;
    if ((int)uVar12 <= (int)(uint)lVar26) goto label_044ae22e;
    str1 = __this_03;
    if (uVar12 <= (uint)lVar26) goto label_044ae21e;
    pUVar8 = (&((UnityEngine_AnimationClip_o *)((long)handle.fields.value + 0x20))->klass)[lVar26];
    pSVar16 = System_Object__GetType((Il2CppObject *)__this_03,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_AnimationClip_c *)0x0) goto label_044ae229;
    pvVar6 = (pUVar8->_1).image;
    cVar10 = (**(code **)((long)pvVar6 + 0x298))(pUVar8,pSVar16,*(undefined8 *)((long)pvVar6 + 0x2a0));
    lVar26 = lVar26 + 1;
  } while (cVar10 == '\0');
  pIVar7 = (__this_03->obj).klass;
  if (pIVar7 == TypeInfo_Animation) {
    handle.fields.value =
         (System_RuntimeTypeHandle_Fields)
         UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)__this_03,(MethodInfo *)0x0);
    if (handle.fields.value == 0) {
      uVar14 = il2cpp_runtime_helper_022b2c90();
      goto label_044ae181;
    }
    do {
      pUVar8 = ((UnityEngine_AnimationClip_o *)handle.fields.value)->klass;
      uVar2._0_1_ = (pUVar8->_2).rank;
      uVar2._1_1_ = (pUVar8->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar9 = (pUVar8->_1).interfaceOffsets;
        lVar26 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar26) == TypeInfo_IEnumerator) {
            pVVar22 = &(pUVar8->vtable)._0_Equals + *(int *)((long)&pIVar9->offset + lVar26);
            goto label_044ade63;
          }
          lVar26 = lVar26 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar26);
      }
      pVVar22 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(handle.fields.value,TypeInfo_IEnumerator,0);
label_044ade63:
      cVar10 = (*pVVar22->methodPtr)(handle.fields.value,pVVar22->method);
      if (cVar10 == '\0') goto label_044adf50;
      pUVar8 = ((UnityEngine_AnimationClip_o *)handle.fields.value)->klass;
      uVar3._0_1_ = (pUVar8->_2).rank;
      uVar3._1_1_ = (pUVar8->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar9 = (pUVar8->_1).interfaceOffsets;
        lVar26 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar26) == TypeInfo_IEnumerator) {
            pVVar22 = &(pUVar8->vtable)._0_Equals + (*(int *)((long)&pIVar9->offset + lVar26) + 1);
            goto label_044adee8;
          }
          lVar26 = lVar26 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar26);
      }
      pVVar22 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(handle.fields.value,TypeInfo_IEnumerator,1);
label_044adee8:
      __this_00 = (UnityEngine_AnimationState_o *)(*pVVar22->methodPtr)(handle.fields.value);
      if (__this_00 == (UnityEngine_AnimationState_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_044ae223;
      }
      if (__this_00->klass != TypeInfo_AnimationState) {
        il2cpp_runtime_helper_022b2fd0(__this_00);
        goto label_044ae223;
      }
      __this_01 = UnityEngine_AnimationState__get_clip(__this_00,(MethodInfo *)0x0);
      pUVar18 = (UnityEngine_AnimationEvent_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_AnimationEvent);
      if (__this_01 == (UnityEngine_AnimationClip_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_044ae223;
      }
      UnityEngine_AnimationClip__set_events(__this_01,pUVar18,(MethodInfo *)0x0);
    } while( true );
  }
  bVar1 = (TypeInfo_Animator->_2).naturalAligment;
  if ((bVar1 <= (pIVar7->_2).naturalAligment) &&
     ((pIVar7->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Animator)) {
    pUVar21 = (UnityEngine_Object_o *)
              UnityEngine_Animator__get_runtimeAnimatorController
                        ((UnityEngine_Animator_o *)__this_03,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar11 = UnityEngine_Object__op_Inequality(pUVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      __this_02 = UnityEngine_Animator__get_runtimeAnimatorController
                            ((UnityEngine_Animator_o *)__this_03,(MethodInfo *)0x0);
      if (__this_02 == (UnityEngine_RuntimeAnimatorController_o *)0x0) goto label_044ae229;
      str1 = UnityEngine_RuntimeAnimatorController__get_animationClips(__this_02,(MethodInfo *)0x0);
      if (str1 == (UnityEngine_AnimationClip_array *)0x0) goto label_044ae229;
      uVar12 = (uint)str1->max_length;
      if (0 < (int)uVar12) {
        uVar23 = 0;
        do {
          if (uVar12 <= uVar23) goto label_044ae21e;
          handle.fields.value = (System_RuntimeTypeHandle_Fields)str1->m_Items[(int)uVar23];
          pUVar18 = (UnityEngine_AnimationEvent_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_AnimationEvent);
          __this_03 = str1;
          if (handle.fields.value == 0) goto label_044ae229;
          UnityEngine_AnimationClip__set_events
                    ((UnityEngine_AnimationClip_o *)handle.fields.value,pUVar18,(MethodInfo *)0x0);
          uVar23 = uVar23 + 1;
          uVar12 = (uint)str1->max_length;
        } while ((int)uVar23 < (int)uVar12);
      }
    }
  }
  goto label_044add20;
label_044adf50:
  lStack_88 = 0;
  plVar19 = (long *)il2cpp_runtime_helper_023051f0();
  if (plVar19 != (long *)0x0) {
    lVar26 = *plVar19;
    if ((ulong)*(ushort *)(lVar26 + 0x12e) != 0) {
      lVar25 = 0;
      do {
        if (*(long *)(*(long *)(lVar26 + 0xb0) + lVar25) == TypeInfo_IDisposable) {
          puVar20 = (undefined8 *)
                    (lVar26 + (long)*(int *)(*(long *)(lVar26 + 0xb0) + 8 + lVar25) * 0x10 + 0x138);
          goto label_044adfcd;
        }
        lVar25 = lVar25 + 0x10;
      } while ((ulong)*(ushort *)(lVar26 + 0x12e) << 4 != lVar25);
    }
    puVar20 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar19,TypeInfo_IDisposable,0);
label_044adfcd:
    (*(code *)*puVar20)(plVar19);
  }
label_044add20:
  uVar27 = uVar27 + 1;
  uVar12 = (uint)pUVar17->max_length;
  if ((int)uVar12 <= (int)uVar27) {
    return uVar12;
  }
  if (uVar12 <= uVar27) goto label_044ae21e;
  goto label_044add3b;
}


// ApplicationManagers.AssetBundleManager$$LoadAsset
// il2cpp: UnityEngine_Object_o* ApplicationManagers_AssetBundleManager__LoadAsset (System_String_o* bundle, System_String_o* name, const MethodInfo* method);
// 0x44ada00

UnityEngine_Object_o *
ApplicationManagers_AssetBundleManager__LoadAsset
          (System_String_o *bundle,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  void *pvVar5;
  Il2CppClass *pIVar6;
  UnityEngine_AnimationClip_c *pUVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  char cVar9;
  bool_conflict bVar10;
  uint uVar11;
  UnityEngine_AssetBundle_o *__this;
  System_String_o *pSVar12;
  undefined8 uVar13;
  System_Exception_o *pSVar14;
  System_Type_o *pSVar15;
  UnityEngine_Component_array *pUVar16;
  UnityEngine_AnimationState_o *__this_00;
  UnityEngine_AnimationClip_o *__this_01;
  UnityEngine_AnimationEvent_array *pUVar17;
  long *plVar18;
  undefined8 *puVar19;
  UnityEngine_Object_o *pUVar20;
  UnityEngine_RuntimeAnimatorController_o *__this_02;
  System_RuntimeTypeHandle_o handle;
  VirtualInvokeData *pVVar21;
  System_String_o *str0;
  System_String_o *str2;
  uint uVar22;
  System_Collections_Generic_Dictionary_object__object__o *pSVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  UnityEngine_AnimationClip_array *__this_03;
  long lStack_70;
  
  if (g_data_057ae9fe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AssetBundle_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae9fe = '\x01';
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) goto label_044ada98;
label_044ada2c:
    pSVar23 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
    if (pSVar23 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044adba7;
label_044adab5:
    bVar10 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       (pSVar23,(Il2CppObject *)bundle,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar10 != '\0') {
      if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar23 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
      if (pSVar23 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pUVar20 = (UnityEngine_Object_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar23,(Il2CppObject *)bundle,MethodInfo_AssetBundle_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar10 = UnityEngine_Object__op_Equality(pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar10 != '\0') goto label_044adbac;
        if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar23 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
        if ((pSVar23 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
           (__this = (UnityEngine_AssetBundle_o *)
                     System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar23,(Il2CppObject *)bundle,MethodInfo_AssetBundle_get_Item),
           __this != (UnityEngine_AssetBundle_o *)0x0)) {
          pSVar14 = (System_Exception_o *)UnityEngine_AssetBundle__LoadAsset(__this,name,(MethodInfo *)0x0);
          if ((pSVar14 == (System_Exception_o *)0x0) ||
             (name = (System_String_o *)TypeInfo_GameObject, pSVar14->klass == TypeInfo_GameObject)) {
            ApplicationManagers_AssetBundleManager__ValidateCustomPrefab
                      ((UnityEngine_GameObject_o *)pSVar14,(MethodInfo *)name);
            return (UnityEngine_Object_o *)pSVar14;
          }
          goto label_044adc03;
        }
      }
      goto label_044adba7;
    }
  }
  else {
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) != 0) goto label_044ada2c;
label_044ada98:
    il2cpp_runtime_helper_02337ed0();
    pSVar23 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
    if (pSVar23 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044adab5;
label_044adba7:
    il2cpp_runtime_helper_022b2c90();
  }
label_044adbac:
  pSVar12 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Custom bundle not loaded: ");
  pSVar12 = System_String__Concat_3ae5ba0(pSVar12,bundle,(MethodInfo *)0x0);
  uVar13 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar14 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar13);
  System_Exception___ctor_3cf6120(pSVar14,pSVar12,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_Object_LoadAsset);
  il2cpp_runtime_helper_022b2b10(pSVar14);
label_044adc03:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae9ff == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnimationEvent);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnimationState);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Animation);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Animator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&TypeRef_Component);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae9ff = '\x01';
  }
  handle.fields.value = TypeRef_Component.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar15 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  __this_03 = (UnityEngine_AnimationClip_array *)bundle;
  if (pSVar14 == (System_Exception_o *)0x0) goto label_044ae229;
  pUVar16 = UnityEngine_GameObject__GetComponentsInChildren_4df78f0
                      ((UnityEngine_GameObject_o *)pSVar14,pSVar15,1,(MethodInfo *)0x0);
  if (pUVar16 == (UnityEngine_Component_array *)0x0) goto label_044ae229;
  uVar11 = (uint)pUVar16->max_length;
  if ((int)uVar11 < 1) {
label_044ae16c:
    return (UnityEngine_Object_o *)(ulong)uVar11;
  }
  uVar26 = 0;
  if (uVar11 == 0) {
label_044ae21e:
    do {
      il2cpp_runtime_helper_022b2ca0();
      __this_03 = (UnityEngine_AnimationClip_array *)bundle;
label_044ae223:
      if (0 < (((UnityEngine_AnimationClip_o *)handle.fields.value)->fields)._isAnimatorMotion_k__BackingField
         ) {
label_044ae229:
        il2cpp_runtime_helper_022b2c90();
      }
label_044ae22e:
      il2cpp_runtime_helper_01f681a0(__this_03);
      pSVar15 = System_Object__GetType(&__this_03->obj,(MethodInfo *)0x0);
      il2cpp_runtime_helper_01f681a0(pSVar15);
      pSVar12 = (System_String_o *)
                (*(pSVar15->klass->vtable)._8_unknown.methodPtr)
                          (pSVar15,(pSVar15->klass->vtable)._8_unknown.method);
      str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Disallowed component (");
      str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&")");
      pSVar12 = System_String__Concat_3af7150(str0,pSVar12,str2,(MethodInfo *)0x0);
      uVar13 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
      pSVar14 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar13);
      System_Exception___ctor_3cf6120(pSVar14,pSVar12,(MethodInfo *)0x0);
      uVar13 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ValidateCustomPrefab);
      il2cpp_runtime_helper_022b2b10(pSVar14,uVar13);
      uVar13 = il2cpp_runtime_helper_022fefe0();
label_044ae181:
      uVar13 = il2cpp_runtime_helper_01f66400(uVar13);
      handle.fields.value = (System_RuntimeTypeHandle_Fields)il2cpp_runtime_helper_023051f0();
      if (handle.fields.value != 0) {
        pUVar7 = ((UnityEngine_AnimationClip_o *)handle.fields.value)->klass;
        uVar4._0_1_ = (pUVar7->_2).rank;
        uVar4._1_1_ = (pUVar7->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar8 = (pUVar7->_1).interfaceOffsets;
          lVar25 = 0;
          do {
            if (*(long *)((long)&pIVar8->interfaceType + lVar25) == TypeInfo_IDisposable) {
              pVVar21 = &(pUVar7->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar25);
              goto label_044ae1fd;
            }
            lVar25 = lVar25 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar25);
        }
        pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(handle.fields.value,TypeInfo_IDisposable,0);
label_044ae1fd:
        (*pVVar21->methodPtr)(handle.fields.value);
      }
      if (lStack_70 == 0) {
        _Unwind_Resume(uVar13);
      }
      il2cpp_runtime_helper_022fefe0(lStack_70);
      bundle = (System_String_o *)__this_03;
    } while( true );
  }
label_044add3b:
  __this_03 = (UnityEngine_AnimationClip_array *)pUVar16->m_Items[(int)uVar26];
  if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  handle.fields.value = *(System_RuntimeTypeHandle_Fields *)(*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x18);
  if (handle.fields.value == 0) goto label_044ae229;
  if (__this_03 == (UnityEngine_AnimationClip_array *)0x0) goto label_044ae223;
  lVar25 = 0;
  do {
    uVar11 = (((UnityEngine_AnimationClip_o *)handle.fields.value)->fields)._isAnimatorMotion_k__BackingField;
    if ((int)uVar11 <= (int)(uint)lVar25) goto label_044ae22e;
    bundle = (System_String_o *)__this_03;
    if (uVar11 <= (uint)lVar25) goto label_044ae21e;
    pUVar7 = (&((UnityEngine_AnimationClip_o *)((long)handle.fields.value + 0x20))->klass)[lVar25];
    pSVar15 = System_Object__GetType((Il2CppObject *)__this_03,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_AnimationClip_c *)0x0) goto label_044ae229;
    pvVar5 = (pUVar7->_1).image;
    cVar9 = (**(code **)((long)pvVar5 + 0x298))(pUVar7,pSVar15,*(undefined8 *)((long)pvVar5 + 0x2a0));
    lVar25 = lVar25 + 1;
  } while (cVar9 == '\0');
  pIVar6 = (__this_03->obj).klass;
  if (pIVar6 == TypeInfo_Animation) {
    handle.fields.value =
         (System_RuntimeTypeHandle_Fields)
         UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)__this_03,(MethodInfo *)0x0);
    if (handle.fields.value == 0) {
      uVar13 = il2cpp_runtime_helper_022b2c90();
      goto label_044ae181;
    }
    do {
      pUVar7 = ((UnityEngine_AnimationClip_o *)handle.fields.value)->klass;
      uVar2._0_1_ = (pUVar7->_2).rank;
      uVar2._1_1_ = (pUVar7->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar8 = (pUVar7->_1).interfaceOffsets;
        lVar25 = 0;
        do {
          if (*(long *)((long)&pIVar8->interfaceType + lVar25) == TypeInfo_IEnumerator) {
            pVVar21 = &(pUVar7->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar25);
            goto label_044ade63;
          }
          lVar25 = lVar25 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar25);
      }
      pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(handle.fields.value,TypeInfo_IEnumerator,0);
label_044ade63:
      cVar9 = (*pVVar21->methodPtr)(handle.fields.value,pVVar21->method);
      if (cVar9 == '\0') goto label_044adf50;
      pUVar7 = ((UnityEngine_AnimationClip_o *)handle.fields.value)->klass;
      uVar3._0_1_ = (pUVar7->_2).rank;
      uVar3._1_1_ = (pUVar7->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar8 = (pUVar7->_1).interfaceOffsets;
        lVar25 = 0;
        do {
          if (*(long *)((long)&pIVar8->interfaceType + lVar25) == TypeInfo_IEnumerator) {
            pVVar21 = &(pUVar7->vtable)._0_Equals + (*(int *)((long)&pIVar8->offset + lVar25) + 1);
            goto label_044adee8;
          }
          lVar25 = lVar25 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar25);
      }
      pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(handle.fields.value,TypeInfo_IEnumerator,1);
label_044adee8:
      __this_00 = (UnityEngine_AnimationState_o *)(*pVVar21->methodPtr)(handle.fields.value);
      if (__this_00 == (UnityEngine_AnimationState_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_044ae223;
      }
      if (__this_00->klass != TypeInfo_AnimationState) {
        il2cpp_runtime_helper_022b2fd0(__this_00);
        goto label_044ae223;
      }
      __this_01 = UnityEngine_AnimationState__get_clip(__this_00,(MethodInfo *)0x0);
      pUVar17 = (UnityEngine_AnimationEvent_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_AnimationEvent);
      if (__this_01 == (UnityEngine_AnimationClip_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_044ae223;
      }
      UnityEngine_AnimationClip__set_events(__this_01,pUVar17,(MethodInfo *)0x0);
    } while( true );
  }
  bVar1 = (TypeInfo_Animator->_2).naturalAligment;
  if ((bVar1 <= (pIVar6->_2).naturalAligment) &&
     ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Animator)) {
    pUVar20 = (UnityEngine_Object_o *)
              UnityEngine_Animator__get_runtimeAnimatorController
                        ((UnityEngine_Animator_o *)__this_03,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar10 = UnityEngine_Object__op_Inequality(pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      __this_02 = UnityEngine_Animator__get_runtimeAnimatorController
                            ((UnityEngine_Animator_o *)__this_03,(MethodInfo *)0x0);
      if (__this_02 == (UnityEngine_RuntimeAnimatorController_o *)0x0) goto label_044ae229;
      bundle = (System_String_o *)
               UnityEngine_RuntimeAnimatorController__get_animationClips(__this_02,(MethodInfo *)0x0);
      if ((UnityEngine_AnimationClip_array *)bundle == (UnityEngine_AnimationClip_array *)0x0)
      goto label_044ae229;
      uVar11 = (uint)((UnityEngine_AnimationClip_array *)bundle)->max_length;
      if (0 < (int)uVar11) {
        uVar22 = 0;
        do {
          if (uVar11 <= uVar22) goto label_044ae21e;
          handle.fields.value =
               (System_RuntimeTypeHandle_Fields)
               ((UnityEngine_AnimationClip_array *)bundle)->m_Items[(int)uVar22];
          pUVar17 = (UnityEngine_AnimationEvent_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_AnimationEvent);
          __this_03 = (UnityEngine_AnimationClip_array *)bundle;
          if (handle.fields.value == 0) goto label_044ae229;
          UnityEngine_AnimationClip__set_events
                    ((UnityEngine_AnimationClip_o *)handle.fields.value,pUVar17,(MethodInfo *)0x0);
          uVar22 = uVar22 + 1;
          uVar11 = (uint)((UnityEngine_AnimationClip_array *)bundle)->max_length;
        } while ((int)uVar22 < (int)uVar11);
      }
    }
  }
  goto label_044add20;
label_044adf50:
  lStack_70 = 0;
  plVar18 = (long *)il2cpp_runtime_helper_023051f0();
  if (plVar18 != (long *)0x0) {
    lVar25 = *plVar18;
    if ((ulong)*(ushort *)(lVar25 + 0x12e) != 0) {
      lVar24 = 0;
      do {
        if (*(long *)(*(long *)(lVar25 + 0xb0) + lVar24) == TypeInfo_IDisposable) {
          puVar19 = (undefined8 *)
                    (lVar25 + (long)*(int *)(*(long *)(lVar25 + 0xb0) + 8 + lVar24) * 0x10 + 0x138);
          goto label_044adfcd;
        }
        lVar24 = lVar24 + 0x10;
      } while ((ulong)*(ushort *)(lVar25 + 0x12e) << 4 != lVar24);
    }
    puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar18,TypeInfo_IDisposable,0);
label_044adfcd:
    (*(code *)*puVar19)(plVar18);
  }
label_044add20:
  uVar26 = uVar26 + 1;
  uVar11 = (uint)pUVar16->max_length;
  if ((int)uVar11 <= (int)uVar26) goto label_044ae16c;
  if (uVar11 <= uVar26) goto label_044ae21e;
  goto label_044add3b;
}


// ApplicationManagers.AssetBundleManager$$ValidateCustomPrefab
// il2cpp: void ApplicationManagers_AssetBundleManager__ValidateCustomPrefab (UnityEngine_GameObject_o* prefab, const MethodInfo* method);
// 0x44adc10

void ApplicationManagers_AssetBundleManager__ValidateCustomPrefab
               (UnityEngine_GameObject_o *prefab,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  void *pvVar6;
  Il2CppClass *pIVar7;
  UnityEngine_AnimationClip_c *pUVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  char cVar10;
  bool_conflict bVar11;
  uint uVar12;
  System_Type_o *pSVar13;
  UnityEngine_Component_array *pUVar14;
  UnityEngine_AnimationState_o *__this;
  UnityEngine_AnimationClip_o *__this_00;
  UnityEngine_AnimationEvent_array *pUVar15;
  long *plVar16;
  undefined8 *puVar17;
  UnityEngine_Object_o *x;
  UnityEngine_RuntimeAnimatorController_o *__this_01;
  System_RuntimeTypeHandle_o handle;
  VirtualInvokeData *pVVar18;
  System_String_o *pSVar19;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar20;
  System_Exception_o *__this_02;
  uint uVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  UnityEngine_AnimationClip_array *unaff_R15;
  UnityEngine_AnimationClip_array *__this_03;
  long local_48;
  
  if (g_data_057ae9ff == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnimationEvent);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnimationState);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Animation);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Animator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&TypeRef_Component);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae9ff = '\x01';
  }
  handle.fields.value = TypeRef_Component.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  __this_03 = unaff_R15;
  if (prefab == (UnityEngine_GameObject_o *)0x0) goto label_044ae229;
  pUVar14 = UnityEngine_GameObject__GetComponentsInChildren_4df78f0(prefab,pSVar13,1,(MethodInfo *)0x0);
  if (pUVar14 == (UnityEngine_Component_array *)0x0) goto label_044ae229;
  iVar5 = (int)pUVar14->max_length;
  if (iVar5 < 1) {
    return;
  }
  uVar24 = 0;
  if (iVar5 == 0) {
label_044ae21e:
    do {
      il2cpp_runtime_helper_022b2ca0();
      __this_03 = unaff_R15;
label_044ae223:
      if (0 < (((UnityEngine_AnimationClip_o *)handle.fields.value)->fields)._isAnimatorMotion_k__BackingField
         ) {
label_044ae229:
        il2cpp_runtime_helper_022b2c90();
      }
label_044ae22e:
      il2cpp_runtime_helper_01f681a0(__this_03);
      pSVar13 = System_Object__GetType(&__this_03->obj,(MethodInfo *)0x0);
      il2cpp_runtime_helper_01f681a0(pSVar13);
      pSVar19 = (System_String_o *)
                (*(pSVar13->klass->vtable)._8_unknown.methodPtr)
                          (pSVar13,(pSVar13->klass->vtable)._8_unknown.method);
      str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Disallowed component (");
      str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&")");
      pSVar19 = System_String__Concat_3af7150(str0,pSVar19,str2,(MethodInfo *)0x0);
      uVar20 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
      __this_02 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar20);
      System_Exception___ctor_3cf6120(__this_02,pSVar19,(MethodInfo *)0x0);
      uVar20 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ValidateCustomPrefab);
      il2cpp_runtime_helper_022b2b10(__this_02,uVar20);
      uVar20 = il2cpp_runtime_helper_022fefe0();
label_044ae181:
      uVar20 = il2cpp_runtime_helper_01f66400(uVar20);
      handle.fields.value = (System_RuntimeTypeHandle_Fields)il2cpp_runtime_helper_023051f0();
      if (handle.fields.value != 0) {
        pUVar8 = ((UnityEngine_AnimationClip_o *)handle.fields.value)->klass;
        uVar4._0_1_ = (pUVar8->_2).rank;
        uVar4._1_1_ = (pUVar8->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar9 = (pUVar8->_1).interfaceOffsets;
          lVar23 = 0;
          do {
            if (*(long *)((long)&pIVar9->interfaceType + lVar23) == TypeInfo_IDisposable) {
              pVVar18 = &(pUVar8->vtable)._0_Equals + *(int *)((long)&pIVar9->offset + lVar23);
              goto label_044ae1fd;
            }
            lVar23 = lVar23 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar23);
        }
        pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(handle.fields.value,TypeInfo_IDisposable,0);
label_044ae1fd:
        (*pVVar18->methodPtr)(handle.fields.value);
      }
      if (local_48 == 0) {
        _Unwind_Resume(uVar20);
      }
      il2cpp_runtime_helper_022fefe0(local_48);
      unaff_R15 = __this_03;
    } while( true );
  }
label_044add3b:
  __this_03 = (UnityEngine_AnimationClip_array *)pUVar14->m_Items[(int)uVar24];
  if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  handle.fields.value = *(System_RuntimeTypeHandle_Fields *)(*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x18);
  if (handle.fields.value == 0) goto label_044ae229;
  if (__this_03 == (UnityEngine_AnimationClip_array *)0x0) goto label_044ae223;
  lVar23 = 0;
  do {
    uVar12 = (((UnityEngine_AnimationClip_o *)handle.fields.value)->fields)._isAnimatorMotion_k__BackingField;
    if ((int)uVar12 <= (int)(uint)lVar23) goto label_044ae22e;
    unaff_R15 = __this_03;
    if (uVar12 <= (uint)lVar23) goto label_044ae21e;
    pUVar8 = (&((UnityEngine_AnimationClip_o *)((long)handle.fields.value + 0x20))->klass)[lVar23];
    pSVar13 = System_Object__GetType((Il2CppObject *)__this_03,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_AnimationClip_c *)0x0) goto label_044ae229;
    pvVar6 = (pUVar8->_1).image;
    cVar10 = (**(code **)((long)pvVar6 + 0x298))(pUVar8,pSVar13,*(undefined8 *)((long)pvVar6 + 0x2a0));
    lVar23 = lVar23 + 1;
  } while (cVar10 == '\0');
  pIVar7 = (__this_03->obj).klass;
  if (pIVar7 == TypeInfo_Animation) {
    handle.fields.value =
         (System_RuntimeTypeHandle_Fields)
         UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)__this_03,(MethodInfo *)0x0);
    if (handle.fields.value == 0) {
      uVar20 = il2cpp_runtime_helper_022b2c90();
      goto label_044ae181;
    }
    do {
      pUVar8 = ((UnityEngine_AnimationClip_o *)handle.fields.value)->klass;
      uVar2._0_1_ = (pUVar8->_2).rank;
      uVar2._1_1_ = (pUVar8->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar9 = (pUVar8->_1).interfaceOffsets;
        lVar23 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar23) == TypeInfo_IEnumerator) {
            pVVar18 = &(pUVar8->vtable)._0_Equals + *(int *)((long)&pIVar9->offset + lVar23);
            goto label_044ade63;
          }
          lVar23 = lVar23 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar23);
      }
      pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(handle.fields.value,TypeInfo_IEnumerator,0);
label_044ade63:
      cVar10 = (*pVVar18->methodPtr)(handle.fields.value,pVVar18->method);
      if (cVar10 == '\0') goto label_044adf50;
      pUVar8 = ((UnityEngine_AnimationClip_o *)handle.fields.value)->klass;
      uVar3._0_1_ = (pUVar8->_2).rank;
      uVar3._1_1_ = (pUVar8->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar9 = (pUVar8->_1).interfaceOffsets;
        lVar23 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar23) == TypeInfo_IEnumerator) {
            pVVar18 = &(pUVar8->vtable)._0_Equals + (*(int *)((long)&pIVar9->offset + lVar23) + 1);
            goto label_044adee8;
          }
          lVar23 = lVar23 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar23);
      }
      pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(handle.fields.value,TypeInfo_IEnumerator,1);
label_044adee8:
      __this = (UnityEngine_AnimationState_o *)(*pVVar18->methodPtr)(handle.fields.value);
      if (__this == (UnityEngine_AnimationState_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_044ae223;
      }
      if (__this->klass != TypeInfo_AnimationState) {
        il2cpp_runtime_helper_022b2fd0(__this);
        goto label_044ae223;
      }
      __this_00 = UnityEngine_AnimationState__get_clip(__this,(MethodInfo *)0x0);
      pUVar15 = (UnityEngine_AnimationEvent_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_AnimationEvent);
      if (__this_00 == (UnityEngine_AnimationClip_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_044ae223;
      }
      UnityEngine_AnimationClip__set_events(__this_00,pUVar15,(MethodInfo *)0x0);
    } while( true );
  }
  bVar1 = (TypeInfo_Animator->_2).naturalAligment;
  if ((bVar1 <= (pIVar7->_2).naturalAligment) &&
     ((pIVar7->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Animator)) {
    x = (UnityEngine_Object_o *)
        UnityEngine_Animator__get_runtimeAnimatorController
                  ((UnityEngine_Animator_o *)__this_03,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar11 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      __this_01 = UnityEngine_Animator__get_runtimeAnimatorController
                            ((UnityEngine_Animator_o *)__this_03,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_RuntimeAnimatorController_o *)0x0) goto label_044ae229;
      unaff_R15 = UnityEngine_RuntimeAnimatorController__get_animationClips(__this_01,(MethodInfo *)0x0);
      if (unaff_R15 == (UnityEngine_AnimationClip_array *)0x0) goto label_044ae229;
      uVar12 = (uint)unaff_R15->max_length;
      if (0 < (int)uVar12) {
        uVar21 = 0;
        do {
          if (uVar12 <= uVar21) goto label_044ae21e;
          handle.fields.value = (System_RuntimeTypeHandle_Fields)unaff_R15->m_Items[(int)uVar21];
          pUVar15 = (UnityEngine_AnimationEvent_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_AnimationEvent);
          __this_03 = unaff_R15;
          if (handle.fields.value == 0) goto label_044ae229;
          UnityEngine_AnimationClip__set_events
                    ((UnityEngine_AnimationClip_o *)handle.fields.value,pUVar15,(MethodInfo *)0x0);
          uVar21 = uVar21 + 1;
          uVar12 = (uint)unaff_R15->max_length;
        } while ((int)uVar21 < (int)uVar12);
      }
    }
  }
  goto label_044add20;
label_044adf50:
  local_48 = 0;
  plVar16 = (long *)il2cpp_runtime_helper_023051f0();
  if (plVar16 != (long *)0x0) {
    lVar23 = *plVar16;
    if ((ulong)*(ushort *)(lVar23 + 0x12e) != 0) {
      lVar22 = 0;
      do {
        if (*(long *)(*(long *)(lVar23 + 0xb0) + lVar22) == TypeInfo_IDisposable) {
          puVar17 = (undefined8 *)
                    (lVar23 + (long)*(int *)(*(long *)(lVar23 + 0xb0) + 8 + lVar22) * 0x10 + 0x138);
          goto label_044adfcd;
        }
        lVar22 = lVar22 + 0x10;
      } while ((ulong)*(ushort *)(lVar23 + 0x12e) << 4 != lVar22);
    }
    puVar17 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar16,TypeInfo_IDisposable,0);
label_044adfcd:
    (*(code *)*puVar17)(plVar16);
  }
label_044add20:
  uVar24 = uVar24 + 1;
  uVar12 = (uint)pUVar14->max_length;
  if ((int)uVar12 <= (int)uVar24) {
    return;
  }
  if (uVar12 <= uVar24) goto label_044ae21e;
  goto label_044add3b;
}


// ApplicationManagers.AssetBundleManager$$.ctor
// il2cpp: void ApplicationManagers_AssetBundleManager___ctor (ApplicationManagers_AssetBundleManager_o* __this, const MethodInfo* method);
// 0x44ae2e0

void ApplicationManagers_AssetBundleManager___ctor
               (ApplicationManagers_AssetBundleManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AssetBundleManager$$.cctor
// il2cpp: void ApplicationManagers_AssetBundleManager___cctor (const MethodInfo* method);
// 0x44ae2f0

void ApplicationManagers_AssetBundleManager___cctor(MethodInfo *method)

{
  uint *puVar1;
  System_RuntimeTypeHandle_o handle;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  long *plVar3;
  System_Type_o *pSVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (g_data_057aea00 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_Animation);
    il2cpp_runtime_helper_023445d0(&TypeRef_Animator);
    il2cpp_runtime_helper_023445d0(&TypeRef_ArticulationBody);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&TypeRef_AudioChorusFilter);
    il2cpp_runtime_helper_023445d0(&TypeRef_AudioClip);
    il2cpp_runtime_helper_023445d0(&TypeRef_AudioDistortionFilter);
    il2cpp_runtime_helper_023445d0(&TypeRef_AudioEchoFilter);
    il2cpp_runtime_helper_023445d0(&TypeRef_AudioHighPassFilter);
    il2cpp_runtime_helper_023445d0(&TypeRef_AudioListener);
    il2cpp_runtime_helper_023445d0(&TypeRef_AudioLowPassFilter);
    il2cpp_runtime_helper_023445d0(&TypeRef_AudioReverbFilter);
    il2cpp_runtime_helper_023445d0(&TypeRef_AudioReverbZone);
    il2cpp_runtime_helper_023445d0(&TypeRef_AudioSource);
    il2cpp_runtime_helper_023445d0(&TypeRef_CharacterController);
    il2cpp_runtime_helper_023445d0(&TypeRef_Cloth);
    il2cpp_runtime_helper_023445d0(&TypeRef_Collider);
    il2cpp_runtime_helper_023445d0(&TypeRef_ConstantForce);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Un);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_AssetBundle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Dictionary_string_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_AssetBundle);
    il2cpp_runtime_helper_023445d0(&TypeRef_Joint);
    il2cpp_runtime_helper_023445d0(&TypeRef_LODGroup);
    il2cpp_runtime_helper_023445d0(&TypeRef_LensFlare);
    il2cpp_runtime_helper_023445d0(&TypeRef_LightProbeGroup);
    il2cpp_runtime_helper_023445d0(&TypeRef_LightProbeProxyVolume);
    il2cpp_runtime_helper_023445d0(&TypeRef_Light);
    il2cpp_runtime_helper_023445d0(&TypeRef_LineRenderer);
    il2cpp_runtime_helper_023445d0(&TypeRef_MeshFilter);
    il2cpp_runtime_helper_023445d0(&TypeRef_OcclusionArea);
    il2cpp_runtime_helper_023445d0(&TypeRef_OcclusionPortal);
    il2cpp_runtime_helper_023445d0(&TypeRef_ParticleSystemForceField);
    il2cpp_runtime_helper_023445d0(&TypeRef_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&TypeRef_Projector);
    il2cpp_runtime_helper_023445d0(&TypeRef_ReflectionProbe);
    il2cpp_runtime_helper_023445d0(&TypeRef_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeRef_Rigidbody);
    il2cpp_runtime_helper_023445d0(&TypeRef_Skybox);
    il2cpp_runtime_helper_023445d0(&TypeRef_SortingGroup);
    il2cpp_runtime_helper_023445d0(&TypeRef_Terrain);
    il2cpp_runtime_helper_023445d0(&TypeRef_TextMesh);
    il2cpp_runtime_helper_023445d0(&TypeRef_TrailRenderer);
    il2cpp_runtime_helper_023445d0(&TypeRef_Transform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&TypeRef_VideoPlayer);
    il2cpp_runtime_helper_023445d0(&TypeRef_WindZone);
    g_data_057aea00 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Dictionary_string_Object);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Un);
  lVar5 = *(long *)(TypeInfo_AssetBundleManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar5 + 8) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar5 + 8,pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_AssetBundle);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_System_String_UnityEngine_AssetBundle);
  lVar5 = *(long *)(TypeInfo_AssetBundleManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar5 + 0x10) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar5 + 0x10,pSVar2);
  plVar3 = (long *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle.fields.value = TypeRef_Transform.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (plVar3 == (long *)0x0) goto label_044af314;
  if (pSVar4 == (System_Type_o *)0x0) {
label_044ae633:
    if ((int)plVar3[3] != 0) {
      plVar3[4] = (long)pSVar4;
      il2cpp_runtime_helper_022b4080(plVar3 + 4);
      pSVar4 = System_Type__GetTypeFromHandle(TypeRef_Collider,(MethodInfo *)0x0);
      if (pSVar4 != (System_Type_o *)0x0) {
        lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
        if (lVar5 == 0) goto label_044af305;
      }
      puVar1 = (uint *)(plVar3 + 3);
      if (1 < *puVar1) {
        plVar3[5] = (long)pSVar4;
        il2cpp_runtime_helper_022b4080(plVar3 + 5);
        pSVar4 = System_Type__GetTypeFromHandle(TypeRef_MeshFilter,(MethodInfo *)0x0);
        if (pSVar4 != (System_Type_o *)0x0) {
          lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
          if (lVar5 == 0) goto label_044af305;
        }
        if (2 < *puVar1) {
          plVar3[6] = (long)pSVar4;
          il2cpp_runtime_helper_022b4080(plVar3 + 6);
          pSVar4 = System_Type__GetTypeFromHandle(TypeRef_Animation,(MethodInfo *)0x0);
          if (pSVar4 != (System_Type_o *)0x0) {
            lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
            if (lVar5 == 0) goto label_044af305;
          }
          if (3 < *puVar1) {
            plVar3[7] = (long)pSVar4;
            il2cpp_runtime_helper_022b4080(plVar3 + 7);
            pSVar4 = System_Type__GetTypeFromHandle(TypeRef_Animator,(MethodInfo *)0x0);
            if (pSVar4 != (System_Type_o *)0x0) {
              lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
              if (lVar5 == 0) goto label_044af305;
            }
            if (4 < *puVar1) {
              plVar3[8] = (long)pSVar4;
              il2cpp_runtime_helper_022b4080(plVar3 + 8);
              pSVar4 = System_Type__GetTypeFromHandle(TypeRef_AudioSource,(MethodInfo *)0x0);
              if (pSVar4 != (System_Type_o *)0x0) {
                lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
                if (lVar5 == 0) goto label_044af305;
              }
              if (5 < *puVar1) {
                plVar3[9] = (long)pSVar4;
                il2cpp_runtime_helper_022b4080(plVar3 + 9);
                pSVar4 = System_Type__GetTypeFromHandle(TypeRef_AudioClip,(MethodInfo *)0x0);
                if (pSVar4 != (System_Type_o *)0x0) {
                  lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
                  if (lVar5 == 0) goto label_044af305;
                }
                if (6 < *puVar1) {
                  plVar3[10] = (long)pSVar4;
                  il2cpp_runtime_helper_022b4080(plVar3 + 10);
                  pSVar4 = System_Type__GetTypeFromHandle(TypeRef_AudioChorusFilter,(MethodInfo *)0x0);
                  if (pSVar4 != (System_Type_o *)0x0) {
                    lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
                    if (lVar5 == 0) goto label_044af305;
                  }
                  if (7 < *puVar1) {
                    plVar3[0xb] = (long)pSVar4;
                    il2cpp_runtime_helper_022b4080(plVar3 + 0xb);
                    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_AudioDistortionFilter,(MethodInfo *)0x0);
                    if (pSVar4 != (System_Type_o *)0x0) {
                      lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
                      if (lVar5 == 0) goto label_044af305;
                    }
                    if (8 < *puVar1) {
                      plVar3[0xc] = (long)pSVar4;
                      il2cpp_runtime_helper_022b4080(plVar3 + 0xc);
                      pSVar4 = System_Type__GetTypeFromHandle(TypeRef_AudioEchoFilter,(MethodInfo *)0x0);
                      if (pSVar4 != (System_Type_o *)0x0) {
                        lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
                        if (lVar5 == 0) goto label_044af305;
                      }
                      if (9 < *puVar1) {
                        plVar3[0xd] = (long)pSVar4;
                        il2cpp_runtime_helper_022b4080(plVar3 + 0xd);
                        pSVar4 = System_Type__GetTypeFromHandle(TypeRef_AudioHighPassFilter,(MethodInfo *)0x0);
                        if (pSVar4 != (System_Type_o *)0x0) {
                          lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
                          if (lVar5 == 0) goto label_044af305;
                        }
                        if (10 < *puVar1) {
                          plVar3[0xe] = (long)pSVar4;
                          il2cpp_runtime_helper_022b4080(plVar3 + 0xe);
                          pSVar4 = System_Type__GetTypeFromHandle(TypeRef_AudioListener,(MethodInfo *)0x0);
                          if (pSVar4 != (System_Type_o *)0x0) {
                            lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
                            if (lVar5 == 0) goto label_044af305;
                          }
                          if (0xb < *puVar1) {
                            plVar3[0xf] = (long)pSVar4;
                            il2cpp_runtime_helper_022b4080(plVar3 + 0xf);
                            pSVar4 = System_Type__GetTypeFromHandle(TypeRef_AudioLowPassFilter,(MethodInfo *)0x0);
                            if (pSVar4 != (System_Type_o *)0x0) {
                              lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
                              if (lVar5 == 0) goto label_044af305;
                            }
                            if (0xc < *puVar1) {
                              plVar3[0x10] = (long)pSVar4;
                              il2cpp_runtime_helper_022b4080(plVar3 + 0x10);
                              pSVar4 = System_Type__GetTypeFromHandle(TypeRef_AudioReverbFilter,(MethodInfo *)0x0);
                              if (pSVar4 != (System_Type_o *)0x0) {
                                lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
                                if (lVar5 == 0) goto label_044af305;
                              }
                              if (0xd < *puVar1) {
                                plVar3[0x11] = (long)pSVar4;
                                il2cpp_runtime_helper_022b4080(plVar3 + 0x11);
                                pSVar4 = System_Type__GetTypeFromHandle(TypeRef_AudioReverbZone,(MethodInfo *)0x0);
                                if (pSVar4 != (System_Type_o *)0x0) {
                                  lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
                                  if (lVar5 == 0) goto label_044af305;
                                }
                                if (0xe < *puVar1) {
                                  plVar3[0x12] = (long)pSVar4;
                                  il2cpp_runtime_helper_022b4080(plVar3 + 0x12);
                                  pSVar4 = System_Type__GetTypeFromHandle(TypeRef_ParticleSystem,(MethodInfo *)0x0);
                                  if (pSVar4 != (System_Type_o *)0x0) {
                                    lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
                                    if (lVar5 == 0) goto label_044af305;
                                  }
                                  if (0xf < *puVar1) {
                                    plVar3[0x13] = (long)pSVar4;
                                    il2cpp_runtime_helper_022b4080(plVar3 + 0x13);
                                    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_ParticleSystemForceField,(MethodInfo *)0x0);
                                    if (pSVar4 != (System_Type_o *)0x0) {
                                      lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
                                      if (lVar5 == 0) goto label_044af305;
                                    }
                                    if (0x10 < *puVar1) {
                                      plVar3[0x14] = (long)pSVar4;
                                      il2cpp_runtime_helper_022b4080(plVar3 + 0x14);
                                      pSVar4 = System_Type__GetTypeFromHandle(TypeRef_LensFlare,(MethodInfo *)0x0);
                                      if (pSVar4 != (System_Type_o *)0x0) {
                                        lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
                                        if (lVar5 == 0) goto label_044af305;
                                      }
                                      if (0x11 < *puVar1) {
                                        plVar3[0x15] = (long)pSVar4;
                                        il2cpp_runtime_helper_022b4080(plVar3 + 0x15);
                                        pSVar4 = System_Type__GetTypeFromHandle
                                                           (TypeRef_LineRenderer,(MethodInfo *)0x0);
                                        if (pSVar4 != (System_Type_o *)0x0) {
                                          lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
                                          if (lVar5 == 0) goto label_044af305;
                                        }
                                        if (0x12 < *puVar1) {
                                          plVar3[0x16] = (long)pSVar4;
                                          il2cpp_runtime_helper_022b4080(plVar3 + 0x16);
                                          pSVar4 = System_Type__GetTypeFromHandle
                                                             (TypeRef_Projector,(MethodInfo *)0x0);
                                          if (pSVar4 != (System_Type_o *)0x0) {
                                            lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)(*plVar3 + 0x40))
                                            ;
                                            if (lVar5 == 0) goto label_044af305;
                                          }
                                          if (0x13 < *puVar1) {
                                            plVar3[0x17] = (long)pSVar4;
                                            il2cpp_runtime_helper_022b4080(plVar3 + 0x17);
                                            pSVar4 = System_Type__GetTypeFromHandle
                                                               (TypeRef_TrailRenderer,(MethodInfo *)0x0);
                                            if (pSVar4 != (System_Type_o *)0x0) {
                                              lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)
                                                                                 (*plVar3 + 0x40));
                                              if (lVar5 == 0) goto label_044af305;
                                            }
                                            if (0x14 < *puVar1) {
                                              plVar3[0x18] = (long)pSVar4;
                                              il2cpp_runtime_helper_022b4080(plVar3 + 0x18);
                                              pSVar4 = System_Type__GetTypeFromHandle
                                                                 (TypeRef_Renderer,(MethodInfo *)0x0);
                                              if (pSVar4 != (System_Type_o *)0x0) {
                                                lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)
                                                                                   (*plVar3 + 0x40));
                                                if (lVar5 == 0) goto label_044af305;
                                              }
                                              if (0x15 < *puVar1) {
                                                plVar3[0x19] = (long)pSVar4;
                                                il2cpp_runtime_helper_022b4080(plVar3 + 0x19);
                                                pSVar4 = System_Type__GetTypeFromHandle
                                                                   (TypeRef_Terrain,(MethodInfo *)0x0);
                                                if (pSVar4 != (System_Type_o *)0x0) {
                                                  lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)
                                                                                     (*plVar3 + 0x40));
                                                  if (lVar5 == 0) goto label_044af305;
                                                }
                                                if (0x16 < *puVar1) {
                                                  plVar3[0x1a] = (long)pSVar4;
                                                  il2cpp_runtime_helper_022b4080(plVar3 + 0x1a);
                                                  pSVar4 = System_Type__GetTypeFromHandle
                                                                     (TypeRef_ArticulationBody,(MethodInfo *)0x0);
                                                  if (pSVar4 != (System_Type_o *)0x0) {
                                                    lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)
                                                                                       (*plVar3 + 0x40));
                                                    if (lVar5 == 0) goto label_044af305;
                                                  }
                                                  if (0x17 < *puVar1) {
                                                    plVar3[0x1b] = (long)pSVar4;
                                                    il2cpp_runtime_helper_022b4080(plVar3 + 0x1b);
                                                    pSVar4 = System_Type__GetTypeFromHandle
                                                                       (TypeRef_CharacterController,(MethodInfo *)0x0);
                                                    if (pSVar4 != (System_Type_o *)0x0) {
                                                      lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)
                                                                                         (*plVar3 + 0x40));
                                                      if (lVar5 == 0) goto label_044af305;
                                                    }
                                                    if (0x18 < *puVar1) {
                                                      plVar3[0x1c] = (long)pSVar4;
                                                      il2cpp_runtime_helper_022b4080(plVar3 + 0x1c);
                                                      pSVar4 = System_Type__GetTypeFromHandle
                                                                         (TypeRef_Cloth,(MethodInfo *)0x0);
                                                      if (pSVar4 != (System_Type_o *)0x0) {
                                                        lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)
                                                                                           (*plVar3 + 0x40));
                                                        if (lVar5 == 0) goto label_044af305;
                                                      }
                                                      if (0x19 < *puVar1) {
                                                        plVar3[0x1d] = (long)pSVar4;
                                                        il2cpp_runtime_helper_022b4080(plVar3 + 0x1d);
                                                        pSVar4 = System_Type__GetTypeFromHandle
                                                                           (TypeRef_ConstantForce,(MethodInfo *)0x0);
                                                        if (pSVar4 != (System_Type_o *)0x0) {
                                                          lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)
                                                                                             (*plVar3 + 0x40))
                                                          ;
                                                          if (lVar5 == 0) goto label_044af305;
                                                        }
                                                        if (0x1a < *puVar1) {
                                                          plVar3[0x1e] = (long)pSVar4;
                                                          il2cpp_runtime_helper_022b4080(plVar3 + 0x1e);
                                                          pSVar4 = System_Type__GetTypeFromHandle
                                                                             (TypeRef_Joint,(MethodInfo *)0x0);
                                                          if (pSVar4 != (System_Type_o *)0x0) {
                                                            lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)
                                                                                               (*plVar3 + 0x40
                                                                                               ));
                                                            if (lVar5 == 0) goto label_044af305;
                                                          }
                                                          if (0x1b < *puVar1) {
                                                            plVar3[0x1f] = (long)pSVar4;
                                                            il2cpp_runtime_helper_022b4080(plVar3 + 0x1f);
                                                            pSVar4 = System_Type__GetTypeFromHandle
                                                                               (TypeRef_Rigidbody,(MethodInfo *)0x0
                                                                               );
                                                            if (pSVar4 != (System_Type_o *)0x0) {
                                                              lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *
                                                                                                 )(*plVar3 +
                                                                                                  0x40));
                                                              if (lVar5 == 0) goto label_044af305;
                                                            }
                                                            if (0x1c < *puVar1) {
                                                              plVar3[0x20] = (long)pSVar4;
                                                              il2cpp_runtime_helper_022b4080(plVar3 + 0x20);
                                                              pSVar4 = System_Type__GetTypeFromHandle
                                                                                 (TypeRef_Light,
                                                                                  (MethodInfo *)0x0);
                                                              if (pSVar4 != (System_Type_o *)0x0) {
                                                                lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8
                                                                                                    *)(*plVar3
                                                                                                      + 0x40))
                                                                ;
                                                                if (lVar5 == 0) goto label_044af305;
                                                              }
                                                              if (0x1d < *puVar1) {
                                                                plVar3[0x21] = (long)pSVar4;
                                                                il2cpp_runtime_helper_022b4080(plVar3 + 0x21);
                                                                pSVar4 = System_Type__GetTypeFromHandle
                                                                                   (TypeRef_LODGroup,
                                                                                    (MethodInfo *)0x0);
                                                                if (pSVar4 != (System_Type_o *)0x0) {
                                                                  lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(
                                                       undefined8 *)(*plVar3 + 0x40));
                                                       if (lVar5 == 0) goto label_044af305;
                                                       }
                                                       if (0x1e < *puVar1) {
                                                         plVar3[0x22] = (long)pSVar4;
                                                         il2cpp_runtime_helper_022b4080(plVar3 + 0x22);
                                                         pSVar4 = System_Type__GetTypeFromHandle
                                                                            (TypeRef_VideoPlayer,(MethodInfo *)0x0);
                                                         if (pSVar4 != (System_Type_o *)0x0) {
                                                           lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)
                                                                                              (*plVar3 + 0x40)
                                                                                     );
                                                           if (lVar5 == 0) goto label_044af305;
                                                         }
                                                         if (0x1f < *puVar1) {
                                                           plVar3[0x23] = (long)pSVar4;
                                                           il2cpp_runtime_helper_022b4080(plVar3 + 0x23);
                                                           pSVar4 = System_Type__GetTypeFromHandle
                                                                              (TypeRef_WindZone,(MethodInfo *)0x0)
                                                           ;
                                                           if (pSVar4 != (System_Type_o *)0x0) {
                                                             lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)
                                                                                                (*plVar3 +
                                                                                                0x40));
                                                             if (lVar5 == 0) goto label_044af305;
                                                           }
                                                           if (0x20 < *puVar1) {
                                                             plVar3[0x24] = (long)pSVar4;
                                                             il2cpp_runtime_helper_022b4080(plVar3 + 0x24);
                                                             pSVar4 = System_Type__GetTypeFromHandle
                                                                                (TypeRef_ReflectionProbe,
                                                                                 (MethodInfo *)0x0);
                                                             if (pSVar4 != (System_Type_o *)0x0) {
                                                               lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8
                                                                                                   *)(*plVar3 
                                                       + 0x40));
                                                       if (lVar5 == 0) goto label_044af305;
                                                       }
                                                       if (0x21 < *puVar1) {
                                                         plVar3[0x25] = (long)pSVar4;
                                                         il2cpp_runtime_helper_022b4080(plVar3 + 0x25);
                                                         pSVar4 = System_Type__GetTypeFromHandle
                                                                            (TypeRef_Skybox,(MethodInfo *)0x0);
                                                         if (pSVar4 != (System_Type_o *)0x0) {
                                                           lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)
                                                                                              (*plVar3 + 0x40)
                                                                                     );
                                                           if (lVar5 == 0) goto label_044af305;
                                                         }
                                                         if (0x22 < *puVar1) {
                                                           plVar3[0x26] = (long)pSVar4;
                                                           il2cpp_runtime_helper_022b4080(plVar3 + 0x26);
                                                           pSVar4 = System_Type__GetTypeFromHandle
                                                                              (TypeRef_LightProbeGroup,(MethodInfo *)0x0)
                                                           ;
                                                           if (pSVar4 != (System_Type_o *)0x0) {
                                                             lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)
                                                                                                (*plVar3 +
                                                                                                0x40));
                                                             if (lVar5 == 0) goto label_044af305;
                                                           }
                                                           if (0x23 < *puVar1) {
                                                             plVar3[0x27] = (long)pSVar4;
                                                             il2cpp_runtime_helper_022b4080(plVar3 + 0x27);
                                                             pSVar4 = System_Type__GetTypeFromHandle
                                                                                (TypeRef_LightProbeProxyVolume,
                                                                                 (MethodInfo *)0x0);
                                                             if (pSVar4 != (System_Type_o *)0x0) {
                                                               lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8
                                                                                                   *)(*plVar3 
                                                       + 0x40));
                                                       if (lVar5 == 0) goto label_044af305;
                                                       }
                                                       if (0x24 < *puVar1) {
                                                         plVar3[0x28] = (long)pSVar4;
                                                         il2cpp_runtime_helper_022b4080(plVar3 + 0x28);
                                                         pSVar4 = System_Type__GetTypeFromHandle
                                                                            (TypeRef_OcclusionArea,(MethodInfo *)0x0);
                                                         if (pSVar4 != (System_Type_o *)0x0) {
                                                           lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)
                                                                                              (*plVar3 + 0x40)
                                                                                     );
                                                           if (lVar5 == 0) goto label_044af305;
                                                         }
                                                         if (0x25 < *puVar1) {
                                                           plVar3[0x29] = (long)pSVar4;
                                                           il2cpp_runtime_helper_022b4080(plVar3 + 0x29);
                                                           pSVar4 = System_Type__GetTypeFromHandle
                                                                              (TypeRef_OcclusionPortal,(MethodInfo *)0x0)
                                                           ;
                                                           if (pSVar4 != (System_Type_o *)0x0) {
                                                             lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)
                                                                                                (*plVar3 +
                                                                                                0x40));
                                                             if (lVar5 == 0) goto label_044af305;
                                                           }
                                                           if (0x26 < *puVar1) {
                                                             plVar3[0x2a] = (long)pSVar4;
                                                             il2cpp_runtime_helper_022b4080(plVar3 + 0x2a);
                                                             pSVar4 = System_Type__GetTypeFromHandle
                                                                                (TypeRef_SortingGroup,
                                                                                 (MethodInfo *)0x0);
                                                             if (pSVar4 != (System_Type_o *)0x0) {
                                                               lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8
                                                                                                   *)(*plVar3 
                                                       + 0x40));
                                                       if (lVar5 == 0) goto label_044af305;
                                                       }
                                                       if (0x27 < *puVar1) {
                                                         plVar3[0x2b] = (long)pSVar4;
                                                         il2cpp_runtime_helper_022b4080(plVar3 + 0x2b);
                                                         pSVar4 = System_Type__GetTypeFromHandle
                                                                            (TypeRef_TextMesh,(MethodInfo *)0x0);
                                                         if (pSVar4 != (System_Type_o *)0x0) {
                                                           lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)
                                                                                              (*plVar3 + 0x40)
                                                                                     );
                                                           if (lVar5 == 0) goto label_044af305;
                                                         }
                                                         if (0x28 < *puVar1) {
                                                           plVar3[0x2c] = (long)pSVar4;
                                                           il2cpp_runtime_helper_022b4080(plVar3 + 0x2c,pSVar4);
                                                           lVar5 = *(long *)(TypeInfo_AssetBundleManager + 0xb8);
                                                           *(long **)(lVar5 + 0x18) = plVar3;
                                                           il2cpp_runtime_helper_022b4080(lVar5 + 0x18,plVar3);
                                                           return;
                                                         }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
    if (lVar5 != 0) goto label_044ae633;
  }
label_044af305:
  uVar6 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar6,0);
label_044af314:
  il2cpp_runtime_helper_022b2c90();
  return;
}


