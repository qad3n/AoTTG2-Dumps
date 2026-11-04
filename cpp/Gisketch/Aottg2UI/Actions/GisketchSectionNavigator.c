// Type: Gisketch.Aottg2UI.Actions.GisketchSectionNavigator
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchSectionNavigator.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator.<>c__DisplayClass31_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass31_0___ctor (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass31_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass31_0___ctor(Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass31_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator.<>c__DisplayClass31_0$$<AnimateSection>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass31_0___AnimateSection_b__0 (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass31_0_o* __this, float value, const MethodInfo* method);
// 0x1818a3060

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass31_0___AnimateSection_b__0
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass31_0_o *__this,float value
               ,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields).group;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$get_ActiveSectionId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__get_ActiveSectionId (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x18190e090

System_String_o *
Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__get_ActiveSectionId
          (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  
  if ((((__this->fields)._sectionIds != (System_String_array *)0x0) && (-1 < (__this->fields)._activeIndex))
     && (pSVar2 = (__this->fields)._sectionIds, (__this->fields)._activeIndex < (int)pSVar2->max_length)) {
    uVar1 = (__this->fields)._activeIndex;
    if (uVar1 < (uint)pSVar2->max_length) {
      return pSVar2->m_Items[(int)uVar1];
    }
    ThrowIndexOutOfRangeException();
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Setup (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, System_String_array* sectionIds, System_String_o* mode, System_String_o* prefix, const MethodInfo* method);
// 0x18190dd70

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Setup
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,System_String_array *sectionIds,
               System_String_o *mode,System_String_o *prefix,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_18434226d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"brush-side-panel");
    il2cpp_codegen_initialize_runtime_metadata(&"Separate");
    Il2CppMethodInitialized_18434226d = '\x01';
  }
  if (sectionIds == (System_String_array *)0x0) {
    sectionIds = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
  }
  if (__this != (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)0x0) {
    (__this->fields)._sectionIds = sectionIds;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._sectionIds,sectionIds);
    bVar1 = System_String__IsNullOrEmpty(prefix,(MethodInfo *)0x0);
    if (bVar1) {
      prefix = "brush-side-panel";
    }
    (__this->fields)._prefix = prefix;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._prefix,prefix);
    bVar1 = System_String__Equals_196c550(mode,"Separate",5,(MethodInfo *)0x0);
    (__this->fields)._separate = bVar1;
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$Select
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select (UnityEngine_GameObject_o* source, System_String_o* sectionId, bool instant, const MethodInfo* method);
// 0x18190d770

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select
               (UnityEngine_GameObject_o *source,System_String_o *sectionId,bool instant,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *__this;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this_00;
  
  if (Il2CppMethodInitialized_18434226e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434226e = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
  }
  if (Il2CppMethodInitialized_18434227c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_GisketchSectionNavigator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434227c = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (source == (UnityEngine_GameObject_o *)0x0) goto label_18190d90c;
    __this = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0);
  }
  else {
    __this = (UnityEngine_Transform_o *)0x0;
  }
  while( true ) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) break;
    if (__this == (UnityEngine_Transform_o *)0x0) goto label_18190d90c;
    __this_00 = UnityEngine_Component__GetComponentInChildren_object_
                          ((UnityEngine_Component_o *)__this,true,
                           (MethodInfo_664AA0 *)
                           MethodInfo_UnityEngine_Component_GetComponentInChildren_GisketchSectionNavigator);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) goto label_18190d8ba;
    __this = UnityEngine_Transform__GetParent(__this,(MethodInfo *)0x0);
  }
  __this_00 = (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)0x0;
