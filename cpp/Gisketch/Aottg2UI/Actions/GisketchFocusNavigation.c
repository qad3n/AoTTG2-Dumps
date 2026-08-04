// Type: Gisketch.Aottg2UI.Actions.GisketchFocusNavigation
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchFocusNavigation.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchFocusNavigation$$Cycle
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Cycle (UnityEngine_GameObject_o* root, bool backwards, const MethodInfo* method);
// 0x3b95f70

bool_conflict
Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Cycle
          (UnityEngine_GameObject_o *root,bool_conflict backwards,MethodInfo *method)

{
  uint uVar1;
  void *pvVar2;
  char *pcVar3;
  undefined1 *puVar4;
  long lVar5;
  char cVar6;
  bool_conflict bVar7;
  int32_t iVar8;
  UnityEngine_EventSystems_EventSystem_o *__this;
  Il2CppClass *pIVar9;
  UnityEngine_Component_o *pUVar10;
  UnityEngine_GameObject_o *pUVar11;
  Il2CppClass *pIVar12;
  System_Object_array *pSVar13;
  ulong uVar14;
  Il2CppClass *__this_00;
  UnityEngine_Object_o *x;
  int iVar15;
  MethodInfo *method_00;
  MethodInfo *method_01;
  ulong uVar16;
  int index;
  MethodInfo *pMVar17;
  Il2CppClass *pIVar18;
  
  if (g_data_057a9ef0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    g_data_057a9ef0 = '\x01';
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (g_data_057a9ef1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Selectable_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ef1 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar17 = (MethodInfo *)0x0;
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      pIVar9 = (Il2CppClass *)Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Items(root,pMVar17);
      if (pIVar9 != (Il2CppClass *)0x0) {
        if (*(int *)&(pIVar9->_1).namespaze == 0) {
          return 0;
        }
        if (__this != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
          iVar8 = Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__IndexOf
                            ((System_Collections_Generic_List_Selectable__o *)pIVar9,
                             (__this->fields).m_CurrentSelected,method_00);
          if (iVar8 < 0) {
            iVar8 = Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__FirstVisibleIndex
                              ((System_Collections_Generic_List_Selectable__o *)pIVar9,backwards & 0xff,
                               method_01);
          }
          else {
            iVar15 = *(int *)&(pIVar9->_1).namespaze;
            iVar8 = ((int)(iVar8 + (uint)(byte)((byte)backwards ^ 1) * 2 + -1) % iVar15 + iVar15) % iVar15;
          }
          root = (UnityEngine_GameObject_o *)pIVar9;
          pUVar10 = (UnityEngine_Component_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pIVar9,iVar8,MethodInfo_Selectable_get_Item);
          if (pUVar10 != (UnityEngine_Component_o *)0x0) {
            pUVar11 = UnityEngine_Component__get_gameObject(pUVar10,(MethodInfo *)0x0);
            UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_50f16d0
                      (__this,pUVar11,(MethodInfo *)0x0);
            pUVar10 = (UnityEngine_Component_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pIVar9,iVar8,MethodInfo_Selectable_get_Item);
            root = (UnityEngine_GameObject_o *)pIVar9;
            if (pUVar10 != (UnityEngine_Component_o *)0x0) {
              pMVar17 = (MethodInfo *)0x0;
              pUVar11 = UnityEngine_Component__get_gameObject(pUVar10,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(pUVar11,12.0,pMVar17);
              return 0x5592001;
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9ef2 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchFocusRing_GetComponent_GisketchFocusRing);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Selectable_GetComponentsInChildren_Selectable);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_UI_Selectable);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_Selectable);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9ef2 = '\x01';
      }
      pIVar12 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Selectable);
      pIVar9 = MethodInfo_List_1_UnityEngine_UI_Selectable;
      __this_00 = pIVar12;
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)pIVar12,(MethodInfo_362B8B0 *)MethodInfo_List_1_UnityEngine_UI_Selectable);
      if ((Il2CppClass *)root != (Il2CppClass *)0x0) {
        pIVar9 = (Il2CppClass *)0x0;
        pSVar13 = UnityEngine_GameObject__GetComponentsInChildren_object_(root,0,MethodInfo_Selectable_GetComponentsInChildren_Selectable);
        __this_00 = (Il2CppClass *)root;
        if (pSVar13 != (System_Object_array *)0x0) {
          iVar15 = (int)pSVar13->max_length;
          uVar14 = pSVar13->max_length & 0xffffffff;
          if (pIVar12 == (Il2CppClass *)0x0) {
            if (iVar15 < 1) goto label_03b9644b;
            uVar16 = 0;
            if (uVar14 != 0) {
              do {
                pIVar18 = (Il2CppClass *)pSVar13->m_Items[uVar16];
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pIVar9 = (Il2CppClass *)0x0;
                __this_00 = pIVar18;
                bVar7 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pIVar18,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if ((char)bVar7 != '\0') {
                  if (pIVar18 == (Il2CppClass *)0x0) goto label_03b96462;
                  pIVar9 = (pIVar18->_1).image[1]._1.parent;
                  __this_00 = pIVar18;
                  cVar6 = (*(code *)(pIVar18->_1).image[1]._1.declaringType)();
                  if (cVar6 != '\0') {
                    pvVar2 = (pIVar18->_1).image;
                    pIVar9 = *(Il2CppClass **)((long)pvVar2 + 0x2c0);
                    __this_00 = pIVar18;
                    cVar6 = (**(code **)((long)pvVar2 + 0x2b8))();
                    if ((cVar6 != '\0') && ((pIVar18->_1).byval_arg.bits != 0)) {
                      __this_00 = (Il2CppClass *)
                                  UnityEngine_Component__GetComponent_object_
                                            ((UnityEngine_Component_o *)pIVar18,MethodInfo_GisketchFocusRing_GetComponent_GisketchFocusRing);
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pIVar9 = (Il2CppClass *)0x0;
                      bVar7 = UnityEngine_Object__op_Inequality
                                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                                         (MethodInfo *)0x0);
                      if ((char)bVar7 != '\0') goto label_03b96462;
                    }
                  }
                }
                uVar16 = uVar16 + 1;
                uVar1 = (uint)pSVar13->max_length;
                if ((long)(int)uVar1 <= (long)uVar16) goto label_03b9644b;
              } while (uVar16 < uVar1);
            }
          }
          else {
            if (iVar15 < 1) {
label_03b9644b:
              return (bool_conflict)pIVar12;
            }
            uVar16 = 0;
            if (uVar14 != 0) {
              do {
                pIVar18 = (Il2CppClass *)pSVar13->m_Items[uVar16];
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pIVar9 = (Il2CppClass *)0x0;
                __this_00 = pIVar18;
                bVar7 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pIVar18,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if ((char)bVar7 != '\0') {
                  if (pIVar18 == (Il2CppClass *)0x0) goto label_03b96462;
                  pvVar2 = (pIVar18->_1).image;
                  pIVar9 = *(Il2CppClass **)((long)pvVar2 + 0x1d0);
                  __this_00 = pIVar18;
                  cVar6 = (**(code **)((long)pvVar2 + 0x1c8))();
                  if (cVar6 != '\0') {
                    pvVar2 = (pIVar18->_1).image;
                    pIVar9 = *(Il2CppClass **)((long)pvVar2 + 0x2c0);
                    __this_00 = pIVar18;
                    cVar6 = (**(code **)((long)pvVar2 + 0x2b8))();
                    if ((cVar6 != '\0') && ((pIVar18->_1).byval_arg.bits != 0)) {
                      __this_00 = (Il2CppClass *)
                                  UnityEngine_Component__GetComponent_object_
                                            ((UnityEngine_Component_o *)pIVar18,MethodInfo_GisketchFocusRing_GetComponent_GisketchFocusRing);
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pIVar9 = (Il2CppClass *)0x0;
                      bVar7 = UnityEngine_Object__op_Inequality
                                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                                         (MethodInfo *)0x0);
                      lVar5 = MethodInfo_Void_Add;
                      if ((char)bVar7 != '\0') {
                        puVar4 = (undefined1 *)((long)&(pIVar12->_1).namespaze + 4);
                        *(int *)puVar4 = *(int *)puVar4 + 1;
                        pcVar3 = (pIVar12->_1).name;
                        if (pcVar3 == (char *)0x0) goto label_03b96462;
                        uVar1 = *(uint *)&(pIVar12->_1).namespaze;
                        if (uVar1 < *(uint *)(pcVar3 + 0x18)) {
                          *(uint *)&(pIVar12->_1).namespaze = uVar1 + 1;
                          __this_00 = (Il2CppClass *)(pcVar3 + (long)(int)uVar1 * 8 + 0x20);
                          *(Il2CppClass **)(pcVar3 + (long)(int)uVar1 * 8 + 0x20) = pIVar18;
                          il2cpp_runtime_helper_022b4080();
                          pIVar9 = pIVar18;
                        }
                        else {
                          __this_00 = pIVar12;
                          System_Collections_Generic_List_object___AddWithResize
                                    ((System_Collections_Generic_List_object__o *)pIVar12,
                                     (Il2CppObject *)pIVar18,
                                     *(MethodInfo_362C220 **)
                                      (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                          pIVar9 = pIVar18;
                        }
                      }
                    }
                  }
                }
                uVar16 = uVar16 + 1;
                uVar1 = (uint)pSVar13->max_length;
                if ((long)(int)uVar1 <= (long)uVar16) goto label_03b9644b;
              } while (uVar16 < uVar1);
            }
          }
          il2cpp_runtime_helper_022b2ca0();
        }
      }
