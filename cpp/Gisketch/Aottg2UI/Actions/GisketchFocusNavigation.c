// Type: Gisketch.Aottg2UI.Actions.GisketchFocusNavigation
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchFocusNavigation.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchFocusNavigation$$Cycle
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Cycle (UnityEngine_GameObject_o* root, bool backwards, const MethodInfo* method);
// 0x3b29550

bool_conflict
Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Cycle
          (UnityEngine_GameObject_o *root,bool_conflict backwards,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  UnityEngine_EventSystems_EventSystem_o *__this;
  System_Collections_Generic_List_Selectable__o *items;
  UnityEngine_Component_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar6;
  
  if (DAT_057015bc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventSystem);
    DAT_057015bc = '\x01';
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (DAT_057015bd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Selectable_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015bd = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar6 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      items = Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Items(root,pMVar6);
      if (items != (System_Collections_Generic_List_Selectable__o *)0x0) {
        if ((items->fields)._size == 0) {
          return 0;
        }
        if (__this != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
          iVar3 = Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__IndexOf
                            (items,(__this->fields).m_CurrentSelected,method_00);
          if (iVar3 < 0) {
            iVar3 = Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__FirstVisibleIndex
                              (items,backwards & 0xff,method_01);
          }
          else {
            iVar1 = (items->fields)._size;
            iVar3 = ((int)(iVar3 + (uint)(byte)((byte)backwards ^ 1) * 2 + -1) % iVar1 + iVar1) %
                    iVar1;
          }
          pUVar4 = (UnityEngine_Component_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)items,iVar3,MethodInfo_Selectable_get_Item)
          ;
          if (pUVar4 != (UnityEngine_Component_o *)0x0) {
            pUVar5 = UnityEngine_Component__get_gameObject(pUVar4,(MethodInfo *)0x0);
            UnityEngine_EventSystems_EventSystem__SetSelectedGameObject
                      (__this,pUVar5,(MethodInfo *)0x0);
            pUVar4 = (UnityEngine_Component_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)items,iVar3,
                                MethodInfo_Selectable_get_Item);
            if (pUVar4 != (UnityEngine_Component_o *)0x0) {
              pMVar6 = (MethodInfo *)0x0;
              pUVar5 = UnityEngine_Component__get_gameObject(pUVar4,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(pUVar5,12.0,pMVar6);
              return 0x54ed001;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusNavigation$$Cycle
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Cycle (UnityEngine_GameObject_o* root, bool backwards, UnityEngine_EventSystems_EventSystem_o* eventSystem, const MethodInfo* method);
// 0x3b295b0

bool_conflict
Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Cycle
          (UnityEngine_GameObject_o *root,bool_conflict backwards,
          UnityEngine_EventSystems_EventSystem_o *eventSystem,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_Selectable__o *items;
  UnityEngine_Component_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar6;
  
  if (DAT_057015bd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Selectable_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015bd = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar6 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)eventSystem,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      items = Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Items(root,pMVar6);
      if (items != (System_Collections_Generic_List_Selectable__o *)0x0) {
        if ((items->fields)._size == 0) {
          return 0;
        }
        if (eventSystem != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
          iVar3 = Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__IndexOf
                            (items,(eventSystem->fields).m_CurrentSelected,method_00);
          if (iVar3 < 0) {
            iVar3 = Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__FirstVisibleIndex
                              (items,backwards & 0xff,method_01);
          }
          else {
            iVar1 = (items->fields)._size;
            iVar3 = ((int)(iVar3 + (uint)(byte)((byte)backwards ^ 1) * 2 + -1) % iVar1 + iVar1) %
                    iVar1;
          }
          pUVar4 = (UnityEngine_Component_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)items,iVar3,MethodInfo_Selectable_get_Item)
          ;
          if (pUVar4 != (UnityEngine_Component_o *)0x0) {
            pUVar5 = UnityEngine_Component__get_gameObject(pUVar4,(MethodInfo *)0x0);
            UnityEngine_EventSystems_EventSystem__SetSelectedGameObject
                      (eventSystem,pUVar5,(MethodInfo *)0x0);
            pUVar4 = (UnityEngine_Component_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)items,iVar3,
                                MethodInfo_Selectable_get_Item);
            if (pUVar4 != (UnityEngine_Component_o *)0x0) {
              pMVar6 = (MethodInfo *)0x0;
              pUVar5 = UnityEngine_Component__get_gameObject(pUVar4,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(pUVar5,12.0,pMVar6);
              return 0x54ed001;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusNavigation$$Items
// il2cpp: System_Collections_Generic_List_Selectable__o* Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Items (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x3b29730

/* WARNING: Type propagation algorithm not settling */

System_Collections_Generic_List_Selectable__o *
Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Items
          (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_UI_Selectable_o *x;
  UnityEngine_UI_Selectable_array *pUVar3;
  long lVar4;
  char cVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_Selectable__o *__this;
  System_Object_array *pSVar7;
  ulong uVar8;
  UnityEngine_Object_o *pUVar9;
  int iVar10;
  ulong uVar11;
  
  if (DAT_057015be == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchFocusRing_GetComponent_GisketchFocusRing);
    il2cpp_init_method_metadata(&MethodInfo_Selectable___GetComponentsInChildren_Selectable);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_UI_Selectable);
    il2cpp_init_method_metadata(&TypeInfo_List_Selectable);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015be = '\x01';
  }
  __this = (System_Collections_Generic_List_Selectable__o *)il2cpp_runtime_glue(TypeInfo_List_Selectable);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,MethodInfo_List_1_UnityEngine_UI_Selectable);
  if ((root != (UnityEngine_GameObject_o *)0x0) &&
     (pSVar7 = UnityEngine_GameObject__GetComponentsInChildren<object>(root,0,MethodInfo_Selectable___GetComponentsInChildren_Selectable),
     pSVar7 != (System_Object_array *)0x0)) {
    iVar10 = (int)pSVar7->max_length;
    uVar8 = pSVar7->max_length & 0xffffffff;
    if (__this == (System_Collections_Generic_List_Selectable__o *)0x0) {
      if (iVar10 < 1) {
        return (System_Collections_Generic_List_Selectable__o *)0x0;
      }
      uVar11 = 0;
      if (uVar8 != 0) {
        do {
          pUVar9 = (UnityEngine_Object_o *)pSVar7->m_Items[uVar11];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar6 = UnityEngine_Object__op_Inequality
                            (pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            if (pUVar9 == (UnityEngine_Object_o *)0x0) goto LAB_03b29a42;
            cVar5 = (*(code *)pUVar9->klass[1]._1.declaringType)(pUVar9);
            if (((cVar5 != '\0') &&
                (cVar5 = (*(code *)pUVar9->klass[1].vtable._0_Equals.method)(pUVar9), cVar5 != '\0')
                ) && ((int)pUVar9[1].fields.m_CachedPtr != 0)) {
              pUVar9 = (UnityEngine_Object_o *)
                       UnityEngine_Component__GetComponent<object>
                                 ((UnityEngine_Component_o *)pUVar9,MethodInfo_GisketchFocusRing_GetComponent_GisketchFocusRing);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar6 = UnityEngine_Object__op_Inequality
                                (pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar6 != '\0') goto LAB_03b29a42;
            }
          }
          uVar11 = uVar11 + 1;
          uVar2 = (uint)pSVar7->max_length;
          if ((long)(int)uVar2 <= (long)uVar11) {
            return (System_Collections_Generic_List_Selectable__o *)0x0;
          }
        } while (uVar11 < uVar2);
      }
    }
    else {
      if (iVar10 < 1) {
        return __this;
      }
      uVar11 = 0;
      if (uVar8 != 0) {
        do {
          x = (UnityEngine_UI_Selectable_o *)pSVar7->m_Items[uVar11];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar6 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                            );
          if ((char)bVar6 != '\0') {
            if (x == (UnityEngine_UI_Selectable_o *)0x0) goto LAB_03b29a42;
            cVar5 = (*(x->klass->vtable)._9_IsActive.methodPtr)(x);
            if (((cVar5 != '\0') &&
                (cVar5 = (*(x->klass->vtable)._24_IsInteractable.methodPtr)(x), cVar5 != '\0')) &&
               ((x->fields).m_Navigation.fields.m_Mode != 0)) {
              pUVar9 = (UnityEngine_Object_o *)
                       UnityEngine_Component__GetComponent<object>
                                 ((UnityEngine_Component_o *)x,MethodInfo_GisketchFocusRing_GetComponent_GisketchFocusRing);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar6 = UnityEngine_Object__op_Inequality
                                (pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              lVar4 = MethodInfo_Void_Add;
              if ((char)bVar6 != '\0') {
                piVar1 = &(__this->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar3 = (__this->fields)._items;
                if (pUVar3 == (UnityEngine_UI_Selectable_array *)0x0) goto LAB_03b29a42;
                uVar2 = (__this->fields)._size;
                if (uVar2 < (uint)pUVar3->max_length) {
                  (__this->fields)._size = uVar2 + 1;
                  pUVar3->m_Items[(int)uVar2] = x;
                  il2cpp_runtime_glue(pUVar3->m_Items + (int)uVar2);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)x,
                             *(MethodInfo_35A7350 **)
                              (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
          }
          uVar11 = uVar11 + 1;
          uVar2 = (uint)pSVar7->max_length;
          if ((long)(int)uVar2 <= (long)uVar11) {
            return __this;
          }
        } while (uVar11 < uVar2);
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03b29a42:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchFocusNavigation$$IndexOf
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__IndexOf (System_Collections_Generic_List_Selectable__o* items, UnityEngine_GameObject_o* selected, const MethodInfo* method);
// 0x3b29a50

int32_t Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__IndexOf
                  (System_Collections_Generic_List_Selectable__o *items,
                  UnityEngine_GameObject_o *selected,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Component_o *__this;
  UnityEngine_Object_o *x;
  int index;
  
  if (DAT_057015bf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Selectable_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015bf = '\x01';
  }
  if (items == (System_Collections_Generic_List_Selectable__o *)0x0) {
LAB_03b29b24:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (0 < (items->fields)._size) {
    index = 0;
    do {
      __this = (UnityEngine_Component_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)items,index,MethodInfo_Selectable_get_Item);
      if (__this == (UnityEngine_Component_o *)0x0) goto LAB_03b29b24;
      x = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
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
// 0x3b29b40

int32_t Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__FirstVisibleIndex
                  (System_Collections_Generic_List_Selectable__o *items,bool_conflict backwards,
                  MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Component_o *__this;
  UnityEngine_GameObject_o *focused;
  int index;
  int32_t iVar2;
  MethodInfo *method_00;
  int iVar3;
  byte bVar4;
  
  if (DAT_057015c0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Selectable_get_Item);
    DAT_057015c0 = '\x01';
  }
  bVar4 = (byte)backwards;
  if (bVar4 == 0) {
    if (items == (System_Collections_Generic_List_Selectable__o *)0x0) goto LAB_03b29c14;
    iVar3 = (items->fields)._size;
    index = 0;
    if (iVar3 != 0) goto LAB_03b29bab;
  }
  else {
    if (items == (System_Collections_Generic_List_Selectable__o *)0x0) goto LAB_03b29c14;
    index = (items->fields)._size + -1;
    iVar3 = -1;
    if (index != -1) {
LAB_03b29bab:
      do {
        __this = (UnityEngine_Component_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)items,index,MethodInfo_Selectable_get_Item);
        if (__this == (UnityEngine_Component_o *)0x0) goto LAB_03b29c14;
        method_00 = (MethodInfo *)0x0;
        focused = UnityEngine_Component__get_gameObject(__this,(MethodInfo *)0x0);
        bVar1 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__IsVisible(focused,method_00);
        if ((char)bVar1 != '\0') {
          return index;
        }
        index = index + (uint)(bVar4 ^ 1) + (uint)(bVar4 ^ 1) + -1;
      } while (iVar3 != index);
    }
  }
  iVar2 = 0;
  if (bVar4 != 0) {
    if (items == (System_Collections_Generic_List_Selectable__o *)0x0) {
LAB_03b29c14:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar2 = (items->fields)._size + -1;
  }
  return iVar2;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusNavigation$$Mod
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Mod (int32_t value, int32_t count, const MethodInfo* method);
// 0x3b29b30

int32_t Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Mod
                  (int32_t value,int32_t count,MethodInfo *method)

{
  return (value % count + count) % count;
}


