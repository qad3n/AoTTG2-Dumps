// Type: Gisketch.Aottg2UI.Actions.GisketchFocusNavigation
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchFocusNavigation.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchFocusNavigation$$Cycle
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Cycle (UnityEngine_GameObject_o* root, bool backwards, const MethodInfo* method);
// 0x53a17c0

bool Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Cycle
               (UnityEngine_GameObject_o *root,bool backwards,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_EventSystems_EventSystem_o *eventSystem;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_07542baf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    Il2CppMethodInitialized_07542baf = '\x01';
  }
  if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
  }
  eventSystem = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  bVar1 = Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Cycle_52a1820(root,backwards,eventSystem,in_RCX);
  return bVar1;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusNavigation$$Cycle
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Cycle (UnityEngine_GameObject_o* root, bool backwards, UnityEngine_EventSystems_EventSystem_o* eventSystem, const MethodInfo* method);
// 0x53a1820

bool Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Cycle_52a1820
               (UnityEngine_GameObject_o *root,bool backwards,
               UnityEngine_EventSystems_EventSystem_o *eventSystem,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_Selectable__o *items;
  UnityEngine_UI_Selectable_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar6;
  
  if (Il2CppMethodInitialized_07542bb0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Selectable_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Selectable_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542bb0 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pMVar6 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)eventSystem,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      items = Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Items(root,pMVar6);
      if (items != (System_Collections_Generic_List_Selectable__o *)0x0) {
        if ((items->fields)._size == 0) {
          return false;
        }
        if (eventSystem != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
          iVar3 = Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__IndexOf
                            (items,(eventSystem->fields).m_CurrentSelected,method_00);
          if (iVar3 < 0) {
            iVar3 = Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__FirstVisibleIndex
                              (items,backwards,method_01);
          }
          else {
            iVar1 = (items->fields)._size;
            iVar3 = ((int)(iVar3 + (uint)!backwards * 2 + -1) % iVar1 + iVar1) % iVar1;
          }
          pUVar4 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)items,iVar3,
                              (MethodInfo_395CF20 *)
                              MethodInfo_System_Collections_Generic_List_Selectable_get_Item);
          if (pUVar4 != (UnityEngine_UI_Selectable_o *)0x0) {
            pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
            UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_6d01480
                      (eventSystem,pUVar5,(MethodInfo *)0x0);
            pUVar4 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)items,iVar3,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_Selectable_get_Item);
            if (pUVar4 != (UnityEngine_UI_Selectable_o *)0x0) {
              pMVar6 = (MethodInfo *)0x0;
              pUVar5 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(pUVar5,12.0,pMVar6);
              return true;
            }
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusNavigation$$Items
// il2cpp: System_Collections_Generic_List_Selectable__o* Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Items (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x53a1990

System_Collections_Generic_List_Selectable__o *
Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Items(UnityEngine_GameObject_o *root,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_UI_Selectable_o *x;
  UnityEngine_UI_Selectable_array *pUVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  System_Collections_Generic_List_Selectable__o *__this;
  System_Object_array *pSVar6;
  ulong uVar7;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *x_00;
  ulong uVar8;
  
  if (Il2CppMethodInitialized_07542bb1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_GisketchFocusRing);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Selectable);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Selectable_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Selectable_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Selectable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542bb1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Selectable);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Selectable_ctor);
  if (root != (UnityEngine_GameObject_o *)0x0) {
    pSVar6 = UnityEngine_GameObject__GetComponentsInChildren_object_
                       (root,false,
                        (MethodInfo_353C0B0 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Selectable);
    if (pSVar6 != (System_Object_array *)0x0) {
      if (0 < (int)pSVar6->max_length) {
        uVar7 = pSVar6->max_length & 0xffffffff;
        uVar8 = 0;
        do {
          if (uVar7 <= uVar8) {
            ThrowIndexOutOfRangeException();
          }
          x = (UnityEngine_UI_Selectable_o *)pSVar6->m_Items[uVar8];
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar5) {
            if (x == (UnityEngine_UI_Selectable_o *)0x0) goto label_053a1ba5;
            bVar5 = (*(x->klass->vtable)._9_IsActive.methodPtr)(x,(x->klass->vtable)._9_IsActive.method);
            if (bVar5) {
              bVar5 = (*(x->klass->vtable)._24_IsInteractable.methodPtr)
                                (x,(x->klass->vtable)._24_IsInteractable.method);
              if ((bVar5) && ((x->fields).m_Navigation.fields.m_Mode != 0)) {
                x_00 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)x,
                                  (MethodInfo_34B0830 *)
                                  MethodInfo_UnityEngine_Component_GetComponent_GisketchFocusRing);
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar5 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
                ;
                pMVar4 = MethodInfo_System_Collections_Generic_List_Selectable_Add;
                if (bVar5) {
                  if (__this == (System_Collections_Generic_List_Selectable__o *)0x0) goto label_053a1ba5;
                  piVar1 = &(__this->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pUVar3 = (__this->fields)._items;
                  if (pUVar3 == (UnityEngine_UI_Selectable_array *)0x0) goto label_053a1ba5;
                  uVar2 = (__this->fields)._size;
                  if (uVar2 < (uint)pUVar3->max_length) {
                    (__this->fields)._size = uVar2 + 1;
                    pUVar3->m_Items[(int)uVar2] = x;
                    Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)x,
                               (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
                  }
                }
              }
            }
          }
          uVar8 = uVar8 + 1;
          uVar2 = (uint)pSVar6->max_length;
          uVar7 = (ulong)uVar2;
        } while ((long)uVar8 < (long)(int)uVar2);
      }
      return __this;
    }
  }