label_03b96462:
      il2cpp_runtime_helper_022b2c90();
      pIVar12 = pIVar9;
      pIVar18 = __this_00;
      if (g_data_057a9ef3 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Selectable_get_Item);
        pIVar18 = (Il2CppClass *)&TypeInfo_Object;
        il2cpp_runtime_helper_023445d0();
        g_data_057a9ef3 = '\x01';
      }
      iVar15 = (int)pIVar12;
      if (__this_00 == (Il2CppClass *)0x0) {
label_03b96544:
        il2cpp_runtime_helper_022b2c90();
        return ((int)((long)((ulong)(uint)((int)pIVar18 >> 0x1f) << 0x20 | (ulong)pIVar18 & 0xffffffff) %
                     (long)iVar15) + iVar15) % iVar15;
      }
      if (0 < *(int *)&(__this_00->_1).namespaze) {
        index = 0;
        do {
          pIVar18 = __this_00;
          iVar15 = index;
          pUVar10 = (UnityEngine_Component_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_Selectable_get_Item);
          if (pUVar10 == (UnityEngine_Component_o *)0x0) goto label_03b96544;
          x = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(pUVar10,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar7 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)pIVar9,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            return index;
          }
          index = index + 1;
        } while (index < *(int *)&(__this_00->_1).namespaze);
      }
      return -1;
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusNavigation$$Cycle
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Cycle (UnityEngine_GameObject_o* root, bool backwards, UnityEngine_EventSystems_EventSystem_o* eventSystem, const MethodInfo* method);
// 0x3b95fd0

bool_conflict
Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Cycle_3a95fd0
          (UnityEngine_GameObject_o *root,bool_conflict backwards,
          UnityEngine_EventSystems_EventSystem_o *eventSystem,MethodInfo *method)