label_18190d8ba:
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this_00 == (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)0x0) {
label_18190d90c:
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select_190d920
              (__this_00,sectionId,instant,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$CaptureActiveSections
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__CaptureActiveSections (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x18190bd10
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18190bdcd: nop dword ptr [rax]
// asm:   0x18190bee4: mov rdi, qword ptr [rsp + 0x40]
// asm:   0x18190bee9: mov rsi, qword ptr [rsp + 0x38]
// asm:   0x18190beee: mov rbp, qword ptr [rsp + 0x30]
// asm:   0x18190bef3: mov r14, qword ptr [rsp + 0x48]

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__CaptureActiveSections
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__this;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *pUVar3;
  System_String_o *pSVar4;
  System_String_o *value;
  uint uVar5;
  
  if (Il2CppMethodInitialized_18434226f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_GisketchSectionNavigator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434226f = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((root == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar3 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                           (root,true,
                            (MethodInfo_6F5750 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_GisketchSectionNavigator
                           ), pUVar3 == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)0x0)) {
label_18190bf04:
      ThrowNullReferenceException();
    }
    for (uVar5 = 0; (int)uVar5 < (int)pUVar3->max_length; uVar5 = uVar5 + 1) {
      if ((uint)pUVar3->max_length <= uVar5) {
        ThrowIndexOutOfRangeException();
      }
      __this = (&pUVar3->m_Items[0].klass)[(int)uVar5];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        if (__this == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0) goto label_18190bf04;
        bVar2 = System_String__IsNullOrEmpty
                          (*(System_String_o **)&(__this->_1).byval_arg.bits,(MethodInfo *)0x0);
        if (!bVar2) {
          if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
          }
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->static_fields->
                   PendingActiveSections;
          if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18190bf04;
          System_Collections_Generic_Dictionary_object__object___Remove
                    (pSVar1,(Il2CppObject *)*(System_String_o **)&(__this->_1).byval_arg.bits,
                     (MethodInfo_1470BF0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_string_Remove);
          pSVar4 = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__get_ActiveSectionId
                             ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)__this,(MethodInfo *)0x0
                             );
          bVar2 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
          if (!bVar2) {
            if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
            }
            pSVar4 = *(System_String_o **)&(__this->_1).byval_arg.bits;
            pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                     TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->static_fields->
                     PendingActiveSections;
            value = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__get_ActiveSectionId
                              ((Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)__this,
                               (MethodInfo *)0x0);
            if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18190bf04;
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar1,(Il2CppObject *)pSVar4,(Il2CppObject *)value,
                       (MethodInfo_147A7F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
          }
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$Select
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, System_String_o* sectionId, bool instant, const MethodInfo* method);
// 0x18190d920

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select_190d920
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,System_String_o *sectionId,
               bool instant,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_RectTransform_array *pUVar3;
  bool bVar4;
  uint index;
  UnityEngine_GameObject_o *root;
  
  if (Il2CppMethodInitialized_184342270 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342270 = '\x01';
  }
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__EnsureSectionContent(__this,sectionId,(MethodInfo *)0x0)
  ;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve(__this,(MethodInfo *)0x0);
  index = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__IndexOf(__this,sectionId,(MethodInfo *)0x0);
  if (((int)index < 0) || (index == (__this->fields)._activeIndex)) {
    return;
  }
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive
            (__this,index,(__this->fields)._separate,(MethodInfo *)0x0);
  if ((__this->fields)._separate == false) {
    pUVar3 = (__this->fields)._sections;
    if (pUVar3 != (UnityEngine_RectTransform_array *)0x0) {
      if (index < (uint)pUVar3->max_length) {
        Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ScrollTo
                  (__this,pUVar3->m_Items[(int)index],instant,(MethodInfo *)0x0);
        return;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  else {
    pUVar1 = (__this->fields)._scroll;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      return;
    }
    if (Il2CppMethodInitialized_184342274 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184342274 = '\x01';
    }
    pUVar1 = (__this->fields)._scroll;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      pUVar1 = (__this->fields)._scroll;
      if (pUVar1 == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_18190db09;
      pUVar2 = (pUVar1->fields).m_Content;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar4) {
        pUVar1 = (__this->fields)._scroll;
        if ((pUVar1 == (UnityEngine_UI_ScrollRect_o *)0x0) ||
           (pUVar2 = (pUVar1->fields).m_Content, pUVar2 == (UnityEngine_RectTransform_o *)0x0))
        goto label_18190db09;
        root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0(root,2,(MethodInfo *)0x0);
      }
    }
    pUVar1 = (__this->fields)._scroll;
    if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
      UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition(pUVar1,1.0,(MethodInfo *)0x0);
      return;
    }
  }
label_18190db09:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$Start
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Start (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x18190de40

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Start
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  int index;
  System_String_o *value;
  System_String_o *local_res8;
  
  if (Il2CppMethodInitialized_184342278 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    Il2CppMethodInitialized_184342278 = '\x01';
  }
  local_res8 = (System_String_o *)0x0;
  bVar2 = System_String__IsNullOrEmpty((__this->fields)._prefix,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->static_fields->PendingActiveSections
    ;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_18190df9b:
      ThrowNullReferenceException();
    }
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar1,(Il2CppObject *)(__this->fields)._prefix,(Il2CppObject **)&local_res8,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    if (bVar2) {
      if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->static_fields->
               PendingActiveSections;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18190df9b;
      System_Collections_Generic_Dictionary_object__object___Remove
                (pSVar1,(Il2CppObject *)(__this->fields)._prefix,
                 (MethodInfo_1470BF0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Remove);
      value = local_res8;
      goto label_18190df34;
    }
  }
  value = (System_String_o *)0x0;
label_18190df34:
  bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (!bVar2) {
    Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__EnsureSectionContent(__this,value,(MethodInfo *)0x0);
  }
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve(__this,(MethodInfo *)0x0);
  bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar2) {
    index = 0;
  }
  else {
    index = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__IndexOf(__this,value,(MethodInfo *)0x0);
  }
  if (index < 0) {
    index = 0;
  }
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive(__this,index,false,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__LateUpdate (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x18190c8b0

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__LateUpdate
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  int32_t index;
  
  if ((__this->fields)._separate == false) {
    Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve(__this,(MethodInfo *)0x0);
    index = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SectionAtViewportTop(__this,(MethodInfo *)0x0)
    ;
    if ((-1 < index) && (index != (__this->fields)._activeIndex)) {
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive(__this,index,false,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__OnDestroy (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x18190c9a0

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__OnDestroy
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  
  t = (__this->fields)._scrollTween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$Resolve
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x18190cab0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18190cbad: nop dword ptr [rax]
// asm:   0x18190cc52: jmp 0x18190cbb0
// asm:   0x18190cd2d: nop dword ptr [rax]
// asm:   0x18190ce5d: jmp 0x18190ce79

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  System_String_o *pSVar4;
  UnityEngine_UI_ScrollRect_o *pUVar5;
  UnityEngine_RectTransform_array *pUVar6;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *pGVar7;
  UnityEngine_RectTransform_o *pUVar8;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *pGVar9;
  uint uVar10;
  
  if (Il2CppMethodInitialized_184342271 == '\0') {
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
    Il2CppMethodInitialized_184342271 = '\x01';
  }
  if (Il2CppMethodInitialized_184342272 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342272 = '\x01';
  }
  pUVar5 = (__this->fields)._scroll;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((bVar2) || ((__this->fields)._sections == (UnityEngine_RectTransform_array *)0x0)) ||
     ((__this->fields)._buttons == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0)) {
label_18190cc57:
    pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Transform__GetParent(pUVar3,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat_1969e50((__this->fields)._prefix,"-scroll",(MethodInfo *)0x0)
      ;
      if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
      }
      pUVar5 = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild_object_
                         (pUVar3,pSVar4,
                          (MethodInfo_6F60B0 *)
                          MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_ComponentInNamedChild_ScrollRect
                         );
      (__this->fields)._scroll = pUVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._scroll,pUVar5);
      pSVar1 = (__this->fields)._sectionIds;
      if (pSVar1 != (System_String_array *)0x0) {
        pUVar6 = (UnityEngine_RectTransform_array *)
                 SZArrayNew(TypeInfo_UnityEngine_RectTransform_array,(uint32_t)pSVar1->max_length);
        (__this->fields)._sections = pUVar6;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._sections,pUVar6);
        pSVar1 = (__this->fields)._sectionIds;
        if (pSVar1 != (System_String_array *)0x0) {
          pGVar7 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)
                   SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array,
                              (uint32_t)pSVar1->max_length);
          (__this->fields)._buttons = pGVar7;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._buttons,pGVar7);
          uVar10 = 0;
          pSVar1 = (__this->fields)._sectionIds;
          while (pSVar1 != (System_String_array *)0x0) {
            if ((int)pSVar1->max_length <= (int)uVar10) {
              return;
            }
            pSVar1 = (__this->fields)._sectionIds;
            if (pSVar1 == (System_String_array *)0x0) break;
            if ((uint)pSVar1->max_length <= uVar10) {
label_18190ce7f:
              ThrowIndexOutOfRangeException();
            }
            pUVar6 = (__this->fields)._sections;
            pSVar4 = pSVar1->m_Items[(int)uVar10];
            if (Il2CppMethodInitialized_184342279 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&"-section-");
              Il2CppMethodInitialized_184342279 = '\x01';
            }
            pSVar4 = System_String__Concat_1969b70
                               ((__this->fields)._prefix,"-section-",pSVar4,(MethodInfo *)0x0);
            if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
            }
            pUVar8 = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild_object_
                               (pUVar3,pSVar4,
                                (MethodInfo_6F60B0 *)
                                MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_ComponentInNamedChild_RectTransform
                               );
            if (pUVar6 == (UnityEngine_RectTransform_array *)0x0) break;
            if ((uint)pUVar6->max_length <= uVar10) goto label_18190ce7f;
            pUVar6->m_Items[(int)uVar10] = pUVar8;
            Il2CppCodeGenWriteBarrier(pUVar6->m_Items + (int)uVar10,pUVar8);
            pSVar1 = (__this->fields)._sectionIds;
            if (pSVar1 == (System_String_array *)0x0) break;
            if ((uint)pSVar1->max_length <= uVar10) goto label_18190ce7f;
            pGVar7 = (__this->fields)._buttons;
            pSVar4 = System_String__Concat_1969e50
                               ("brush-side-panel-button-",pSVar1->m_Items[(int)uVar10],(MethodInfo *)0x0);
            pGVar9 = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild_object_
                               (pUVar3,pSVar4,
                                (MethodInfo_6F60B0 *)
                                MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_ComponentInNamedChild_GisketchBrushButtonFeed
                               );
            if (pGVar7 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0) break;
            if ((uint)pGVar7->max_length <= uVar10) goto label_18190ce7f;
            pGVar7->m_Items[(int)uVar10] = pGVar9;
            Il2CppCodeGenWriteBarrier(pGVar7->m_Items + (int)uVar10,pGVar9);
            uVar10 = uVar10 + 1;
            pSVar1 = (__this->fields)._sectionIds;
          }
        }
      }
    }
  }
  else {
    uVar10 = 0;
    pSVar1 = (__this->fields)._sectionIds;
    while (pSVar1 != (System_String_array *)0x0) {
      if ((int)pSVar1->max_length <= (int)uVar10) {
        return;
      }
      pUVar6 = (__this->fields)._sections;
      if (pUVar6 == (UnityEngine_RectTransform_array *)0x0) break;
      if ((uint)pUVar6->max_length <= uVar10) goto label_18190ce7f;
      pUVar8 = pUVar6->m_Items[(int)uVar10];
      if ((((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) goto label_18190cc57;
      pGVar7 = (__this->fields)._buttons;
      if (pGVar7 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0) break;
      if ((uint)pGVar7->max_length <= uVar10) goto label_18190ce7f;
      pGVar9 = pGVar7->m_Items[(int)uVar10];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pGVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) goto label_18190cc57;
      uVar10 = uVar10 + 1;
      pSVar1 = (__this->fields)._sectionIds;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$IsResolved
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__IsResolved (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x18190c760
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18190c879: jmp 0x18190c7e3

bool Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__IsResolved
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *x;
  System_String_array *pSVar1;
  UnityEngine_RectTransform_array *pUVar2;
  UnityEngine_RectTransform_o *x_00;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *pGVar3;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *x_01;
  bool bVar4;
  uint uVar5;
  
  if (Il2CppMethodInitialized_184342272 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342272 = '\x01';
  }
  x = (__this->fields)._scroll;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((bVar4) || ((__this->fields)._sections == (UnityEngine_RectTransform_array *)0x0)) ||
     ((__this->fields)._buttons == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0)) {
    return false;
  }
  uVar5 = 0;
  pSVar1 = (__this->fields)._sectionIds;
  while (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length <= (int)uVar5) {
      return true;
    }
    pUVar2 = (__this->fields)._sections;
    if (pUVar2 == (UnityEngine_RectTransform_array *)0x0) break;
    if ((uint)pUVar2->max_length <= uVar5) {
label_18190c8a8:
      ThrowIndexOutOfRangeException();
    }
    x_00 = pUVar2->m_Items[(int)uVar5];
    if ((((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      return false;
    }
    pGVar3 = (__this->fields)._buttons;
    if (pGVar3 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0) break;
    if ((uint)pGVar3->max_length <= uVar5) goto label_18190c8a8;
    x_01 = pGVar3->m_Items[(int)uVar5];
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      return false;
    }
    uVar5 = uVar5 + 1;
    pSVar1 = (__this->fields)._sectionIds;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$SetActive
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, int32_t index, bool animate, const MethodInfo* method);
// 0x18190db20
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18190db9a: nop word ptr [rax + rax]
// asm:   0x18190dcd1: jmp 0x18190dba0

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
  uint uVar7;
  
  if (Il2CppMethodInitialized_184342273 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342273 = '\x01';
  }
  if (index < 0) {
    return;
  }
  pSVar6 = (__this->fields)._sectionIds;
  if (pSVar6 != (System_String_array *)0x0) {
    if ((int)pSVar6->max_length <= index) {
      return;
    }
    uVar7 = 0;
    (__this->fields)._activeIndex = index;
    if (pSVar6 != (System_String_array *)0x0) {
label_18190dba0:
      if ((int)uVar7 < (int)pSVar6->max_length) {
        if ((__this->fields)._sections != (UnityEngine_RectTransform_array *)0x0) {
          pUVar2 = (__this->fields)._sections;
          uVar1 = (uint)pUVar2->max_length;
          if ((int)uVar7 < (int)uVar1) {
            if (uVar1 <= uVar7) goto label_18190dd63;
            pUVar3 = pUVar2->m_Items[(int)uVar7];
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar5 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((bVar5) && ((__this->fields)._separate != false)) {
              pUVar2 = (__this->fields)._sections;
              if (pUVar2 == (UnityEngine_RectTransform_array *)0x0) goto label_18190dd69;
              if ((uint)pUVar2->max_length <= uVar7) goto label_18190dd63;
              if ((pUVar2->m_Items[(int)uVar7] == (UnityEngine_RectTransform_o *)0x0) ||
                 (__this_00 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pUVar2->m_Items[(int)uVar7],
                                         (MethodInfo *)0x0), __this_00 == (UnityEngine_GameObject_o *)0x0))
              goto label_18190dd69;
              UnityEngine_GameObject__SetActive(__this_00,uVar7 == index,(MethodInfo *)0x0);
            }
          }
        }
        if ((__this->fields)._buttons != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0) {
          pGVar4 = (__this->fields)._buttons;
          uVar1 = (uint)pGVar4->max_length;
          if ((int)uVar7 < (int)uVar1) {
            if (uVar1 <= uVar7) goto label_18190dd63;
            x = pGVar4->m_Items[(int)uVar7];
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar5 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar5) {
              pGVar4 = (__this->fields)._buttons;
              if (pGVar4 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0)
              goto label_18190dd69;
              if ((uint)pGVar4->max_length <= uVar7) goto label_18190dd63;
              if (pGVar4->m_Items[(int)uVar7] ==
                  (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) goto label_18190dd69;
              Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetForcedActive
                        (pGVar4->m_Items[(int)uVar7],uVar7 == index,(MethodInfo *)0x0);
            }
          }
        }
        pSVar6 = (__this->fields)._sectionIds;
        uVar7 = uVar7 + 1;
        if (pSVar6 == (System_String_array *)0x0) goto label_18190dd69;
        goto label_18190dba0;
      }
      if (!animate) {
        return;
      }
      if ((__this->fields)._sections == (UnityEngine_RectTransform_array *)0x0) {
        return;
      }
      pUVar2 = (__this->fields)._sections;
      if ((uint)pUVar2->max_length <= (uint)index) goto label_18190dd63;
      pUVar3 = pUVar2->m_Items[index];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar5) {
        return;
      }
      pUVar2 = (__this->fields)._sections;
      if (pUVar2 == (UnityEngine_RectTransform_array *)0x0) goto label_18190dd69;
      if ((uint)index < (uint)pUVar2->max_length) {
        pUVar3 = pUVar2->m_Items[index];
        if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
        }
        Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__AnimateSection(pUVar3,(MethodInfo *)0x0);
        return;
      }
label_18190dd63:
      ThrowIndexOutOfRangeException();
    }
  }
label_18190dd69:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$RefreshSeparateLayout
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__RefreshSeparateLayout (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x18190c9c0

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__RefreshSeparateLayout
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  bool bVar3;
  UnityEngine_GameObject_o *root;
  
  if (Il2CppMethodInitialized_184342274 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342274 = '\x01';
  }
  pUVar1 = (__this->fields)._scroll;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    pUVar1 = (__this->fields)._scroll;
    if (pUVar1 == (UnityEngine_UI_ScrollRect_o *)0x0) {
label_18190ca9e:
      ThrowNullReferenceException();
    }
    pUVar2 = (pUVar1->fields).m_Content;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      pUVar1 = (__this->fields)._scroll;
      if ((pUVar1 == (UnityEngine_UI_ScrollRect_o *)0x0) ||
         (pUVar2 = (pUVar1->fields).m_Content, pUVar2 == (UnityEngine_RectTransform_o *)0x0))
      goto label_18190ca9e;
      root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0(root,2,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$ScrollTo
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ScrollTo (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, UnityEngine_RectTransform_o* target, bool instant, const MethodInfo* method);
// 0x18190ce90
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18190d3a8: xor r8d, r8d
// asm:   0x18190d3ab: movaps xmm1, xmm6
// asm:   0x18190d3ae: call 0x1832e33f0  ; UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition()
// asm:   0x18190d3b3: jmp 0x18190d357

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ScrollTo
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,
               UnityEngine_RectTransform_o *target,bool instant,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_UI_ScrollRect_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  bool bVar6;
  UnityEngine_GameObject_o *root;
  UnityEngine_Rect_o *pUVar7;
  UnityEngine_Bounds_o *pUVar8;
  DG_Tweening_Core_DOGetter_float__o *__this_00;
  DG_Tweening_Core_DOSetter_float__o *__this_01;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  Il2CppObject *t_00;
  DG_Tweening_Tween_o *pDVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Bounds_o local_88 [5];
  
  if (Il2CppMethodInitialized_184342275 == '\0') {
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
    Il2CppMethodInitialized_184342275 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar6) {
    pUVar4 = (__this->fields)._scroll;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar6) {
      pUVar4 = (__this->fields)._scroll;
      if (pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) {
        pUVar5 = (pUVar4->fields).m_Viewport;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar6 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar6) {
          return;
        }
        pUVar4 = (__this->fields)._scroll;
        if (pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) {
          pUVar5 = (pUVar4->fields).m_Content;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar6 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar6) {
            return;
          }
          pUVar4 = (__this->fields)._scroll;
          if ((pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
             (pUVar5 = (pUVar4->fields).m_Content, pUVar5 != (UnityEngine_RectTransform_o *)0x0)) {
            root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
            if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
            }
            Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0(root,2,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_184342277 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
              Il2CppMethodInitialized_184342277 = '\x01';
            }
            pUVar4 = (__this->fields)._scroll;
            if ((pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
               (pUVar5 = (pUVar4->fields).m_Content, pUVar5 != (UnityEngine_RectTransform_o *)0x0)) {
              pUVar7 = UnityEngine_RectTransform__get_rect
                                 ((UnityEngine_Rect_o *)local_88,pUVar5,(MethodInfo *)0x0);
              fVar11 = (pUVar7->fields).m_Height;
              if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
              }
              pUVar4 = (__this->fields)._scroll;
              if ((pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
                 (pUVar5 = (pUVar4->fields).m_Viewport, pUVar5 != (UnityEngine_RectTransform_o *)0x0)) {
                pUVar7 = UnityEngine_RectTransform__get_rect
                                   ((UnityEngine_Rect_o *)local_88,pUVar5,(MethodInfo *)0x0);
                fVar11 = fVar11 - (pUVar7->fields).m_Height;
                fVar12 = 0.0;
                if (0.0 <= fVar11) {
                  fVar12 = fVar11;
                }
                if (fVar12 <= 0.01) {
                  return;
                }
                pUVar4 = (__this->fields)._scroll;
                if (pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                  pUVar5 = (pUVar4->fields).m_Viewport;
                  if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
                  }
                  pUVar8 = UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                                     (local_88,(UnityEngine_Transform_o *)pUVar5,
                                      (UnityEngine_Transform_o *)target,(MethodInfo *)0x0);
                  pUVar4 = (__this->fields)._scroll;
                  if ((pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
                     (pUVar5 = (pUVar4->fields).m_Viewport, pUVar5 != (UnityEngine_RectTransform_o *)0x0)) {
                    fVar11 = (pUVar8->fields).m_Center.fields.y;
                    fVar1 = (pUVar8->fields).m_Extents.fields.y;
                    pUVar7 = UnityEngine_RectTransform__get_rect
                                       ((UnityEngine_Rect_o *)local_88,pUVar5,(MethodInfo *)0x0);
                    fVar2 = (pUVar7->fields).m_YMin;
                    fVar3 = (pUVar7->fields).m_Height;
                    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                    }
                    pUVar4 = (__this->fields)._scroll;
                    if (pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                      fVar10 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition
                                         (pUVar4,(MethodInfo *)0x0);
                      fVar10 = fVar10 - ((fVar2 + fVar3) - (fVar1 + fVar11)) / fVar12;
                      if (fVar10 < 0.0) {
                        fVar10 = 0.0;
                      }
                      else if (1.0 < fVar10) {
                        fVar10 = 1.0;
                      }
                      pUVar4 = (__this->fields)._scroll;
                      if (pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                        (*(pUVar4->klass->vtable)._41_StopMovement.methodPtr)
                                  (pUVar4,(pUVar4->klass->vtable)._41_StopMovement.method);
                        pDVar9 = (__this->fields)._scrollTween;
                        if (pDVar9 != (DG_Tweening_Tween_o *)0x0) {
                          DG_Tweening_TweenExtensions__Kill(pDVar9,false,(MethodInfo *)0x0);
                        }
                        if (!instant) {
                          if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application)
                            ;
                          }
                          bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                          if (bVar6) {
                            __this_00 = il2cpp_codegen_object_new
                                                  ((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOGetter_float);
                            DG_Tweening_Core_DOGetter_float____ctor
                                      (__this_00,(Il2CppObject *)__this,
                                       (intptr_t)
                                       MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_ScrollTo_b__24_0
                                       ,(MethodInfo_13878F0 *)0x0);
                            __this_01 = il2cpp_codegen_object_new
                                                  ((Il2CppClass *)TypeInfo_DG_Tweening_Core_DOSetter_float);
                            DG_Tweening_Core_DOSetter_float____ctor
                                      (__this_01,(Il2CppObject *)__this,
                                       (intptr_t)
                                       MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_ScrollTo_b__24_1
                                       ,(MethodInfo_E5A750 *)0x0);
                            if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
                            }
                            t = DG_Tweening_DOTween__To(__this_00,__this_01,fVar10,0.22,(MethodInfo *)0x0);
                            t_00 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                             ((Il2CppObject *)t,9,
                                              (MethodInfo_7C9BC0 *)
                                              MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_float_float_FloatOptions
                                             );
                            pDVar9 = (DG_Tweening_Tween_o *)
                                     DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                               (t_00,true,
                                                (MethodInfo_7CA3D0 *)
                                                MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_TweenerCore_float_float_FloatOptions
                                               );
                            (__this->fields)._scrollTween = pDVar9;
                            Il2CppCodeGenWriteBarrier(&(__this->fields)._scrollTween,pDVar9);
                            pDVar9 = (__this->fields)._scrollTween;
                            if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).
                                cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init
                                        ((Il2CppClass *)
                                         TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
                            }
                            Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track
                                      (pDVar9,false,(MethodInfo *)0x0);
                            return;
                          }
                        }
                        pUVar4 = (__this->fields)._scroll;
                        if (pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                          UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
                                    (pUVar4,fVar10,(MethodInfo *)0x0);
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
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$SectionAtViewportTop
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SectionAtViewportTop (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x18190d3c0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18190d544: movdqa xmm13, xmmword ptr [rip + 0x1a4b703]
// asm:   0x18190d54d: nop dword ptr [rax]
// asm:   0x18190d68d: jmp 0x18190d550
// asm:   0x18190d697: mov eax, r14d
// asm:   0x18190d69a: jmp 0x18190d6a6

int32_t Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SectionAtViewportTop
                  (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_UI_ScrollRect_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_RectTransform_array *pUVar6;
  UnityEngine_RectTransform_o *root;
  bool bVar7;
  UnityEngine_Rect_o *pUVar8;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Bounds_o *pUVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Bounds_o local_a8 [6];
  
  if (Il2CppMethodInitialized_184342276 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184342276 = '\x01';
  }
  pUVar4 = (__this->fields)._scroll;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    return -1;
  }
  pUVar4 = (__this->fields)._scroll;
  if (pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    pUVar5 = (pUVar4->fields).m_Viewport;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar7) {
      return -1;
    }
    if ((__this->fields)._sections == (UnityEngine_RectTransform_array *)0x0) {
      return -1;
    }
    pUVar4 = (__this->fields)._scroll;
    if ((pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
       (pUVar5 = (pUVar4->fields).m_Viewport, pUVar5 != (UnityEngine_RectTransform_o *)0x0)) {
      fVar13 = 3.4028235e+38;
      uVar11 = 0xffffffff;
      pUVar8 = UnityEngine_RectTransform__get_rect((UnityEngine_Rect_o *)local_a8,pUVar5,(MethodInfo *)0x0);
      fVar1 = (pUVar8->fields).m_YMin;
      fVar2 = (pUVar8->fields).m_Height;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      uVar10 = 0;
      pUVar6 = (__this->fields)._sections;
      while (pUVar6 != (UnityEngine_RectTransform_array *)0x0) {
        if ((int)pUVar6->max_length <= (int)uVar10) {
          if ((int)uVar11 < 0) {
            return (__this->fields)._activeIndex;
          }
          return uVar11;
        }
        pUVar6 = (__this->fields)._sections;
        if (pUVar6 == (UnityEngine_RectTransform_array *)0x0) break;
        if ((uint)pUVar6->max_length <= uVar10) {
          ThrowIndexOutOfRangeException();
        }
        pUVar5 = pUVar6->m_Items[(int)uVar10];
        if ((((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar7 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar7) {
          if ((pUVar5 == (UnityEngine_RectTransform_o *)0x0) ||
             (__this_00 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0),
             __this_00 == (UnityEngine_GameObject_o *)0x0)) break;
          bVar7 = UnityEngine_GameObject__get_activeInHierarchy(__this_00,(MethodInfo *)0x0);
          if (bVar7) {
            pUVar4 = (__this->fields)._scroll;
            if (pUVar4 == (UnityEngine_UI_ScrollRect_o *)0x0) break;
            root = (pUVar4->fields).m_Viewport;
            if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
            }
            pUVar9 = UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                               (local_a8,(UnityEngine_Transform_o *)root,(UnityEngine_Transform_o *)pUVar5,
                                (MethodInfo *)0x0);
            fVar12 = (pUVar9->fields).m_Extents.fields.y;
            fVar3 = (pUVar9->fields).m_Center.fields.y;
            if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
            }
            if (fVar1 <= fVar12 + fVar3) {
              if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
              }
              if ((fVar3 - fVar12 <= fVar1 + fVar2) &&
                 (fVar12 = ABS((fVar12 + fVar3) - ((fVar1 + fVar2) - 24.0)), fVar12 < fVar13)) {
                fVar13 = fVar12;
                uVar11 = uVar10;
              }
            }
          }
        }
        uVar10 = uVar10 + 1;
        pUVar6 = (__this->fields)._sections;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$MaxScrollY
// il2cpp: float Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__MaxScrollY (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x18190c900

float Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__MaxScrollY
                (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Rect_o *pUVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Rect_o local_28 [2];
  
  if (Il2CppMethodInitialized_184342277 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184342277 = '\x01';
  }
  pUVar1 = (__this->fields)._scroll;
  if ((pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
     (pUVar2 = (pUVar1->fields).m_Content, pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
    pUVar3 = UnityEngine_RectTransform__get_rect(local_28,pUVar2,(MethodInfo *)0x0);
    fVar5 = (pUVar3->fields).m_Height;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    pUVar1 = (__this->fields)._scroll;
    if ((pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
       (pUVar2 = (pUVar1->fields).m_Viewport, pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
      pUVar3 = UnityEngine_RectTransform__get_rect(local_28,pUVar2,(MethodInfo *)0x0);
      fVar5 = fVar5 - (pUVar3->fields).m_Height;
      fVar4 = 0.0;
      if (0.0 <= fVar5) {
        fVar4 = fVar5;
      }
      return fVar4;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$IndexOf
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__IndexOf (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, System_String_o* sectionId, const MethodInfo* method);
// 0x18190c6c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18190c722: jmp 0x18190c6e3

int32_t Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__IndexOf
                  (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,System_String_o *sectionId,
                  MethodInfo *method)

{
  System_String_array *pSVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  pSVar1 = (__this->fields)._sectionIds;
  while (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length <= (int)uVar3) {
      return -1;
    }
    pSVar1 = (__this->fields)._sectionIds;
    if (pSVar1 == (System_String_array *)0x0) break;
    if ((uint)pSVar1->max_length <= uVar3) {
      ThrowIndexOutOfRangeException();
    }
    bVar2 = System_String__Equals_196c550(pSVar1->m_Items[(int)uVar3],sectionId,5,(MethodInfo *)0x0);
    if (bVar2) {
      return uVar3;
    }
    uVar3 = uVar3 + 1;
    pSVar1 = (__this->fields)._sectionIds;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$ConsumePendingActiveSection
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ConsumePendingActiveSection (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x18190bf10

System_String_o *
Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ConsumePendingActiveSection
          (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  System_String_o *local_res8 [4];
  
  if (Il2CppMethodInitialized_184342278 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    Il2CppMethodInitialized_184342278 = '\x01';
  }
  local_res8[0] = (System_String_o *)0x0;
  bVar2 = System_String__IsNullOrEmpty((__this->fields)._prefix,(MethodInfo *)0x0);
  if (bVar2) {
    return (System_String_o *)0x0;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->static_fields->PendingActiveSections;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar1,(Il2CppObject *)(__this->fields)._prefix,(Il2CppObject **)local_res8,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    if (!bVar2) {
      return (System_String_o *)0x0;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->static_fields->PendingActiveSections
    ;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove
                (pSVar1,(Il2CppObject *)(__this->fields)._prefix,
                 (MethodInfo_1470BF0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Remove);
      return local_res8[0];
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$SectionName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SectionName (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, System_String_o* sectionId, const MethodInfo* method);
// 0x18190d720

System_String_o *
Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SectionName
          (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,System_String_o *sectionId,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184342279 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-section-");
    Il2CppMethodInitialized_184342279 = '\x01';
  }
  pSVar1 = System_String__Concat_1969b70
                     ((__this->fields)._prefix,"-section-",sectionId,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$EnsureSectionContent
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__EnsureSectionContent (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, System_String_o* sectionId, const MethodInfo* method);
// 0x18190c010

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__EnsureSectionContent
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,System_String_o *sectionId,
               MethodInfo *method)

{
  ushort uVar1;
  System_String_o *b;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  UnityEngine_Transform_o *pUVar5;
  System_Object_array *pSVar6;
  Il2CppObject *obj;
  System_String_o *a;
  VirtualInvokeData *pVVar7;
  ushort uVar8;
  uint uVar9;
  
  if (Il2CppMethodInitialized_18434227a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSectionContentProvider);
    Il2CppMethodInitialized_18434227a = '\x01';
  }
  if ((__this->fields)._separate == false) {
    return;
  }
  bVar4 = System_String__IsNullOrEmpty(sectionId,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
    pUVar5 = UnityEngine_Transform__GetParent(pUVar5,(MethodInfo *)0x0);
    b = (__this->fields)._prefix;
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    }
    if (Il2CppMethodInitialized_18434227d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_MonoBehaviour);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSectionContentProvider);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_18434227d = '\x01';
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      return;
    }
    if ((pUVar5 != (UnityEngine_Transform_o *)0x0) &&
       (pSVar6 = UnityEngine_Component__GetComponentsInChildren_object_
                           ((UnityEngine_Component_o *)pUVar5,true,
                            (MethodInfo_665440 *)
                            MethodInfo_UnityEngine_Component_GetComponentsInChildren_MonoBehaviour),
       pSVar6 != (System_Object_array *)0x0)) {
      uVar9 = 0;
      do {
        if ((int)pSVar6->max_length <= (int)uVar9) {
          return;
        }
        if ((uint)pSVar6->max_length <= uVar9) {
          ThrowIndexOutOfRangeException();
        }
        obj = il2cpp_vm_Object_IsInst
                        (pSVar6->m_Items[(int)uVar9],
                         (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSectionContentProvider);
        if (obj != (Il2CppObject *)0x0) {
          a = InterfaceInvoker0_Invoke
                        (0,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSectionContentProvider,
                         obj);
          bVar4 = System_String__Equals_196c550(a,b,5,(MethodInfo *)0x0);
          if (bVar4) {
            pIVar2 = obj->klass;
            uVar1 = (pIVar2->_2).interface_offsets_count;
            if (uVar1 == 0) goto label_18190c1c8;
            pIVar3 = (pIVar2->_1).interfaceOffsets;
            uVar8 = 0;
            goto label_18190c1b4;
          }
        }
        uVar9 = uVar9 + 1;
      } while( true );
    }
  }
  ThrowNullReferenceException();
  while (uVar8 = uVar8 + 1, uVar8 < uVar1) {
label_18190c1b4:
    if (pIVar3[uVar8].interfaceType ==
        (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSectionContentProvider) {
      pVVar7 = pIVar2->vtable + (pIVar3[uVar8].offset + 1);
      goto label_18190c1d9;
    }
  }
label_18190c1c8:
  pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                     (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSectionContentProvider,1)
  ;
label_18190c1d9:
  (*pVVar7->methodPtr)(obj,sectionId,pVVar7->method);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$AnimateSection
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__AnimateSection (UnityEngine_RectTransform_o* section, const MethodInfo* method);
// 0x18190bae0

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__AnimateSection
               (UnityEngine_RectTransform_o *section,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass31_0_o *object;
  UnityEngine_CanvasGroup_o *pUVar2;
  UnityEngine_GameObject_o *__this;
  DG_Tweening_TweenCallback_float__o *__this_00;
  DG_Tweening_Tweener_o *pDVar3;
  
  if (Il2CppMethodInitialized_18434227b == '\0') {
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
    Il2CppMethodInitialized_18434227b = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_c__DisplayClass31_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if ((section != (UnityEngine_RectTransform_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)section,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup),
     object != (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass31_0_o *)0x0)) {
    (object->fields).group = pUVar2;
    Il2CppCodeGenWriteBarrier(&(object->fields).group,pUVar2);
    pUVar2 = (object->fields).group;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      __this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)section,(MethodInfo *)0x0);
      if (__this == (UnityEngine_GameObject_o *)0x0) goto label_18190bcfe;
      pUVar2 = UnityEngine_GameObject__AddComponent_object_
                         (__this,(MethodInfo_6F4D60 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
      (object->fields).group = pUVar2;
      Il2CppCodeGenWriteBarrier(&(object->fields).group,pUVar2);
    }
    pUVar2 = (object->fields).group;
    if (pUVar2 != (UnityEngine_CanvasGroup_o *)0x0) {
      UnityEngine_CanvasGroup__set_alpha(pUVar2,0.0,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
      DG_Tweening_TweenCallback_float____ctor
                ((DG_Tweening_Core_DOSetter_float__o *)__this_00,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_c__DisplayClass31_0_AnimateSection_b__0
                 ,(MethodInfo_E5A750 *)0x0);
      pDVar3 = DG_Tweening_DOVirtual__Float(0.0,1.0,0.14,__this_00,(MethodInfo *)0x0);
      pDVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                         ((Il2CppObject *)pDVar3,9,
                          (MethodInfo_7C9BC0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener)
      ;
      pDVar3 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                         ((Il2CppObject *)pDVar3,true,
                          (MethodInfo_7CA3D0 *)
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
label_18190bcfe:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$FindNavigator
// il2cpp: Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindNavigator (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x18190c480

Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *
Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindNavigator
          (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *__this;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *x;
  
  if (Il2CppMethodInitialized_18434227c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_GisketchSectionNavigator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434227c = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (source == (UnityEngine_GameObject_o *)0x0) goto label_18190c58f;
    __this = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0);
  }
  else {
    __this = (UnityEngine_Transform_o *)0x0;
  }
  while( true ) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)0x0;
    }
    if (__this == (UnityEngine_Transform_o *)0x0) break;
    x = UnityEngine_Component__GetComponentInChildren_object_
                  ((UnityEngine_Component_o *)__this,true,
                   (MethodInfo_664AA0 *)
                   MethodInfo_UnityEngine_Component_GetComponentInChildren_GisketchSectionNavigator);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return x;
    }
    __this = UnityEngine_Transform__GetParent(__this,(MethodInfo *)0x0);
  }
label_18190c58f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$FindSectionContentProvider
// il2cpp: Gisketch_Aottg2UI_Actions_IGisketchSectionContentProvider_o* Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindSectionContentProvider (UnityEngine_Transform_o* root, System_String_o* prefix, const MethodInfo* method);
// 0x18190c5a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18190c697: mov rax, rsi
// asm:   0x18190c69a: jmp 0x18190c69e

Gisketch_Aottg2UI_Actions_IGisketchSectionContentProvider_o *
Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindSectionContentProvider
          (UnityEngine_Transform_o *root,System_String_o *prefix,MethodInfo *method)

{
  bool bVar1;
  System_Object_array *pSVar2;
  Il2CppObject *obj;
  System_String_o *a;
  uint uVar3;
  
  if (Il2CppMethodInitialized_18434227d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_MonoBehaviour);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSectionContentProvider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434227d = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((root == (UnityEngine_Transform_o *)0x0) ||
       (pSVar2 = UnityEngine_Component__GetComponentsInChildren_object_
                           ((UnityEngine_Component_o *)root,true,
                            (MethodInfo_665440 *)
                            MethodInfo_UnityEngine_Component_GetComponentsInChildren_MonoBehaviour),
       pSVar2 == (System_Object_array *)0x0)) {
      ThrowNullReferenceException();
    }
    for (uVar3 = 0; (int)uVar3 < (int)pSVar2->max_length; uVar3 = uVar3 + 1) {
      if ((uint)pSVar2->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      obj = il2cpp_vm_Object_IsInst
                      (pSVar2->m_Items[(int)uVar3],
                       (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSectionContentProvider);
      if (obj != (Il2CppObject *)0x0) {
        a = InterfaceInvoker0_Invoke
                      (0,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchSectionContentProvider,obj
                      );
        bVar1 = System_String__Equals_196c550(a,prefix,5,(MethodInfo *)0x0);
        if (bVar1) {
          return (Gisketch_Aottg2UI_Actions_IGisketchSectionContentProvider_o *)obj;
        }
      }
    }
  }
  return (Gisketch_Aottg2UI_Actions_IGisketchSectionContentProvider_o *)0x0;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$ComponentInNamedChild<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild_object_ (UnityEngine_Transform_o* root, System_String_o* name, const MethodInfo_6F60B0* method);
// 0x1806f60b0

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild_object_
          (UnityEngine_Transform_o *root,System_String_o *name,MethodInfo_6F60B0 *method)

{
  bool bVar1;
  UnityEngine_Transform_o *x;
  Il2CppObject *pIVar2;
  
  if (method->rgctx_data == (MethodInfo_6F60B0_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    if (method->rgctx_data == (MethodInfo_6F60B0_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
  }
  x = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindChild(root,name,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x != (UnityEngine_Transform_o *)0x0) {
      pIVar2 = UnityEngine_Component__GetComponentInChildren_object_
                         ((UnityEngine_Component_o *)x,true,
                          (MethodInfo_664AA0 *)
                          method->rgctx_data->_1_UnityEngine_Component_GetComponentInChildren_T_);
      return pIVar2;
    }
    ThrowNullReferenceException();
  }
  return (Il2CppObject *)0x0;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$FindChild
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindChild (UnityEngine_Transform_o* root, System_String_o* name, const MethodInfo* method);
// 0x18190c230
// eh: try 0x18190c321..0x18190c3ef -> pad 0x183315930 catch Il2CppExceptionWrapper
// eh: try 0x18190c439..0x18190c464 -> pad 0x180026a30 cleanup
// eh: try 0x18190c464..0x18190c474 -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18190c425: lea rcx, [rsp + 0x30]
// asm:   0x18190c42a: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x18190c42f: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18190c434: test rcx, rcx
// asm:   0x18190c437: jne 0x18190c474
// asm:   0x18190c439: jmp 0x18190c44d
// asm:   0x18190c474: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

UnityEngine_Transform_o *
Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindChild
          (UnityEngine_Transform_o *root,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_String_o *a;
  void *pvVar3;
  UnityEngine_Transform_o *root_00;
  Il2CppObject *local_res8;
  Il2CppObject *local_res20;
  Il2CppObject **local_28;
  Il2CppObject **local_20;
  
  if (Il2CppMethodInitialized_18434227e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    Il2CppMethodInitialized_18434227e = '\x01';
  }
  local_res8 = (Il2CppObject *)0x0;
  local_res20 = (Il2CppObject *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return (UnityEngine_Transform_o *)0x0;
  }
  if (root == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  a = UnityEngine_Object__get_name((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
  bVar2 = System_String__op_Equality(a,name,(MethodInfo *)0x0);
  if (!bVar2) {
    local_res8 = (Il2CppObject *)UnityEngine_Transform__GetEnumerator(root,(MethodInfo *)0x0);
    local_28 = &local_res8;
    local_20 = &local_res20;
    do {
      if (local_res8 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pvVar3 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res8);
      if ((char)pvVar3 == '\0') {
        local_res20 = il2cpp_vm_Object_IsInst(local_res8,(Il2CppClass *)TypeInfo_System_IDisposable);
        if (local_res20 == (Il2CppObject *)0x0) {
          return (UnityEngine_Transform_o *)0x0;
        }
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_res20);
        return (UnityEngine_Transform_o *)0x0;
      }
      if (local_res8 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      root_00 = InterfaceInvoker0_Invoke(1,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res8);
      if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
      }
      if (root_00 != (UnityEngine_Transform_o *)0x0) {
        bVar1 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
        if (((root_00->klass->_2).typeHierarchyDepth < bVar1) ||
           ((root_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
          il2cpp_codegen_raise_invalid_cast_exception(root_00,TypeInfo_UnityEngine_Transform);
        }
      }
      root = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindChild(root_00,name,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    } while (!bVar2);
    il2cpp_runtime_helper_1806aa210(&local_28);
  }
  return root;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___ctor (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x18190e080

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___ctor
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  (__this->fields)._activeIndex = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___cctor (const MethodInfo* method);
// 0x18190dff0

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o *__this;
  
  if (Il2CppMethodInitialized_18434227f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    Il2CppMethodInitialized_18434227f = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->static_fields->PendingActiveSections = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->static_fields->
              PendingActiveSections,__this);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$<ScrollTo>b__24_0
// il2cpp: float Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___ScrollTo_b__24_0 (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x18190dfb0

float Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___ScrollTo_b__24_0
                (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._scroll;
  if (__this_00 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    fVar1 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$<ScrollTo>b__24_1
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___ScrollTo_b__24_1 (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, float value, const MethodInfo* method);
// 0x18190dfd0

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___ScrollTo_b__24_1
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *__this_00;
  
  __this_00 = (__this->fields)._scroll;
  if (__this_00 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


