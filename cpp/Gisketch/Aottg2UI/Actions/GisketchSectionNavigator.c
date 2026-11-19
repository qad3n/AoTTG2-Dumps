// Type: Gisketch.Aottg2UI.Actions.GisketchSectionNavigator
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchSectionNavigator.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator.<>c__DisplayClass31_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass31_0___ctor (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass31_0_o* __this, const MethodInfo* method);
// 0x53a8d80

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass31_0___ctor
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass31_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator.<>c__DisplayClass31_0$$<AnimateSection>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass31_0___AnimateSection_b__0 (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass31_0_o* __this, float value, const MethodInfo* method);
// 0x53a9200

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass31_0___AnimateSection_b__0
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass31_0_o *__this,float value
               ,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields).group;
  if (__this_00 == (UnityEngine_CanvasGroup_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_CanvasGroup__set_alpha(__this_00,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$get_ActiveSectionId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__get_ActiveSectionId (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x53a6f70

System_String_o *
Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__get_ActiveSectionId
          (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  System_String_array *pSVar3;
  
  pSVar3 = (__this->fields)._sectionIds;
  if (pSVar3 != (System_String_array *)0x0) {
    uVar1 = (__this->fields)._activeIndex;
    if ((-1 < (int)uVar1) && (uVar2 = (uint)pSVar3->max_length, (int)uVar1 < (int)uVar2)) {
      if (uVar2 <= uVar1) {
        ThrowIndexOutOfRangeException();
      }
      return pSVar3->m_Items[uVar1];
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Setup (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, System_String_array* sectionIds, System_String_o* mode, System_String_o* prefix, const MethodInfo* method);
// 0x53a6fc0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a6fdd: test rbx, rbx
// asm:   0x53a6fe0: je 0x53a7089
// asm:   0x53a6fe6: test r12, r12
// asm:   0x53a6fe9: je 0x53a70a6

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Setup
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,System_String_array *sectionIds,
               System_String_o *mode,System_String_o *prefix,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07542bec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"brush-side-panel");
    il2cpp_codegen_initialize_runtime_metadata(&"Separate");
    Il2CppMethodInitialized_07542bec = '\x01';
  }
  if (sectionIds == (System_String_array *)0x0) {
    sectionIds = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
  }
  if (__this == (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._sectionIds = sectionIds;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._sectionIds);
  bVar1 = System_String__IsNullOrEmpty(prefix,(MethodInfo *)0x0);
  if (bVar1) {
    prefix = "brush-side-panel";
  }
  (__this->fields)._prefix = prefix;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._prefix);
  bVar1 = System_String__Equals_52ffe30(mode,"Separate",5,(MethodInfo *)0x0);
  (__this->fields)._separate = bVar1;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$Select
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select (UnityEngine_GameObject_o* source, System_String_o* sectionId, bool instant, const MethodInfo* method);
// 0x53a70b0

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select
               (UnityEngine_GameObject_o *source,System_String_o *sectionId,bool instant,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)sectionId;
  if (Il2CppMethodInitialized_07542bed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542bed = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
  }
  __this = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindNavigator(source,method_00);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this == (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)0x0) {
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select_52a7280(__this,sectionId,instant,method);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$CaptureActiveSections
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__CaptureActiveSections (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x53a73d0

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__CaptureActiveSections
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Object_o *x;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  void *pvVar3;
  bool bVar4;
  System_Object_array *pSVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  if (Il2CppMethodInitialized_07542bee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_GisketchSectionNavigator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542bee = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    if ((root == (UnityEngine_GameObject_o *)0x0) ||
       (pSVar5 = UnityEngine_GameObject__GetComponentsInChildren_object_
                           (root,true,
                            (MethodInfo_353C0B0 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_GisketchSectionNavigator
                           ), pSVar5 == (System_Object_array *)0x0)) {
label_053a7620:
      ThrowNullReferenceException();
    }
    if (0 < (int)pSVar5->max_length) {
      uVar6 = pSVar5->max_length & 0xffffffff;
      uVar8 = 0;
      do {
        if (uVar6 <= uVar8) goto label_053a7634;
        x = (UnityEngine_Object_o *)pSVar5->m_Items[uVar8];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar4) {
          if (x == (UnityEngine_Object_o *)0x0) goto label_053a7620;
          bVar4 = System_String__IsNullOrEmpty((System_String_o *)(*(uint64_t *)((char *)x + 0x28)),(MethodInfo *)0x0);
          if (!bVar4) {
            if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
            }
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                     TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->static_fields->
                     PendingActiveSections;
            if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_053a7620;
            System_Collections_Generic_Dictionary_object__object___Remove
                      (pSVar2,(Il2CppObject *)(*(uint64_t *)((char *)x + 0x28)),
                       (MethodInfo_4AAED10 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_Remove);
            pvVar3 = (*(uint64_t *)((char *)x + 0x20));
            if (pvVar3 == (void *)0x0) {
label_053a75a0:
              puVar7 = *(undefined8 **)(g_data_07556758 + 0xb8);
            }
            else {
              uVar1 = (uint)(*(uint64_t *)((char *)x + 0x58));
              if (((int)uVar1 < 0) || ((int)*(uint *)((long)pvVar3 + 0x18) <= (int)uVar1)) goto label_053a75a0;
              if (*(uint *)((long)pvVar3 + 0x18) <= uVar1) goto label_053a7634;
              puVar7 = (undefined8 *)((long)pvVar3 + (ulong)uVar1 * 8 + 0x20);
            }
            bVar4 = System_String__IsNullOrEmpty((System_String_o *)*puVar7,(MethodInfo *)0x0);
            if (!bVar4) {
              if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
              }
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->static_fields->
                       PendingActiveSections;
              pvVar3 = (*(uint64_t *)((char *)x + 0x20));
              if (pvVar3 == (void *)0x0) {
label_053a74a2:
                puVar7 = *(undefined8 **)(g_data_07556758 + 0xb8);
              }
              else {
                uVar1 = (uint)(*(uint64_t *)((char *)x + 0x58));
                if (((int)uVar1 < 0) || ((int)*(uint *)((long)pvVar3 + 0x18) <= (int)uVar1))
                goto label_053a74a2;
                if (*(uint *)((long)pvVar3 + 0x18) <= uVar1) {
label_053a7634:
                  ThrowIndexOutOfRangeException();
                }
                puVar7 = (undefined8 *)((long)pvVar3 + (ulong)uVar1 * 8 + 0x20);
              }
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_053a7620;
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (pSVar2,(Il2CppObject *)(*(uint64_t *)((char *)x + 0x28)),(Il2CppObject *)*puVar7,
                         (MethodInfo_4AAD4C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
            }
          }
        }
        uVar8 = uVar8 + 1;
        uVar1 = (uint)pSVar5->max_length;
        uVar6 = (ulong)uVar1;
      } while ((long)uVar8 < (long)(int)uVar1);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$Select
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, System_String_o* sectionId, bool instant, const MethodInfo* method);
// 0x53a7280

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select_52a7280
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,System_String_o *sectionId,
               bool instant,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_RectTransform_array *pUVar2;
  bool bVar3;
  System_String_array *pSVar4;
  MethodInfo *pMVar5;
  undefined7 in_register_00000011;
  MethodInfo *extraout_RDX;
  uint uVar6;
  ulong uVar7;
  MethodInfo *method_00;
  
  pMVar5 = (MethodInfo *)CONCAT71(in_register_00000011,instant);
  if (Il2CppMethodInitialized_07542bef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542bef = '\x01';
    pMVar5 = extraout_RDX;
  }
  method_00 = (MethodInfo *)sectionId;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__EnsureSectionContent(__this,sectionId,pMVar5);
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve(__this,method_00);
  pSVar4 = (__this->fields)._sectionIds;
  if (pSVar4 != (System_String_array *)0x0) {
    uVar7 = 0;
    do {
      uVar6 = (uint)pSVar4->max_length;
      if ((long)(int)uVar6 <= (long)uVar7) {
        return;
      }
      if (uVar6 <= uVar7) {
label_053a73bf:
        ThrowIndexOutOfRangeException();
      }
      pMVar5 = (MethodInfo *)0x0;
      bVar3 = System_String__Equals_52ffe30(pSVar4->m_Items[uVar7],sectionId,5,(MethodInfo *)0x0);
      if (bVar3) {
        uVar6 = (uint)uVar7;
        if ((int)uVar6 < 0) {
          return;
        }
        if ((__this->fields)._activeIndex == uVar6) {
          return;
        }
        Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive
                  (__this,uVar6,(__this->fields)._separate,pMVar5);
        if ((__this->fields)._separate == false) {
          pUVar2 = (__this->fields)._sections;
          if (pUVar2 != (UnityEngine_RectTransform_array *)0x0) {
            if (uVar6 < (uint)pUVar2->max_length) {
              Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ScrollTo
                        (__this,pUVar2->m_Items[uVar7],instant,pMVar5);
              return;
            }
            goto label_053a73bf;
          }
        }
        else {
          pUVar1 = (__this->fields)._scroll;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          pMVar5 = (MethodInfo *)0x0;
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar3) {
            return;
          }
          Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__RefreshSeparateLayout(__this,pMVar5);
          pUVar1 = (__this->fields)._scroll;
          if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
            UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition(pUVar1,1.0,(MethodInfo *)0x0);
            return;
          }
        }
        break;
      }
      uVar7 = uVar7 + 1;
      pSVar4 = (__this->fields)._sectionIds;
    } while (pSVar4 != (System_String_array *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$Start
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Start (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x53a8250
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a8296: jmp 0x53a82e4

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Start
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  MethodInfo *value;
  System_String_array *pSVar3;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  int32_t index;
  MethodInfo *pMVar4;
  MethodInfo *method_01;
  
  value = (MethodInfo *)
          Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ConsumePendingActiveSection(__this,method);
  pMVar4 = (MethodInfo *)0x0;
  method_01 = (MethodInfo *)0x0;
  bVar2 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
  if (!bVar2) {
    method_01 = value;
    Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__EnsureSectionContent
              (__this,(System_String_o *)value,method_00);
  }
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve(__this,method_01);
  bVar2 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
  if (bVar2) {
label_053a8291:
    index = (int32_t)pMVar4;
    if (__this != (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)0x0) {
label_053a82ee:
      if (index < 1) {
        index = 0;
      }
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive(__this,index,false,in_RCX);
      return;
    }
  }
  else {
    pSVar3 = (__this->fields)._sectionIds;
    if (pSVar3 != (System_String_array *)0x0) {
      pMVar4 = (MethodInfo *)0x0;
      do {
        uVar1 = (uint)pSVar3->max_length;
        in_RCX = (MethodInfo *)(ulong)uVar1;
        if ((long)(int)uVar1 <= (long)pMVar4) {
          index = -1;
          goto label_053a82ee;
        }
        if (in_RCX <= pMVar4) {
          ThrowIndexOutOfRangeException();
        }
        in_RCX = (MethodInfo *)0x0;
        bVar2 = System_String__Equals_52ffe30
                          (pSVar3->m_Items[(long)pMVar4],(System_String_o *)value,5,(MethodInfo *)0x0);
        if (bVar2) goto label_053a8291;
        pMVar4 = (MethodInfo *)((long)&pMVar4->methodPointer + 1);
        pSVar3 = (__this->fields)._sectionIds;
      } while (pSVar3 != (System_String_array *)0x0);
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__LateUpdate (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x53a8400

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__LateUpdate
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  int32_t index;
  MethodInfo *in_RCX;
  
  if ((__this->fields)._separate == false) {
    Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve(__this,method);
    index = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SectionAtViewportTop(__this,method);
    if ((-1 < index) && (index != (__this->fields)._activeIndex)) {
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive(__this,index,false,in_RCX);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__OnDestroy (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x53a8750

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__OnDestroy
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  
  t = (__this->fields)._scrollTween;
  if (t == (DG_Tweening_Tween_o *)0x0) {
    return;
  }
  DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$Resolve
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x53a7770
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a78ee: nop 

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_array **targetAddress;
  uint uVar1;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  System_String_o *pSVar4;
  UnityEngine_UI_ScrollRect_o *pUVar5;
  UnityEngine_RectTransform_array *pUVar6;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *pGVar7;
  System_String_array *pSVar8;
  UnityEngine_RectTransform_o *pUVar9;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *pGVar10;
  ulong uVar11;
  
  if (Il2CppMethodInitialized_07542bf0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_ComponentInNamedChild_GisketchBrushButtonFeed
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_ComponentInNamedChild_RectTransform
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_ComponentInNamedChild_ScrollRect
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform_array);
    il2cpp_codegen_initialize_runtime_metadata(&"brush-side-panel-button-");
    il2cpp_codegen_initialize_runtime_metadata(&"-scroll");
    Il2CppMethodInitialized_07542bf0 = '\x01';
  }
  bVar2 = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__IsResolved(__this,method);
  if (bVar2) {
    return;
  }
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat_52f0320((__this->fields)._prefix,"-scroll",(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    }
    pUVar5 = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild_object_
                       (pUVar3,pSVar4,
                        (MethodInfo_353CC30 *)
                        MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_ComponentInNamedChild_ScrollRect
                       );
    (__this->fields)._scroll = pUVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._scroll);
    pSVar8 = (__this->fields)._sectionIds;
    if (pSVar8 != (System_String_array *)0x0) {
      pUVar6 = (UnityEngine_RectTransform_array *)
               SZArrayNew(TypeInfo_UnityEngine_RectTransform_array,(uint32_t)pSVar8->max_length);
      targetAddress = &(__this->fields)._sections;
      (__this->fields)._sections = pUVar6;
      Il2CppCodeGenWriteBarrier(targetAddress);
      pSVar8 = (__this->fields)._sectionIds;
      if (pSVar8 != (System_String_array *)0x0) {
        pGVar7 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)
                 SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array,
                            (uint32_t)pSVar8->max_length);
        (__this->fields)._buttons = pGVar7;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._buttons);
        pSVar8 = (__this->fields)._sectionIds;
        if (pSVar8 != (System_String_array *)0x0) {
          uVar11 = 0;
          do {
            uVar1 = (uint)pSVar8->max_length;
            if ((long)(int)uVar1 <= (long)uVar11) {
              return;
            }
            if (uVar1 <= uVar11) {
label_053a7a17:
              ThrowIndexOutOfRangeException();
            }
            pUVar6 = *targetAddress;
            pSVar4 = pSVar8->m_Items[uVar11];
            if (Il2CppMethodInitialized_07542bf8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&"-section-");
              Il2CppMethodInitialized_07542bf8 = '\x01';
            }
            pSVar4 = System_String__Concat_5301f10
                               ((__this->fields)._prefix,"-section-",pSVar4,(MethodInfo *)0x0);
            if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
            }
            pUVar9 = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild_object_
                               (pUVar3,pSVar4,
                                (MethodInfo_353CC30 *)
                                MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_ComponentInNamedChild_RectTransform
                               );
            if (pUVar6 == (UnityEngine_RectTransform_array *)0x0) break;
            if ((uint)pUVar6->max_length <= uVar11) goto label_053a7a17;
            pUVar6->m_Items[uVar11] = pUVar9;
            Il2CppCodeGenWriteBarrier(pUVar6->m_Items + uVar11);
            pSVar8 = (__this->fields)._sectionIds;
            if (pSVar8 == (System_String_array *)0x0) break;
            if ((uint)pSVar8->max_length <= uVar11) goto label_053a7a17;
            pGVar7 = (__this->fields)._buttons;
            pSVar4 = System_String__Concat_52f0320
                               ("brush-side-panel-button-",pSVar8->m_Items[uVar11],(MethodInfo *)0x0);
            pGVar10 = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild_object_
                                (pUVar3,pSVar4,
                                 (MethodInfo_353CC30 *)
                                 MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_ComponentInNamedChild_GisketchBrushButtonFeed
                                );
            if (pGVar7 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0) break;
            if ((uint)pGVar7->max_length <= uVar11) goto label_053a7a17;
            pGVar7->m_Items[uVar11] = pGVar10;
            Il2CppCodeGenWriteBarrier(pGVar7->m_Items + uVar11);
            uVar11 = uVar11 + 1;
            pSVar8 = (__this->fields)._sectionIds;
          } while (pSVar8 != (System_String_array *)0x0);
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$IsResolved
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__IsResolved (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x53a8770
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a8899: xor r14d, r14d
// asm:   0x53a889c: jmp 0x53a88a5

bool Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__IsResolved
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *x;
  UnityEngine_RectTransform_array *pUVar1;
  UnityEngine_RectTransform_o *x_00;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *pGVar2;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *x_01;
  bool bVar3;
  System_String_array *pSVar4;
  ulong uVar5;
  long lVar6;
  
  if (Il2CppMethodInitialized_07542bf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542bf1 = '\x01';
  }
  x = (__this->fields)._scroll;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((bVar3) || ((__this->fields)._sections == (UnityEngine_RectTransform_array *)0x0)) ||
     ((__this->fields)._buttons == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0)) {
    return false;
  }
  pSVar4 = (__this->fields)._sectionIds;
  if (pSVar4 != (System_String_array *)0x0) {
    uVar5 = 0;
    do {
      lVar6 = (long)(int)pSVar4->max_length;
      if (lVar6 <= (long)uVar5) {
label_053a889e:
        return lVar6 <= (long)uVar5;
      }
      pUVar1 = (__this->fields)._sections;
      if (pUVar1 == (UnityEngine_RectTransform_array *)0x0) break;
      if ((uint)pUVar1->max_length <= uVar5) {
label_053a88b2:
        ThrowIndexOutOfRangeException();
      }
      x_00 = pUVar1->m_Items[uVar5];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) goto label_053a889e;
      pGVar2 = (__this->fields)._buttons;
      if (pGVar2 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0) break;
      if ((uint)pGVar2->max_length <= uVar5) goto label_053a88b2;
      x_01 = pGVar2->m_Items[uVar5];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) goto label_053a889e;
      uVar5 = uVar5 + 1;
      pSVar4 = (__this->fields)._sectionIds;
    } while (pSVar4 != (System_String_array *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$SetActive
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, int32_t index, bool animate, const MethodInfo* method);
// 0x53a7a90
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a7bd9: nop dword ptr [rax]
// asm:   0x53a7c57: jmp 0x53a7cf1

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,int32_t index,bool animate,
               MethodInfo *method)

{
  uint uVar1;
  UnityEngine_RectTransform_array *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *pGVar4;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *x;
  bool bVar5;
  System_String_array *pSVar6;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  ulong uVar7;
  
  if (Il2CppMethodInitialized_07542bf2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542bf2 = '\x01';
  }
  if (index < 0) {
    return;
  }
  pSVar6 = (__this->fields)._sectionIds;
  if (pSVar6 != (System_String_array *)0x0) {
    if ((int)pSVar6->max_length <= index) {
      return;
    }
    (__this->fields)._activeIndex = index;
    uVar7 = 0;
    do {
      if ((long)(int)pSVar6->max_length <= (long)uVar7) {
        if (!animate) {
          return;
        }
        pUVar2 = (__this->fields)._sections;
        if (pUVar2 == (UnityEngine_RectTransform_array *)0x0) {
          return;
        }
        if ((uint)index < (uint)pUVar2->max_length) {
          pUVar3 = pUVar2->m_Items[index];
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          method_00 = (MethodInfo *)0x0;
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar5) {
            return;
          }
          pUVar2 = (__this->fields)._sections;
          if (pUVar2 == (UnityEngine_RectTransform_array *)0x0) break;
          if ((uint)index < (uint)pUVar2->max_length) {
            pUVar3 = pUVar2->m_Items[index];
            if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
            }
            Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__AnimateSection(pUVar3,method_00);
            return;
          }
        }
label_053a7cf6:
        ThrowIndexOutOfRangeException();
      }
      pUVar2 = (__this->fields)._sections;
      if ((pUVar2 != (UnityEngine_RectTransform_array *)0x0) &&
         (uVar1 = (uint)pUVar2->max_length, (long)uVar7 < (long)(int)uVar1)) {
        if (uVar1 <= uVar7) goto label_053a7cf6;
        pUVar3 = pUVar2->m_Items[uVar7];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((bVar5) && ((__this->fields)._separate != false)) {
          pUVar2 = (__this->fields)._sections;
          if (pUVar2 == (UnityEngine_RectTransform_array *)0x0) break;
          if ((uint)pUVar2->max_length <= uVar7) goto label_053a7cf6;
          if ((pUVar2->m_Items[uVar7] == (UnityEngine_RectTransform_o *)0x0) ||
             (__this_00 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar2->m_Items[uVar7],(MethodInfo *)0x0),
             __this_00 == (UnityEngine_GameObject_o *)0x0)) break;
          UnityEngine_GameObject__SetActive(__this_00,(uint)index == uVar7,(MethodInfo *)0x0);
        }
      }
      pGVar4 = (__this->fields)._buttons;
      if ((pGVar4 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0) &&
         (uVar1 = (uint)pGVar4->max_length, (long)uVar7 < (long)(int)uVar1)) {
        if (uVar1 <= uVar7) goto label_053a7cf6;
        x = pGVar4->m_Items[uVar7];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar5) {
          pGVar4 = (__this->fields)._buttons;
          if (pGVar4 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0) break;
          if ((uint)pGVar4->max_length <= uVar7) goto label_053a7cf6;
          if (pGVar4->m_Items[uVar7] == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) break;
          Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetForcedActive
                    (pGVar4->m_Items[uVar7],(uint)index == uVar7,(MethodInfo *)0x0);
        }
      }
      uVar7 = uVar7 + 1;
      pSVar6 = (__this->fields)._sectionIds;
    } while (pSVar6 != (System_String_array *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$RefreshSeparateLayout
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__RefreshSeparateLayout (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x53a8170

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__RefreshSeparateLayout
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  bool bVar3;
  UnityEngine_GameObject_o *root;
  
  if (Il2CppMethodInitialized_07542bf3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542bf3 = '\x01';
  }
  pUVar1 = (__this->fields)._scroll;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  pUVar1 = (__this->fields)._scroll;
  if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    pUVar2 = (pUVar1->fields).m_Content;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      return;
    }
    pUVar1 = (__this->fields)._scroll;
    if ((pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
       (pUVar2 = (pUVar1->fields).m_Content, pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
      root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0(root,2,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$ScrollTo
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ScrollTo (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, UnityEngine_RectTransform_o* target, bool instant, const MethodInfo* method);
// 0x53a7d00

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ScrollTo
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,
               UnityEngine_RectTransform_o *target,bool instant,MethodInfo *method)

{
  DG_Tweening_Tween_o **targetAddress;
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  bool bVar3;
  UnityEngine_GameObject_o *root;
  DG_Tweening_Core_DOGetter_float__o *__this_00;
  DG_Tweening_Core_DOSetter_float__o *__this_01;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  Il2CppObject *t_00;
  DG_Tweening_Tween_o *pDVar4;
  MethodInfo *method_00;
  float fVar5;
  float fVar6;
  UnityEngine_Rect_o UVar7;
  float fStack_64;
  float fStack_54;
  UnityEngine_Bounds_o UStack_48;
  
  if (Il2CppMethodInitialized_07542bf4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_Core_DOGetter_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_Core_DOSetter_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_DOTween);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_ScrollTo_b__24_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_ScrollTo_b__24_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_float_float_FloatOptions);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_TweenerCore_float_float_FloatOptions)
    ;
    Il2CppMethodInitialized_07542bf4 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    pUVar1 = (__this->fields)._scroll;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      pUVar1 = (__this->fields)._scroll;
      if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
        pUVar2 = (pUVar1->fields).m_Viewport;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          return;
        }
        pUVar1 = (__this->fields)._scroll;
        if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
          pUVar2 = (pUVar1->fields).m_Content;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar3) {
            return;
          }
          pUVar1 = (__this->fields)._scroll;
          if ((pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
             (pUVar2 = (pUVar1->fields).m_Content, pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
            root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
            if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
            }
            method_00 = (MethodInfo *)0x2;
            Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0(root,2,(MethodInfo *)0x0);
            fVar5 = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__MaxScrollY(__this,method_00);
            if (fVar5 <= 0.01) {
              return;
            }
            pUVar1 = (__this->fields)._scroll;
            if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
              pUVar2 = (pUVar1->fields).m_Viewport;
              if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
              }
              UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                        (&UStack_48,(UnityEngine_Transform_o *)pUVar2,(UnityEngine_Transform_o *)target,
                         (MethodInfo *)0x0);
              pUVar1 = (__this->fields)._scroll;
              if ((pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
                 (pUVar2 = (pUVar1->fields).m_Viewport, pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
                UVar7 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
                if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                }
                pUVar1 = (__this->fields)._scroll;
                if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                  fVar6 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(pUVar1,(MethodInfo *)0x0);
                  pUVar1 = (__this->fields)._scroll;
                  if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                    fStack_54 = UVar7.fields.m_Height;
                    fStack_64 = UVar7.fields.m_YMin;
                    fVar6 = fVar6 - ((fStack_54 + fStack_64) -
                                    (UStack_48.fields.m_Center.fields.y + UStack_48.fields.m_Extents.fields.y)
                                    ) / fVar5;
                    fVar5 = 1.0;
                    if (fVar6 <= 1.0) {
                      fVar5 = fVar6;
                    }
                    fVar5 = (float)(-(uint)(0.0 <= fVar6) & (uint)fVar5);
                    (*(pUVar1->klass->vtable)._41_StopMovement.methodPtr)
                              (pUVar1,(pUVar1->klass->vtable)._41_StopMovement.method);
                    pDVar4 = (__this->fields)._scrollTween;
                    if (pDVar4 != (DG_Tweening_Tween_o *)0x0) {
                      DG_Tweening_TweenExtensions__Kill(pDVar4,false,(MethodInfo *)0x0);
                    }
                    if (!instant) {
                      if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
                      }
                      bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                      if (bVar3) {
                        targetAddress = &(__this->fields)._scrollTween;
                        __this_00 = il2cpp_codegen_object_new
                                              ((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOGetter_float);
                        DG_Tweening_Core_DOGetter_float____ctor
                                  (__this_00,(Il2CppObject *)__this,
                                   (intptr_t)
                                   MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_ScrollTo_b__24_0
                                   ,(MethodInfo_494D0C0 *)0x0);
                        __this_01 = il2cpp_codegen_object_new
                                              ((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOSetter_float);
                        DG_Tweening_Core_DOSetter_float____ctor
                                  (__this_01,(Il2CppObject *)__this,
                                   (intptr_t)
                                   MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_ScrollTo_b__24_1
                                   ,(MethodInfo_494E270 *)0x0);
                        if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
                        }
                        t = DG_Tweening_DOTween__To(__this_00,__this_01,fVar5,0.22,(MethodInfo *)0x0);
                        t_00 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                         ((Il2CppObject *)t,9,
                                          (MethodInfo_36B0160 *)
                                          MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_float_float_FloatOptions
                                         );
                        pDVar4 = (DG_Tweening_Tween_o *)
                                 DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                           (t_00,true,
                                            (MethodInfo_36B08F0 *)
                                            MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_TweenerCore_float_float_FloatOptions
                                           );
                        *targetAddress = pDVar4;
                        Il2CppCodeGenWriteBarrier(targetAddress);
                        pDVar4 = *targetAddress;
                        if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).
                            cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init
                                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
                        }
                        Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar4,false,(MethodInfo *)0x0)
                        ;
                        return;
                      }
                    }
                    pUVar1 = (__this->fields)._scroll;
                    if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                      UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
                                (pUVar1,fVar5,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$SectionAtViewportTop
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SectionAtViewportTop (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x53a8430
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a86aa: subss xmm2, xmm3
// asm:   0x53a86ae: ucomiss xmm2, dword ptr [rsp + 0x10]
// asm:   0x53a86b3: ja 0x53a8590
// asm:   0x53a86b9: jmp 0x53a86f1

int32_t Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SectionAtViewportTop
                  (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_ScrollRect_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_RectTransform_o *root;
  float fVar4;
  bool bVar5;
  UnityEngine_RectTransform_array *pUVar6;
  UnityEngine_GameObject_o *__this_00;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Rect_o UVar11;
  float local_8c;
  float fStack_84;
  float fStack_74;
  UnityEngine_Bounds_o local_48;
  
  if (Il2CppMethodInitialized_07542bf5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07542bf5 = '\x01';
  }
  pUVar2 = (__this->fields)._scroll;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return -1;
  }
  pUVar2 = (__this->fields)._scroll;
  if (pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    pUVar3 = (pUVar2->fields).m_Viewport;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      return -1;
    }
    if ((__this->fields)._sections == (UnityEngine_RectTransform_array *)0x0) {
      return -1;
    }
    pUVar2 = (__this->fields)._scroll;
    if ((pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
       (pUVar3 = (pUVar2->fields).m_Viewport, pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
      UVar11 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      pUVar6 = (__this->fields)._sections;
      if (pUVar6 != (UnityEngine_RectTransform_array *)0x0) {
        fStack_74 = UVar11.fields.m_YMin;
        fStack_84 = UVar11.fields.m_Height;
        local_8c = 3.4028235e+38;
        uVar8 = 0xffffffff;
        uVar7 = 0;
        do {
          uVar1 = (uint)pUVar6->max_length;
          if ((long)(int)uVar1 <= (long)uVar7) {
            if ((int)uVar8 < 0) {
              return (__this->fields)._activeIndex;
            }
            return (int)uVar8;
          }
          if (uVar1 <= uVar7) {
            ThrowIndexOutOfRangeException();
          }
          pUVar3 = pUVar6->m_Items[uVar7];
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar5 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar5) {
            if ((pUVar3 == (UnityEngine_RectTransform_o *)0x0) ||
               (__this_00 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
               __this_00 == (UnityEngine_GameObject_o *)0x0)) break;
            bVar5 = UnityEngine_GameObject__get_activeInHierarchy(__this_00,(MethodInfo *)0x0);
            if (bVar5) {
              pUVar2 = (__this->fields)._scroll;
              if (pUVar2 == (UnityEngine_UI_ScrollRect_o *)0x0) break;
              root = (pUVar2->fields).m_Viewport;
              if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
              }
              UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                        (&local_48,(UnityEngine_Transform_o *)root,(UnityEngine_Transform_o *)pUVar3,
                         (MethodInfo *)0x0);
              fVar4 = local_48.fields.m_Extents.fields.y;
              fVar10 = local_48.fields.m_Center.fields.y;
              if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
              }
              fVar9 = fVar10 + fVar4;
              if (fStack_74 <= fVar9) {
                if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                }
                if ((fVar10 - fVar4 <= fStack_84 + fStack_74) &&
                   (fVar10 = ABS(fVar9 - (fStack_84 + fStack_74 + -24.0)), fVar10 < local_8c)) {
                  uVar8 = uVar7 & 0xffffffff;
                  local_8c = fVar10;
                }
              }
            }
          }
          uVar7 = uVar7 + 1;
          pUVar6 = (__this->fields)._sections;
        } while (pUVar6 != (UnityEngine_RectTransform_array *)0x0);
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$MaxScrollY
// il2cpp: float Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__MaxScrollY (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x53a8b60

float Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__MaxScrollY
                (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  float fVar3;
  UnityEngine_Rect_o UVar4;
  UnityEngine_Rect_o UVar5;
  float fStack_14;
  
  if (Il2CppMethodInitialized_07542bf6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07542bf6 = '\x01';
  }
  pUVar1 = (__this->fields)._scroll;
  if ((pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
     (pUVar2 = (pUVar1->fields).m_Content, pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar4 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    pUVar1 = (__this->fields)._scroll;
    if ((pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
       (pUVar2 = (pUVar1->fields).m_Viewport, pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
      UVar5 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
      fStack_14 = UVar4.fields.m_Height;
      fStack_14 = fStack_14 - UVar5.fields.m_Height;
      fVar3 = 0.0;
      if (0.0 <= fStack_14) {
        fVar3 = fStack_14;
      }
      return fVar3;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$IndexOf
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__IndexOf (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, System_String_o* sectionId, const MethodInfo* method);
// 0x53a7a20

int32_t Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__IndexOf
                  (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,System_String_o *sectionId,
                  MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_String_array *pSVar3;
  ulong uVar4;
  
  pSVar3 = (__this->fields)._sectionIds;
  if (pSVar3 != (System_String_array *)0x0) {
    uVar4 = 0;
    do {
      uVar1 = (uint)pSVar3->max_length;
      if ((long)(int)uVar1 <= (long)uVar4) {
        uVar4 = 0xffffffff;
label_053a7a7e:
        return (int32_t)uVar4;
      }
      if (uVar1 <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      bVar2 = System_String__Equals_52ffe30(pSVar3->m_Items[uVar4],sectionId,5,(MethodInfo *)0x0);
      if (bVar2) goto label_053a7a7e;
      uVar4 = uVar4 + 1;
      pSVar3 = (__this->fields)._sectionIds;
    } while (pSVar3 != (System_String_array *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$ConsumePendingActiveSection
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ConsumePendingActiveSection (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x53a8310

System_String_o *
Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ConsumePendingActiveSection
          (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o *local_18;
  
  if (Il2CppMethodInitialized_07542bf7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    Il2CppMethodInitialized_07542bf7 = '\x01';
  }
  local_18 = (System_String_o *)0x0;
  bVar2 = System_String__IsNullOrEmpty((__this->fields)._prefix,(MethodInfo *)0x0);
  pSVar3 = (System_String_o *)0x0;
  if (!bVar2) {
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->static_fields->PendingActiveSections
    ;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_053a83f5:
      ThrowNullReferenceException();
    }
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar1,(Il2CppObject *)(__this->fields)._prefix,(Il2CppObject **)&local_18,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    if (bVar2) {
      if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->static_fields->
               PendingActiveSections;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_053a83f5;
      System_Collections_Generic_Dictionary_object__object___Remove
                (pSVar1,(Il2CppObject *)(__this->fields)._prefix,
                 (MethodInfo_4AAED10 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Remove);
      pSVar3 = local_18;
    }
    else {
      pSVar3 = (System_String_o *)0x0;
    }
  }
  return pSVar3;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$SectionName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SectionName (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, System_String_o* sectionId, const MethodInfo* method);
// 0x53a88c0

System_String_o *
Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SectionName
          (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,System_String_o *sectionId,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07542bf8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-section-");
    Il2CppMethodInitialized_07542bf8 = '\x01';
  }
  pSVar1 = System_String__Concat_5301f10
                     ((__this->fields)._prefix,"-section-",sectionId,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$EnsureSectionContent
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__EnsureSectionContent (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, System_String_o* sectionId, const MethodInfo* method);
// 0x53a7640

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__EnsureSectionContent
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,System_String_o *sectionId,
               MethodInfo *method)

{
  System_String_o *prefix;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  bool bVar3;
  UnityEngine_Transform_o *pUVar4;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar5;
  ulong uVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  long lVar7;
  
  if (Il2CppMethodInitialized_07542bf9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSectionContentProvider);
    Il2CppMethodInitialized_07542bf9 = '\x01';
  }
  if ((__this->fields)._separate != false) {
    bVar3 = System_String__IsNullOrEmpty(sectionId,(MethodInfo *)0x0);
    if (!bVar3) {
      pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar4 = UnityEngine_Transform__get_parent(pUVar4,(MethodInfo *)0x0);
      prefix = (__this->fields)._prefix;
      method_00 = extraout_RDX;
      if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
        method_00 = extraout_RDX_00;
      }
      obj = (Il2CppObject *)
            Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindSectionContentProvider
                      (pUVar4,prefix,method_00);
      if (obj != (Il2CppObject *)0x0) {
        pIVar1 = obj->klass;
        uVar6 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar6 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar7 = 0;
          do {
            if (*(Gisketch_Aottg2UI_Actions_IGisketchSectionContentProvider_c **)
                 ((long)&pIVar2->interfaceType + lVar7) ==
                TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSectionContentProvider) {
              pVVar5 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar7) + 1);
              goto label_053a774a;
            }
            lVar7 = lVar7 + 0x10;
          } while (uVar6 * 0x10 != lVar7);
        }
        pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)
                                TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSectionContentProvider,1);
label_053a774a:
        (*pVVar5->methodPtr)(obj,sectionId,pVVar5->method);
        return;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$AnimateSection
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__AnimateSection (UnityEngine_RectTransform_o* section, const MethodInfo* method);
// 0x53a8910

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__AnimateSection
               (UnityEngine_RectTransform_o *section,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass31_0_o *__this;
  UnityEngine_CanvasGroup_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  DG_Tweening_TweenCallback_float__o *__this_01;
  DG_Tweening_Tweener_o *pDVar3;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass31_0_Fields *targetAddress;
  
  if (Il2CppMethodInitialized_07542bfa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback_float);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_c__DisplayClass31_0_AnimateSection_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_c__DisplayClass31_0);
    Il2CppMethodInitialized_07542bfa = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_c__DisplayClass31_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  }
  else {
    bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  }
  if (!bVar1) {
    return;
  }
  if ((section != (UnityEngine_RectTransform_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)section,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup),
     __this != (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass31_0_o *)0x0)) {
    targetAddress = &__this->fields;
    (__this->fields).group = pUVar2;
    Il2CppCodeGenWriteBarrier(&targetAddress->group);
    pUVar2 = (__this->fields).group;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)section,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_053a8b5a;
      pUVar2 = UnityEngine_GameObject__AddComponent_object_
                         (__this_00,
                          (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
      targetAddress->group = pUVar2;
      Il2CppCodeGenWriteBarrier(&targetAddress->group);
    }
    if (targetAddress->group != (UnityEngine_CanvasGroup_o *)0x0) {
      UnityEngine_CanvasGroup__set_alpha(targetAddress->group,0.0,(MethodInfo *)0x0);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
      DG_Tweening_TweenCallback_float____ctor
                (__this_01,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_c__DisplayClass31_0_AnimateSection_b__0
                 ,(MethodInfo_4293C90 *)0x0);
      pDVar3 = DG_Tweening_DOVirtual__Float(0.0,1.0,0.14,__this_01,(MethodInfo *)0x0);
      pDVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                         ((Il2CppObject *)pDVar3,9,
                          (MethodInfo_36B0160 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener
                         );
      pDVar3 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                         ((Il2CppObject *)pDVar3,true,
                          (MethodInfo_36B08F0 *)
                          MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
      }
      Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track
                ((DG_Tweening_Tween_o *)pDVar3,false,(MethodInfo *)0x0);
      return;
    }
  }
label_053a8b5a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$FindNavigator
// il2cpp: Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindNavigator (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x53a7160
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a71e9: nop dword ptr [rax]
// asm:   0x53a725e: jmp 0x53a71f0

Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *
Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindNavigator
          (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  UnityEngine_Transform_o *__this;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *x;
  
  if (Il2CppMethodInitialized_07542bfb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_GisketchSectionNavigator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542bfb = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this = (UnityEngine_Transform_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (source == (UnityEngine_GameObject_o *)0x0) goto label_053a726f;
    __this = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0);
  }
  uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  while( true ) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      return (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)0x0;
    }
    if (__this == (UnityEngine_Transform_o *)0x0) break;
    x = UnityEngine_Component__GetComponentInChildren_object_
                  ((UnityEngine_Component_o *)__this,true,
                   (MethodInfo_34B0B60 *)
                   MethodInfo_UnityEngine_Component_GetComponentInChildren_GisketchSectionNavigator);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      return x;
    }
    __this = UnityEngine_Transform__get_parent(__this,(MethodInfo *)0x0);
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
label_053a726f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$FindSectionContentProvider
// il2cpp: Gisketch_Aottg2UI_Actions_IGisketchSectionContentProvider_o* Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindSectionContentProvider (UnityEngine_Transform_o* root, System_String_o* prefix, const MethodInfo* method);
// 0x53a8bf0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a8d2c: nop dword ptr [rax]
// asm:   0x53a8d3f: jmp 0x53a8cb0
// asm:   0x53a8d5c: xor r13d, r13d

Gisketch_Aottg2UI_Actions_IGisketchSectionContentProvider_o *
Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindSectionContentProvider
          (UnityEngine_Transform_o *root,System_String_o *prefix,MethodInfo *method)

{
  uint uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  System_Object_array *pSVar5;
  ulong uVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *a;
  Il2CppObject *obj;
  ulong uVar8;
  long lVar9;
  
  if (Il2CppMethodInitialized_07542bfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_MonoBehaviour);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSectionContentProvider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542bfc = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    if ((root == (UnityEngine_Transform_o *)0x0) ||
       (pSVar5 = UnityEngine_Component__GetComponentsInChildren_object_
                           ((UnityEngine_Component_o *)root,true,
                            (MethodInfo_34B1260 *)
                            MethodInfo_UnityEngine_Component_GetComponentsInChildren_MonoBehaviour),
       pSVar5 == (System_Object_array *)0x0)) {
      ThrowNullReferenceException();
    }
    if (0 < (int)pSVar5->max_length) {
      uVar6 = pSVar5->max_length & 0xffffffff;
      uVar8 = 0;
      do {
        if (uVar6 <= uVar8) {
          ThrowIndexOutOfRangeException();
        }
        obj = il2cpp_vm_Object_IsInst
                        (pSVar5->m_Items[uVar8],
                         (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSectionContentProvider);
        if (obj != (Il2CppObject *)0x0) {
          pIVar2 = obj->klass;
          uVar6 = (ulong)(pIVar2->_2).interface_offsets_count;
          if (uVar6 != 0) {
            pIVar3 = (pIVar2->_1).interfaceOffsets;
            lVar9 = 0;
            do {
              if (*(Gisketch_Aottg2UI_Actions_IGisketchSectionContentProvider_c **)
                   ((long)&pIVar3->interfaceType + lVar9) ==
                  TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSectionContentProvider) {
                pVVar7 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
                goto label_053a8cbd;
              }
              lVar9 = lVar9 + 0x10;
            } while (uVar6 * 0x10 != lVar9);
          }
          pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                             (obj,(Il2CppClass *)
                                  TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSectionContentProvider,0);
label_053a8cbd:
          a = (*pVVar7->methodPtr)(obj,pVVar7->method);
          bVar4 = System_String__Equals_52ffe30(a,prefix,5,(MethodInfo *)0x0);
          if (bVar4) {
            return (Gisketch_Aottg2UI_Actions_IGisketchSectionContentProvider_o *)obj;
          }
        }
        uVar8 = uVar8 + 1;
        uVar1 = (uint)pSVar5->max_length;
        uVar6 = (ulong)uVar1;
      } while ((long)uVar8 < (long)(int)uVar1);
    }
  }
  return (Gisketch_Aottg2UI_Actions_IGisketchSectionContentProvider_o *)0x0;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$ComponentInNamedChild<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild_object_ (UnityEngine_Transform_o* root, System_String_o* name, const MethodInfo_353CC30* method);
// 0x363cc30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x363ccf6: jmp 0x363cc77

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild_object_
          (UnityEngine_Transform_o *root,System_String_o *name,MethodInfo_353CC30 *method)

{
  uint32_t uVar1;
  bool bVar2;
  UnityEngine_Transform_o *x;
  Il2CppObject *pIVar3;
  
  if (method->rgctx_data == (MethodInfo_353CC30_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    if (method->rgctx_data == (MethodInfo_353CC30_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor;
      goto joined_r0x0363cc75;
    }
  }
  uVar1 = (TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor;
joined_r0x0363cc75:
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
  }
  x = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindChild(root,name,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (x == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = UnityEngine_Component__GetComponentInChildren_object_
                       ((UnityEngine_Component_o *)x,true,
                        (MethodInfo_34B0B60 *)
                        method->rgctx_data->_1_UnityEngine_Component_GetComponentInChildren_T_);
    return pIVar3;
  }
  return (Il2CppObject *)0x0;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$FindChild
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindChild (UnityEngine_Transform_o* root, System_String_o* name, const MethodInfo* method);
// 0x53a8d90
// eh: try 0x53a8edf..0x53a9025 -> pad 0x53a903a (+8 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x53a905b..0x53a9060 -> pad 0x53a9107 cleanup
// eh: try 0x53a910a..0x53a9114 -> pad 0x53a911c catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a8e9c: nop dword ptr [rax]
// asm:   0x53a8ece: nop 
// asm:   0x53a9011: jmp 0x53a9062
// asm:   0x53a902a: jmp 0x53a903a
// asm:   0x53a902c: jmp 0x53a903a
// asm:   0x53a902e: jmp 0x53a903a
// asm:   0x53a9030: jmp 0x53a903a
// asm:   0x53a9032: jmp 0x53a903a
// asm:   0x53a9034: jmp 0x53a903a
// asm:   0x53a9036: jmp 0x53a903a
// asm:   0x53a9038: jmp 0x53a903a
// asm:   0x53a903a: mov rbx, rax
// asm:   0x53a903d: cmp edx, 1
// asm:   0x53a9040: jne 0x53a910a
// asm:   0x53a9046: mov rdi, rbx
// asm:   0x53a9049: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x53a904e: mov rcx, qword ptr [rax]
// asm:   0x53a9051: mov qword ptr [rsp + 0x10], rcx
// asm:   0x53a9056: mov qword ptr [rsp + 0x20], rcx
// asm:   0x53a905b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x53a9107: mov rbx, rax
// asm:   0x53a910a: lea rdi, [rsp + 0x20]
// asm:   0x53a910f: call 0x2d4be80  ; il2cpp_runtime_helper_02d4be80()
// asm:   0x53a9114: mov rdi, rbx
// asm:   0x53a9117: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x53a911c: mov rdi, rax
// asm:   0x53a911f: call 0x2ab61e0  ; __clang_call_terminate()

UnityEngine_Transform_o *
Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindChild
          (UnityEngine_Transform_o *root,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  System_String_o *a;
  VirtualInvokeData *pVVar5;
  UnityEngine_Transform_o *pUVar6;
  Il2CppObject *pIVar7;
  ulong uVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  long lVar9;
  Il2CppObject *local_60;
  long local_58;
  Il2CppObject *local_50;
  undefined8 local_48;
  Il2CppObject **local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_07542bfd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    Il2CppMethodInitialized_07542bfd = '\x01';
  }
  local_50 = (Il2CppObject *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar6 = (UnityEngine_Transform_o *)0x0;
  if (!bVar4) {
    if (root == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    a = UnityEngine_Object__get_name((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
    bVar4 = System_String__op_Equality(a,name,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar6 = root;
    }
    else {
      local_58 = 0;
      local_60 = (Il2CppObject *)UnityEngine_Transform__GetEnumerator(root,(MethodInfo *)0x0);
      local_48 = 0;
      local_40 = &local_60;
      local_38 = &local_50;
      do {
        pIVar7 = local_60;
        if (local_60 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = local_60->klass;
        uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar8 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar9) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar5 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
              goto label_053a8f03;
            }
            lVar9 = lVar9 + 0x10;
          } while (uVar8 * 0x10 != lVar9);
        }
        pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_60,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_053a8f03:
        bVar4 = (*pVVar5->methodPtr)(pIVar7,pVVar5->method);
        pIVar7 = local_60;
        if (!bVar4) {
          pUVar6 = (UnityEngine_Transform_o *)0x0;
          break;
        }
        if (local_60 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = local_60->klass;
        uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar8 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar9) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar5 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar9) + 1);
              goto label_053a8f97;
            }
            lVar9 = lVar9 + 0x10;
          } while (uVar8 * 0x10 != lVar9);
        }
        pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_60,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_053a8f97:
        pUVar6 = (UnityEngine_Transform_o *)(*pVVar5->methodPtr)(pIVar7,pVVar5->method);
        method_00 = extraout_RDX;
        if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
          method_00 = extraout_RDX_00;
        }
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          bVar1 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
          if (((pUVar6->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pUVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar6);
          }
        }
        pUVar6 = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindChild(pUVar6,name,method_00);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      } while (!bVar4);
      pIVar7 = il2cpp_vm_Object_IsInst(local_60,(Il2CppClass *)TypeInfo_System_IDisposable);
      local_50 = pIVar7;
      if (pIVar7 != (Il2CppObject *)0x0) {
        pIVar2 = pIVar7->klass;
        uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar8 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar9) ==
                TypeInfo_System_IDisposable) {
              pVVar5 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
              goto label_053a90dd;
            }
            lVar9 = lVar9 + 0x10;
          } while (uVar8 * 0x10 != lVar9);
        }
        pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar7,(Il2CppClass *)TypeInfo_System_IDisposable,0)
        ;
label_053a90dd:
        (*pVVar5->methodPtr)(pIVar7,pVVar5->method);
      }
      if (local_58 != 0) {
        il2cpp_codegen_rethrow();
      }
    }
  }
  return pUVar6;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___ctor (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x53a9130

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___ctor
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  (__this->fields)._activeIndex = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___cctor (const MethodInfo* method);
// 0x53a9140

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o *__this;
  
  if (Il2CppMethodInitialized_07542bfe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    Il2CppMethodInitialized_07542bfe = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->static_fields->PendingActiveSections = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->static_fields->
              PendingActiveSections);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$<ScrollTo>b__24_0
// il2cpp: float Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___ScrollTo_b__24_0 (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x53a91c0

float Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___ScrollTo_b__24_0
                (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._scroll;
  if (__this_00 == (UnityEngine_UI_ScrollRect_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$<ScrollTo>b__24_1
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___ScrollTo_b__24_1 (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, float value, const MethodInfo* method);
// 0x53a91e0

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___ScrollTo_b__24_1
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *__this_00;
  
  __this_00 = (__this->fields)._scroll;
  if (__this_00 == (UnityEngine_UI_ScrollRect_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition(__this_00,value,(MethodInfo *)0x0);
  return;
}