{
  uint uVar1;
  void *pvVar2;
  char *pcVar3;
  undefined1 *puVar4;
  long lVar5;
  char cVar6;
  bool_conflict bVar7;
  int32_t iVar8;
  Il2CppClass *pIVar9;
  UnityEngine_Component_o *pUVar10;
  UnityEngine_GameObject_o *pUVar11;
  Il2CppClass *pIVar12;
  System_Object_array *pSVar13;
  ulong uVar14;
  Il2CppClass *__this;
  UnityEngine_Object_o *x;
  int iVar15;
  MethodInfo *method_00;
  MethodInfo *method_01;
  ulong uVar16;
  int index;
  MethodInfo *pMVar17;
  Il2CppClass *pIVar18;
  
  if (g_data_057a9ef1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Selectable_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ef1 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar17 = (MethodInfo *)0x0;
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)eventSystem,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      pIVar9 = (Il2CppClass *)Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Items(root,pMVar17);
      if (pIVar9 != (Il2CppClass *)0x0) {
        if (*(int *)&(pIVar9->_1).namespaze == 0) {
          return 0;
        }
        if (eventSystem != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
          iVar8 = Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__IndexOf
                            ((System_Collections_Generic_List_Selectable__o *)pIVar9,
                             (eventSystem->fields).m_CurrentSelected,method_00);
          if (iVar8 < 0) {
            iVar8 = Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__FirstVisibleIndex
                              ((System_Collections_Generic_List_Selectable__o *)pIVar9,backwards & 0xff,
                               method_01);
          }
          else {
            iVar15 = *(int *)&(pIVar9->_1).namespaze;
            iVar8 = ((int)(iVar8 + (uint)(byte)((byte)backwards ^ 1) * 2 + -1) % iVar15 + iVar15) % iVar15;
          }
          root = (UnityEngine_GameObject_o *)pIVar9;
          pUVar10 = (UnityEngine_Component_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pIVar9,iVar8,MethodInfo_Selectable_get_Item);
          if (pUVar10 != (UnityEngine_Component_o *)0x0) {
            pUVar11 = UnityEngine_Component__get_gameObject(pUVar10,(MethodInfo *)0x0);
            UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_50f16d0
                      (eventSystem,pUVar11,(MethodInfo *)0x0);
            pUVar10 = (UnityEngine_Component_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pIVar9,iVar8,MethodInfo_Selectable_get_Item);
            root = (UnityEngine_GameObject_o *)pIVar9;
            if (pUVar10 != (UnityEngine_Component_o *)0x0) {
              pMVar17 = (MethodInfo *)0x0;
              pUVar11 = UnityEngine_Component__get_gameObject(pUVar10,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(pUVar11,12.0,pMVar17);
              return 0x5592001;
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9ef2 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchFocusRing_GetComponent_GisketchFocusRing);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Selectable_GetComponentsInChildren_Selectable);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_UI_Selectable);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_Selectable);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9ef2 = '\x01';
      }
      pIVar12 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Selectable);
      pIVar9 = MethodInfo_List_1_UnityEngine_UI_Selectable;
      __this = pIVar12;
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)pIVar12,(MethodInfo_362B8B0 *)MethodInfo_List_1_UnityEngine_UI_Selectable);
      if ((Il2CppClass *)root != (Il2CppClass *)0x0) {
        pIVar9 = (Il2CppClass *)0x0;
        pSVar13 = UnityEngine_GameObject__GetComponentsInChildren_object_(root,0,MethodInfo_Selectable_GetComponentsInChildren_Selectable);
        __this = (Il2CppClass *)root;
        if (pSVar13 != (System_Object_array *)0x0) {
          iVar15 = (int)pSVar13->max_length;
          uVar14 = pSVar13->max_length & 0xffffffff;
          if (pIVar12 == (Il2CppClass *)0x0) {
            if (iVar15 < 1) goto label_03b9644b;
            uVar16 = 0;
            if (uVar14 != 0) {
              do {
                pIVar18 = (Il2CppClass *)pSVar13->m_Items[uVar16];
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pIVar9 = (Il2CppClass *)0x0;
                __this = pIVar18;
                bVar7 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pIVar18,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if ((char)bVar7 != '\0') {
                  if (pIVar18 == (Il2CppClass *)0x0) goto label_03b96462;
                  pIVar9 = (pIVar18->_1).image[1]._1.parent;
                  __this = pIVar18;
                  cVar6 = (*(code *)(pIVar18->_1).image[1]._1.declaringType)();
                  if (cVar6 != '\0') {
                    pvVar2 = (pIVar18->_1).image;
                    pIVar9 = *(Il2CppClass **)((long)pvVar2 + 0x2c0);
                    __this = pIVar18;
                    cVar6 = (**(code **)((long)pvVar2 + 0x2b8))();
                    if ((cVar6 != '\0') && ((pIVar18->_1).byval_arg.bits != 0)) {
                      __this = (Il2CppClass *)
                               UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)pIVar18,MethodInfo_GisketchFocusRing_GetComponent_GisketchFocusRing);
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pIVar9 = (Il2CppClass *)0x0;
                      bVar7 = UnityEngine_Object__op_Inequality
                                        ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,
                                         (MethodInfo *)0x0);
                      if ((char)bVar7 != '\0') goto label_03b96462;
                    }
                  }
                }
                uVar16 = uVar16 + 1;
                uVar1 = (uint)pSVar13->max_length;
                if ((long)(int)uVar1 <= (long)uVar16) goto label_03b9644b;
              } while (uVar16 < uVar1);
            }
          }
          else {
            if (iVar15 < 1) {
label_03b9644b:
              return (bool_conflict)pIVar12;
            }
            uVar16 = 0;
            if (uVar14 != 0) {
              do {
                pIVar18 = (Il2CppClass *)pSVar13->m_Items[uVar16];
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pIVar9 = (Il2CppClass *)0x0;
                __this = pIVar18;
                bVar7 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pIVar18,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if ((char)bVar7 != '\0') {
                  if (pIVar18 == (Il2CppClass *)0x0) goto label_03b96462;
                  pvVar2 = (pIVar18->_1).image;
                  pIVar9 = *(Il2CppClass **)((long)pvVar2 + 0x1d0);
                  __this = pIVar18;
                  cVar6 = (**(code **)((long)pvVar2 + 0x1c8))();
                  if (cVar6 != '\0') {
                    pvVar2 = (pIVar18->_1).image;
                    pIVar9 = *(Il2CppClass **)((long)pvVar2 + 0x2c0);
                    __this = pIVar18;
                    cVar6 = (**(code **)((long)pvVar2 + 0x2b8))();
                    if ((cVar6 != '\0') && ((pIVar18->_1).byval_arg.bits != 0)) {
                      __this = (Il2CppClass *)
                               UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)pIVar18,MethodInfo_GisketchFocusRing_GetComponent_GisketchFocusRing);
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pIVar9 = (Il2CppClass *)0x0;
                      bVar7 = UnityEngine_Object__op_Inequality
                                        ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,
                                         (MethodInfo *)0x0);
                      lVar5 = MethodInfo_Void_Add;
                      if ((char)bVar7 != '\0') {
                        puVar4 = (undefined1 *)((long)&(pIVar12->_1).namespaze + 4);
                        *(int *)puVar4 = *(int *)puVar4 + 1;
                        pcVar3 = (pIVar12->_1).name;
                        if (pcVar3 == (char *)0x0) goto label_03b96462;
                        uVar1 = *(uint *)&(pIVar12->_1).namespaze;
                        if (uVar1 < *(uint *)(pcVar3 + 0x18)) {
                          *(uint *)&(pIVar12->_1).namespaze = uVar1 + 1;
                          __this = (Il2CppClass *)(pcVar3 + (long)(int)uVar1 * 8 + 0x20);
                          *(Il2CppClass **)(pcVar3 + (long)(int)uVar1 * 8 + 0x20) = pIVar18;
                          il2cpp_runtime_helper_022b4080();
                          pIVar9 = pIVar18;
                        }
                        else {
                          __this = pIVar12;
                          System_Collections_Generic_List_object___AddWithResize
                                    ((System_Collections_Generic_List_object__o *)pIVar12,
                                     (Il2CppObject *)pIVar18,
                                     *(MethodInfo_362C220 **)
                                      (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                          pIVar9 = pIVar18;
                        }
                      }
                    }
                  }
                }
                uVar16 = uVar16 + 1;
                uVar1 = (uint)pSVar13->max_length;
                if ((long)(int)uVar1 <= (long)uVar16) goto label_03b9644b;
              } while (uVar16 < uVar1);
            }
          }
          il2cpp_runtime_helper_022b2ca0();
        }
      }
