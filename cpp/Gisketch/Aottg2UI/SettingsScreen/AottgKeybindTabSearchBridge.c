// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindTabSearchBridge
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgKeybindTabSearchBridge.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindTabSearchBridge$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge__RegisterFactory (const MethodInfo* method);
// 0x182309050

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge__RegisterFactory(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_1843476f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge_Build);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"AottgKeybindTabSearchBridge");
    Il2CppMethodInitialized_1843476f4 = '\x01';
  }
  if (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge->static_fields->_registered ==
      false) {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
    }
    __this = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
              (__this_00,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge_Build,
               (MethodInfo *)0x0);
    if (__this == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this,"AottgKeybindTabSearchBridge",__this_00,(MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge->static_fields->_registered = true;
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindTabSearchBridge$$Build
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge__Build (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x182308e00

bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge__Build
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge_o *pGVar1;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  System_String_array *value;
  Gisketch_Aottg2UI_GisketchUIRoot_o *value_00;
  Gisketch_Aottg2UI_State_GisketchUIState_o *value_01;
  
  if (Il2CppMethodInitialized_1843476f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgKeybindTabSearchBridge);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_1843476f5 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pGVar1 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_6F4D60 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_AottgKeybindTabSearchBridge);
    pUVar2 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
      (*(pUVar2->klass->vtable)._28_set_ignoreLayout.methodPtr)
                (pUVar2,true,(pUVar2->klass->vtable)._28_set_ignoreLayout.method);
      if ((node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) ||
         ((node->fields).options == (System_String_array *)0x0)) {
        value = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
      }
      else {
        value = (node->fields).options;
      }
      if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge_o *)0x0) {
        (pGVar1->fields)._tabIds = value;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields)._tabIds,value);
        if (context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
          value_01 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
        }
        else {
          value_01 = (context->fields).State;
        }
        (pGVar1->fields)._state = value_01;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields)._state,value_01);
        value_00 = UnityEngine_GameObject__GetComponentInParent_object_
                             (go,(MethodInfo_6F53B0 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
        (pGVar1->fields)._root = value_00;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields)._root,value_00);
        return true;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindTabSearchBridge$$TryPrepareSearchTarget
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge__TryPrepareSearchTarget (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge_o* __this, System_String_o* targetId, const MethodInfo* method);
// 0x1823092c0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182309369: nop dword ptr [rax]
// asm:   0x1823093df: jmp 0x182309370
// asm:   0x1823093fd: mov rbx, rsi

bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge__TryPrepareSearchTarget
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge_o *__this,
               System_String_o *targetId,MethodInfo *method)

