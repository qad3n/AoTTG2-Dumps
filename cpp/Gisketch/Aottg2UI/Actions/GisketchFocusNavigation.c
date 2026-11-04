// Type: Gisketch.Aottg2UI.Actions.GisketchFocusNavigation
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchFocusNavigation.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchFocusNavigation$$Cycle
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Cycle (UnityEngine_GameObject_o* root, bool backwards, const MethodInfo* method);
// 0x1818ff2c0

bool Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Cycle
               (UnityEngine_GameObject_o *root,bool backwards,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_EventSystems_EventSystem_o *eventSystem;
  
  if (Il2CppMethodInitialized_184342230 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    Il2CppMethodInitialized_184342230 = '\x01';
  }
  if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
  }
  eventSystem = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  bVar1 = Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Cycle_18ff330
                    (root,backwards,eventSystem,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusNavigation$$Cycle
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Cycle (UnityEngine_GameObject_o* root, bool backwards, UnityEngine_EventSystems_EventSystem_o* eventSystem, const MethodInfo* method);
// 0x1818ff330
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818ff47f: nop 
// asm:   0x1818ff686: nop word ptr [rax + rax]

bool Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Cycle_18ff330
               (UnityEngine_GameObject_o *root,bool backwards,
               UnityEngine_EventSystems_EventSystem_o *eventSystem,MethodInfo *method)

{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *x;
  UnityEngine_Object_o *y;
  bool bVar1;
  char cVar2;
  System_Collections_Generic_List_Selectable__o *__this;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *pUVar3;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *x_00;
  UnityEngine_UI_Selectable_o *pUVar4;
  UnityEngine_Object_o *x_01;
  UnityEngine_GameObject_o *pUVar5;
  int index;
  int iVar6;
  uint uVar7;
  int32_t iVar8;
  
  if (Il2CppMethodInitialized_184342231 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Selectable_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Selectable_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342231 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)eventSystem,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (Il2CppMethodInitialized_184342232 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_UnityEngine_Component_GetComponent_GisketchFocusRing);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Selectable);
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Selectable_Add)
        ;
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_Selectable_ctor);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Selectable);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_184342232 = '\x01';
      }
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Selectable);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)__this,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Selectable_ctor);
      if ((root != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar3 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                             (root,false,
                              (MethodInfo_6F5750 *)
                              MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Selectable),
         pUVar3 != (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)0x0)) {
        for (uVar7 = 0; (int)uVar7 < (int)pUVar3->max_length; uVar7 = uVar7 + 1) {
          if ((uint)pUVar3->max_length <= uVar7) {
            ThrowIndexOutOfRangeException();
          }
          x = (&pUVar3->m_Items[0].klass)[(int)uVar7];
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar1) {
            if (x == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0) goto label_1818ff761;
            cVar2 = (*(code *)(x->_1).image[1]._1.declaringType)(x);
            if (((cVar2 != '\0') &&
                (cVar2 = (*(code *)(x->_1).image[1].vtable._0_Equals.method)(x), cVar2 != '\0')) &&
               ((x->_1).byval_arg.bits != 0)) {
              x_00 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)x,
                                (MethodInfo_6651A0 *)
                                MethodInfo_UnityEngine_Component_GetComponent_GisketchFocusRing);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar1 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar1) {
                if (__this == (System_Collections_Generic_List_Selectable__o *)0x0) goto label_1818ff761;
                il2cpp_runtime_helper_180012890(__this);
              }
            }
          }
        }
        if (__this != (System_Collections_Generic_List_Selectable__o *)0x0) {
          if ((__this->fields)._size == 0) {
            return false;
          }
          if (eventSystem != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
            y = (UnityEngine_Object_o *)(eventSystem->fields).m_CurrentSelected;
            if (Il2CppMethodInitialized_184342233 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_List_Selectable_get_Count);
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_List_Selectable_get_Item);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
              Il2CppMethodInitialized_184342233 = '\x01';
            }
            for (index = 0; index < (__this->fields)._size; index = index + 1) {
              pUVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                 ((System_Collections_Generic_List_object__o *)__this,index,
                                  (MethodInfo_92B830 *)
                                  MethodInfo_System_Collections_Generic_List_Selectable_get_Item);
              if (pUVar4 == (UnityEngine_UI_Selectable_o *)0x0) goto label_1818ff761;
              x_01 = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar1 = UnityEngine_Object__op_Equality(x_01,y,(MethodInfo *)0x0);
              if (bVar1) {
                if (-1 < index) {
                  iVar6 = (__this->fields)._size;
                  iVar6 = (iVar6 + (int)((backwards ^ 1) * 2 + -1 + index) % iVar6) % iVar6;
                  goto label_1818ff6d6;
                }
                break;
              }
            }
            if (Il2CppMethodInitialized_184342234 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_List_Selectable_get_Count);
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_List_Selectable_get_Item);
              Il2CppMethodInitialized_184342234 = '\x01';
            }
            if (backwards) {
              iVar6 = (__this->fields)._size + -1;
              iVar8 = -1;
            }
            else {
              iVar8 = (__this->fields)._size;
              iVar6 = 0;
            }
            for (; iVar6 != iVar8; iVar6 = iVar6 + (uint)!backwards * 2 + -1) {
              pUVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                 ((System_Collections_Generic_List_object__o *)__this,iVar6,
                                  (MethodInfo_92B830 *)
                                  MethodInfo_System_Collections_Generic_List_Selectable_get_Item);
              if (pUVar4 == (UnityEngine_UI_Selectable_o *)0x0) goto label_1818ff761;
              pUVar5 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
              bVar1 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__IsVisible(pUVar5,(MethodInfo *)0x0);
              if (bVar1) goto label_1818ff6d6;
            }
            if (backwards) {
              iVar6 = (__this->fields)._size + -1;
            }
            else {
              iVar6 = 0;
            }