label_03b96462:
      il2cpp_runtime_helper_022b2c90();
      pIVar12 = pIVar9;
      pIVar18 = __this;
      if (g_data_057a9ef3 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Selectable_get_Item);
        pIVar18 = (Il2CppClass *)&TypeInfo_Object;
        il2cpp_runtime_helper_023445d0();
        g_data_057a9ef3 = '\x01';
      }
      iVar15 = (int)pIVar12;
      if (__this == (Il2CppClass *)0x0) {
label_03b96544:
        il2cpp_runtime_helper_022b2c90();
        return ((int)((long)((ulong)(uint)((int)pIVar18 >> 0x1f) << 0x20 | (ulong)pIVar18 & 0xffffffff) %
                     (long)iVar15) + iVar15) % iVar15;
      }
      if (0 < *(int *)&(__this->_1).namespaze) {
        index = 0;
        do {
          pIVar18 = __this;
          iVar15 = index;
          pUVar10 = (UnityEngine_Component_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)__this,index,MethodInfo_Selectable_get_Item);
          if (pUVar10 == (UnityEngine_Component_o *)0x0) goto label_03b96544;
          x = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(pUVar10,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar7 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)pIVar9,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            return index;
          }
          index = index + 1;
        } while (index < *(int *)&(__this->_1).namespaze);
      }
      return -1;
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusNavigation$$Items
// il2cpp: System_Collections_Generic_List_Selectable__o* Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Items (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x3b96150

System_Collections_Generic_List_Selectable__o *
Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Items(UnityEngine_GameObject_o *root,MethodInfo *method)