label_053a1ba5:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchFocusNavigation$$IndexOf
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__IndexOf (System_Collections_Generic_List_Selectable__o* items, UnityEngine_GameObject_o* selected, const MethodInfo* method);
// 0x53a1bb0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a1c6b: mov eax, 0xffffffff
// asm:   0x53a1c70: jmp 0x53a1c74

int32_t Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__IndexOf
                  (System_Collections_Generic_List_Selectable__o *items,UnityEngine_GameObject_o *selected,
                  MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Selectable_o *__this;
  UnityEngine_Object_o *x;
  int32_t index;
  
  if (Il2CppMethodInitialized_07542bb2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Selectable_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Selectable_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542bb2 = '\x01';
  }
  if (items == (System_Collections_Generic_List_Selectable__o *)0x0) {
label_053a1c83:
    ThrowNullReferenceException();
  }
  if (0 < (items->fields)._size) {
    index = 0;
    do {
      __this = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)items,index,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_Selectable_get_Item
                         );
      if (__this == (UnityEngine_UI_Selectable_o *)0x0) goto label_053a1c83;
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
    } while (index < (items->fields)._size);
  }
  return -1;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusNavigation$$FirstVisibleIndex
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__FirstVisibleIndex (System_Collections_Generic_List_Selectable__o* items, bool backwards, const MethodInfo* method);
// 0x53a1ca0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a1cfc: jmp 0x53a1d50
// asm:   0x53a1d13: lea r13, [rip + 0x1ef49f6]  ; MethodInfo_System_Collections_Generic_List_Selectable_get_Item
// asm:   0x53a1d1a: nop word ptr [rax + rax]

int32_t Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__FirstVisibleIndex
                  (System_Collections_Generic_List_Selectable__o *items,bool backwards,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Selectable_o *__this;
  UnityEngine_GameObject_o *focused;
  int iVar2;
  int32_t iVar3;
  MethodInfo *method_00;
  int iVar4;
  
  if (Il2CppMethodInitialized_07542bb3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Selectable_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Selectable_get_Item);
    Il2CppMethodInitialized_07542bb3 = '\x01';
  }
  if (backwards) {
    if (items == (System_Collections_Generic_List_Selectable__o *)0x0) {
label_053a1d6e:
      ThrowNullReferenceException();
    }
    iVar3 = (items->fields)._size + -1;
    iVar4 = -1;
    iVar2 = -1;
    if (iVar3 == -1) goto label_053a1d50;
  }
  else {
    if (items == (System_Collections_Generic_List_Selectable__o *)0x0) goto label_053a1d6e;
    iVar2 = (items->fields)._size;
    iVar3 = 0;
    iVar4 = 1;
    if (iVar2 == 0) goto label_053a1d50;
  }
  do {
    __this = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)items,iVar3,
                        (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_Selectable_get_Item);
    if (__this == (UnityEngine_UI_Selectable_o *)0x0) goto label_053a1d6e;
    method_00 = (MethodInfo *)0x0;
    focused = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    bVar1 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__IsVisible(focused,method_00);
    if (bVar1) {
      return iVar3;
    }
    iVar3 = iVar3 + iVar4;
  } while (iVar2 != iVar3);
label_053a1d50:
  iVar3 = 0;
  if (backwards) {
    iVar3 = (items->fields)._size + -1;
  }
  return iVar3;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusNavigation$$Mod
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Mod (int32_t value, int32_t count, const MethodInfo* method);
// 0x53a1c90

int32_t Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Mod(int32_t value,int32_t count,MethodInfo *method)

{
  return (value % count + count) % count;
}