label_1818ff6d6:
            pUVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)__this,iVar6,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_Selectable_get_Item);
            if (pUVar4 != (UnityEngine_UI_Selectable_o *)0x0) {
              pUVar5 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
              UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_32f3500
                        (eventSystem,pUVar5,(MethodInfo *)0x0);
              pUVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                 ((System_Collections_Generic_List_object__o *)__this,iVar6,
                                  (MethodInfo_92B830 *)
                                  MethodInfo_System_Collections_Generic_List_Selectable_get_Item);
              if (pUVar4 != (UnityEngine_UI_Selectable_o *)0x0) {
                pUVar5 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
                Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(pUVar5,12.0,(MethodInfo *)0x0);
                return true;
              }
            }
          }
        }
      }
label_1818ff761:
      ThrowNullReferenceException();
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusNavigation$$Items
// il2cpp: System_Collections_Generic_List_Selectable__o* Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Items (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x1818ff930
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818ff9ec: nop dword ptr [rax]

System_Collections_Generic_List_Selectable__o *
Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Items(UnityEngine_GameObject_o *root,MethodInfo *method)

{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *x;
  bool bVar1;
  char cVar2;
  System_Collections_Generic_List_Selectable__o *__this;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *pUVar3;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *x_00;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184342232 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_GisketchFocusRing);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Selectable);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Selectable_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Selectable_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Selectable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342232 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Selectable);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Selectable_ctor);
  if (root != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                       (root,false,
                        (MethodInfo_6F5750 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Selectable);
    if (pUVar3 != (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)0x0) {
      uVar4 = 0;
      do {
        if ((int)pUVar3->max_length <= (int)uVar4) {
          return __this;
        }
        if ((uint)pUVar3->max_length <= uVar4) {
          ThrowIndexOutOfRangeException();
        }
        x = (&pUVar3->m_Items[0].klass)[(int)uVar4];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          if (x == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0) break;
          cVar2 = (*(code *)(x->_1).image[1]._1.declaringType)(x);
          if (cVar2 != '\0') {
            cVar2 = (*(code *)(x->_1).image[1].vtable._0_Equals.method)(x);
            if ((cVar2 != '\0') && ((x->_1).byval_arg.bits != 0)) {
              x_00 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)x,
                                (MethodInfo_6651A0 *)
                                MethodInfo_UnityEngine_Component_GetComponent_GisketchFocusRing);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar1 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar1) {
                if (__this == (System_Collections_Generic_List_Selectable__o *)0x0) break;
                il2cpp_runtime_helper_180012890(__this);
              }
            }
          }
        }
        uVar4 = uVar4 + 1;
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchFocusNavigation$$IndexOf
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__IndexOf (System_Collections_Generic_List_Selectable__o* items, UnityEngine_GameObject_o* selected, const MethodInfo* method);
// 0x1818ff860
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818ff90c: mov eax, ebx

int32_t Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__IndexOf
                  (System_Collections_Generic_List_Selectable__o *items,UnityEngine_GameObject_o *selected,
                  MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Selectable_o *__this;
  UnityEngine_Object_o *x;
  int32_t index;
  
  if (Il2CppMethodInitialized_184342233 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Selectable_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Selectable_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342233 = '\x01';
  }
  index = 0;
  if (items != (System_Collections_Generic_List_Selectable__o *)0x0) {
    while( true ) {
      if ((items->fields)._size <= index) {
        return -1;
      }
      __this = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)items,index,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Selectable_get_Item)
      ;
      if (__this == (UnityEngine_UI_Selectable_o *)0x0) break;
      x = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)selected,(MethodInfo *)0x0);
      if (bVar1) {
        return index;
      }
      index = index + 1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchFocusNavigation$$FirstVisibleIndex
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__FirstVisibleIndex (System_Collections_Generic_List_Selectable__o* items, bool backwards, const MethodInfo* method);
// 0x1818ff770
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818ff84a: mov eax, ebx
// asm:   0x1818ff84c: jmp 0x1818ff82f

int32_t Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__FirstVisibleIndex
                  (System_Collections_Generic_List_Selectable__o *items,bool backwards,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Selectable_o *__this;
  UnityEngine_GameObject_o *focused;
  int iVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_184342234 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Selectable_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Selectable_get_Item);
    Il2CppMethodInitialized_184342234 = '\x01';
  }
  if (backwards) {
    if (items == (System_Collections_Generic_List_Selectable__o *)0x0) goto label_1818ff852;
    iVar2 = (items->fields)._size + -1;
    iVar3 = -1;
  }
  else {
    if (items == (System_Collections_Generic_List_Selectable__o *)0x0) goto label_1818ff852;
    iVar3 = (items->fields)._size;
    iVar2 = 0;
  }
  while( true ) {
    if (iVar2 == iVar3) {
      if (backwards) {
        iVar2 = (items->fields)._size + -1;
      }
      else {
        iVar2 = 0;
      }
      return iVar2;
    }
    __this = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)items,iVar2,
                        (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Selectable_get_Item);
    if (__this == (UnityEngine_UI_Selectable_o *)0x0) break;
    focused = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    bVar1 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__IsVisible(focused,(MethodInfo *)0x0);
    if (bVar1) {
      return iVar2;
    }
    iVar2 = iVar2 + (uint)!backwards * 2 + -1;
  }
label_1818ff852:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchFocusNavigation$$Mod
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Mod (int32_t value, int32_t count, const MethodInfo* method);
// 0x1818ffb00

int32_t Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Mod(int32_t value,int32_t count,MethodInfo *method)

{
  return (count + value % count) % count;
}