{
  void *pvVar1;
  char *pcVar2;
  undefined1 *puVar3;
  long lVar4;
  char cVar5;
  bool_conflict bVar6;
  Il2CppClass *pIVar7;
  System_Object_array *pSVar8;
  ulong uVar9;
  Il2CppClass *__this;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Object_o *x;
  int iVar10;
  ulong uVar11;
  uint index;
  uint uVar12;
  Il2CppClass *y;
  Il2CppClass *pIVar13;
  
  if (g_data_057a9ef2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchFocusRing_GetComponent_GisketchFocusRing);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Selectable_GetComponentsInChildren_Selectable);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_UI_Selectable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Selectable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ef2 = '\x01';
  }
  pIVar7 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Selectable);
  y = MethodInfo_List_1_UnityEngine_UI_Selectable;
  __this = pIVar7;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pIVar7,(MethodInfo_362B8B0 *)MethodInfo_List_1_UnityEngine_UI_Selectable);
  if (root != (UnityEngine_GameObject_o *)0x0) {
    y = (Il2CppClass *)0x0;
    pSVar8 = UnityEngine_GameObject__GetComponentsInChildren_object_(root,0,MethodInfo_Selectable_GetComponentsInChildren_Selectable);
    __this = (Il2CppClass *)root;
    if (pSVar8 != (System_Object_array *)0x0) {
      iVar10 = (int)pSVar8->max_length;
      uVar9 = pSVar8->max_length & 0xffffffff;
      if (pIVar7 == (Il2CppClass *)0x0) {
        if (iVar10 < 1) {
          return (System_Collections_Generic_List_Selectable__o *)0x0;
        }
        uVar11 = 0;
        if (uVar9 != 0) {
          do {
            pIVar7 = (Il2CppClass *)pSVar8->m_Items[uVar11];
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            y = (Il2CppClass *)0x0;
            __this = pIVar7;
            bVar6 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pIVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar6 != '\0') {
              if (pIVar7 == (Il2CppClass *)0x0) goto label_03b96462;
              y = (pIVar7->_1).image[1]._1.parent;
              __this = pIVar7;
              cVar5 = (*(code *)(pIVar7->_1).image[1]._1.declaringType)();
              if (cVar5 != '\0') {
                pvVar1 = (pIVar7->_1).image;
                y = *(Il2CppClass **)((long)pvVar1 + 0x2c0);
                __this = pIVar7;
                cVar5 = (**(code **)((long)pvVar1 + 0x2b8))();
                if ((cVar5 != '\0') && ((pIVar7->_1).byval_arg.bits != 0)) {
                  __this = (Il2CppClass *)
                           UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)pIVar7,MethodInfo_GisketchFocusRing_GetComponent_GisketchFocusRing);
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  y = (Il2CppClass *)0x0;
                  bVar6 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if ((char)bVar6 != '\0') goto label_03b96462;
                }
              }
            }
            uVar11 = uVar11 + 1;
            uVar12 = (uint)pSVar8->max_length;
            if ((long)(int)uVar12 <= (long)uVar11) {
              return (System_Collections_Generic_List_Selectable__o *)0x0;
            }
          } while (uVar11 < uVar12);
        }
      }
      else {
        if (iVar10 < 1) {
          return (System_Collections_Generic_List_Selectable__o *)pIVar7;
        }
        uVar11 = 0;
        if (uVar9 != 0) {
          do {
            pIVar13 = (Il2CppClass *)pSVar8->m_Items[uVar11];
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            y = (Il2CppClass *)0x0;
            __this = pIVar13;
            bVar6 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pIVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar6 != '\0') {
              if (pIVar13 == (Il2CppClass *)0x0) goto label_03b96462;
              pvVar1 = (pIVar13->_1).image;
              y = *(Il2CppClass **)((long)pvVar1 + 0x1d0);
              __this = pIVar13;
              cVar5 = (**(code **)((long)pvVar1 + 0x1c8))();
              if (cVar5 != '\0') {
                pvVar1 = (pIVar13->_1).image;
                y = *(Il2CppClass **)((long)pvVar1 + 0x2c0);
                __this = pIVar13;
                cVar5 = (**(code **)((long)pvVar1 + 0x2b8))();
                if ((cVar5 != '\0') && ((pIVar13->_1).byval_arg.bits != 0)) {
                  __this = (Il2CppClass *)
                           UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)pIVar13,MethodInfo_GisketchFocusRing_GetComponent_GisketchFocusRing);
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  y = (Il2CppClass *)0x0;
                  bVar6 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  lVar4 = MethodInfo_Void_Add;
                  if ((char)bVar6 != '\0') {
                    puVar3 = (undefined1 *)((long)&(pIVar7->_1).namespaze + 4);
                    *(int *)puVar3 = *(int *)puVar3 + 1;
                    pcVar2 = (pIVar7->_1).name;
                    if (pcVar2 == (char *)0x0) goto label_03b96462;
                    uVar12 = *(uint *)&(pIVar7->_1).namespaze;
                    if (uVar12 < *(uint *)(pcVar2 + 0x18)) {
                      *(uint *)&(pIVar7->_1).namespaze = uVar12 + 1;
                      __this = (Il2CppClass *)(pcVar2 + (long)(int)uVar12 * 8 + 0x20);
                      *(Il2CppClass **)(pcVar2 + (long)(int)uVar12 * 8 + 0x20) = pIVar13;
                      il2cpp_runtime_helper_022b4080();
                      y = pIVar13;
                    }
                    else {
                      __this = pIVar7;
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)pIVar7,(Il2CppObject *)pIVar13,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                      y = pIVar13;
                    }
                  }
                }
              }
            }
            uVar11 = uVar11 + 1;
            uVar12 = (uint)pSVar8->max_length;
            if ((long)(int)uVar12 <= (long)uVar11) {
              return (System_Collections_Generic_List_Selectable__o *)pIVar7;
            }
          } while (uVar11 < uVar12);
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
  }
label_03b96462:
  il2cpp_runtime_helper_022b2c90();
  pIVar7 = y;
  pIVar13 = __this;
  if (g_data_057a9ef3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Selectable_get_Item);
    pIVar13 = (Il2CppClass *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9ef3 = '\x01';
  }
  uVar12 = (uint)pIVar7;
  if (__this == (Il2CppClass *)0x0) {
label_03b96544:
    il2cpp_runtime_helper_022b2c90();
    return (System_Collections_Generic_List_Selectable__o *)
           ((long)(int)((int)((long)((ulong)(uint)((int)pIVar13 >> 0x1f) << 0x20 | (ulong)pIVar13 & 0xffffffff
                                    ) % (long)(int)uVar12) + uVar12) % (long)(int)uVar12 & 0xffffffff);
  }
  if (0 < *(int *)&(__this->_1).namespaze) {
    index = 0;
    do {
      pIVar13 = __this;
      uVar12 = index;
      __this_00 = (UnityEngine_Component_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)__this,index,MethodInfo_Selectable_get_Item);
      if (__this_00 == (UnityEngine_Component_o *)0x0) goto label_03b96544;
      x = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        return (System_Collections_Generic_List_Selectable__o *)(ulong)index;
      }
      index = index + 1;
    } while ((int)index < *(int *)&(__this->_1).namespaze);
  }
  return (System_Collections_Generic_List_Selectable__o *)&g_data_ffffffff;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusNavigation$$IndexOf
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__IndexOf (System_Collections_Generic_List_Selectable__o* items, UnityEngine_GameObject_o* selected, const MethodInfo* method);
// 0x3b96470

int32_t Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__IndexOf
                  (System_Collections_Generic_List_Selectable__o *items,UnityEngine_GameObject_o *selected,
                  MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Component_o *__this;
  UnityEngine_Object_o *x;
  int index;
  int iVar2;
  UnityEngine_GameObject_o *pUVar3;
  System_Collections_Generic_List_Selectable__o *pSVar4;
  
  pUVar3 = selected;
  pSVar4 = items;
  if (g_data_057a9ef3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Selectable_get_Item);
    pSVar4 = (System_Collections_Generic_List_Selectable__o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9ef3 = '\x01';
  }
  iVar2 = (int)pUVar3;
  if (items == (System_Collections_Generic_List_Selectable__o *)0x0) {
label_03b96544:
    il2cpp_runtime_helper_022b2c90();
    return ((int)((long)((ulong)(uint)((int)pSVar4 >> 0x1f) << 0x20 | (ulong)pSVar4 & 0xffffffff) %
                 (long)iVar2) + iVar2) % iVar2;
  }
  if (0 < (items->fields)._size) {
    index = 0;
    do {
      pSVar4 = items;
      iVar2 = index;
      __this = (UnityEngine_Component_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)items,index,MethodInfo_Selectable_get_Item);
      if (__this == (UnityEngine_Component_o *)0x0) goto label_03b96544;
      x = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)selected,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        return index;
      }
      index = index + 1;
    } while (index < (items->fields)._size);
  }
  return -1;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusNavigation$$FirstVisibleIndex
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__FirstVisibleIndex (System_Collections_Generic_List_Selectable__o* items, bool backwards, const MethodInfo* method);
// 0x3b96560

