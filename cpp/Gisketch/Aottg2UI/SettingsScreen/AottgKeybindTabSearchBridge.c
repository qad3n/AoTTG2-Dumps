// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindTabSearchBridge
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgKeybindTabSearchBridge.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindTabSearchBridge$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge__RegisterFactory (const MethodInfo* method);
// 0x5dc3110

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge__RegisterFactory(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_07548199 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge_Build);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"AottgKeybindTabSearchBridge");
    Il2CppMethodInitialized_07548199 = '\x01';
  }
  if (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge->static_fields->_registered !=
      false) {
    return;
  }
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
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindTabSearchBridge$$Build
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge__Build (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x5dc3200

bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge__Build
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge_o *pGVar1;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  System_String_array *pSVar3;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar4;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar5;
  
  if (Il2CppMethodInitialized_0754819a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgKeybindTabSearchBridge);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_0754819a = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pGVar1 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_353B6A0 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_AottgKeybindTabSearchBridge);
    pUVar2 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement)
    ;
    if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
      (*(pUVar2->klass->vtable)._28_set_ignoreLayout.methodPtr)
                (pUVar2,true,(pUVar2->klass->vtable)._28_set_ignoreLayout.method);
      if ((node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) ||
         (pSVar3 = (node->fields).options, pSVar3 == (System_String_array *)0x0)) {
        pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
      }
      if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge_o *)0x0) {
        (pGVar1->fields)._tabIds = pSVar3;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields)._tabIds);
        if (context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
          pGVar5 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
        }
        else {
          pGVar5 = (context->fields).State;
        }
        (pGVar1->fields)._state = pGVar5;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields)._state);
        pGVar4 = UnityEngine_GameObject__GetComponentInParent_object_
                           (go,(MethodInfo_353BB40 *)
                               MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
        (pGVar1->fields)._root = pGVar4;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields)._root);
        return true;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindTabSearchBridge$$TryPrepareSearchTarget
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge__TryPrepareSearchTarget (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge_o* __this, System_String_o* targetId, const MethodInfo* method);
// 0x5dc3330

bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge__TryPrepareSearchTarget
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge_o *__this,
               System_String_o *targetId,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *x;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  bool bVar2;
  System_String_o *value;
  System_String_o *a;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  bool bVar3;
  
  if (Il2CppMethodInitialized_0754819b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"general");
    il2cpp_codegen_initialize_runtime_metadata(&"settings.keybinds.selectedTab");
    il2cpp_codegen_initialize_runtime_metadata(&"keybinds");
    Il2CppMethodInitialized_0754819b = '\x01';
    method = extraout_RDX;
  }
  value = Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge__OwningTab(__this,targetId,method);
  bVar3 = false;
  bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((__this->fields)._state == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      bVar3 = false;
    }
    else {
      x = (__this->fields)._root;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = false;
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        pGVar1 = (__this->fields)._state;
        if (pGVar1 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
label_05dc346b:
          ThrowNullReferenceException();
        }
        bVar3 = false;
        a = Gisketch_Aottg2UI_State_GisketchUIState__Get
                      (pGVar1,"settings.keybinds.selectedTab","general",(MethodInfo *)0x0);
        bVar2 = System_String__Equals_52ffe30(a,value,5,(MethodInfo *)0x0);
        if (!bVar2) {
          Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge__SaveScroll(__this,a,method_00);
          pGVar1 = (__this->fields)._state;
          if (pGVar1 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) goto label_05dc346b;
          Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar1,"settings.keybinds.selectedTab",value,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Game_AottgSettingsScreen__RefreshCategory
                    ((__this->fields)._root,"keybinds",(MethodInfo *)0x0);
          bVar3 = true;
        }
      }
    }
  }
  return bVar3;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindTabSearchBridge$$OwningTab
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge__OwningTab (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge_o* __this, System_String_o* targetId, const MethodInfo* method);
// 0x5dc3470
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dc34df: nop 

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge__OwningTab
          (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge_o *__this,System_String_o *targetId,
          MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_String_array *pSVar3;
  System_String_o *value;
  ulong uVar4;
  
  if (Il2CppMethodInitialized_0754819c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"settings-keybinds-");
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    Il2CppMethodInitialized_0754819c = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(targetId,(MethodInfo *)0x0);
  if (bVar2) {
    return (System_String_o *)0x0;
  }
  pSVar3 = (__this->fields)._tabIds;
  if (pSVar3 != (System_String_array *)0x0) {
    if (targetId == (System_String_o *)0x0) {
      if (0 < (int)pSVar3->max_length) {
        System_String__Concat_5301f10
                  ("settings-keybinds-",pSVar3->m_Items[0],"-",(MethodInfo *)0x0);
        ThrowNullReferenceException();
      }
      return (System_String_o *)0x0;
    }
    uVar4 = 0;
    do {
      uVar1 = (uint)pSVar3->max_length;
      if ((long)(int)uVar1 <= (long)uVar4) {
        return (System_String_o *)0x0;
      }
      if (uVar1 <= uVar4) {
label_05dc355b:
        ThrowIndexOutOfRangeException();
      }
      value = System_String__Concat_5301f10
                        ("settings-keybinds-",pSVar3->m_Items[uVar4],"-",(MethodInfo *)0x0)
      ;
      bVar2 = System_String__StartsWith_53002b0(targetId,value,5,(MethodInfo *)0x0);
      if (bVar2) {
        pSVar3 = (__this->fields)._tabIds;
        if (pSVar3 != (System_String_array *)0x0) {
          if ((uint)uVar4 < (uint)pSVar3->max_length) {
            return pSVar3->m_Items[uVar4];
          }
          goto label_05dc355b;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      pSVar3 = (__this->fields)._tabIds;
    } while (pSVar3 != (System_String_array *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindTabSearchBridge$$SaveScroll
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge__SaveScroll (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge_o* __this, System_String_o* tabId, const MethodInfo* method);
// 0x5dc3590

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge__SaveScroll
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge_o *__this,System_String_o *tabId,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  bool bVar2;
  uint in_EAX;
  UnityEngine_Transform_o *root;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this_01;
  System_String_o *key;
  System_Globalization_CultureInfo_o *provider;
  System_String_o *value;
  float fVar3;
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  if (Il2CppMethodInitialized_0754819d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754819d = '\x01';
  }
  uStack_38 = (ulong)(uint)uStack_38;
  pGVar1 = (__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  root = (UnityEngine_Transform_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pGVar1 = (__this->fields)._root;
    if (pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_05dc36f6;
    root = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pGVar1,(MethodInfo *)0x0);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
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
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory);
  }
  key = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory__ScrollStateKey
                  (tabId,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *)0x0) {
    fVar3 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__get_CurrentScrollOffset
                      (__this_01,(MethodInfo *)0x0);
    uStack_38 = CONCAT44(fVar3,(uint)uStack_38);
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    value = System_Single__ToString_54d09f0
                      ((float *)((long)&uStack_38 + 4),(System_IFormatProvider_o *)provider,(MethodInfo *)0x0)
    ;
    if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      Gisketch_Aottg2UI_State_GisketchUIState__Set(__this_00,key,value,(MethodInfo *)0x0);
      return;
    }
  }
label_05dc36f6:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindTabSearchBridge$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge_o* __this, const MethodInfo* method);
// 0x5dc3700

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindTabSearchBridge_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


