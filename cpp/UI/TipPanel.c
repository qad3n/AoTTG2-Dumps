// Type: UI.TipPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/TipPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/TipPanel.cs
// --------------------------------

// UI.TipPanel$$Setup
// il2cpp: void UI_TipPanel__Setup (UI_TipPanel_o* __this, const MethodInfo* method);
// 0x5d5bc40

void UI_TipPanel__Setup(UI_TipPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_Text_o *pUVar2;
  
  if (Il2CppMethodInitialized_07547f55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    Il2CppMethodInitialized_07547f55 = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Label",(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar1,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
      (__this->fields)._label = pUVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._label);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.TipPanel$$SetRandomTip
// il2cpp: void UI_TipPanel__SetRandomTip (UI_TipPanel_o* __this, const MethodInfo* method);
// 0x5d560c0

void UI_TipPanel__SetRandomTip(UI_TipPanel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  System_String_o *pSVar2;
  
  pUVar1 = (__this->fields)._label;
  pSVar2 = UI_TipPanel__RandomTipText(&(__this->fields).currentTipIndex,method);
  if (pUVar1 == (UnityEngine_UI_Text_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._75_set_text.methodPtr)(pUVar1,pSVar2,(pUVar1->klass->vtable)._75_set_text.method)
  ;
  return;
}


// UI.TipPanel$$RandomTipText
// il2cpp: System_String_o* UI_TipPanel__RandomTipText (int32_t* lastIndex, const MethodInfo* method);
// 0x5d5bcc0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d5bebb: lea rbp, [rip + 0x15905ee]  ; "Tips"
// asm:   0x5d5bec2: lea r14, [rip + 0x1571b5f]  ; ""
// asm:   0x5d5bec9: jmp 0x5d5bf07
// asm:   0x5d5bfd7: lea r14, [rip + 0x15904d2]  ; "Tips"
// asm:   0x5d5bfde: lea rbp, [rip + 0x1571a43]  ; ""
// asm:   0x5d5bfe5: nop word ptr cs:[rax + rax]

System_String_o * UI_TipPanel__RandomTipText(int32_t *lastIndex,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Int32_array *pSVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  int32_t iVar6;
  SimpleJSONFixed_JSONNode_o *a;
  System_Collections_Generic_List_int__o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  int iVar10;
  
  if (Il2CppMethodInitialized_07547f56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor_71950c8);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MainMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Notifications");
    il2cpp_codegen_initialize_runtime_metadata(&": ");
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Tips");
    Il2CppMethodInitialized_07547f56 = '\x01';
  }
  pSVar7 = TypeInfo_UI_MainMenu->static_fields->MainBackgroundInfo;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar5 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pSVar7 = TypeInfo_UI_MainMenu->static_fields->MainBackgroundInfo;
    if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05d5c23d;
    a = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                  (pSVar7,"Tips",(pSVar7->klass->vtable)._7_get_Item.method);
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar5 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
label_05d5bfb0:
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
    iVar6 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method);
    if (iVar6 == 0) goto label_05d5bfb0;
    iVar6 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
    System_Collections_Generic_List_int____ctor_3916240
              (__this,iVar6,(MethodInfo_3916240 *)MethodInfo_System_Collections_Generic_List_int_ctor_71950c8)
    ;
    iVar6 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method);
    if (0 < iVar6) {
      iVar10 = 0;
      if (__this == (System_Collections_Generic_List_int__o *)0x0) {
        do {
          pSVar7 = (*(a->klass->vtable)._5_get_Item.methodPtr)(a,iVar10,(a->klass->vtable)._5_get_Item.method)
          ;
          if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05d5c23d;
          pSVar8 = (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                             (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method);
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          bVar5 = UI_UIManager__HasLocale
                            ("Notifications","Tips",pSVar8,"",
                             (MethodInfo *)0x0);
          if (bVar5) goto label_05d5c23d;
          iVar10 = iVar10 + 1;
          iVar6 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method);
        } while (iVar10 < iVar6);
      }
      else {
        do {
          pSVar7 = (*(a->klass->vtable)._5_get_Item.methodPtr)(a,iVar10,(a->klass->vtable)._5_get_Item.method)
          ;
          if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05d5c23d;
          pSVar8 = (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                             (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method);
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          bVar5 = UI_UIManager__HasLocale
                            ("Notifications","Tips",pSVar8,"",
                             (MethodInfo *)0x0);
          pMVar4 = MethodInfo_System_Collections_Generic_List_int_Add;
          if (bVar5) {
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (__this->fields)._items;
            if (pSVar3 == (System_Int32_array *)0x0) goto label_05d5c23d;
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (__this->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = iVar10;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize
                        (__this,iVar10,(MethodInfo_3916AC0 *)pMVar4->klass->rgctx_data[0xe].method);
            }
          }
          iVar10 = iVar10 + 1;
          iVar6 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method);
        } while (iVar10 < iVar6);
      }
    }
    if (__this != (System_Collections_Generic_List_int__o *)0x0) {
      iVar10 = (__this->fields)._size;
      if (iVar10 == 0) {
        iVar6 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method);
        if (0 < iVar6) {
          iVar10 = 0;
          do {
            pMVar4 = MethodInfo_System_Collections_Generic_List_int_Add;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (__this->fields)._items;
            if (pSVar3 == (System_Int32_array *)0x0) goto label_05d5c23d;
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (__this->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = iVar10;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize
                        (__this,iVar10,(MethodInfo_3916AC0 *)pMVar4->klass->rgctx_data[0xe].method);
            }
            iVar10 = iVar10 + 1;
            iVar6 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method);
          } while (iVar10 < iVar6);
        }
        iVar10 = (__this->fields)._size;
      }
      if (1 < iVar10) {
        System_Collections_Generic_List_int___Remove
                  (__this,*lastIndex,
                   (MethodInfo_3918590 *)MethodInfo_System_Collections_Generic_List_int_Remove);
        iVar10 = (__this->fields)._size;
      }
      iVar6 = UnityEngine_Random__Range_690e2b0(0,iVar10,(MethodInfo *)0x0);
      iVar6 = System_Collections_Generic_List_int___get_Item
                        (__this,iVar6,
                         (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      *lastIndex = iVar6;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar8 = UI_UIManager__GetLocale
                         ("Notifications","Tips","Title",
                          "","",(MethodInfo *)0x0);
      pSVar7 = (*(a->klass->vtable)._5_get_Item.methodPtr)(a,*lastIndex,(a->klass->vtable)._5_get_Item.method)
      ;
      if (pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        pSVar9 = (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method);
        pSVar9 = UI_UIManager__GetLocale
                           ("Notifications","Tips",pSVar9,"",
                            "",(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
        }
        pSVar8 = Gisketch_Aottg2UI_Styling_GisketchArabicText__Join
                           (pSVar8,": ",pSVar9,(MethodInfo *)0x0);
        return pSVar8;
      }
    }
  }
label_05d5c23d:
  ThrowNullReferenceException();
}


// UI.TipPanel$$SetPressAnyKey
// il2cpp: void UI_TipPanel__SetPressAnyKey (UI_TipPanel_o* __this, const MethodInfo* method);
// 0x5d5c250

void UI_TipPanel__SetPressAnyKey(UI_TipPanel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07547f57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"PressAnyKey");
    Il2CppMethodInitialized_07547f57 = '\x01';
  }
  pUVar1 = (__this->fields)._label;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("PressAnyKey",(MethodInfo *)0x0);
  if (pUVar1 == (UnityEngine_UI_Text_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._75_set_text.methodPtr)(pUVar1,pSVar2,(pUVar1->klass->vtable)._75_set_text.method)
  ;
  return;
}


// UI.TipPanel$$.ctor
// il2cpp: void UI_TipPanel___ctor (UI_TipPanel_o* __this, const MethodInfo* method);
// 0x5d5c2d0

void UI_TipPanel___ctor(UI_TipPanel_o *__this,MethodInfo *method)

{
  (__this->fields).currentTipIndex = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