int32_t Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__FirstVisibleIndex
                  (System_Collections_Generic_List_Selectable__o *items,bool_conflict backwards,
                  MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_Object_o *x;
  UnityEngine_Vector2_o size;
  UnityEngine_Vector2_o size_00;
  UnityEngine_Vector2_o size_01;
  UnityEngine_Vector2_o size_02;
  UnityEngine_Vector2_o size_03;
  UnityEngine_Vector2_o size_04;
  UnityEngine_Vector2_o size_05;
  UnityEngine_Vector2_o size_06;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar3;
  uint uVar4;
  UnityEngine_Component_o *__this;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *target;
  UnityEngine_UI_ScrollRect_o *scroll;
  System_Delegate_o *pSVar5;
  System_Type_array *components;
  System_Type_o *pSVar6;
  long lVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *pUVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  System_Delegate_o *b;
  undefined8 uVar13;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar14;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  ulong unaff_RBX;
  int32_t iVar15;
  System_Delegate_o *a;
  char cVar16;
  UnityEngine_UI_ScrollRect_o *pUVar17;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *x_00;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this_00;
  ulong unaff_R12;
  byte bVar18;
  bool bVar19;
  undefined8 extraout_XMM0_Qa;
  UnityEngine_Vector2_o value;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  float in_XMM2_Da;
  float in_XMM3_Da;
  float in_XMM4_Da;
  UnityEngine_Rect_o UVar20;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  UnityEngine_Color_o color_03;
  UnityEngine_Color_o color_04;
  UnityEngine_Color_o color_05;
  UnityEngine_Color_o color_06;
  UnityEngine_Bounds_o UStack_70;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  System_Collections_Generic_List_Selectable__o *pSStack_40;
  
  x_00 = (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *)items;
  if (g_data_057a9ef4 == '\0') {
    pSStack_40 = (System_Collections_Generic_List_Selectable__o *)0x3b96586;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    x_00 = (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *)&MethodInfo_Selectable_get_Item;
    pSStack_40 = (System_Collections_Generic_List_Selectable__o *)0x3b96592;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9ef4 = '\x01';
  }
  bVar18 = (byte)backwards;
  if (bVar18 == 0) {
    if (items != (System_Collections_Generic_List_Selectable__o *)0x0) {
      uVar4 = (items->fields)._size;
      unaff_R12 = (ulong)uVar4;
      iVar15 = 0;
      if (uVar4 != 0) goto label_03b965cb;
      goto label_03b96610;
    }
  }
  else if (items != (System_Collections_Generic_List_Selectable__o *)0x0) {
    iVar15 = (items->fields)._size + -1;
    unaff_R12 = 0xffffffff;
    if (iVar15 != -1) {
label_03b965cb:
      uVar4 = ((uint)(bVar18 ^ 1) + (uint)(bVar18 ^ 1)) - 1;
      unaff_RBX = (ulong)uVar4;
      do {
        pSStack_40 = (System_Collections_Generic_List_Selectable__o *)0x3b965ee;
        x_00 = (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *)items;
        __this = (UnityEngine_Component_o *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)items,iVar15,MethodInfo_Selectable_get_Item);
        if (__this == (UnityEngine_Component_o *)0x0) goto label_03b96634;
        pMVar14 = (MethodInfo *)0x0;
        pSStack_40 = (System_Collections_Generic_List_Selectable__o *)0x3b965fd;
        x_00 = (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *)
               UnityEngine_Component__get_gameObject(__this,(MethodInfo *)0x0);
        pSStack_40 = (System_Collections_Generic_List_Selectable__o *)0x3b96605;
        bVar3 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__IsVisible
                          ((UnityEngine_GameObject_o *)x_00,pMVar14);
        if ((char)bVar3 != '\0') {
          return iVar15;
        }
        iVar15 = iVar15 + uVar4;
      } while ((int)unaff_R12 != iVar15);
    }
label_03b96610:
    if (bVar18 == 0) {
      return 0;
    }
    if (items != (System_Collections_Generic_List_Selectable__o *)0x0) {
      return (items->fields)._size + -1;
    }
  }
label_03b96634:
  pSStack_40 = (System_Collections_Generic_List_Selectable__o *)0x3b96639;
  il2cpp_runtime_helper_022b2c90();
  uStack_58 = unaff_RBX;
  uStack_50 = unaff_R12;
  uStack_48 = (ulong)(uint)backwards;
  pSStack_40 = items;
  if (g_data_057a9f00 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScrollRect_GetComponentInParent_ScrollRect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    g_data_057a9f00 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  target = (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *)0x0;
  cVar16 = '\0';
  __this_00 = x_00;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
label_03b966d7:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    scroll = (UnityEngine_UI_ScrollRect_o *)0x0;
    cVar16 = '\0';
    __this_00 = x_00;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pMVar14 = extraout_RDX;
    if ((char)bVar3 != '\0') {
      if (x_00 == (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *)0x0) goto label_03b967d1;
      scroll = (UnityEngine_UI_ScrollRect_o *)
               UnityEngine_GameObject__GetComponentInParent_object__255a6c0
                         ((UnityEngine_GameObject_o *)x_00,0,MethodInfo_ScrollRect_GetComponentInParent_ScrollRect);
      pMVar14 = extraout_RDX_00;
    }
    pUVar17 = scroll;
    __this_00 = target;
    bVar3 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__CanScroll
                      ((UnityEngine_RectTransform_o *)target,scroll,pMVar14);
    cVar16 = (char)pUVar17;
    if ((char)bVar3 == '\0') {
      return 0x557bb01;
    }
    if (scroll != (UnityEngine_UI_ScrollRect_o *)0x0) {
      pUVar9 = *(UnityEngine_Transform_o **)&(scroll->fields).m_ScrollSensitivity;
      if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                (&UStack_70,pUVar9,(UnityEngine_Transform_o *)target,(MethodInfo *)0x0);
      cVar16 = (char)pUVar9;
      pUVar10 = *(UnityEngine_RectTransform_o **)&(scroll->fields).m_ScrollSensitivity;
      __this_00 = (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *)0x0;
      if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
        UVar20 = UnityEngine_RectTransform__get_rect(pUVar10,(MethodInfo *)0x0);
        if (UStack_70.fields.m_Center.fields.y + UStack_70.fields.m_Extents.fields.y <= UVar20.fields.m_YMin)
        {
          return 0;
        }
        return (uint)(UStack_70.fields.m_Center.fields.y - UStack_70.fields.m_Extents.fields.y <
                     UVar20.fields.m_Height + UVar20.fields.m_YMin);
      }
    }
  }
  else if (x_00 != (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *)0x0) {
    target = (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)x_00,MethodInfo_RectTransform_GetComponent_RectTransform);
    goto label_03b966d7;
  }