{
  System_String_array *pSVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar3;
  bool bVar4;
  uint uVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this_00;
  System_Globalization_CultureInfo_o *provider;
  System_String_o *value;
  float local_res10 [2];
  
  if (Il2CppMethodInitialized_1843476f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"general");
    il2cpp_codegen_initialize_runtime_metadata(&"settings.keybinds.selectedTab");
    il2cpp_codegen_initialize_runtime_metadata(&"keybinds");
    Il2CppMethodInitialized_1843476f6 = '\x01';
  }
  if (Il2CppMethodInitialized_1843476f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-");
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    Il2CppMethodInitialized_1843476f7 = '\x01';
  }
  bVar4 = System_String__IsNullOrEmpty(targetId,(MethodInfo *)0x0);
  pSVar7 = (System_String_o *)0x0;
  value = pSVar7;
  if (bVar4) {
label_182309400:
    bVar4 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if ((bVar4) || ((__this->fields)._state == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
      return false;
    }
    pGVar2 = (__this->fields)._root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      return false;
    }
    pGVar3 = (__this->fields)._state;
    if (pGVar3 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) goto label_182309618;
    pSVar6 = Gisketch_Aottg2UI_State_GisketchUIState__Get
                       (pGVar3,"settings.keybinds.selectedTab","general",(MethodInfo *)0x0);
    bVar4 = System_String__Equals_196c550(pSVar6,value,5,(MethodInfo *)0x0);
    if (bVar4) {
      return false;
    }
    if (Il2CppMethodInitialized_1843476f8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_1843476f8 = '\x01';
    }
    pGVar2 = (__this->fields)._root;
    local_res10[0] = 0.0;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pGVar2 = (__this->fields)._root;
      if (pGVar2 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_182309624;
      pSVar7 = (System_String_o *)
               UnityEngine_Component__get_transform((UnityEngine_Component_o *)pGVar2,(MethodInfo *)0x0);
    }
    __this_00 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__FindActiveScroll
                          ((UnityEngine_Transform_o *)pSVar7,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pGVar3 = (__this->fields)._state;
      if (Il2CppMethodInitialized_184347794 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"settings.keybinds.scroll.");
        Il2CppMethodInitialized_184347794 = '\x01';
      }
      pSVar7 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__NormalizeTabId
                         (pSVar6,(MethodInfo *)0x0);
      pSVar7 = System_String__Concat_1969e50("settings.keybinds.scroll.",pSVar7,(MethodInfo *)0x0);
      if (__this_00 == (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *)0x0) {
label_182309624:
        ThrowNullReferenceException();
      }
      local_res10[0] =
           Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__get_CurrentScrollOffset
                     (__this_00,(MethodInfo *)0x0);
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      pSVar6 = System_Single__ToString_1b49fe0
                         (local_res10,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
      if (pGVar3 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) goto label_182309624;
      Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar3,pSVar7,pSVar6,(MethodInfo *)0x0);
    }
    pGVar3 = (__this->fields)._state;
    if (pGVar3 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar3,"settings.keybinds.selectedTab",value,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgSettingsScreen__RefreshCategory
                ((__this->fields)._root,"keybinds",(MethodInfo *)0x0);
      return true;
    }
  }
  else {
    pSVar1 = (__this->fields)._tabIds;
    pSVar6 = pSVar7;
    while (pSVar1 != (System_String_array *)0x0) {
      uVar5 = (uint)pSVar6;
      if ((int)pSVar1->max_length <= (int)uVar5) goto label_182309400;
      pSVar1 = (__this->fields)._tabIds;
      if (pSVar1 == (System_String_array *)0x0) break;
      if ((uint)pSVar1->max_length <= uVar5) {
label_18230961e:
        ThrowIndexOutOfRangeException();
      }
      pSVar6 = System_String__Concat_1969b70
                         ("settings-keybinds-",pSVar1->m_Items[(int)uVar5],"-",
                          (MethodInfo *)0x0);
      if (targetId == (System_String_o *)0x0) break;
      bVar4 = System_String__StartsWith_19722c0(targetId,pSVar6,5,(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._tabIds;
      if (bVar4) {
        if (pSVar1 != (System_String_array *)0x0) {
          if ((uint)pSVar1->max_length <= uVar5) goto label_18230961e;
          value = pSVar1->m_Items[(int)uVar5];
          goto label_182309400;
        }
        break;
      }
      pSVar6 = (System_String_o *)(ulonglong)(uVar5 + 1);
    }
  }
label_182309618:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindTabSearchBridge$$OwningTab
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge__OwningTab (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge_o* __this, System_String_o* targetId, const MethodInfo* method);
// 0x182308f40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182309007: jmp 0x182308fa0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge__OwningTab
          (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge_o *__this,System_String_o *targetId,
          MethodInfo *method)

{
  System_String_array *pSVar1;
  bool bVar2;
  System_String_o *value;
  uint uVar3;
  
  if (Il2CppMethodInitialized_1843476f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-");
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    Il2CppMethodInitialized_1843476f7 = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(targetId,(MethodInfo *)0x0);
  if (bVar2) {
    return (System_String_o *)0x0;
  }
  pSVar1 = (__this->fields)._tabIds;
  uVar3 = 0;
  do {
    if (pSVar1 == (System_String_array *)0x0) {
label_18230903d:
      ThrowNullReferenceException();
    }
    if ((int)pSVar1->max_length <= (int)uVar3) {
      return (System_String_o *)0x0;
    }
    pSVar1 = (__this->fields)._tabIds;
    if (pSVar1 == (System_String_array *)0x0) goto label_18230903d;
    if ((uint)pSVar1->max_length <= uVar3) {
label_182309043:
      ThrowIndexOutOfRangeException();
    }
    value = System_String__Concat_1969b70
                      ("settings-keybinds-",pSVar1->m_Items[(int)uVar3],"-",
                       (MethodInfo *)0x0);
    if (targetId == (System_String_o *)0x0) goto label_18230903d;
    bVar2 = System_String__StartsWith_19722c0(targetId,value,5,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._tabIds;
    if (bVar2) {
      if (pSVar1 != (System_String_array *)0x0) {
        if (uVar3 < (uint)pSVar1->max_length) {
          return pSVar1->m_Items[(int)uVar3];
        }
        goto label_182309043;
      }
      goto label_18230903d;
    }
    uVar3 = uVar3 + 1;
  } while( true );
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindTabSearchBridge$$SaveScroll
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge__SaveScroll (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge_o* __this, System_String_o* tabId, const MethodInfo* method);
// 0x182309150

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge__SaveScroll
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge_o *__this,System_String_o *tabId,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  bool bVar2;
  UnityEngine_Transform_o *root;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this_01;
  System_String_o *pSVar3;
  System_Globalization_CultureInfo_o *provider;
  System_String_o *value;
  float local_res8 [2];
  
  if (Il2CppMethodInitialized_1843476f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843476f8 = '\x01';
  }
  pGVar1 = (__this->fields)._root;
  local_res8[0] = 0.0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pGVar1 = (__this->fields)._root;
    if (pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_1823092b4;
    root = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pGVar1,(MethodInfo *)0x0);
  }
  else {
    root = (UnityEngine_Transform_o *)0x0;
  }
  __this_01 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__FindActiveScroll
                        (root,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  __this_00 = (__this->fields)._state;
  if (Il2CppMethodInitialized_184347794 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"settings.keybinds.scroll.");
    Il2CppMethodInitialized_184347794 = '\x01';
  }
  pSVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__NormalizeTabId
                     (tabId,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat_1969e50("settings.keybinds.scroll.",pSVar3,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *)0x0) {
    local_res8[0] =
         Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__get_CurrentScrollOffset
                   (__this_01,(MethodInfo *)0x0);
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    value = System_Single__ToString_1b49fe0(local_res8,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0)
    ;
    if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      Gisketch_Aottg2UI_State_GisketchUIState__Set(__this_00,pSVar3,value,(MethodInfo *)0x0);
      return;
    }
  }
label_1823092b4:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindTabSearchBridge$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