label_03b967d1:
  pSVar5 = (System_Delegate_o *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ef5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Refresh);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG Focus Ring");
    il2cpp_runtime_helper_023445d0(&"Top Left");
    il2cpp_runtime_helper_023445d0(&"Bottom Left");
    il2cpp_runtime_helper_023445d0(&"Top Right");
    pSVar5 = (System_Delegate_o *)il2cpp_runtime_helper_023445d0(&"Bottom Right");
    g_data_057a9ef5 = '\x01';
  }
  if (cVar16 == '\0') {
label_03b96e47:
    return (int32_t)pSVar5;
  }
  x = (UnityEngine_Object_o *)(__this_00->fields)._ring;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pSVar5 = (System_Delegate_o *)(ulong)uVar4;
  if ((char)uVar4 != '\0') goto label_03b96e47;
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_03b96e54:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pSVar6 != (System_Type_o *)0x0) &&
       (lVar7 = il2cpp_runtime_helper_023051f0(pSVar6,(((components->obj).klass)->_1).element_class), lVar7 == 0))
    goto label_03b96e5e;
    if ((int)components->max_length != 0) {
      ppUVar1 = &(__this_00->fields)._ring;
      components->m_Items[0] = pSVar6;
      il2cpp_runtime_helper_022b4080(components->m_Items,pSVar6);
      pUVar8 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc440(pUVar8,"AoTTG Focus Ring",components,(MethodInfo *)0x0);
      *ppUVar1 = pUVar8;
      il2cpp_runtime_helper_022b4080(ppUVar1);
      if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
        pUVar9 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
        parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_4e09e30(pUVar9,parent,0,(MethodInfo *)0x0);
          if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
            pUVar10 = (UnityEngine_RectTransform_o *)
                      UnityEngine_GameObject__GetComponent_object_(*ppUVar1,MethodInfo_RectTransform_GetComponent_RectTransform);
            if (g_data_057a694c == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
              g_data_057a694c = '\x01';
            }
            if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMin
                        (pUVar10,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8)
                         ,(MethodInfo *)0x0);
              if (g_data_057a9c86 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                g_data_057a9c86 = '\x01';
              }
              UnityEngine_RectTransform__set_anchorMax
                        (pUVar10,(UnityEngine_Vector2_o)
                                 *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
                         (MethodInfo *)0x0);
              UnityEngine_RectTransform__set_offsetMin
                        (pUVar10,(UnityEngine_Vector2_o)(CONCAT44(in_XMM3_Da,in_XMM3_Da) ^ 0x8000000080000000)
                         ,(MethodInfo *)0x0);
              value.fields.y = in_XMM3_Da;
              value.fields.x = in_XMM3_Da;
              UnityEngine_RectTransform__set_offsetMax(pUVar10,value,(MethodInfo *)0x0);
              pSVar12 = "Top Left";
              if (g_data_057a9ef9 == '\0') {
                il2cpp_runtime_helper_023445d0(&" Horizontal");
                il2cpp_runtime_helper_023445d0(&" Vertical");
                g_data_057a9ef9 = '\x01';
              }
              pSVar11 = System_String__Concat_3ae5ba0(pSVar12," Horizontal",(MethodInfo *)0x0);
              color.fields.a = (float)in_XMM1_Db;
              color.fields.b = (float)in_XMM1_Da;
              color.fields.r = (float)(int)extraout_XMM0_Qa;
              color.fields.g = (float)(int)((ulong)extraout_XMM0_Qa >> 0x20);
              size.fields.y = in_XMM2_Da;
              size.fields.x = in_XMM4_Da;
              Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                        (__this_00,pSVar11,color,(UnityEngine_Vector2_o)0x3f80000000000000,
                         (UnityEngine_Vector2_o)0x3f80000000000000,size,method_00);
              pSVar12 = System_String__Concat_3ae5ba0(pSVar12," Vertical",(MethodInfo *)0x0);
              color_00.fields.a = (float)in_XMM1_Db;
              color_00.fields.b = (float)in_XMM1_Da;
              color_00.fields.r = (float)(int)extraout_XMM0_Qa;
              color_00.fields.g = (float)(int)((ulong)extraout_XMM0_Qa >> 0x20);
              size_00.fields.y = in_XMM4_Da;
              size_00.fields.x = in_XMM2_Da;
              Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                        (__this_00,pSVar12,color_00,(UnityEngine_Vector2_o)0x3f80000000000000,
                         (UnityEngine_Vector2_o)0x3f80000000000000,size_00,method_01);
              if (g_data_057a9c86 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                g_data_057a9c86 = '\x01';
              }
              pSVar12 = "Top Right";
              UVar2 = *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8);
              if (g_data_057a9ef9 == '\0') {
                il2cpp_runtime_helper_023445d0(&" Horizontal");
                il2cpp_runtime_helper_023445d0(&" Vertical");
                g_data_057a9ef9 = '\x01';
              }
              pSVar11 = System_String__Concat_3ae5ba0(pSVar12," Horizontal",(MethodInfo *)0x0);
              color_01.fields.a = (float)in_XMM1_Db;
              color_01.fields.b = (float)in_XMM1_Da;
              size_01.fields.y = in_XMM2_Da;
              size_01.fields.x = in_XMM4_Da;
              color_01.fields.r = (float)(int)extraout_XMM0_Qa;
              color_01.fields.g = (float)(int)((ulong)extraout_XMM0_Qa >> 0x20);
              Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                        (__this_00,pSVar11,color_01,(UnityEngine_Vector2_o)UVar2,(UnityEngine_Vector2_o)UVar2,
                         size_01,method_02);
              pSVar12 = System_String__Concat_3ae5ba0(pSVar12," Vertical",(MethodInfo *)0x0);
              color_02.fields.a = (float)in_XMM1_Db;
              color_02.fields.b = (float)in_XMM1_Da;
              size_04.fields.y = in_XMM4_Da;
              size_04.fields.x = in_XMM2_Da;
              color_02.fields.r = (float)(int)extraout_XMM0_Qa;
              color_02.fields.g = (float)(int)((ulong)extraout_XMM0_Qa >> 0x20);
              Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                        (__this_00,pSVar12,color_02,(UnityEngine_Vector2_o)UVar2,(UnityEngine_Vector2_o)UVar2,
                         size_04,method_03);
              if (g_data_057a694c == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                g_data_057a694c = '\x01';
              }
              pSVar12 = "Bottom Left";
              UVar2 = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
              if (g_data_057a9ef9 == '\0') {
                il2cpp_runtime_helper_023445d0(&" Horizontal");
                il2cpp_runtime_helper_023445d0(&" Vertical");
                g_data_057a9ef9 = '\x01';
              }
              pSVar11 = System_String__Concat_3ae5ba0(pSVar12," Horizontal",(MethodInfo *)0x0);
              color_03.fields.a = (float)in_XMM1_Db;
              color_03.fields.b = (float)in_XMM1_Da;
              size_02.fields.y = in_XMM2_Da;
              size_02.fields.x = in_XMM4_Da;
              color_03.fields.r = (float)(int)extraout_XMM0_Qa;
              color_03.fields.g = (float)(int)((ulong)extraout_XMM0_Qa >> 0x20);
              Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                        (__this_00,pSVar11,color_03,(UnityEngine_Vector2_o)UVar2,(UnityEngine_Vector2_o)UVar2,
                         size_02,method_04);
              pSVar12 = System_String__Concat_3ae5ba0(pSVar12," Vertical",(MethodInfo *)0x0);
              color_04.fields.a = (float)in_XMM1_Db;
              color_04.fields.b = (float)in_XMM1_Da;
              size_05.fields.y = in_XMM4_Da;
              size_05.fields.x = in_XMM2_Da;
              color_04.fields.r = (float)(int)extraout_XMM0_Qa;
              color_04.fields.g = (float)(int)((ulong)extraout_XMM0_Qa >> 0x20);
              Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                        (__this_00,pSVar12,color_04,(UnityEngine_Vector2_o)UVar2,(UnityEngine_Vector2_o)UVar2,
                         size_05,method_05);
              pSVar12 = "Bottom Right";
              if (g_data_057a9ef9 == '\0') {
                il2cpp_runtime_helper_023445d0(&" Horizontal");
                il2cpp_runtime_helper_023445d0(&" Vertical");
                g_data_057a9ef9 = '\x01';
              }
              pSVar11 = System_String__Concat_3ae5ba0(pSVar12," Horizontal",(MethodInfo *)0x0);
              color_05.fields.a = (float)in_XMM1_Db;
              color_05.fields.b = (float)in_XMM1_Da;
              size_03.fields.y = in_XMM2_Da;
              size_03.fields.x = in_XMM4_Da;
              color_05.fields.r = (float)(int)extraout_XMM0_Qa;
              color_05.fields.g = (float)(int)((ulong)extraout_XMM0_Qa >> 0x20);
              Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                        (__this_00,pSVar11,color_05,(UnityEngine_Vector2_o)0x3f800000,
                         (UnityEngine_Vector2_o)0x3f800000,size_03,method_06);
              pSVar12 = System_String__Concat_3ae5ba0(pSVar12," Vertical",(MethodInfo *)0x0);
              color_06.fields.a = (float)in_XMM1_Db;
              color_06.fields.b = (float)in_XMM1_Da;
              size_06.fields.y = in_XMM4_Da;
              size_06.fields.x = in_XMM2_Da;
              color_06.fields.r = (float)(int)extraout_XMM0_Qa;
              color_06.fields.g = (float)(int)((ulong)extraout_XMM0_Qa >> 0x20);
              Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
                        (__this_00,pSVar12,color_06,(UnityEngine_Vector2_o)0x3f800000,
                         (UnityEngine_Vector2_o)0x3f800000,size_06,method_07);
              pUVar8 = (__this_00->fields)._ring;
              if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__SetActive(pUVar8,0,(MethodInfo *)0x0);
                b = (System_Delegate_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
                System_Action___ctor();
                if (g_data_057a9ee9 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
                  g_data_057a9ee9 = '\x01';
                }
                a = *(System_Delegate_o **)(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0x10);
                do {
                  pSVar5 = System_Delegate__Combine(a,b,(MethodInfo *)0x0);
                  if ((pSVar5 != (System_Delegate_o *)0x0) && (pSVar5->klass != TypeInfo_Action)) {
                    pSVar5 = (System_Delegate_o *)il2cpp_runtime_helper_022b2fd0(pSVar5);
                    break;
                  }
                  pSVar5 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0x10,pSVar5,a);
                  bVar19 = a != pSVar5;
                  a = pSVar5;
                } while (bVar19);
                goto label_03b96e47;
              }
            }
          }
        }
      }
      goto label_03b96e54;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_03b96e5e:
  uVar13 = il2cpp_runtime_helper_0231b270();
  iVar15 = il2cpp_runtime_helper_022b2b10(uVar13,0);
  return iVar15;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusNavigation$$Mod
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Mod (int32_t value, int32_t count, const MethodInfo* method);
// 0x3b96550

int32_t Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Mod(int32_t value,int32_t count,MethodInfo *method)

{
  return (value % count + count) % count;
}


