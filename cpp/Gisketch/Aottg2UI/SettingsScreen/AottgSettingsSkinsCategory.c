// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsSkinsCategory.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass16_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass16_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass16_0___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass16_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass16_0$$<HumanGlobalSetDropdown>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass16_0___HumanGlobalSetDropdown_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass16_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1823a25d0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass16_0___HumanGlobalSetDropdown_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass16_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  System_Collections_Generic_List_int__o *pSVar2;
  Settings_HumanCustomSkinSettings_o *pSVar3;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o value;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_184347b35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSelectedSetIndex);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184347b35 = '\x01';
  }
  pSVar1 = (__this->fields).filteredIndex;
  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
    if ((pSVar1->fields)._value < 0) {
label_1823a26b5:
      local_28.fields.ElementId = (context->fields).ElementId;
      local_28.fields.GameObject = (context->fields).GameObject;
      local_28.fields.Node = (context->fields).Node;
      local_28.fields.InputSource = (context->fields).InputSource;
      local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__RefreshSkins(&local_28,(MethodInfo *)0x0);
      return;
    }
    pSVar2 = (__this->fields).originalIndices;
    if (pSVar2 != (System_Collections_Generic_List_int__o *)0x0) {
      pSVar1 = (__this->fields).filteredIndex;
      if ((pSVar2->fields)._size <= (pSVar1->fields)._value) goto label_1823a26b5;
      value = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                        ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                         (__this->fields).originalIndices,(pSVar1->fields)._value,
                         (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      pSVar3 = (__this->fields).settings;
      if ((pSVar3 != (Settings_HumanCustomSkinSettings_o *)0x0) &&
         (pSVar1 = (pSVar3->fields).SelectedSetIndex, pSVar1 != (Settings_IntSetting_o *)0x0)) {
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pSVar1,(int32_t)value.fields,
                   (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        pSVar3 = (__this->fields).settings;
        if ((pSVar3 != (Settings_HumanCustomSkinSettings_o *)0x0) &&
           (pSVar1 = (pSVar3->fields).LastGlobalPresetIndex, pSVar1 != (Settings_IntSetting_o *)0x0)) {
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)pSVar1,(int32_t)value.fields,
                     (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          goto label_1823a26b5;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass23_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass23_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass23_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass23_0___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass23_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass23_0$$<SetActions>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass23_0___SetActions_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass23_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1823a26f0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass23_0___SetActions_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass23_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  Settings_ISetSettingsContainer_o *settings;
  System_Action_o *afterChange;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_48;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  local_48.fields.ElementId = (context->fields).ElementId;
  local_48.fields.GameObject = (context->fields).GameObject;
  settings = (__this->fields).settings;
  local_48.fields.Node = (context->fields).Node;
  local_48.fields.InputSource = (context->fields).InputSource;
  local_48.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
  local_28.fields.ElementId = local_48.fields.ElementId;
  local_28.fields.GameObject = local_48.fields.GameObject;
  local_28.fields.Node = local_48.fields.Node;
  local_28.fields._24_8_ = local_48.fields._24_8_;
  afterChange = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__AfterSkinSetChange
                          (&local_48,(__this->fields).afterChange,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenName
            (&local_28,settings,0,afterChange,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass23_0$$<SetActions>b__1
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass23_0___SetActions_b__1 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass23_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1823a2750

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass23_0___SetActions_b__1
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass23_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_GameObject_o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_01;
  System_Action_o *value;
  void *pvVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  local_28.fields.ElementId = (context->fields).ElementId;
  local_28.fields.GameObject = (context->fields).GameObject;
  obj = (Il2CppObject *)(__this->fields).settings;
  local_28.fields.Node = (context->fields).Node;
  local_28.fields.InputSource = (context->fields).InputSource;
  local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
  value = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__AfterSkinSetChange
                    (&local_28,(__this->fields).afterChange,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184347b49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ISetSettingsContainer);
    il2cpp_codegen_initialize_runtime_metadata(&"setting-skin-set-delete");
    Il2CppMethodInitialized_184347b49 = '\x01';
  }
  if (obj != (Il2CppObject *)0x0) {
    pvVar1 = InterfaceInvoker0_Invoke(7,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,obj);
    if ((char)pvVar1 != '\0') {
      __this_00 = (context->fields).GameObject;
      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings =
           (Settings_ISetSettingsContainer_o *)obj;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings,obj)
      ;
      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_afterChange = value;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_afterChange,
                 value);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        pGVar2 = UnityEngine_GameObject__GetComponentInParent_object_
                           (__this_00,
                            (MethodInfo_6F53B0 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
        if ((pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
           (__this_01 = (pGVar2->fields)._Overlays_k__BackingField,
           __this_01 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                    (__this_01,"setting-skin-set-delete",true,(MethodInfo *)0x0);
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass23_0$$<SetActions>b__2
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass23_0___SetActions_b__2 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass23_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1823a2890

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass23_0___SetActions_b__2
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass23_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  Il2CppObject *obj;
  System_Action_o *afterChange;
  void *pvVar1;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  local_28.fields.ElementId = (context->fields).ElementId;
  local_28.fields.GameObject = (context->fields).GameObject;
  obj = (Il2CppObject *)(__this->fields).settings;
  local_28.fields.Node = (context->fields).Node;
  local_28.fields.InputSource = (context->fields).InputSource;
  local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
  afterChange = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__AfterSkinSetChange
                          (&local_28,(__this->fields).afterChange,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184347b48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ISetSettingsContainer);
    Il2CppMethodInitialized_184347b48 = '\x01';
  }
  if (obj != (Il2CppObject *)0x0) {
    pvVar1 = InterfaceInvoker0_Invoke(8,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,obj);
    if ((char)pvVar1 != '\0') {
      local_28.fields.ElementId = (context->fields).ElementId;
      local_28.fields.GameObject = (context->fields).GameObject;
      local_28.fields.Node = (context->fields).Node;
      local_28.fields.InputSource = (context->fields).InputSource;
      local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
      Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenName
                (&local_28,(Settings_ISetSettingsContainer_o *)obj,1,afterChange,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass23_0$$<SetActions>b__3
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass23_0___SetActions_b__3 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass23_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1823a2950

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass23_0___SetActions_b__3
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass23_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  Settings_ISetSettingsContainer_o *settings;
  System_Action_o *afterChange;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_48;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  local_48.fields.ElementId = (context->fields).ElementId;
  local_48.fields.GameObject = (context->fields).GameObject;
  settings = (__this->fields).settings;
  local_48.fields.Node = (context->fields).Node;
  local_48.fields.InputSource = (context->fields).InputSource;
  local_48.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
  local_28.fields.ElementId = local_48.fields.ElementId;
  local_28.fields.GameObject = local_48.fields.GameObject;
  local_28.fields.Node = local_48.fields.Node;
  local_28.fields._24_8_ = local_48.fields._24_8_;
  afterChange = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__AfterSkinSetChange
                          (&local_48,(__this->fields).afterChange,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenName
            (&local_28,settings,2,afterChange,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass31_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass31_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass31_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass31_0___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass31_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass31_0$$<AfterSkinSetChange>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass31_0___AfterSkinSetChange_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass31_0_o* __this, const MethodInfo* method);
// 0x1823a29b0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass31_0___AfterSkinSetChange_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass31_0_o *__this,
               MethodInfo *method)

{
  System_Action_o *pSVar1;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  pSVar1 = (__this->fields).beforeRefresh;
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code);
  }
  local_28.fields.ElementId = (__this->fields).context.fields.ElementId;
  local_28.fields.GameObject = (__this->fields).context.fields.GameObject;
  local_28.fields.Node = (__this->fields).context.fields.Node;
  local_28.fields.InputSource = (__this->fields).context.fields.InputSource;
  local_28.fields._28_4_ = *(undefined4 *)&(__this->fields).context.fields.field_0x1c;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__RefreshSkins(&local_28,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass5_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass5_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass5_0___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass5_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass5_0$$<HumanGroup>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass5_0___HumanGroup_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x1823a2a00

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass5_0___HumanGroup_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass5_0_o *__this,
               MethodInfo *method)

{
  Settings_HumanCustomSkinSettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_IntSetting_o *__this_00;
  
  pSVar1 = (__this->fields).settings;
  if (Il2CppMethodInitialized_184347b30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSelectedSetIndex);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184347b30 = '\x01';
  }
  if (pSVar1 == (Settings_HumanCustomSkinSettings_o *)0x0) {
    return;
  }
  pSVar2 = (pSVar1->fields).SkinMode;
  if (pSVar2 != (Settings_IntSetting_o *)0x0) {
    if ((pSVar2->fields)._value != 0) {
      return;
    }
    pSVar2 = (pSVar1->fields).SelectedSetIndex;
    if ((pSVar2 != (Settings_IntSetting_o *)0x0) &&
       (__this_00 = (pSVar1->fields).LastGlobalPresetIndex, __this_00 != (Settings_IntSetting_o *)0x0)) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)__this_00,(pSVar2->fields)._value,
                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass6_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass6_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass6_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass6_0___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass6_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass6_0$$<TitanGroup>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass6_0___TitanGroup_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass6_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1823a2a90

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass6_0___TitanGroup_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass6_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  Settings_TitanCustomSkinSet_o *pSVar1;
  Settings_ListSetting_TitanCustomSkinSlot__o *pSVar2;
  int32_t iVar3;
  Settings_TitanCustomSkinSlot_o *__this_00;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  pSVar1 = (__this->fields).set;
  if (Il2CppMethodInitialized_184347b1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_AddItem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSkinSlot);
    Il2CppMethodInitialized_184347b1f = '\x01';
  }
  if ((pSVar1 != (Settings_TitanCustomSkinSet_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).Slots, pSVar2 != (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0)) {
    iVar3 = Settings_ListSetting_object___GetCount
                      ((Settings_ListSetting_T__o *)pSVar2,
                       (MethodInfo_182B100 *)MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
    if (iVar3 < 0x14) {
      pSVar2 = (pSVar1->fields).Slots;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_TitanCustomSkinSlot);
      Settings_TitanCustomSkinSlot___ctor(__this_00,(MethodInfo *)0x0);
      if (pSVar2 == (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0) goto label_1823a2b5a;
      Settings_ListSetting_object___AddItem
                ((Settings_ListSetting_T__o *)pSVar2,(Settings_BaseSetting_o *)__this_00,
                 (MethodInfo_182A740 *)MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_AddItem);
      local_28.fields.ElementId = (context->fields).ElementId;
      local_28.fields.GameObject = (context->fields).GameObject;
      local_28.fields.Node = (context->fields).Node;
      local_28.fields.InputSource = (context->fields).InputSource;
      local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__RefreshSkins(&local_28,(MethodInfo *)0x0);
    }
    return;
  }
label_1823a2b5a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass7_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass7_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass7_0___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass7_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass7_0$$<AddTitanSlotBlocks>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass7_0___AddTitanSlotBlocks_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass7_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1823a2b60

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass7_0___AddTitanSlotBlocks_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass7_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  Settings_TitanCustomSkinSet_o *pSVar1;
  Settings_TitanCustomSkinSlot_o *item;
  Settings_ListSetting_TitanCustomSkinSlot__o *pSVar2;
  System_Collections_Generic_List_object__o *__this_00;
  int32_t iVar3;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  pSVar1 = (__this->fields).set;
  item = (__this->fields).slot;
  if (Il2CppMethodInitialized_184347b20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanCustomSkinSlot_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_TypedSetting_List_TitanCustomSkinSlot_get_Value);
    Il2CppMethodInitialized_184347b20 = '\x01';
  }
  if ((pSVar1 != (Settings_TitanCustomSkinSet_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).Slots, pSVar2 != (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0)) {
    iVar3 = Settings_ListSetting_object___GetCount
                      ((Settings_ListSetting_T__o *)pSVar2,
                       (MethodInfo_182B100 *)MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
    if (1 < iVar3) {
      pSVar2 = (pSVar1->fields).Slots;
      if ((pSVar2 == (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0) ||
         (__this_00 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
         __this_00 == (System_Collections_Generic_List_object__o *)0x0)) goto label_1823a2c1b;
      System_Collections_Generic_List_object___Remove
                (__this_00,(Il2CppObject *)item,
                 (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_TitanCustomSkinSlot_Remove);
      local_28.fields.ElementId = (context->fields).ElementId;
      local_28.fields.GameObject = (context->fields).GameObject;
      local_28.fields.Node = (context->fields).Node;
      local_28.fields.InputSource = (context->fields).InputSource;
      local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__RefreshSkins(&local_28,(MethodInfo *)0x0);
    }
    return;
  }
label_1823a2c1b:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__Build (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x182394cf0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__Build
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o *context,MethodInfo *method)

{
  float initialScrollOffset;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o local_38;
  
  if (Il2CppMethodInitialized_184347b16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory);
    il2cpp_codegen_initialize_runtime_metadata(&"skins");
    Il2CppMethodInitialized_184347b16 = '\x01';
  }
  initialScrollOffset =
       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory->static_fields->
       _pendingScrollOffset;
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory->static_fields->_pendingScrollOffset =
       0.0;
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__Groups((MethodInfo *)0x0);
  local_38.fields._group = (context->fields)._group;
  local_38.fields._order = (context->fields)._order;
  local_38.fields._12_4_ = *(undefined4 *)&(context->fields).field_0xc;
  local_38.fields._SectionId_k__BackingField = (context->fields)._SectionId_k__BackingField;
  local_38.fields._SectionTitle_k__BackingField = (context->fields)._SectionTitle_k__BackingField;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__BuildVirtual_2313cb0
            (content,&local_38,"skins",initialScrollOffset,groups,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SyncState (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x182398040

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SyncState
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__Groups((MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SyncState(root,groups,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$Groups
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__Groups (const MethodInfo* method);
// 0x182395580

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__Groups(MethodInfo *method)

{
  Settings_CustomSkinSettings_o *pSVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *pGVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *pGVar3;
  Settings_HumanCustomSkinSettings_o *settings;
  Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *settings_00;
  Settings_BaseCustomSkinSettings_ShifterCustomSkinSet__o *settings_01;
  Settings_BaseCustomSkinSettings_SkyboxCustomSkinSet__o *settings_02;
  
  if (Il2CppMethodInitialized_184347b17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"skybox");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter");
    il2cpp_codegen_initialize_runtime_metadata(&"shifter");
    il2cpp_codegen_initialize_runtime_metadata(&"Skybox");
    Il2CppMethodInitialized_184347b17 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
  pGVar2 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array,4);
  if (pSVar1 == (Settings_CustomSkinSettings_o *)0x0) {
    settings = (Settings_HumanCustomSkinSettings_o *)0x0;
  }
  else {
    settings = (pSVar1->fields).Human;
  }
  pGVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__HumanGroup(settings,(MethodInfo *)0x0)
  ;
  if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0) {
    if ((int)pGVar2->max_length != 0) {
      pGVar2->m_Items[0] = pGVar3;
      Il2CppCodeGenWriteBarrier(pGVar2->m_Items,pGVar3);
      if (pSVar1 == (Settings_CustomSkinSettings_o *)0x0) {
        settings_00 = (Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *)0x0;
      }
      else {
        settings_00 = (pSVar1->fields).Titan;
      }
      pGVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanGroup
                         (settings_00,(MethodInfo *)0x0);
      if (1 < (uint)pGVar2->max_length) {
        pGVar2->m_Items[1] = pGVar3;
        Il2CppCodeGenWriteBarrier(pGVar2->m_Items + 1,pGVar3);
        if (pSVar1 == (Settings_CustomSkinSettings_o *)0x0) {
          settings_01 = (Settings_BaseCustomSkinSettings_ShifterCustomSkinSet__o *)0x0;
        }
        else {
          settings_01 = (pSVar1->fields).Shifter;
        }
        pGVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SkinGroup
                           ("shifter","Shifter",
                            (Settings_ICustomSkinSettings_o *)settings_01,(MethodInfo *)0x0);
        if (2 < (uint)pGVar2->max_length) {
          pGVar2->m_Items[2] = pGVar3;
          Il2CppCodeGenWriteBarrier(pGVar2->m_Items + 2,pGVar3);
          if (pSVar1 == (Settings_CustomSkinSettings_o *)0x0) {
            settings_02 = (Settings_BaseCustomSkinSettings_SkyboxCustomSkinSet__o *)0x0;
          }
          else {
            settings_02 = (pSVar1->fields).Skybox;
          }
          pGVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SkinGroup
                             ("skybox","Skybox",
                              (Settings_ICustomSkinSettings_o *)settings_02,(MethodInfo *)0x0);
          if (3 < (uint)pGVar2->max_length) {
            pGVar2->m_Items[3] = pGVar3;
            Il2CppCodeGenWriteBarrier(pGVar2->m_Items + 3,pGVar3);
            return pGVar2;
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$HumanGroup
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__HumanGroup (Settings_HumanCustomSkinSettings_o* settings, const MethodInfo* method);
// 0x182395c30

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__HumanGroup
          (Settings_HumanCustomSkinSettings_o *settings,MethodInfo *method)

{
  int iVar1;
  Settings_IntSetting_o *setting;
  Settings_HumanCustomSkinSettings_o *pSVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass5_0_o *object;
  System_Collections_Generic_List_T__o *__this;
  System_Collections_Generic_List_T__o *__this_00;
  System_String_array *options;
  DG_Tweening_Core_DOSetter_Color2__o *__this_01;
  Gisketch_Aottg2UI_Code_AottgComponent_o *pGVar3;
  System_Action_o *__this_02;
  Settings_BaseSettingsContainer_o *container;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *blocks;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar4;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *pGVar5;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this_03;
  System_String_o *pSVar6;
  
  if (Il2CppMethodInitialized_184347b18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_RefreshSkins);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_BaseCustomSkinSettings_HumanCustomSkinSet_GetSkinsEnabled);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_BaseCustomSkinSettings_HumanCustomSkinSet_GetSkinsLocal);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_AottgComponent_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgComponent_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_AottgComponent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass5_0_HumanGroup_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass5_0);
    il2cpp_codegen_initialize_runtime_metadata(&"SetSpecificSkinsEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"SkinsLocal");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-human-enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"Hook enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-human-gas-enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-human-local");
    il2cpp_codegen_initialize_runtime_metadata(&"GlobalSkinOverridesEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"Gas enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-human-actions");
    il2cpp_codegen_initialize_runtime_metadata(&"Character");
    il2cpp_codegen_initialize_runtime_metadata(&"SkinsLocalTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"SkinsEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"Skins.Human");
    il2cpp_codegen_initialize_runtime_metadata(&"HookEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"Set-specific skins");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-human-global-overrides");
    il2cpp_codegen_initialize_runtime_metadata(&"Global skin overrides");
    il2cpp_codegen_initialize_runtime_metadata(&"SkinMode");
    il2cpp_codegen_initialize_runtime_metadata(&"human-character");
    il2cpp_codegen_initialize_runtime_metadata(&"GasEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"GlobalSkinOverridesEnabledTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-human-hook-enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-human-set-specific");
    il2cpp_codegen_initialize_runtime_metadata(&"Skin mode");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-human-mode");
    il2cpp_codegen_initialize_runtime_metadata(&"SetSpecificSkinsEnabledTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"Global");
    il2cpp_codegen_initialize_runtime_metadata(&"human-global");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-human");
    Il2CppMethodInitialized_184347b18 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass5_0)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass5_0_o *)0x0)
  goto label_1823963e1;
  (object->fields).settings = settings;
  Il2CppCodeGenWriteBarrier(&(object->fields).settings,settings);
  __this = (System_Collections_Generic_List_T__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgComponent);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_AottgComponent_ctor);
  __this_00 = (System_Collections_Generic_List_T__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgComponent);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_AottgComponent_ctor);
  if ((object->fields).settings == (Settings_HumanCustomSkinSettings_o *)0x0) {
    blocks = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array,2);
    if (__this == (System_Collections_Generic_List_T__o *)0x0) goto label_1823963e1;
  }
  else {
    setting = (((object->fields).settings)->fields).SkinMode;
    if (setting == (Settings_IntSetting_o *)0x0) goto label_1823963e1;
    iVar1 = (setting->fields)._value;
    options = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
    pSVar6 = "Global";
    if (options == (System_String_array *)0x0) goto label_1823963e1;
    if ((int)options->max_length == 0) goto label_1823963e7;
    options->m_Items[0] = "Global";
    Il2CppCodeGenWriteBarrier(options->m_Items,pSVar6);
    pSVar6 = "Character";
    if ((uint)options->max_length < 2) goto label_1823963e7;
    options->m_Items[1] = "Character";
    Il2CppCodeGenWriteBarrier(options->m_Items + 1,pSVar6);
    __this_01 = (DG_Tweening_Core_DOSetter_Color2__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_01,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_RefreshSkins,
               (MethodInfo_1387DC0 *)0x0);
    pGVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                       ("settings-skins-human-mode","Skins.Human","SkinMode",setting,
                        "Skin mode",options,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_Action_GisketchActionContext__o *)__this_01,(MethodInfo *)0x0);
    if (__this == (System_Collections_Generic_List_T__o *)0x0) goto label_1823963e1;
    il2cpp_runtime_helper_180012890(__this,pGVar3,MethodInfo_System_Collections_Generic_List_AottgComponent_Add);
    pSVar2 = (object->fields).settings;
    if (iVar1 == 1) {
      pGVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CharacterDropdown
                         (pSVar2,(MethodInfo *)0x0);
    }
    else {
      pGVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__HumanGlobalSetDropdown
                         (pSVar2,(MethodInfo *)0x0);
      il2cpp_runtime_helper_180012890(__this,pGVar3,MethodInfo_System_Collections_Generic_List_AottgComponent_Add);
      pSVar2 = (object->fields).settings;
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
      System_Action___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_02,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass5_0_HumanGroup_b__0
                 ,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SetActions
                         ("settings-skins-human-actions",(Settings_ISetSettingsContainer_o *)pSVar2,__this_02,
                          (MethodInfo *)0x0);
    }
    il2cpp_runtime_helper_180012890(__this,pGVar3,MethodInfo_System_Collections_Generic_List_AottgComponent_Add);
    pSVar2 = (object->fields).settings;
    if (pSVar2 == (Settings_HumanCustomSkinSettings_o *)0x0) goto label_1823963e1;
    pGVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CommonSkinSwitch
                       ("settings-skins-human-enabled","Human","SkinsEnabled",
                        (pSVar2->fields).SkinsEnabled,(System_String_o *)0x0,(MethodInfo *)0x0);
    il2cpp_runtime_helper_180012890(__this,pGVar3,MethodInfo_System_Collections_Generic_List_AottgComponent_Add);
    pSVar2 = (object->fields).settings;
    if (pSVar2 == (Settings_HumanCustomSkinSettings_o *)0x0) goto label_1823963e1;
    pGVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CommonSkinSwitch
                       ("settings-skins-human-local","Human","SkinsLocal",
                        (pSVar2->fields).SkinsLocal,"SkinsLocalTooltip",(MethodInfo *)0x0);
    il2cpp_runtime_helper_180012890(__this,pGVar3,MethodInfo_System_Collections_Generic_List_AottgComponent_Add);
    pSVar2 = (object->fields).settings;
    if (pSVar2 == (Settings_HumanCustomSkinSettings_o *)0x0) goto label_1823963e1;
    pGVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                       ("settings-skins-human-global-overrides","Skins.Human","GlobalSkinOverridesEnabled",
                        (pSVar2->fields).GlobalSkinOverridesEnabled,"Global skin overrides",
                        "GlobalSkinOverridesEnabledTooltip",(System_String_o *)0x0,
                        (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
    il2cpp_runtime_helper_180012890(__this,pGVar3,MethodInfo_System_Collections_Generic_List_AottgComponent_Add);
    pSVar2 = (object->fields).settings;
    if (pSVar2 == (Settings_HumanCustomSkinSettings_o *)0x0) goto label_1823963e1;
    pGVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                       ("settings-skins-human-set-specific","Skins.Human","SetSpecificSkinsEnabled",
                        (pSVar2->fields).SetSpecificSkinsEnabled,"Set-specific skins","SetSpecificSkinsEnabledTooltip",
                        (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0
                       );
    il2cpp_runtime_helper_180012890(__this,pGVar3,MethodInfo_System_Collections_Generic_List_AottgComponent_Add);
    pSVar2 = (object->fields).settings;
    if (pSVar2 == (Settings_HumanCustomSkinSettings_o *)0x0) goto label_1823963e1;
    pGVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                       ("settings-skins-human-gas-enabled","Skins.Human","GasEnabled",
                        (pSVar2->fields).GasEnabled,"Gas enabled",(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0
                       );
    il2cpp_runtime_helper_180012890(__this,pGVar3,MethodInfo_System_Collections_Generic_List_AottgComponent_Add);
    pSVar2 = (object->fields).settings;
    if (pSVar2 == (Settings_HumanCustomSkinSettings_o *)0x0) goto label_1823963e1;
    pGVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                       ("settings-skins-human-hook-enabled","Skins.Human","HookEnabled",
                        (pSVar2->fields).HookEnabled,"Hook enabled",(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0
                       );
    il2cpp_runtime_helper_180012890(__this,pGVar3,MethodInfo_System_Collections_Generic_List_AottgComponent_Add);
    pSVar6 = "human-global";
    if (iVar1 == 1) {
      pSVar6 = "human-character";
    }
    container = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__HumanSkinContainer
                          ((object->fields).settings,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__AddSkinInputRows
              ((System_Collections_Generic_List_AottgComponent__o *)__this_00,
               (System_Collections_Generic_List_AottgComponent__o *)__this_00,pSVar6,"Skins.Human",
               container,iVar1 == 1,(MethodInfo *)0x0);
    blocks = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array,2);
  }
  pUVar4 = System_Collections_Generic_List_object___ToArray
                     (__this,(MethodInfo_929FE0 *)
                             MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray);
  pGVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__TwoColumn
                     ((Gisketch_Aottg2UI_Code_AottgComponent_array *)pUVar4,(MethodInfo *)0x0);
  if (blocks != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0) {
    if ((int)blocks->max_length != 0) {
      blocks->m_Items[0] = pGVar5;
      Il2CppCodeGenWriteBarrier(blocks->m_Items,pGVar5);
      if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) goto label_1823963e1;
      pUVar4 = System_Collections_Generic_List_object___ToArray
                         (__this_00,
                          (MethodInfo_929FE0 *)
                          MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray);
      pGVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__TwoColumn
                         ((Gisketch_Aottg2UI_Code_AottgComponent_array *)pUVar4,(MethodInfo *)0x0);
      if (1 < (uint)blocks->max_length) {
        blocks->m_Items[1] = pGVar5;
        Il2CppCodeGenWriteBarrier(blocks->m_Items + 1,pGVar5);
        __this_03 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b830
                  (__this_03,"settings-skins-human","Human",blocks,(MethodInfo *)0x0);
        return __this_03;
      }
    }
label_1823963e7:
    ThrowIndexOutOfRangeException();
  }
label_1823963e1:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$TitanGroup
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanGroup (Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o* settings, const MethodInfo* method);
// 0x182398070

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanGroup
          (Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *settings,MethodInfo *method)

{
  byte bVar1;
  Settings_IntSetting_o *setting;
  Settings_ListSetting_TitanCustomSkinSlot__o *pSVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_AottgSettingsRowBlock__o *blocks;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass6_0_o *object;
  Settings_TitanCustomSkinSet_o *pSVar5;
  Settings_TitanCustomSkinSet_o *pSVar6;
  System_Collections_Generic_List_T__o *__this;
  System_String_array *names;
  DG_Tweening_Core_DOSetter_Color2__o *pDVar7;
  Gisketch_Aottg2UI_Code_AottgComponent_o *pGVar8;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar9;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *pGVar10;
  Gisketch_Aottg2UI_Code_AottgComponent_array *rows;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *buttons;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_o *__this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *__this_01;
  Il2CppObject *pIVar13;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this_02;
  int index;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184347b19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_RefreshSkins);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_BaseCustomSkinSettings_TitanCustomSkinSet_GetSkinsEnabled);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_BaseCustomSkinSettings_TitanCustomSkinSet_GetSkinsLocal);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgSettingsRowBlock_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_AottgComponent_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgSettingsRowBlock_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgSettingsRowBlock_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgComponent_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_AottgSettingsRowBlock);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_AottgComponent);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSkinSet_GetSelectedSetIndex);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSkinSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSkinSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSkinSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass6_0_TitanGroup_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass6_0);
    il2cpp_codegen_initialize_runtime_metadata(&"OverrideModels");
    il2cpp_codegen_initialize_runtime_metadata(&"Add");
    il2cpp_codegen_initialize_runtime_metadata(&"SkinsLocal");
    il2cpp_codegen_initialize_runtime_metadata(&"Skins.Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-titan-actions");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-titan-override");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-titan-local");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-titan-slot-actions");
    il2cpp_codegen_initialize_runtime_metadata(&"SkinsLocalTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-titan-enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"SkinsEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-titan-set");
    il2cpp_codegen_initialize_runtime_metadata(&"OverrideModelsTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Skins.Common");
    il2cpp_codegen_initialize_runtime_metadata(&"Override models");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Add");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-titan");
    Il2CppMethodInitialized_184347b19 = '\x01';
  }
  blocks = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgSettingsRowBlock);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)blocks,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_AottgSettingsRowBlock_ctor);
  if (settings == (Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *)0x0) {
    if (blocks != (System_Collections_Generic_List_AottgSettingsRowBlock__o *)0x0) {
label_182398837:
      pUVar9 = System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_T__o *)blocks,
                          (MethodInfo_929FE0 *)
                          MethodInfo_System_Collections_Generic_List_AottgSettingsRowBlock_ToArray);
      __this_02 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b830
                (__this_02,"settings-skins-titan","Titan",
                 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)pUVar9,(MethodInfo *)0x0);
      return __this_02;
    }
  }
  else {
    object = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass6_0
                       );
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
    pSVar5 = (Settings_TitanCustomSkinSet_o *)
             Settings_SetSettingsContainer_object___GetSelectedSet
                       ((Settings_SetSettingsContainer_T__o *)settings,
                        (MethodInfo_C8EAF0 *)
                        MethodInfo_Settings_SetSettingsContainer_TitanCustomSkinSet_GetSelectedSet);
    if (object != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass6_0_o *)0x0) {
      if (pSVar5 == (Settings_TitanCustomSkinSet_o *)0x0) {
        (object->fields).set = (Settings_TitanCustomSkinSet_o *)0x0;
        pSVar6 = (Settings_TitanCustomSkinSet_o *)0x0;
      }
      else {
        bVar1 = (TypeInfo_Settings_TitanCustomSkinSet->_2).typeHierarchyDepth;
        if (((pSVar5->klass->_2).typeHierarchyDepth < bVar1) ||
           (bVar3 = true,
           (pSVar5->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
           (Il2CppClass *)TypeInfo_Settings_TitanCustomSkinSet)) {
          bVar3 = false;
        }
        pSVar6 = (Settings_TitanCustomSkinSet_o *)0x0;
        if (bVar3) {
          pSVar6 = pSVar5;
        }
        (object->fields).set = pSVar6;
        bVar1 = (TypeInfo_Settings_TitanCustomSkinSet->_2).typeHierarchyDepth;
        if (((pSVar5->klass->_2).typeHierarchyDepth < bVar1) ||
           (bVar3 = true,
           (pSVar5->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
           (Il2CppClass *)TypeInfo_Settings_TitanCustomSkinSet)) {
          bVar3 = false;
        }
        pSVar6 = (Settings_TitanCustomSkinSet_o *)0x0;
        if (bVar3) {
          pSVar6 = pSVar5;
        }
      }
      Il2CppCodeGenWriteBarrier(&(object->fields).set,pSVar6);
      __this = (System_Collections_Generic_List_T__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgComponent);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)__this,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_AottgComponent_ctor);
      setting = (settings->fields).SelectedSetIndex;
      names = Settings_SetSettingsContainer_object___GetSetNames
                        ((Settings_SetSettingsContainer_T__o *)settings,
                         (MethodInfo_C8EC20 *)
                         MethodInfo_Settings_SetSettingsContainer_TitanCustomSkinSet_GetSetNames);
      pDVar7 = (DG_Tweening_Core_DOSetter_Color2__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (pDVar7,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_RefreshSkins
                 ,(MethodInfo_1387DC0 *)0x0);
      pGVar8 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SetDropdown
                         ("settings-skins-titan-set","Skins.Common",setting,names,
                          (System_Action_GisketchActionContext__o *)pDVar7,(MethodInfo *)0x0);
      if (__this != (System_Collections_Generic_List_T__o *)0x0) {
        il2cpp_runtime_helper_180012890(__this,pGVar8);
        pGVar8 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SetActions
                           ("settings-skins-titan-actions",(Settings_ISetSettingsContainer_o *)settings,
                            (System_Action_o *)0x0,(MethodInfo *)0x0);
        il2cpp_runtime_helper_180012890(__this,pGVar8,MethodInfo_System_Collections_Generic_List_AottgComponent_Add);
        pGVar8 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CommonSkinSwitch
                           ("settings-skins-titan-enabled","Titan","SkinsEnabled",
                            (settings->fields).SkinsEnabled,(System_String_o *)0x0,(MethodInfo *)0x0);
        il2cpp_runtime_helper_180012890(__this,pGVar8,MethodInfo_System_Collections_Generic_List_AottgComponent_Add);
        pGVar8 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CommonSkinSwitch
                           ("settings-skins-titan-local","Titan","SkinsLocal",
                            (settings->fields).SkinsLocal,"SkinsLocalTooltip",(MethodInfo *)0x0);
        il2cpp_runtime_helper_180012890(__this,pGVar8,MethodInfo_System_Collections_Generic_List_AottgComponent_Add);
        if ((object->fields).set != (Settings_TitanCustomSkinSet_o *)0x0) {
          pGVar8 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                             ("settings-skins-titan-override","Skins.Titan","OverrideModels",
                              (((object->fields).set)->fields).OverrideModels,"Override models",
                              "OverrideModelsTooltip",(System_String_o *)0x0,
                              (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
          il2cpp_runtime_helper_180012890(__this,pGVar8,MethodInfo_System_Collections_Generic_List_AottgComponent_Add);
        }
        pUVar9 = System_Collections_Generic_List_object___ToArray
                           (__this,(MethodInfo_929FE0 *)
                                   MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray);
        pGVar10 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__TwoColumn
                            ((Gisketch_Aottg2UI_Code_AottgComponent_array *)pUVar9,(MethodInfo *)0x0);
        if (blocks != (System_Collections_Generic_List_AottgSettingsRowBlock__o *)0x0) {
          il2cpp_runtime_helper_180012890(blocks,pGVar10);
          if ((object->fields).set == (Settings_TitanCustomSkinSet_o *)0x0) goto label_182398837;
          rows = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                 SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,1);
          pSVar5 = (object->fields).set;
          if (Il2CppMethodInitialized_184347b1b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
            il2cpp_codegen_initialize_runtime_metadata(&"{0}");
            il2cpp_codegen_initialize_runtime_metadata(&"{1}");
            il2cpp_codegen_initialize_runtime_metadata(&"{0} of {1} slots");
            il2cpp_codegen_initialize_runtime_metadata(&"SlotCount");
            Il2CppMethodInitialized_184347b1b = '\x01';
          }
          local_res8[0] = 0;
          pSVar11 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanLocale
                              ("SlotCount","{0} of {1} slots",(MethodInfo *)0x0);
          if ((pSVar5 != (Settings_TitanCustomSkinSet_o *)0x0) &&
             (pSVar2 = (pSVar5->fields).Slots, pSVar2 != (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0))
          {
            local_res8[0] =
                 Settings_ListSetting_object___GetCount
                           ((Settings_ListSetting_T__o *)pSVar2,
                            (MethodInfo_182B100 *)MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount
                           );
            pSVar12 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
            if (pSVar11 != (System_String_o *)0x0) {
              pSVar11 = System_String__Replace_1970e80
                                  (pSVar11,"{0}",pSVar12,(MethodInfo *)0x0);
              local_res8[0] = 0x14;
              pSVar12 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
              if (pSVar11 != (System_String_o *)0x0) {
                pSVar11 = System_String__Replace_1970e80
                                    (pSVar11,"{1}",pSVar12,(MethodInfo *)0x0);
                buttons = (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)
                          SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array
                                     ,1);
                pDVar7 = (DG_Tweening_Core_DOSetter_Color2__o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
                System_Action_GisketchActionContext____ctor
                          (pDVar7,(Il2CppObject *)object,
                           (intptr_t)
                           MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass6_0_TitanGroup_b__0
                           ,(MethodInfo_1387DC0 *)0x0);
                pSVar5 = (object->fields).set;
                if ((pSVar5 != (Settings_TitanCustomSkinSet_o *)0x0) &&
                   (pSVar2 = (pSVar5->fields).Slots,
                   pSVar2 != (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0)) {
                  iVar4 = Settings_ListSetting_object___GetCount
                                    ((Settings_ListSetting_T__o *)pSVar2,
                                     (MethodInfo_182B100 *)
                                     MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
                  __this_00 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)
                                         TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton
                                        );
                  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton___ctor
                            (__this_00,"Add",(System_Action_GisketchActionContext__o *)pDVar7,
                             1,0x13 < iVar4,"Common.Add",(MethodInfo *)0x0);
                  if (buttons != (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)0x0) {
                    if ((int)buttons->max_length == 0) {
label_1823988bc:
                      ThrowIndexOutOfRangeException();
                    }
                    buttons->m_Items[0] = __this_00;
                    Il2CppCodeGenWriteBarrier(buttons->m_Items,__this_00);
                    __this_01 = il2cpp_codegen_object_new
                                          ((Il2CppClass *)
                                           TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow);
                    Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___ctor
                              (__this_01,"settings-skins-titan-slot-actions",pSVar11,(System_String_o *)0x0,buttons,
                               (MethodInfo *)0x0);
                    if (rows != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
                      if (__this_01 != (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *)0x0) {
                        pIVar13 = il2cpp_vm_Object_IsInst
                                            ((Il2CppObject *)__this_01,(((rows->obj).klass)->_1).element_class
                                            );
                        if (pIVar13 == (Il2CppObject *)0x0) {
                          pIVar13 = il2cpp_codegen_get_array_type_mismatch_exception();
                          il2cpp_codegen_raise_exception(pIVar13,(MethodInfo *)0x0);
                        }
                      }
                      if ((int)rows->max_length == 0) goto label_1823988bc;
                      rows->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01;
                      Il2CppCodeGenWriteBarrier(rows->m_Items,__this_01);
                      pGVar10 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__TwoColumn
                                          (rows,(MethodInfo *)0x0);
                      il2cpp_runtime_helper_180012890(blocks,pGVar10,
                                    MethodInfo_System_Collections_Generic_List_AottgSettingsRowBlock_Add);
                      index = 0;
                      while ((pSVar5 = (object->fields).set, pSVar5 != (Settings_TitanCustomSkinSet_o *)0x0 &&
                             (pSVar2 = (pSVar5->fields).Slots,
                             pSVar2 != (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0))) {
                        iVar4 = Settings_ListSetting_object___GetCount
                                          ((Settings_ListSetting_T__o *)pSVar2,
                                           (MethodInfo_182B100 *)
                                           MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
                        if (iVar4 <= index) goto label_182398837;
                        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__AddTitanSlotBlocks
                                  (blocks,(object->fields).set,index,(MethodInfo *)0x0);
                        index = index + 1;
                      }
                    }
                  }
                }
                goto label_1823988a6;
              }
            }
          }
          ThrowNullReferenceException();
        }
      }
    }
  }
label_1823988a6:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$AddTitanSlotBlocks
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__AddTitanSlotBlocks (System_Collections_Generic_List_AottgSettingsRowBlock__o* blocks, Settings_TitanCustomSkinSet_o* set, int32_t index, const MethodInfo* method);
// 0x182393d40

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__AddTitanSlotBlocks
               (System_Collections_Generic_List_AottgSettingsRowBlock__o *blocks,
               Settings_TitanCustomSkinSet_o *set,int32_t index,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  Settings_TitanCustomSkinSet_o *pSVar4;
  Settings_ListSetting_TitanCustomSkinSlot__o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  bool bVar7;
  MethodInfo *pMVar8;
  int32_t iVar9;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass7_0_o *object;
  Settings_TitanCustomSkinSlot_o *pSVar10;
  Settings_TitanCustomSkinSlot_o *pSVar11;
  System_String_o *pSVar12;
  System_String_o *pSVar13;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar14;
  System_String_o *pSVar15;
  System_String_o *newValue;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *buttons;
  DG_Tweening_Core_DOSetter_Color2__o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_o *__this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *__this_01;
  Il2CppObject *pIVar16;
  System_String_array *pSVar17;
  Il2CppObject *pIVar18;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *pGVar19;
  System_Collections_Generic_List_string__o *__this_02;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *options;
  int32_t local_res10 [2];
  int32_t local_res18 [2];
  
  local_res18[0] = index;
  if (Il2CppMethodInitialized_184347b1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetItemAt)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgSettingsRowBlock_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSkinSlot);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass7_0_AddTitanSlotBlock
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass7_0);
    il2cpp_codegen_initialize_runtime_metadata(&"-head");
    il2cpp_codegen_initialize_runtime_metadata(&"{0}");
    il2cpp_codegen_initialize_runtime_metadata(&"Eyes");
    il2cpp_codegen_initialize_runtime_metadata(&"Any");
    il2cpp_codegen_initialize_runtime_metadata(&"-slot-");
    il2cpp_codegen_initialize_runtime_metadata(&"-eye");
    il2cpp_codegen_initialize_runtime_metadata(&"Skins.Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"-eye-model");
    il2cpp_codegen_initialize_runtime_metadata(&"-body-model");
    il2cpp_codegen_initialize_runtime_metadata(&"Target");
    il2cpp_codegen_initialize_runtime_metadata(&"Slot {0}");
    il2cpp_codegen_initialize_runtime_metadata(&"AI");
    il2cpp_codegen_initialize_runtime_metadata(&"Body");
    il2cpp_codegen_initialize_runtime_metadata(&"Slot");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Head");
    il2cpp_codegen_initialize_runtime_metadata(&"-head-model");
    il2cpp_codegen_initialize_runtime_metadata(&"Eye");
    il2cpp_codegen_initialize_runtime_metadata(&"-hair-model");
    il2cpp_codegen_initialize_runtime_metadata(&"-body");
    il2cpp_codegen_initialize_runtime_metadata(&"Player");
    il2cpp_codegen_initialize_runtime_metadata(&"Hair");
    il2cpp_codegen_initialize_runtime_metadata(&"-header");
    il2cpp_codegen_initialize_runtime_metadata(&"-hair");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Model");
    il2cpp_codegen_initialize_runtime_metadata(&"-target");
    Il2CppMethodInitialized_184347b1a = '\x01';
  }
  local_res10[0] = 0;
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass7_0)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass7_0_o *)0x0) {
    (object->fields).set = set;
    Il2CppCodeGenWriteBarrier(&(object->fields).set,set);
    pSVar4 = (object->fields).set;
    if ((pSVar4 != (Settings_TitanCustomSkinSet_o *)0x0) &&
       (pSVar5 = (pSVar4->fields).Slots, pSVar5 != (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0)) {
      pSVar10 = (Settings_TitanCustomSkinSlot_o *)
                Settings_ListSetting_object___GetItemAt
                          ((Settings_ListSetting_T__o *)pSVar5,local_res18[0],
                           (MethodInfo_182B120 *)MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetItemAt
                          );
      if (pSVar10 == (Settings_TitanCustomSkinSlot_o *)0x0) {
        (object->fields).slot = (Settings_TitanCustomSkinSlot_o *)0x0;
        pSVar11 = (Settings_TitanCustomSkinSlot_o *)0x0;
      }
      else {
        bVar2 = (TypeInfo_Settings_TitanCustomSkinSlot->_2).typeHierarchyDepth;
        if (((pSVar10->klass->_2).typeHierarchyDepth < bVar2) ||
           (bVar7 = true,
           (pSVar10->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
           (Il2CppClass *)TypeInfo_Settings_TitanCustomSkinSlot)) {
          bVar7 = false;
        }
        pSVar11 = (Settings_TitanCustomSkinSlot_o *)0x0;
        if (bVar7) {
          pSVar11 = pSVar10;
        }
        (object->fields).slot = pSVar11;
        bVar2 = (TypeInfo_Settings_TitanCustomSkinSlot->_2).typeHierarchyDepth;
        if (((pSVar10->klass->_2).typeHierarchyDepth < bVar2) ||
           (bVar7 = true,
           (pSVar10->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
           (Il2CppClass *)TypeInfo_Settings_TitanCustomSkinSlot)) {
          bVar7 = false;
        }
        pSVar11 = (Settings_TitanCustomSkinSlot_o *)0x0;
        if (bVar7) {
          pSVar11 = pSVar10;
        }
      }
      Il2CppCodeGenWriteBarrier(&(object->fields).slot,pSVar11);
      if ((object->fields).slot == (Settings_TitanCustomSkinSlot_o *)0x0) {
        return;
      }
      pSVar12 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SetScopeId
                          ((Settings_BaseSettingsContainer_o *)(object->fields).set,(MethodInfo *)0x0);
      pSVar13 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
      pSVar12 = System_String__Concat_1969590
                          ("settings-skins-titan",pSVar12,"-slot-",pSVar13,(MethodInfo *)0x0);
      pGVar14 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,2);
      pSVar13 = System_String__Concat_1969e50(pSVar12,"-header",(MethodInfo *)0x0);
      pSVar15 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanLocale
                          ("Slot","Slot {0}",(MethodInfo *)0x0);
      local_res10[0] = local_res18[0] + 1;
      newValue = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
      if (pSVar15 != (System_String_o *)0x0) {
        pSVar15 = System_String__Replace_1970e80(pSVar15,"{0}",newValue,(MethodInfo *)0x0);
        buttons = (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)
                  SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array,1);
        __this = (DG_Tweening_Core_DOSetter_Color2__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
        System_Action_GisketchActionContext____ctor
                  (__this,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass7_0_AddTitanSlotBlock
                   ,(MethodInfo_1387DC0 *)0x0);
        pSVar4 = (object->fields).set;
        if ((pSVar4 != (Settings_TitanCustomSkinSet_o *)0x0) &&
           (pSVar5 = (pSVar4->fields).Slots, pSVar5 != (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0)) {
          iVar9 = Settings_ListSetting_object___GetCount
                            ((Settings_ListSetting_T__o *)pSVar5,
                             (MethodInfo_182B100 *)
                             MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton);
          Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton___ctor
                    (__this_00,"Delete",(System_Action_GisketchActionContext__o *)__this,6,
                     iVar9 < 2,"Common.Delete",(MethodInfo *)0x0);
          if (buttons != (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)0x0) {
            if ((int)buttons->max_length == 0) {
label_182394b3d:
              ThrowIndexOutOfRangeException();
            }
            buttons->m_Items[0] = __this_00;
            Il2CppCodeGenWriteBarrier(buttons->m_Items,__this_00);
            __this_01 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow);
            Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___ctor
                      (__this_01,pSVar13,pSVar15,(System_String_o *)0x0,buttons,(MethodInfo *)0x0);
            if (pGVar14 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
              if ((__this_01 != (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *)0x0) &&
                 (pIVar16 = il2cpp_vm_Object_IsInst
                                      ((Il2CppObject *)__this_01,(((pGVar14->obj).klass)->_1).element_class),
                 pIVar16 == (Il2CppObject *)0x0)) {
                pIVar16 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar16,(MethodInfo *)0x0);
              }
              if ((int)pGVar14->max_length == 0) goto label_182394b3d;
              pGVar14->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01;
              Il2CppCodeGenWriteBarrier(pGVar14->m_Items,__this_01);
              pSVar13 = System_String__Concat_1969e50(pSVar12,"-target",(MethodInfo *)0x0);
              pSVar10 = (object->fields).slot;
              if (pSVar10 != (Settings_TitanCustomSkinSlot_o *)0x0) {
                pSVar6 = (pSVar10->fields).Target;
                pSVar17 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
                pSVar15 = "Any";
                if (pSVar17 != (System_String_array *)0x0) {
                  if ((int)pSVar17->max_length != 0) {
                    pSVar17->m_Items[0] = "Any";
                    Il2CppCodeGenWriteBarrier(pSVar17->m_Items,pSVar15);
                    pSVar15 = "AI";
                    if (1 < (uint)pSVar17->max_length) {
                      pSVar17->m_Items[1] = "AI";
                      Il2CppCodeGenWriteBarrier(pSVar17->m_Items + 1,pSVar15);
                      pSVar15 = "Player";
                      if (2 < (uint)pSVar17->max_length) {
                        pSVar17->m_Items[2] = "Player";
                        Il2CppCodeGenWriteBarrier(pSVar17->m_Items + 2,pSVar15);
                        pIVar16 = (Il2CppObject *)
                                  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown
                                            (pSVar13,"Skins.Titan","Target",pSVar6,
                                             "Target",pSVar17,(System_String_o *)0x0,
                                             (System_String_o *)0x0,
                                             (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
                        if ((pIVar16 != (Il2CppObject *)0x0) &&
                           (pIVar18 = il2cpp_vm_Object_IsInst
                                                (pIVar16,(((pGVar14->obj).klass)->_1).element_class),
                           pIVar18 == (Il2CppObject *)0x0)) {
                          pIVar16 = il2cpp_codegen_get_array_type_mismatch_exception();
                          il2cpp_codegen_raise_exception(pIVar16,(MethodInfo *)0x0);
                        }
                        if (1 < (uint)pGVar14->max_length) {
                          pGVar14->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar16;
                          Il2CppCodeGenWriteBarrier(pGVar14->m_Items + 1,pIVar16);
                          pGVar19 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__TwoColumn
                                              (pGVar14,(MethodInfo *)0x0);
                          if (blocks != (System_Collections_Generic_List_AottgSettingsRowBlock__o *)0x0) {
                            il2cpp_runtime_helper_180012890(blocks,pGVar19);
                            pGVar14 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                                      SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,8);
                            pSVar13 = System_String__Concat_1969e50
                                                (pSVar12,"-body",(MethodInfo *)0x0);
                            pSVar10 = (object->fields).slot;
                            if ((pSVar10 != (Settings_TitanCustomSkinSlot_o *)0x0) &&
                               (pIVar16 = (Il2CppObject *)
                                          Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_2391c80
                                                    (pSVar13,"Skins.Titan","Body",
                                                     (pSVar10->fields).Body,"Body",
                                                     (System_String_o *)0x0,(System_String_o *)0x0,
                                                     (System_Action_GisketchActionContext__o *)0x0,
                                                     (MethodInfo *)0x0),
                               pGVar14 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0)) {
                              if ((pIVar16 != (Il2CppObject *)0x0) &&
                                 (pIVar18 = il2cpp_vm_Object_IsInst
                                                      (pIVar16,(((pGVar14->obj).klass)->_1).element_class),
                                 pIVar18 == (Il2CppObject *)0x0)) {
                                pIVar16 = il2cpp_codegen_get_array_type_mismatch_exception();
                                il2cpp_codegen_raise_exception(pIVar16,(MethodInfo *)0x0);
                              }
                              if ((int)pGVar14->max_length == 0) goto label_182394b3d;
                              pGVar14->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar16;
                              Il2CppCodeGenWriteBarrier(pGVar14->m_Items,pIVar16);
                              pSVar13 = System_String__Concat_1969e50
                                                  (pSVar12,"-head",(MethodInfo *)0x0);
                              pSVar10 = (object->fields).slot;
                              if (pSVar10 != (Settings_TitanCustomSkinSlot_o *)0x0) {
                                pIVar16 = (Il2CppObject *)
                                          Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_2391c80
                                                    (pSVar13,"Skins.Titan","Head",
                                                     (pSVar10->fields).Head,"Head",
                                                     (System_String_o *)0x0,(System_String_o *)0x0,
                                                     (System_Action_GisketchActionContext__o *)0x0,
                                                     (MethodInfo *)0x0);
                                if ((pIVar16 != (Il2CppObject *)0x0) &&
                                   (pIVar18 = il2cpp_vm_Object_IsInst
                                                        (pIVar16,(((pGVar14->obj).klass)->_1).element_class),
                                   pIVar18 == (Il2CppObject *)0x0)) {
                                  pIVar16 = il2cpp_codegen_get_array_type_mismatch_exception();
                                  il2cpp_codegen_raise_exception(pIVar16,(MethodInfo *)0x0);
                                }
                                if ((uint)pGVar14->max_length < 2) goto label_182394b3d;
                                pGVar14->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar16;
                                Il2CppCodeGenWriteBarrier(pGVar14->m_Items + 1,pIVar16);
                                pSVar13 = System_String__Concat_1969e50
                                                    (pSVar12,"-eye",(MethodInfo *)0x0);
                                pSVar10 = (object->fields).slot;
                                if (pSVar10 != (Settings_TitanCustomSkinSlot_o *)0x0) {
                                  pIVar16 = (Il2CppObject *)
                                            Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_2391c80
                                                      (pSVar13,"Skins.Titan","Eye",
                                                       (pSVar10->fields).Eye,"Eyes",
                                                       (System_String_o *)0x0,(System_String_o *)0x0,
                                                       (System_Action_GisketchActionContext__o *)0x0,
                                                       (MethodInfo *)0x0);
                                  if ((pIVar16 != (Il2CppObject *)0x0) &&
                                     (pIVar18 = il2cpp_vm_Object_IsInst
                                                          (pIVar16,(((pGVar14->obj).klass)->_1).element_class)
                                     , pIVar18 == (Il2CppObject *)0x0)) {
                                    pIVar16 = il2cpp_codegen_get_array_type_mismatch_exception();
                                    il2cpp_codegen_raise_exception(pIVar16,(MethodInfo *)0x0);
                                  }
                                  if ((uint)pGVar14->max_length < 3) goto label_182394b3d;
                                  pGVar14->m_Items[2] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar16;
                                  Il2CppCodeGenWriteBarrier(pGVar14->m_Items + 2,pIVar16);
                                  pSVar13 = System_String__Concat_1969e50
                                                      (pSVar12,"-hair",(MethodInfo *)0x0);
                                  pSVar10 = (object->fields).slot;
                                  if (pSVar10 != (Settings_TitanCustomSkinSlot_o *)0x0) {
                                    pIVar16 = (Il2CppObject *)
                                              Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_2391c80
                                                        (pSVar13,"Skins.Titan","Hair",
                                                         (pSVar10->fields).Hair,"Hair",
                                                         (System_String_o *)0x0,(System_String_o *)0x0,
                                                         (System_Action_GisketchActionContext__o *)0x0,
                                                         (MethodInfo *)0x0);
                                    if ((pIVar16 != (Il2CppObject *)0x0) &&
                                       (pIVar18 = il2cpp_vm_Object_IsInst
                                                            (pIVar16,(((pGVar14->obj).klass)->_1).
                                                                     element_class),
                                       pIVar18 == (Il2CppObject *)0x0)) {
                                      pIVar16 = il2cpp_codegen_get_array_type_mismatch_exception();
                                      il2cpp_codegen_raise_exception(pIVar16,(MethodInfo *)0x0);
                                    }
                                    if ((uint)pGVar14->max_length < 4) goto label_182394b3d;
                                    pGVar14->m_Items[3] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar16;
                                    Il2CppCodeGenWriteBarrier(pGVar14->m_Items + 3,pIVar16);
                                    pSVar13 = System_String__Concat_1969e50
                                                        (pSVar12,"-body-model",(MethodInfo *)0x0);
                                    pSVar10 = (object->fields).slot;
                                    if (pSVar10 != (Settings_TitanCustomSkinSlot_o *)0x0) {
                                      pSVar6 = (pSVar10->fields).BodyModel;
                                      if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor
                                          == 0) {
                                        il2cpp_codegen_runtime_class_init
                                                  ((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
                                      }
                                      pSVar17 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanIndexOptions
                                                          ("Body",
                                                           TypeInfo_Characters_BasicTitanSetup->static_fields
                                                           ->BodyCount,(MethodInfo *)0x0);
                                      pIVar16 = (Il2CppObject *)
                                                Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown
                                                          (pSVar13,"Skins.Titan","Model"
                                                           ,pSVar6,"Model",pSVar17,
                                                           (System_String_o *)0x0,(System_String_o *)0x0,
                                                           (System_Action_GisketchActionContext__o *)0x0,
                                                           (MethodInfo *)0x0);
                                      if ((pIVar16 != (Il2CppObject *)0x0) &&
                                         (pIVar18 = il2cpp_vm_Object_IsInst
                                                              (pIVar16,(((pGVar14->obj).klass)->_1).
                                                                       element_class),
                                         pIVar18 == (Il2CppObject *)0x0)) {
                                        pIVar16 = il2cpp_codegen_get_array_type_mismatch_exception();
                                        il2cpp_codegen_raise_exception(pIVar16,(MethodInfo *)0x0);
                                      }
                                      if ((uint)pGVar14->max_length < 5) goto label_182394b3d;
                                      pGVar14->m_Items[4] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar16
                                      ;
                                      Il2CppCodeGenWriteBarrier(pGVar14->m_Items + 4,pIVar16);
                                      pSVar13 = System_String__Concat_1969e50
                                                          (pSVar12,"-head-model",(MethodInfo *)0x0);
                                      pSVar10 = (object->fields).slot;
                                      if (pSVar10 != (Settings_TitanCustomSkinSlot_o *)0x0) {
                                        pSVar6 = (pSVar10->fields).HeadModel;
                                        pSVar17 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanIndexOptions
                                                            ("Head",
                                                             TypeInfo_Characters_BasicTitanSetup->
                                                             static_fields->HeadCount,(MethodInfo *)0x0);
                                        pIVar16 = (Il2CppObject *)
                                                  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown
                                                            (pSVar13,"Skins.Titan",
                                                             "Model",pSVar6,
                                                             "Model",pSVar17,
                                                             (System_String_o *)0x0,(System_String_o *)0x0,
                                                             (System_Action_GisketchActionContext__o *)0x0,
                                                             (MethodInfo *)0x0);
                                        if ((pIVar16 != (Il2CppObject *)0x0) &&
                                           (pIVar18 = il2cpp_vm_Object_IsInst
                                                                (pIVar16,(((pGVar14->obj).klass)->_1).
                                                                         element_class),
                                           pIVar18 == (Il2CppObject *)0x0)) {
                                          pIVar16 = il2cpp_codegen_get_array_type_mismatch_exception();
                                          il2cpp_codegen_raise_exception(pIVar16,(MethodInfo *)0x0);
                                        }
                                        if ((uint)pGVar14->max_length < 6) goto label_182394b3d;
                                        pGVar14->m_Items[5] =
                                             (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar16;
                                        Il2CppCodeGenWriteBarrier(pGVar14->m_Items + 5,pIVar16);
                                        pSVar13 = System_String__Concat_1969e50
                                                            (pSVar12,"-eye-model",(MethodInfo *)0x0);
                                        pSVar10 = (object->fields).slot;
                                        if (pSVar10 != (Settings_TitanCustomSkinSlot_o *)0x0) {
                                          pSVar6 = (pSVar10->fields).EyeModel;
                                          pSVar17 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanIndexOptions
                                                              ("Eye",
                                                               TypeInfo_Characters_BasicTitanSetup->
                                                               static_fields->EyeCount,(MethodInfo *)0x0);
                                          pIVar16 = (Il2CppObject *)
                                                    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown
                                                              (pSVar13,"Skins.Titan",
                                                               "Model",pSVar6,
                                                               "Model",pSVar17,
                                                               (System_String_o *)0x0,(System_String_o *)0x0,
                                                               (System_Action_GisketchActionContext__o *)0x0,
                                                               (MethodInfo *)0x0);
                                          if ((pIVar16 != (Il2CppObject *)0x0) &&
                                             (pIVar18 = il2cpp_vm_Object_IsInst
                                                                  (pIVar16,(((pGVar14->obj).klass)->_1).
                                                                           element_class),
                                             pIVar18 == (Il2CppObject *)0x0)) {
                                            pIVar16 = il2cpp_codegen_get_array_type_mismatch_exception();
                                            il2cpp_codegen_raise_exception(pIVar16,(MethodInfo *)0x0);
                                          }
                                          if ((uint)pGVar14->max_length < 7) goto label_182394b3d;
                                          pGVar14->m_Items[6] =
                                               (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar16;
                                          Il2CppCodeGenWriteBarrier(pGVar14->m_Items + 6,pIVar16);
                                          pSVar12 = System_String__Concat_1969e50
                                                              (pSVar12,"-hair-model",(MethodInfo *)0x0
                                                              );
                                          pSVar10 = (object->fields).slot;
                                          if (pSVar10 != (Settings_TitanCustomSkinSlot_o *)0x0) {
                                            pSVar6 = (pSVar10->fields).HairModel;
                                            if (Il2CppMethodInitialized_184347b1e == '\0') {
                                              il2cpp_codegen_initialize_runtime_metadata
                                                        (&TypeInfo_Characters_BasicTitanSetup);
                                              il2cpp_codegen_initialize_runtime_metadata
                                                        (&
                                                       MethodInfo_System_Collections_Generic_List_string_AddRange
                                                       );
                                              il2cpp_codegen_initialize_runtime_metadata
                                                        (&
                                                       MethodInfo_System_Collections_Generic_List_string_Add);
                                              il2cpp_codegen_initialize_runtime_metadata
                                                        (&
                                                       MethodInfo_System_Collections_Generic_List_string_ToArray
                                                       );
                                              il2cpp_codegen_initialize_runtime_metadata
                                                        (&
                                                       MethodInfo_System_Collections_Generic_List_string_ctor)
                                              ;
                                              il2cpp_codegen_initialize_runtime_metadata
                                                        (&TypeInfo_System_Collections_Generic_List_string);
                                              il2cpp_codegen_initialize_runtime_metadata
                                                        (&"Any");
                                              Il2CppMethodInitialized_184347b1e = '\x01';
                                            }
                                            __this_02 = il2cpp_codegen_object_new
                                                                  ((Il2CppClass *)
                                                                                                                                      
                                                       TypeInfo_System_Collections_Generic_List_string);
                                            System_Collections_Generic_List_object____ctor
                                                      ((System_Collections_Generic_LowLevelList_T__o *)
                                                       __this_02,
                                                       (MethodInfo_92A240 *)
                                                       MethodInfo_System_Collections_Generic_List_string_ctor)
                                            ;
                                            pSVar13 = "Any";
                                            if (Il2CppMethodInitialized_184347b0e == '\0') {
                                              il2cpp_codegen_initialize_runtime_metadata
                                                        (&"Common.");
                                              Il2CppMethodInitialized_184347b0e = '\x01';
                                            }
                                            pSVar15 = System_String__Concat_1969e50
                                                                ("Common.",pSVar13,
                                                                 (MethodInfo *)0x0);
                                            pSVar13 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__LocalizedLabel
                                                                (pSVar15,pSVar13,(MethodInfo *)0x0);
                                            pMVar8 = MethodInfo_System_Collections_Generic_List_string_Add;
                                            if (__this_02 != (System_Collections_Generic_List_string__o *)0x0)
                                            {
                                              piVar1 = &(__this_02->fields)._version;
                                              *piVar1 = *piVar1 + 1;
                                              pSVar17 = (__this_02->fields)._items;
                                              if (pSVar17 != (System_String_array *)0x0) {
                                                uVar3 = (__this_02->fields)._size;
                                                if (uVar3 < (uint)pSVar17->max_length) {
                                                  (__this_02->fields)._size = uVar3 + 1;
                                                  if ((uint)pSVar17->max_length <= uVar3) goto label_182394b3d;
                                                  pSVar17->m_Items[(int)uVar3] = pSVar13;
                                                  Il2CppCodeGenWriteBarrier
                                                            (pSVar17->m_Items + (int)uVar3,pSVar13);
                                                }
                                                else {
                                                  System_Collections_Generic_List_object___AddWithResize
                                                            ((System_Collections_Generic_List_object__o *)
                                                             __this_02,(Il2CppObject *)pSVar13,
                                                             (MethodInfo_93DD50 *)
                                                             pMVar8->klass->rgctx_data[0xe].method);
                                                }
                                                if ((TypeInfo_Characters_BasicTitanSetup->_2).
                                                    cctor_finished_or_no_cctor == 0) {
                                                  il2cpp_codegen_runtime_class_init
                                                            ((Il2CppClass *)
                                                             TypeInfo_Characters_BasicTitanSetup);
                                                }
                                                System_Collections_Generic_List_object___AddRange
                                                          ((System_Collections_Generic_List_object__o *)
                                                           __this_02,
                                                           (System_Collections_Generic_IEnumerable_T__o *)
                                                           TypeInfo_Characters_BasicTitanSetup->static_fields
                                                           ->AllHairs,
                                                           (MethodInfo_93DA30 *)
                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_List_string_AddRange
                                                       );
                                                options = 
                                                       System_Collections_Generic_List_object___ToArray
                                                                 ((System_Collections_Generic_List_T__o *)
                                                                  __this_02,
                                                                  (MethodInfo_929FE0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_string_ToArray
                                                       );
                                                pIVar16 = (Il2CppObject *)
                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown
                                                                 (pSVar12,"Skins.Titan",
                                                                  "Model",pSVar6,
                                                                  "Model",
                                                                  (System_String_array *)options,
                                                                  (System_String_o *)0x0,
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                if ((pIVar16 != (Il2CppObject *)0x0) &&
                                                   (pIVar18 = il2cpp_vm_Object_IsInst
                                                                        (pIVar16,(((pGVar14->obj).klass)->_1).
                                                                                 element_class),
                                                   pIVar18 == (Il2CppObject *)0x0)) {
                                                  pIVar16 = il2cpp_codegen_get_array_type_mismatch_exception()
                                                  ;
                                                  il2cpp_codegen_raise_exception(pIVar16,(MethodInfo *)0x0);
                                                }
                                                if (7 < (uint)pGVar14->max_length) {
                                                  pGVar14->m_Items[7] =
                                                       (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar16;
                                                  Il2CppCodeGenWriteBarrier(pGVar14->m_Items + 7,pIVar16);
                                                  pGVar19 = 
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__TwoColumn
                                                                 (pGVar14,(MethodInfo *)0x0);
                                                  il2cpp_runtime_helper_180012890(blocks,pGVar19,
                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_List_AottgSettingsRowBlock_Add
                                                       );
                                                  return;
                                                }
                                                goto label_182394b3d;
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
                          goto label_182394a97;
                        }
                      }
                    }
                  }
                  goto label_182394b3d;
                }
              }
            }
          }
        }
      }
    }
  }
label_182394a97:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$SlotCountLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SlotCountLabel (Settings_TitanCustomSkinSet_o* set, const MethodInfo* method);
// 0x182397c60

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SlotCountLabel
          (Settings_TitanCustomSkinSet_o *set,MethodInfo *method)

{
  Settings_ListSetting_TitanCustomSkinSlot__o *__this;
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184347b1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
    il2cpp_codegen_initialize_runtime_metadata(&"{0}");
    il2cpp_codegen_initialize_runtime_metadata(&"{1}");
    il2cpp_codegen_initialize_runtime_metadata(&"{0} of {1} slots");
    il2cpp_codegen_initialize_runtime_metadata(&"SlotCount");
    Il2CppMethodInitialized_184347b1b = '\x01';
  }
  local_res8[0] = 0;
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanLocale
                     ("SlotCount","{0} of {1} slots",(MethodInfo *)0x0);
  if ((set != (Settings_TitanCustomSkinSet_o *)0x0) &&
     (__this = (set->fields).Slots, __this != (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0)) {
    local_res8[0] =
         Settings_ListSetting_object___GetCount
                   ((Settings_ListSetting_T__o *)__this,
                    (MethodInfo_182B100 *)MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
    pSVar2 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    if (pSVar1 != (System_String_o *)0x0) {
      pSVar1 = System_String__Replace_1970e80(pSVar1,"{0}",pSVar2,(MethodInfo *)0x0);
      local_res8[0] = 0x14;
      pSVar2 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
      if (pSVar1 != (System_String_o *)0x0) {
        pSVar1 = System_String__Replace_1970e80(pSVar1,"{1}",pSVar2,(MethodInfo *)0x0);
        return pSVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$CommonLocale
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CommonLocale (System_String_o* item, const MethodInfo* method);
// 0x182395100

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CommonLocale
          (System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347b0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Common.");
    Il2CppMethodInitialized_184347b0e = '\x01';
  }
  pSVar1 = System_String__Concat_1969e50("Common.",item,(MethodInfo *)0x0);
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__LocalizedLabel(pSVar1,item,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$TitanLocale
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanLocale (System_String_o* item, System_String_o* fallback, const MethodInfo* method);
// 0x182398c60

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanLocale
          (System_String_o *item,System_String_o *fallback,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347b1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Skins.Titan");
    Il2CppMethodInitialized_184347b1c = '\x01';
  }
  pSVar1 = "Skins.Titan";
  if (Il2CppMethodInitialized_184347b0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_184347b0d = '\x01';
  }
  pSVar1 = System_String__Concat_1969590
                     ("SettingsPopup.",pSVar1,".",item,(MethodInfo *)0x0);
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__LocalizedLabel
                     (pSVar1,fallback,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$TitanIndexOptions
// il2cpp: System_String_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanIndexOptions (System_String_o* prefix, int32_t count, const MethodInfo* method);
// 0x182398a70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182398baf: nop 

System_String_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanIndexOptions
          (System_String_o *prefix,int32_t count,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  System_Collections_Generic_List_string__o *__this;
  System_String_o *key;
  System_String_o *pSVar5;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar6;
  int32_t local_res20 [2];
  
  if (Il2CppMethodInitialized_184347b1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Any");
    Il2CppMethodInitialized_184347b1d = '\x01';
  }
  local_res20[0] = 0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pSVar5 = "Any";
  if (Il2CppMethodInitialized_184347b0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Common.");
    Il2CppMethodInitialized_184347b0e = '\x01';
  }
  key = System_String__Concat_1969e50("Common.",pSVar5,(MethodInfo *)0x0);
  pSVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__LocalizedLabel(key,pSVar5,(MethodInfo *)0x0);
  pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar2 + 1;
        if ((uint)pSVar3->max_length <= uVar2) {
label_182398c55:
          ThrowIndexOutOfRangeException();
        }
        pSVar3->m_Items[(int)uVar2] = pSVar5;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar5);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar5,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      local_res20[0] = 0;
      if (0 < count) {
        do {
          pSVar5 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
          pSVar5 = System_String__Concat_1969e50(prefix,pSVar5,(MethodInfo *)0x0);
          pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
          pSVar3 = (__this->fields)._items;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          if (pSVar3 == (System_String_array *)0x0) goto label_182398c4f;
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this->fields)._size = uVar2 + 1;
            if ((uint)pSVar3->max_length <= uVar2) goto label_182398c55;
            pSVar3->m_Items[(int)uVar2] = pSVar5;
            Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar5);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar5,
                       (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
          }
          local_res20[0] = local_res20[0] + 1;
        } while (local_res20[0] < count);
      }
      pUVar6 = System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_T__o *)__this,
                          (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return (System_String_array *)pUVar6;
    }
  }
label_182398c4f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$TitanHairOptions
// il2cpp: System_String_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanHairOptions (const MethodInfo* method);
// 0x1823988d0

System_String_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanHairOptions(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  System_Collections_Generic_List_string__o *__this;
  System_String_o *key;
  System_String_o *pSVar5;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar6;
  
  if (Il2CppMethodInitialized_184347b1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_AddRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Any");
    Il2CppMethodInitialized_184347b1e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pSVar5 = "Any";
  if (Il2CppMethodInitialized_184347b0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Common.");
    Il2CppMethodInitialized_184347b0e = '\x01';
  }
  key = System_String__Concat_1969e50("Common.",pSVar5,(MethodInfo *)0x0);
  pSVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__LocalizedLabel(key,pSVar5,(MethodInfo *)0x0);
  pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar2 + 1;
        if ((uint)pSVar3->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pSVar3->m_Items[(int)uVar2] = pSVar5;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar5);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar5,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
      }
      System_Collections_Generic_List_object___AddRange
                ((System_Collections_Generic_List_object__o *)__this,
                 (System_Collections_Generic_IEnumerable_T__o *)
                 TypeInfo_Characters_BasicTitanSetup->static_fields->AllHairs,
                 (MethodInfo_93DA30 *)MethodInfo_System_Collections_Generic_List_string_AddRange);
      pUVar6 = System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_T__o *)__this,
                          (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return (System_String_array *)pUVar6;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$AddTitanSlot
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__AddTitanSlot (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Settings_TitanCustomSkinSet_o* set, const MethodInfo* method);
// 0x182394b50

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__AddTitanSlot
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,Settings_TitanCustomSkinSet_o *set,
               MethodInfo *method)

{
  Settings_ListSetting_TitanCustomSkinSlot__o *pSVar1;
  int32_t iVar2;
  Settings_TitanCustomSkinSlot_o *__this;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_184347b1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_AddItem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSkinSlot);
    Il2CppMethodInitialized_184347b1f = '\x01';
  }
  if ((set != (Settings_TitanCustomSkinSet_o *)0x0) &&
     (pSVar1 = (set->fields).Slots, pSVar1 != (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0)) {
    iVar2 = Settings_ListSetting_object___GetCount
                      ((Settings_ListSetting_T__o *)pSVar1,
                       (MethodInfo_182B100 *)MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
    if (iVar2 < 0x14) {
      pSVar1 = (set->fields).Slots;
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_TitanCustomSkinSlot);
      Settings_TitanCustomSkinSlot___ctor(__this,(MethodInfo *)0x0);
      if (pSVar1 == (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0) goto label_182394c19;
      Settings_ListSetting_object___AddItem
                ((Settings_ListSetting_T__o *)pSVar1,(Settings_BaseSetting_o *)__this,
                 (MethodInfo_182A740 *)MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_AddItem);
      local_28.fields.ElementId = (context->fields).ElementId;
      local_28.fields.GameObject = (context->fields).GameObject;
      local_28.fields.Node = (context->fields).Node;
      local_28.fields.InputSource = (context->fields).InputSource;
      local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__RefreshSkins(&local_28,(MethodInfo *)0x0);
    }
    return;
  }
label_182394c19:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$RemoveTitanSlot
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__RemoveTitanSlot (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Settings_TitanCustomSkinSet_o* set, Settings_TitanCustomSkinSlot_o* slot, const MethodInfo* method);
// 0x182396840

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__RemoveTitanSlot
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,Settings_TitanCustomSkinSet_o *set,
               Settings_TitanCustomSkinSlot_o *slot,MethodInfo *method)

{
  Settings_ListSetting_TitanCustomSkinSlot__o *pSVar1;
  System_Collections_Generic_List_object__o *__this;
  int32_t iVar2;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_184347b20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanCustomSkinSlot_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_TypedSetting_List_TitanCustomSkinSlot_get_Value);
    Il2CppMethodInitialized_184347b20 = '\x01';
  }
  if ((set != (Settings_TitanCustomSkinSet_o *)0x0) &&
     (pSVar1 = (set->fields).Slots, pSVar1 != (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0)) {
    iVar2 = Settings_ListSetting_object___GetCount
                      ((Settings_ListSetting_T__o *)pSVar1,
                       (MethodInfo_182B100 *)MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
    if (1 < iVar2) {
      pSVar1 = (set->fields).Slots;
      if ((pSVar1 == (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0) ||
         (__this = (System_Collections_Generic_List_object__o *)(pSVar1->fields)._value,
         __this == (System_Collections_Generic_List_object__o *)0x0)) goto label_1823968f9;
      System_Collections_Generic_List_object___Remove
                (__this,(Il2CppObject *)slot,
                 (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_TitanCustomSkinSlot_Remove);
      local_28.fields.ElementId = (context->fields).ElementId;
      local_28.fields.GameObject = (context->fields).GameObject;
      local_28.fields.Node = (context->fields).Node;
      local_28.fields.InputSource = (context->fields).InputSource;
      local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__RefreshSkins(&local_28,(MethodInfo *)0x0);
    }
    return;
  }
label_1823968f9:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$SkinGroup
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SkinGroup (System_String_o* id, System_String_o* title, Settings_ICustomSkinSettings_o* settings, const MethodInfo* method);
// 0x1823973a0

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SkinGroup
          (System_String_o *id,System_String_o *title,Settings_ICustomSkinSettings_o *settings,
          MethodInfo *method)

{
  ushort uVar1;
  Settings_ICustomSkinSettings_c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_Collections_Generic_List_T__o *__this;
  System_Collections_Generic_List_T__o *__this_00;
  System_String_o *pSVar4;
  Settings_IntSetting_o *setting;
  VirtualInvokeData *pVVar5;
  System_String_array *names;
  DG_Tweening_Core_DOSetter_Color2__o *__this_01;
  Gisketch_Aottg2UI_Code_AottgComponent_o *pGVar6;
  Settings_BoolSetting_o *pSVar7;
  Settings_BaseSettingsContainer_o *container;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *blocks;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar8;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *pGVar9;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this_02;
  ushort uVar10;
  
  if (Il2CppMethodInitialized_184347b21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_RefreshSkins);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ICustomSkinSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ISetSettingsContainer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_AottgComponent_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgComponent_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_AottgComponent);
    il2cpp_codegen_initialize_runtime_metadata(&"SkinsLocal");
    il2cpp_codegen_initialize_runtime_metadata(&"-actions");
    il2cpp_codegen_initialize_runtime_metadata(&"SkinsLocalTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"-set");
    il2cpp_codegen_initialize_runtime_metadata(&"SkinsEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"Skins.");
    il2cpp_codegen_initialize_runtime_metadata(&"Skins.Common");
    il2cpp_codegen_initialize_runtime_metadata(&"-enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"-local");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-");
    Il2CppMethodInitialized_184347b21 = '\x01';
  }
  __this = (System_Collections_Generic_List_T__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgComponent);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_AottgComponent_ctor);
  __this_00 = (System_Collections_Generic_List_T__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgComponent);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_AottgComponent_ctor);
  if (settings == (Settings_ICustomSkinSettings_o *)0x0) {
    pSVar4 = System_String__Concat_1969e50("settings-skins-",id,(MethodInfo *)0x0);
    blocks = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array,2);
    if (__this == (System_Collections_Generic_List_T__o *)0x0) goto label_182397884;
  }
  else {
    pSVar4 = System_String__Concat_1969b70("settings-skins-",id,"-set",(MethodInfo *)0x0);
    setting = InterfaceInvoker0_Invoke
                        (1,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,(Il2CppObject *)settings);
    pSVar2 = settings->klass;
    uVar10 = 0;
    uVar1 = (pSVar2->_2).interface_offsets_count;
    if (uVar1 != 0) {
      pIVar3 = (pSVar2->_1).interfaceOffsets;
      do {
        if (pIVar3[uVar10].interfaceType == (Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer) {
          pVVar5 = pSVar2->vtable + (pIVar3[uVar10].offset + 3);
          goto label_18239759a;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar1);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)settings,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,3);
label_18239759a:
    names = (System_String_array *)(*pVVar5->methodPtr)((Il2CppObject *)settings,pVVar5->method);
    __this_01 = (DG_Tweening_Core_DOSetter_Color2__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_01,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_RefreshSkins,
               (MethodInfo_1387DC0 *)0x0);
    pGVar6 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SetDropdown
                       (pSVar4,"Skins.Common",setting,names,
                        (System_Action_GisketchActionContext__o *)__this_01,(MethodInfo *)0x0);
    if (__this == (System_Collections_Generic_List_T__o *)0x0) goto label_182397884;
    il2cpp_runtime_helper_180012890(__this,pGVar6,MethodInfo_System_Collections_Generic_List_AottgComponent_Add);
    pSVar4 = System_String__Concat_1969b70("settings-skins-",id,"-actions",(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SetActions
                       (pSVar4,(Settings_ISetSettingsContainer_o *)settings,(System_Action_o *)0x0,
                        (MethodInfo *)0x0);
    il2cpp_runtime_helper_180012890(__this,pGVar6,MethodInfo_System_Collections_Generic_List_AottgComponent_Add);
    pSVar4 = System_String__Concat_1969b70("settings-skins-",id,"-enabled",(MethodInfo *)0x0);
    pSVar7 = InterfaceInvoker0_Invoke
                       (1,(Il2CppClass *)TypeInfo_Settings_ICustomSkinSettings,(Il2CppObject *)settings);
    pGVar6 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CommonSkinSwitch
                       (pSVar4,title,"SkinsEnabled",pSVar7,(System_String_o *)0x0,(MethodInfo *)0x0);
    il2cpp_runtime_helper_180012890(__this,pGVar6,MethodInfo_System_Collections_Generic_List_AottgComponent_Add);
    pSVar4 = System_String__Concat_1969b70("settings-skins-",id,"-local",(MethodInfo *)0x0);
    pSVar7 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)TypeInfo_Settings_ICustomSkinSettings,(Il2CppObject *)settings);
    pGVar6 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CommonSkinSwitch
                       (pSVar4,title,"SkinsLocal",pSVar7,"SkinsLocalTooltip",(MethodInfo *)0x0);
    il2cpp_runtime_helper_180012890(__this,pGVar6);
    pSVar4 = System_String__Concat_1969e50("Skins.",title,(MethodInfo *)0x0);
    container = InterfaceInvoker0_Invoke
                          (0,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,(Il2CppObject *)settings);
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__AddSkinInputRows
              ((System_Collections_Generic_List_AottgComponent__o *)__this,
               (System_Collections_Generic_List_AottgComponent__o *)__this_00,id,pSVar4,container,false,
               (MethodInfo *)0x0);
    pSVar4 = System_String__Concat_1969e50("settings-skins-",id,(MethodInfo *)0x0);
    blocks = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array,2);
  }
  pUVar8 = System_Collections_Generic_List_object___ToArray
                     (__this,(MethodInfo_929FE0 *)
                             MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray);
  pGVar9 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__TwoColumn
                     ((Gisketch_Aottg2UI_Code_AottgComponent_array *)pUVar8,(MethodInfo *)0x0);
  if (blocks != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0) {
    if ((int)blocks->max_length != 0) {
      blocks->m_Items[0] = pGVar9;
      Il2CppCodeGenWriteBarrier(blocks->m_Items,pGVar9);
      if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) goto label_182397884;
      pUVar8 = System_Collections_Generic_List_object___ToArray
                         (__this_00,
                          (MethodInfo_929FE0 *)
                          MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray);
      pGVar9 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__TwoColumn
                         ((Gisketch_Aottg2UI_Code_AottgComponent_array *)pUVar8,(MethodInfo *)0x0);
      if (1 < (uint)blocks->max_length) {
        blocks->m_Items[1] = pGVar9;
        Il2CppCodeGenWriteBarrier(blocks->m_Items + 1,pGVar9);
        __this_02 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b830
                  (__this_02,pSVar4,title,blocks,(MethodInfo *)0x0);
        return __this_02;
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_182397884:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$HumanGlobalSetDropdown
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__HumanGlobalSetDropdown (Settings_HumanCustomSkinSettings_o* settings, const MethodInfo* method);
// 0x182395870
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182395a3e: nop 

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__HumanGlobalSetDropdown
          (Settings_HumanCustomSkinSettings_o *settings,MethodInfo *method)

{
  Settings_HumanCustomSkinSettings_o *pSVar1;
  System_String_o *value;
  bool bVar2;
  int32_t iVar3;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass16_0_o *object;
  System_String_array *pSVar4;
  System_Collections_Generic_List_string__o *__this;
  System_Collections_Generic_List_int__o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *names;
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  Gisketch_Aottg2UI_Code_AottgComponent_o *pGVar7;
  int32_t value_00;
  uint uVar8;
  
  if (Il2CppMethodInitialized_184347b22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_IndexOf);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass16_0_HumanGlobalSetDr
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass16_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom Set:");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-human-set");
    il2cpp_codegen_initialize_runtime_metadata(&"Skins.Common");
    Il2CppMethodInitialized_184347b22 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass16_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass16_0_o *)0x0) {
    (object->fields).settings = settings;
    Il2CppCodeGenWriteBarrier(&(object->fields).settings,settings);
    pSVar1 = (object->fields).settings;
    if (pSVar1 != (Settings_HumanCustomSkinSettings_o *)0x0) {
      pSVar4 = Settings_SetSettingsContainer_object___GetSetNames
                         ((Settings_SetSettingsContainer_T__o *)pSVar1,
                          (MethodInfo_C8EC20 *)
                          MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSetNames);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)__this,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
      pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
      System_Collections_Generic_List_int____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)pSVar5,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_int_ctor);
      (object->fields).originalIndices = pSVar5;
      Il2CppCodeGenWriteBarrier(&(object->fields).originalIndices,pSVar5);
      if (pSVar4 != (System_String_array *)0x0) {
        for (uVar8 = 0; (int)uVar8 < (int)pSVar4->max_length; uVar8 = uVar8 + 1) {
          if ((uint)pSVar4->max_length <= uVar8) goto label_182395c20;
          if (pSVar4->m_Items[(int)uVar8] == (System_String_o *)0x0) goto label_182395c1a;
          bVar2 = System_String__StartsWith_19722c0
                            (pSVar4->m_Items[(int)uVar8],"Custom Set:",4,(MethodInfo *)0x0);
          if (!bVar2) {
            if ((uint)pSVar4->max_length <= uVar8) goto label_182395c20;
            if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_182395c1a;
            il2cpp_runtime_helper_180012890(__this,pSVar4->m_Items[(int)uVar8],
                          MethodInfo_System_Collections_Generic_List_string_Add);
            pSVar5 = (object->fields).originalIndices;
            if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) goto label_182395c1a;
            il2cpp_runtime_helper_180026690(pSVar5,uVar8,MethodInfo_System_Collections_Generic_List_int_Add);
          }
        }
        pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
        Settings_IntSetting___ctor_1f1de00(pSVar6,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
        (object->fields).filteredIndex = pSVar6;
        Il2CppCodeGenWriteBarrier(&(object->fields).filteredIndex,pSVar6);
        pSVar1 = (object->fields).settings;
        if (((pSVar1 != (Settings_HumanCustomSkinSettings_o *)0x0) &&
            (pSVar6 = (pSVar1->fields).LastGlobalPresetIndex, pSVar6 != (Settings_IntSetting_o *)0x0)) &&
           (pSVar5 = (object->fields).originalIndices, pSVar5 != (System_Collections_Generic_List_int__o *)0x0
           )) {
          iVar3 = System_Collections_Generic_List_int___IndexOf
                            (pSVar5,(pSVar6->fields)._value,
                             (MethodInfo_91F570 *)MethodInfo_System_Collections_Generic_List_int_IndexOf);
          pSVar6 = (object->fields).filteredIndex;
          value_00 = 0;
          if (-1 < iVar3) {
            value_00 = iVar3;
          }
          if (pSVar6 != (Settings_IntSetting_o *)0x0) {
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)pSVar6,value_00,
                       (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            if (__this != (System_Collections_Generic_List_string__o *)0x0) {
              if ((__this->fields)._size < 1) {
                names = (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
                         *)SZArrayNew(TypeInfo_string_array,1);
                value = "None";
                if (names == (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
                              *)0x0) goto label_182395c1a;
                if ((int)names->max_length == 0) {
label_182395c20:
                  ThrowIndexOutOfRangeException();
                }
                names->m_Items[0].fields.message = "None";
                Il2CppCodeGenWriteBarrier((void **)names->m_Items,value);
              }
              else {
                names = System_Collections_Generic_List_object___ToArray
                                  ((System_Collections_Generic_List_T__o *)__this,
                                   (MethodInfo_929FE0 *)
                                   MethodInfo_System_Collections_Generic_List_string_ToArray);
              }
              pSVar6 = (object->fields).filteredIndex;
              __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                          il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
              System_Action_GisketchActionContext____ctor
                        (__this_00,(Il2CppObject *)object,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass16_0_HumanGlobalSetDr
                         ,(MethodInfo_1387DC0 *)0x0);
              pGVar7 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SetDropdown
                                 ("settings-skins-human-set","Skins.Common",pSVar6,
                                  (System_String_array *)names,
                                  (System_Action_GisketchActionContext__o *)__this_00,(MethodInfo *)0x0);
              return pGVar7;
            }
          }
        }
      }
    }
  }
label_182395c1a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$CharacterDropdown
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CharacterDropdown (Settings_HumanCustomSkinSettings_o* settings, const MethodInfo* method);
// 0x182394da0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182394fde: nop 

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CharacterDropdown
          (Settings_HumanCustomSkinSettings_o *settings,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  int32_t val1;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar3;
  Settings_ListSetting_T__o *obj;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  System_String_o *pSVar6;
  Settings_IntSetting_o *setting;
  uint32_t length;
  VirtualInvokeData *pVVar7;
  System_Collections_Generic_List_BaseSetting__o *__this;
  System_String_array *names;
  Settings_BaseSetting_o *pSVar8;
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  Gisketch_Aottg2UI_Code_AottgComponent_o *pGVar9;
  ushort uVar10;
  uint index;
  
  if (Il2CppMethodInitialized_184347b23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_RefreshSkins);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IListSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSetting_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSets);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Skins.Human");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-human-character");
    Il2CppMethodInitialized_184347b23 = '\x01';
  }
  if (TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings ==
      (Settings_HumanCustomSettings_o *)0x0) {
label_182394f4e:
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BaseSetting);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_BaseSetting_ctor);
  }
  else {
    pSVar3 = (TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings->fields).CustomSets;
    if (pSVar3 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) goto label_1823950e6;
    obj = (pSVar3->fields).Sets;
    if (obj == (Settings_ListSetting_T__o *)0x0) goto label_182394f4e;
    pIVar4 = (Il2CppClass *)obj->klass;
    uVar2 = (pIVar4->_2).interface_offsets_count;
    if (uVar2 != 0) {
      pIVar5 = (pIVar4->_1).interfaceOffsets;
      uVar10 = 0;
      do {
        if (pIVar5[uVar10].interfaceType == (Il2CppClass *)TypeInfo_Settings_IListSetting) {
          __this = (System_Collections_Generic_List_BaseSetting__o *)
                   (*pIVar4->vtable[pIVar5[uVar10].offset + 2].methodPtr)
                             (obj,pIVar4->vtable[pIVar5[uVar10].offset + 2].method);
          goto label_182394f6c;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar2);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_Settings_IListSetting,2);
    __this = (System_Collections_Generic_List_BaseSetting__o *)
             (*pVVar7->methodPtr)((Il2CppObject *)obj,pVVar7->method);
  }
label_182394f6c:
  if (__this != (System_Collections_Generic_List_BaseSetting__o *)0x0) {
    val1 = (__this->fields)._size;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    length = System_Math__Max_1b2c0d0(val1,1,(MethodInfo *)0x0);
    names = (System_String_array *)SZArrayNew(TypeInfo_string_array,length);
    pSVar6 = "None";
    if ((__this->fields)._size == 0) {
      if (names == (System_String_array *)0x0) goto label_1823950e6;
      if ((int)names->max_length == 0) {
label_1823950ec:
        ThrowIndexOutOfRangeException();
      }
      names->m_Items[0] = "None";
      Il2CppCodeGenWriteBarrier(names->m_Items,pSVar6);
    }
    for (index = 0; (int)index < (__this->fields)._size; index = index + 1) {
      pSVar8 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)__this,index,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_BaseSetting_get_Item
                         );
      if (pSVar8 == (Settings_BaseSetting_o *)0x0) goto label_1823950e6;
      bVar1 = (TypeInfo_Settings_BaseSetSetting->_2).typeHierarchyDepth;
      if (((pSVar8->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar8->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_BaseSetSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar8,TypeInfo_Settings_BaseSetSetting);
      }
      if (((*(uint64_t *)((char *)pSVar8 + 0x30)) == (Settings_BaseSetting_c *)0x0) || (names == (System_String_array *)0x0))
      goto label_1823950e6;
      if ((uint)names->max_length <= index) goto label_1823950ec;
      pSVar6 = (((*(Il2CppClass **)((char *)pSVar8 + 0x30)))->_1).byval_arg.data;
      names->m_Items[(int)index] = pSVar6;
      Il2CppCodeGenWriteBarrier(names->m_Items + (int)index,pSVar6);
    }
    if (settings != (Settings_HumanCustomSkinSettings_o *)0x0) {
      setting = (settings->fields).SelectedCharacterIndex;
      __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (__this_00,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_RefreshSkins
                 ,(MethodInfo_1387DC0 *)0x0);
      pGVar9 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SetDropdown
                         ("settings-skins-human-character","Skins.Human",setting,names,
                          (System_Action_GisketchActionContext__o *)__this_00,(MethodInfo *)0x0);
      return pGVar9;
    }
  }
label_1823950e6:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$HumanSkinContainer
// il2cpp: Settings_BaseSettingsContainer_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__HumanSkinContainer (Settings_HumanCustomSkinSettings_o* settings, const MethodInfo* method);
// 0x1823963f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18239655a: jmp 0x1823965c8

Settings_BaseSettingsContainer_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__HumanSkinContainer
          (Settings_HumanCustomSkinSettings_o *settings,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_IntSetting_o *pSVar3;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar4;
  Settings_ListSetting_T__o *obj;
  bool bVar5;
  void *pvVar6;
  Settings_BaseSettingsContainer_o *pSVar7;
  Settings_BaseSetSetting_o *pSVar8;
  Settings_BaseSettingsContainer_o *pSVar9;
  
  if (Il2CppMethodInitialized_184347b24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184347b24 = '\x01';
  }
  if (settings == (Settings_HumanCustomSkinSettings_o *)0x0) {
    return (Settings_BaseSettingsContainer_o *)0x0;
  }
  pSVar3 = (settings->fields).SkinMode;
  if (pSVar3 != (Settings_IntSetting_o *)0x0) {
    if ((pSVar3->fields)._value == 0) {
      pSVar8 = Settings_SetSettingsContainer_object___GetSelectedSet
                         ((Settings_SetSettingsContainer_T__o *)settings,
                          (MethodInfo_C8EAF0 *)
                          MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSelectedSet);
      return (Settings_BaseSettingsContainer_o *)pSVar8;
    }
    if (Il2CppMethodInitialized_184347b25 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSettingsContainer);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IListSetting);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSets);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
      Il2CppMethodInitialized_184347b25 = '\x01';
    }
    if (TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings !=
        (Settings_HumanCustomSettings_o *)0x0) {
      pSVar4 = (TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings->fields).CustomSets;
      if (pSVar4 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) goto label_182396610;
      obj = (pSVar4->fields).Sets;
      if (obj != (Settings_ListSetting_T__o *)0x0) {
        pSVar3 = (settings->fields).SelectedCharacterIndex;
        if (pSVar3 == (Settings_IntSetting_o *)0x0) goto label_182396610;
        iVar2 = (pSVar3->fields)._value;
        if ((iVar2 < 0) ||
           (pvVar6 = InterfaceInvoker0_Invoke
                               (0,(Il2CppClass *)TypeInfo_Settings_IListSetting,(Il2CppObject *)obj),
           (int)pvVar6 <= iVar2)) {
          pvVar6 = InterfaceInvoker0_Invoke
                             (0,(Il2CppClass *)TypeInfo_Settings_IListSetting,(Il2CppObject *)obj);
          if ((int)pvVar6 < 1) goto label_1823965cd;
          bVar5 = true;
          pSVar7 = (Settings_BaseSettingsContainer_o *)il2cpp_runtime_helper_180026600(1,TypeInfo_Settings_IListSetting,obj,0);
          pSVar9 = (Settings_BaseSettingsContainer_o *)0x0;
          if (pSVar7 != (Settings_BaseSettingsContainer_o *)0x0) {
            bVar1 = (TypeInfo_Settings_BaseSettingsContainer->_2).typeHierarchyDepth;
            if (((pSVar7->klass->_2).typeHierarchyDepth < bVar1) ||
               ((pSVar7->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Settings_BaseSettingsContainer)) {
              bVar5 = false;
            }
            if (bVar5) {
              pSVar9 = pSVar7;
            }
          }
        }
        else {
          bVar5 = true;
          pSVar7 = (Settings_BaseSettingsContainer_o *)
                   il2cpp_runtime_helper_180026600(1,TypeInfo_Settings_IListSetting,obj,iVar2);
          pSVar9 = (Settings_BaseSettingsContainer_o *)0x0;
          if (pSVar7 != (Settings_BaseSettingsContainer_o *)0x0) {
            bVar1 = (TypeInfo_Settings_BaseSettingsContainer->_2).typeHierarchyDepth;
            if (((pSVar7->klass->_2).typeHierarchyDepth < bVar1) ||
               ((pSVar7->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Settings_BaseSettingsContainer)) {
              bVar5 = false;
            }
            if (bVar5) {
              pSVar9 = pSVar7;
            }
          }
        }
        if (pSVar9 != (Settings_BaseSettingsContainer_o *)0x0) {
          return pSVar9;
        }
      }
    }
label_1823965cd:
    pSVar8 = Settings_SetSettingsContainer_object___GetSelectedSet
                       ((Settings_SetSettingsContainer_T__o *)settings,
                        (MethodInfo_C8EAF0 *)
                        MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSelectedSet);
    return (Settings_BaseSettingsContainer_o *)pSVar8;
  }
label_182396610:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$HumanCharacterSkinContainer
// il2cpp: Settings_BaseSettingsContainer_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__HumanCharacterSkinContainer (Settings_HumanCustomSkinSettings_o* settings, const MethodInfo* method);
// 0x182395700
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823957cb: mov r9d, esi
// asm:   0x1823957ce: jmp 0x1823957e8

Settings_BaseSettingsContainer_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__HumanCharacterSkinContainer
          (Settings_HumanCustomSkinSettings_o *settings,MethodInfo *method)

{
  byte bVar1;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar2;
  Settings_ListSetting_T__o *obj;
  Settings_IntSetting_o *pSVar3;
  bool bVar4;
  void *pvVar5;
  Settings_BaseSettingsContainer_o *pSVar6;
  Settings_BaseSettingsContainer_o *pSVar7;
  int iVar8;
  
  if (Il2CppMethodInitialized_184347b25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSettingsContainer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IListSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSets);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184347b25 = '\x01';
  }
  if ((settings == (Settings_HumanCustomSkinSettings_o *)0x0) ||
     (TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings ==
      (Settings_HumanCustomSettings_o *)0x0)) {
    return (Settings_BaseSettingsContainer_o *)0x0;
  }
  pSVar2 = (TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings->fields).CustomSets;
  if (pSVar2 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) {
    obj = (pSVar2->fields).Sets;
    if (obj == (Settings_ListSetting_T__o *)0x0) {
      return (Settings_BaseSettingsContainer_o *)0x0;
    }
    pSVar3 = (settings->fields).SelectedCharacterIndex;
    if (pSVar3 != (Settings_IntSetting_o *)0x0) {
      iVar8 = (pSVar3->fields)._value;
      if ((iVar8 < 0) ||
         (pvVar5 = InterfaceInvoker0_Invoke
                             (0,(Il2CppClass *)TypeInfo_Settings_IListSetting,(Il2CppObject *)obj),
         (int)pvVar5 <= iVar8)) {
        pvVar5 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_Settings_IListSetting,(Il2CppObject *)obj)
        ;
        if ((int)pvVar5 < 1) {
          return (Settings_BaseSettingsContainer_o *)0x0;
        }
        iVar8 = 0;
      }
      bVar4 = true;
      pSVar6 = (Settings_BaseSettingsContainer_o *)il2cpp_runtime_helper_180026600(1,TypeInfo_Settings_IListSetting,obj,iVar8);
      pSVar7 = (Settings_BaseSettingsContainer_o *)0x0;
      if (pSVar6 != (Settings_BaseSettingsContainer_o *)0x0) {
        bVar1 = (TypeInfo_Settings_BaseSettingsContainer->_2).typeHierarchyDepth;
        if (((pSVar6->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pSVar6->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_BaseSettingsContainer)) {
          bVar4 = false;
        }
        if (bVar4) {
          pSVar7 = pSVar6;
        }
      }
      return pSVar7;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$SetDropdown
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SetDropdown (System_String_o* id, System_String_o* sub, Settings_IntSetting_o* setting, System_String_array* names, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x182396d50

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SetDropdown
          (System_String_o *id,System_String_o *sub,Settings_IntSetting_o *setting,System_String_array *names,
          System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  System_String_o *item;
  System_String_o *value;
  Gisketch_Aottg2UI_Code_AottgComponent_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347b26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Set");
    Il2CppMethodInitialized_184347b26 = '\x01';
  }
  item = "Set";
  if ((names == (System_String_array *)0x0) || (names->max_length == 0)) {
    names = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
    value = "None";
    if (names == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((int)names->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    names->m_Items[0] = "None";
    Il2CppCodeGenWriteBarrier(names->m_Items,value);
  }
  pGVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown
                     (id,sub,item,setting,item,names,(System_String_o *)0x0,(System_String_o *)0x0,changed,
                      (MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$CommonSkinSwitch
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CommonSkinSwitch (System_String_o* id, System_String_o* prefix, System_String_o* item, Settings_BoolSetting_o* setting, System_String_o* tooltipItem, const MethodInfo* method);
// 0x182395150
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182395246: mov rdx, qword ptr [rip + 0x1d0b0db]  ; "Skins Enabled"
// asm:   0x18239524d: jmp 0x18239526e

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CommonSkinSwitch
          (System_String_o *id,System_String_o *prefix,System_String_o *item,Settings_BoolSetting_o *setting,
          System_String_o *tooltipItem,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *method_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this_00;
  System_String_o *fallback;
  
  if (Il2CppMethodInitialized_184347b27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"Skins.Common");
    Il2CppMethodInitialized_184347b27 = '\x01';
  }
  pSVar2 = "Skins.Common";
  if (Il2CppMethodInitialized_184347b0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_184347b0d = '\x01';
  }
  pSVar2 = System_String__Concat_1969590
                     ("SettingsPopup.",pSVar2,".",item,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184347b28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SkinsLocal");
    il2cpp_codegen_initialize_runtime_metadata(&"Skins Enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"SkinsEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"Local Skins");
    Il2CppMethodInitialized_184347b28 = '\x01';
  }
  bVar1 = System_String__op_Equality(item,"SkinsEnabled",(MethodInfo *)0x0);
  fallback = "Skins Enabled";
  if ((!bVar1) &&
     (bVar1 = System_String__op_Equality(item,"SkinsLocal",(MethodInfo *)0x0), fallback = item, bVar1
     )) {
    fallback = "Local Skins";
  }
  pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__LocalizedLabel
                     (pSVar2,fallback,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_1969b70(prefix," ",pSVar2,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter___ctor
            ((Unity_Burst_BurstCompiler_FakeDelegate_o *)__this,(System_Reflection_MethodInfo_o *)setting,
             (MethodInfo *)0x0);
  method_00 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
                        (id,"Skins.Common",item,pSVar2,0,
                         (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this,tooltipItem,
                         (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,false,
                         (MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184347b05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Il2CppMethodInitialized_184347b05 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor
            ((System_Xml_Serialization_XmlTypeConvertorAttribute_o *)__this_00,(System_String_o *)method_00,
             (MethodInfo *)0x0);
  return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$SkinCommonFallback
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SkinCommonFallback (System_String_o* item, const MethodInfo* method);
// 0x182396f30

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SkinCommonFallback
          (System_String_o *item,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347b28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SkinsLocal");
    il2cpp_codegen_initialize_runtime_metadata(&"Skins Enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"SkinsEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"Local Skins");
    Il2CppMethodInitialized_184347b28 = '\x01';
  }
  bVar1 = System_String__op_Equality(item,"SkinsEnabled",(MethodInfo *)0x0);
  if (bVar1) {
    return "Skins Enabled";
  }
  bVar1 = System_String__op_Equality(item,"SkinsLocal",(MethodInfo *)0x0);
  if (bVar1) {
    item = "Local Skins";
  }
  return item;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$SetActions
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SetActions (System_String_o* id, Settings_ISetSettingsContainer_o* settings, System_Action_o* afterChange, const MethodInfo* method);
// 0x182396900

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SetActions
          (System_String_o *id,Settings_ISetSettingsContainer_o *settings,System_Action_o *afterChange,
          MethodInfo *method)

{
  System_String_o *label;
  System_String_o *labelKey;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass23_0_o *object;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *buttons;
  DG_Tweening_Core_DOSetter_Color2__o *pDVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_o *pGVar3;
  void *pvVar4;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *__this;
  byte bVar5;
  
  if (Il2CppMethodInitialized_184347b29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ISetSettingsContainer);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass23_0_SetActions_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass23_0_SetActions_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass23_0_SetActions_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass23_0_SetActions_b__3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass23_0);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Skins.Common.SetActions");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Rename");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Create");
    il2cpp_codegen_initialize_runtime_metadata(&"Create");
    il2cpp_codegen_initialize_runtime_metadata(&"Set actions");
    il2cpp_codegen_initialize_runtime_metadata(&"Copy");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Rename");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Copy");
    Il2CppMethodInitialized_184347b29 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass23_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass23_0_o *)0x0) {
    (object->fields).settings = settings;
    Il2CppCodeGenWriteBarrier(&(object->fields).settings,settings);
    (object->fields).afterChange = afterChange;
    Il2CppCodeGenWriteBarrier(&(object->fields).afterChange,afterChange);
    buttons = (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)
              SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array,4);
    pDVar2 = (DG_Tweening_Core_DOSetter_Color2__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (pDVar2,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass23_0_SetActions_b__0
               ,(MethodInfo_1387DC0 *)0x0);
    pGVar3 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton);
    Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton___ctor
              (pGVar3,"Create",(System_Action_GisketchActionContext__o *)pDVar2,1,false,
               "Common.Create",(MethodInfo *)0x0);
    if (buttons != (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)0x0) {
      if ((int)buttons->max_length != 0) {
        buttons->m_Items[0] = pGVar3;
        Il2CppCodeGenWriteBarrier(buttons->m_Items,pGVar3);
        pDVar2 = (DG_Tweening_Core_DOSetter_Color2__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
        System_Action_GisketchActionContext____ctor
                  (pDVar2,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass23_0_SetActions_b__1
                   ,(MethodInfo_1387DC0 *)0x0);
        pSVar1 = "Delete";
        labelKey = "SettingsPopup.Skins.Common.SetActions";
        label = "Set actions";
        if ((object->fields).settings == (Settings_ISetSettingsContainer_o *)0x0) {
          bVar5 = true;
        }
        else {
          pvVar4 = InterfaceInvoker0_Invoke
                             (7,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,
                              (Il2CppObject *)(object->fields).settings);
          bVar5 = (byte)pvVar4 ^ 1;
        }
        pGVar3 = il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton);
        Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton___ctor
                  (pGVar3,pSVar1,(System_Action_GisketchActionContext__o *)pDVar2,6,(bool)bVar5,
                   "Common.Delete",(MethodInfo *)0x0);
        if (1 < (uint)buttons->max_length) {
          buttons->m_Items[1] = pGVar3;
          Il2CppCodeGenWriteBarrier(buttons->m_Items + 1,pGVar3);
          pDVar2 = (DG_Tweening_Core_DOSetter_Color2__o *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
          System_Action_GisketchActionContext____ctor
                    (pDVar2,(Il2CppObject *)object,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass23_0_SetActions_b__2
                     ,(MethodInfo_1387DC0 *)0x0);
          pSVar1 = "Rename";
          if ((object->fields).settings == (Settings_ISetSettingsContainer_o *)0x0) {
            bVar5 = true;
          }
          else {
            pvVar4 = InterfaceInvoker0_Invoke
                               (8,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,
                                (Il2CppObject *)(object->fields).settings);
            bVar5 = (byte)pvVar4 ^ 1;
          }
          pGVar3 = il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton);
          Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton___ctor
                    (pGVar3,pSVar1,(System_Action_GisketchActionContext__o *)pDVar2,1,(bool)bVar5,
                     "Common.Rename",(MethodInfo *)0x0);
          if (2 < (uint)buttons->max_length) {
            buttons->m_Items[2] = pGVar3;
            Il2CppCodeGenWriteBarrier(buttons->m_Items + 2,pGVar3);
            pDVar2 = (DG_Tweening_Core_DOSetter_Color2__o *)
                     il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
            System_Action_GisketchActionContext____ctor
                      (pDVar2,(Il2CppObject *)object,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass23_0_SetActions_b__3
                       ,(MethodInfo_1387DC0 *)0x0);
            pGVar3 = il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton);
            Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton___ctor
                      (pGVar3,"Copy",(System_Action_GisketchActionContext__o *)pDVar2,1,false,
                       "Common.Copy",(MethodInfo *)0x0);
            if (3 < (uint)buttons->max_length) {
              buttons->m_Items[3] = pGVar3;
              Il2CppCodeGenWriteBarrier(buttons->m_Items + 3,pGVar3);
              __this = il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow);
              Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___ctor_21ea380
                        (__this,id,label,(System_String_o *)0x0,labelKey,buttons,(MethodInfo *)0x0);
              return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this;
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$AddSkinInputRows
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__AddSkinInputRows (System_Collections_Generic_List_AottgComponent__o* rows, System_Collections_Generic_List_AottgComponent__o* skinRows, System_String_o* idPrefix, System_String_o* sub, Settings_BaseSettingsContainer_o* container, bool characterMode, const MethodInfo* method);
// 0x1823935f0
// eh: try 0x182393772..0x182393d25 -> pad 0x183340d30 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823939ae: mov r14, rdi
// asm:   0x182393c95: lea rcx, [rsp + 0x80]
// asm:   0x182393c9d: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x182393ca2: mov rcx, qword ptr [rsp + 0x78]
// asm:   0x182393ca7: test rcx, rcx
// asm:   0x182393caa: jne 0x182393d25
// asm:   0x182393d25: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183340d30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183340d35: push rbp
// asm:   0x183340d36: sub rsp, 0x60
// asm:   0x183340d3a: mov rbp, rdx
// asm:   0x183340d3d: mov rax, qword ptr [rbp + 0x70]
// asm:   0x183340d41: mov rcx, qword ptr [rax]
// asm:   0x183340d44: mov qword ptr [rbp + 0x78], rcx
// asm:   0x183340d48: movabs rax, 0
// asm:   0x183340d52: add rsp, 0x60
// asm:   0x183340d56: pop rbp
// asm:   0x183340d57: ret 

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__AddSkinInputRows
               (System_Collections_Generic_List_AottgComponent__o *rows,
               System_Collections_Generic_List_AottgComponent__o *skinRows,System_String_o *idPrefix,
               System_String_o *sub,Settings_BaseSettingsContainer_o *container,bool characterMode,
               MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  System_Collections_Specialized_OrderedDictionary_o *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  System_Reflection_MethodInfo_c *pSVar6;
  bool bVar7;
  System_String_o *value;
  void *pvVar8;
  VirtualInvokeData *pVVar9;
  Il2CppObject *pIVar10;
  longlong *plVar11;
  System_String_o *pSVar12;
  System_String_array *values;
  System_String_o *pSVar13;
  Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o *__this;
  System_String_o *pSVar14;
  System_String_o *label;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor;
  System_Reflection_MethodInfo_o *pSVar15;
  Gisketch_Aottg2UI_Code_AottgComponent_o *pGVar16;
  ushort uVar17;
  System_Collections_Generic_List_AottgComponent__o *pSVar18;
  System_Reflection_MethodInfo_o *method_00;
  System_String_o *sub_00;
  Il2CppObject *local_68;
  Il2CppObject *local_60 [2];
  undefined8 local_50;
  Il2CppObject **local_48;
  Il2CppObject **local_40;
  
  if (Il2CppMethodInitialized_184347b2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_DictionaryEntry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_AottgComponent_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"UniqueId");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Ground");
    il2cpp_codegen_initialize_runtime_metadata(&"Skins.Common");
    il2cpp_codegen_initialize_runtime_metadata(&"Skin");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-");
    Il2CppMethodInitialized_184347b2a = '\x01';
  }
  local_68 = (Il2CppObject *)0x0;
  local_60[0] = (Il2CppObject *)0x0;
  if (container == (Settings_BaseSettingsContainer_o *)0x0) {
    return;
  }
  value = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SetScopeId(container,(MethodInfo *)0x0)
  ;
  pSVar3 = (container->fields).Settings;
  if (pSVar3 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_68 = (Il2CppObject *)
             (*(pSVar3->klass->vtable)._22_GetEnumerator.methodPtr)
                       (pSVar3,(pSVar3->klass->vtable)._22_GetEnumerator.method);
  local_50 = 0;
  local_48 = &local_68;
  local_40 = local_60;
label_182393772:
  do {
    if (local_68 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pvVar8 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_68);
    pIVar10 = local_68;
    if ((char)pvVar8 == '\0') {
      local_60[0] = il2cpp_vm_Object_IsInst(local_68,(Il2CppClass *)TypeInfo_System_IDisposable);
      if (local_60[0] == (Il2CppObject *)0x0) {
        return;
      }
      InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_60[0]);
      return;
    }
    if (local_68 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar4 = local_68->klass;
    uVar2 = (pIVar4->_2).interface_offsets_count;
    if (uVar2 != 0) {
      uVar17 = 0;
      pIVar5 = (pIVar4->_1).interfaceOffsets;
      do {
        if (pIVar5[uVar17].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar9 = pIVar4->vtable + (pIVar5[uVar17].offset + 1);
          goto label_1823937f5;
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar2);
    }
    pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_68,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_1823937f5:
    pIVar10 = (*pVVar9->methodPtr)(pIVar10,pVVar9->method);
    if (pIVar10 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pIVar10->klass->_1).element_class != (TypeInfo_System_Collections_DictionaryEntry->_1).element_class)
    {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar10,TypeInfo_System_Collections_DictionaryEntry);
    }
    plVar11 = il2cpp_object_unbox(pIVar10);
    pSVar12 = (System_String_o *)*plVar11;
    pSVar15 = (System_Reflection_MethodInfo_o *)plVar11[1];
    if (pSVar15 == (System_Reflection_MethodInfo_o *)0x0) {
      method_00 = (System_Reflection_MethodInfo_o *)0x0;
    }
    else {
      bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
      if (((pSVar15->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar15->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      method_00 = (System_Reflection_MethodInfo_o *)0x0;
      if (bVar7) {
        method_00 = pSVar15;
      }
    }
    pSVar13 = (System_String_o *)0x0;
    if (pSVar12 != (System_String_o *)0x0) {
      if (pSVar12->klass == g_data_184354e50) {
        pSVar13 = pSVar12;
      }
      if (pSVar13 == (System_String_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar12);
      }
    }
  } while (method_00 == (System_Reflection_MethodInfo_o *)0x0);
  pSVar6 = method_00->klass;
  bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
  if (((pSVar6->_2).typeHierarchyDepth < bVar1) ||
     ((pSVar6->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_StringSetting))
  goto label_1823938e3;
  goto label_182393925;
label_1823938e3:
  bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
  if (((pSVar6->_2).typeHierarchyDepth < bVar1) ||
     ((pSVar6->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  pSVar15 = (System_Reflection_MethodInfo_o *)0x0;
  if (bVar7) {
    pSVar15 = method_00;
  }
  if (pSVar15 != (System_Reflection_MethodInfo_o *)0x0) {
label_182393925:
    bVar7 = System_String__op_Equality(pSVar13,"Name",(MethodInfo *)0x0);
    if ((!bVar7) &&
       (bVar7 = System_String__op_Equality(pSVar13,"UniqueId",(MethodInfo *)0x0), !bVar7)) {
      pSVar12 = pSVar13;
      if (characterMode) {
        if (pSVar13 == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar7 = System_String__StartsWith_19722c0(pSVar13,"Skin",4,(MethodInfo *)0x0);
        if (!bVar7) goto label_182393772;
        if ("Skin" == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar12 = System_String__Substring
                            (pSVar13,("Skin"->fields)._stringLength,(MethodInfo *)0x0);
      }
      bVar7 = System_String__op_Equality(pSVar12,"Ground",(MethodInfo *)0x0);
      sub_00 = sub;
      if (bVar7) {
        sub_00 = "Skins.Common";
      }
      values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
      pSVar14 = "settings-skins-";
      if (values == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      if ((int)values->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      values->m_Items[0] = "settings-skins-";
      Il2CppCodeGenWriteBarrier(values->m_Items,pSVar14);
      if ((uint)values->max_length < 2) {
        ThrowIndexOutOfRangeException();
      }
      values->m_Items[1] = idPrefix;
      Il2CppCodeGenWriteBarrier(values->m_Items + 1,idPrefix);
      if ((uint)values->max_length < 3) {
        ThrowIndexOutOfRangeException();
      }
      values->m_Items[2] = value;
      Il2CppCodeGenWriteBarrier(values->m_Items + 2,value);
      pSVar14 = "-";
      if ((uint)values->max_length < 4) {
        ThrowIndexOutOfRangeException();
      }
      values->m_Items[3] = "-";
      Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar14);
      pSVar13 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SafeId(pSVar13,(MethodInfo *)0x0);
      if ((uint)values->max_length < 5) {
        ThrowIndexOutOfRangeException();
      }
      values->m_Items[4] = pSVar13;
      Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar13);
      pSVar13 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
      bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
      if (((method_00->klass->_2).typeHierarchyDepth < bVar1) ||
         ((method_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
        __this = (Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter)
        ;
        bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
        if (((method_00->klass->_2).typeHierarchyDepth < bVar1) ||
           ((method_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(method_00);
        }
        Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter___ctor
                  ((Unity_Burst_BurstCompiler_FakeDelegate_o *)__this,method_00,(MethodInfo *)0x0);
      }
      else {
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter
                           );
        bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
        if (((method_00->klass->_2).typeHierarchyDepth < bVar1) ||
           ((method_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(method_00,TypeInfo_Settings_StringSetting);
        }
        Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter___ctor
                  ((Unity_Burst_BurstCompiler_FakeDelegate_o *)__this,method_00,(MethodInfo *)0x0);
      }
      pSVar14 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SkinLocaleItem
                          (pSVar12,(MethodInfo *)0x0);
      label = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SkinDisplayLabel
                        (pSVar12,(MethodInfo *)0x0);
      descriptor = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
                             (pSVar13,sub_00,pSVar14,label,4,
                              (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this,
                              (System_String_o *)0x0,(System_String_o *)0x0,
                              (System_Action_GisketchActionContext__o *)0x0,true,(MethodInfo *)0x0);
      bVar7 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__UsesExactSkinLabel
                        (pSVar12,(MethodInfo *)0x0);
      if (bVar7) {
        if (descriptor == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
          ThrowNullReferenceException();
        }
        (descriptor->fields).LabelKey = (System_String_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(descriptor->fields).LabelKey,(void *)0x0);
      }
      bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
      if (((method_00->klass->_2).typeHierarchyDepth < bVar1) ||
         ((method_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      pSVar15 = (System_Reflection_MethodInfo_o *)0x0;
      if (bVar7) {
        pSVar15 = method_00;
      }
      pSVar18 = skinRows;
      if (pSVar15 == (System_Reflection_MethodInfo_o *)0x0) {
        pSVar18 = rows;
      }
      pGVar16 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Row(descriptor,(MethodInfo *)0x0);
      if (pSVar18 == (System_Collections_Generic_List_AottgComponent__o *)0x0) {
        ThrowNullReferenceException();
      }
      il2cpp_runtime_helper_180012890(pSVar18,pGVar16,MethodInfo_System_Collections_Generic_List_AottgComponent_Add);
    }
  }
  goto label_182393772;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$SetScopeId
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SetScopeId (Settings_BaseSettingsContainer_o* container, const MethodInfo* method);
// 0x182396e60

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SetScopeId
          (Settings_BaseSettingsContainer_o *container,MethodInfo *method)

{
  byte bVar1;
  Settings_InspectorSettingMetadata_o *pSVar2;
  bool bVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_184347b2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    Il2CppMethodInitialized_184347b2b = '\x01';
  }
  if (container != (Settings_BaseSettingsContainer_o *)0x0) {
    bVar1 = (TypeInfo_Settings_BaseSetSetting->_2).typeHierarchyDepth;
    if ((bVar1 <= (container->klass->_2).typeHierarchyDepth) &&
       ((container->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Settings_BaseSetSetting)) {
      pSVar2 = (*(uint64_t *)((char *)container + 0x40));
      if (pSVar2 != (Settings_InspectorSettingMetadata_o *)0x0) {
        bVar3 = System_String__IsNullOrEmpty((pSVar2->fields).Header,(MethodInfo *)0x0);
        if (bVar3) goto label_182396f10;
        pSVar2 = (*(uint64_t *)((char *)container + 0x40));
        if (pSVar2 != (Settings_InspectorSettingMetadata_o *)0x0) {
          pSVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SafeId
                             ((pSVar2->fields).Header,(MethodInfo *)0x0);
          pSVar4 = System_String__Concat_1969e50("-",pSVar4,(MethodInfo *)0x0);
          return pSVar4;
        }
      }
      ThrowNullReferenceException();
    }
  }
label_182396f10:
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$SkinDisplayLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SkinDisplayLabel (System_String_o* name, const MethodInfo* method);
// 0x182396fd0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823970fa: mov rcx, rdi
// asm:   0x1823970fd: jmp 0x182397119

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SkinDisplayLabel
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184347b2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"hookr");
    il2cpp_codegen_initialize_runtime_metadata(&"Hook Right");
    il2cpp_codegen_initialize_runtime_metadata(&"Glasses");
    il2cpp_codegen_initialize_runtime_metadata(&"Gear Right");
    il2cpp_codegen_initialize_runtime_metadata(&"Eyes");
    il2cpp_codegen_initialize_runtime_metadata(&"hookltiling");
    il2cpp_codegen_initialize_runtime_metadata(&"Hook Left Tiling");
    il2cpp_codegen_initialize_runtime_metadata(&"hookrtiling");
    il2cpp_codegen_initialize_runtime_metadata(&"Gear Left");
    il2cpp_codegen_initialize_runtime_metadata(&"gearl");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear Left");
    il2cpp_codegen_initialize_runtime_metadata(&"eye");
    il2cpp_codegen_initialize_runtime_metadata(&"glass");
    il2cpp_codegen_initialize_runtime_metadata(&"gearr");
    il2cpp_codegen_initialize_runtime_metadata(&"Weapon Trail");
    il2cpp_codegen_initialize_runtime_metadata(&"thunderspearl");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear Right");
    il2cpp_codegen_initialize_runtime_metadata(&"hookl");
    il2cpp_codegen_initialize_runtime_metadata(&"thunderspearr");
    il2cpp_codegen_initialize_runtime_metadata(&"Hook Right Tiling");
    il2cpp_codegen_initialize_runtime_metadata(&"Hook Left");
    il2cpp_codegen_initialize_runtime_metadata(&"weapontrail");
    Il2CppMethodInitialized_184347b2c = '\x01';
  }
  pSVar3 = name;
  if ((name == (System_String_o *)0x0) &&
     (pSVar3 = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8),
     (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8) == (System_String_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar3 = System_String__ToLowerInvariant(pSVar3,(MethodInfo *)0x0);
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(pSVar3,(MethodInfo *)0x0);
  if (uVar2 < 0x6819cf83) {
    if (uVar2 < 0x549c3958) {
      if (uVar2 == 0x803fdd4) {
        bVar1 = System_String__op_Equality(pSVar3,"gearr",(MethodInfo *)0x0);
        if (bVar1) {
          return "Gear Right";
        }
      }
      else if ((uVar2 == 0x549c3957) &&
              (bVar1 = System_String__op_Equality(pSVar3,"weapontrail",(MethodInfo *)0x0), bVar1)) {
        return "Weapon Trail";
      }
    }
    else if (uVar2 == 0x5a19b978) {
      bVar1 = System_String__op_Equality(pSVar3,"thunderspearr",(MethodInfo *)0x0);
      if (bVar1) {
        return "Thunderspear Right";
      }
    }
    else if (uVar2 == 0x62c4fae1) {
      bVar1 = System_String__op_Equality(pSVar3,"hookltiling",(MethodInfo *)0x0);
      if (bVar1) {
        return "Hook Left Tiling";
      }
    }
    else if ((uVar2 == 0x6819cf82) &&
            (bVar1 = System_String__op_Equality(pSVar3,"thunderspearl",(MethodInfo *)0x0), bVar1)) {
      return "Thunderspear Left";
    }
  }
  else if (uVar2 < 0x9ebca849) {
    if (uVar2 == 0x8ba8ed1a) {
      bVar1 = System_String__op_Equality(pSVar3,"eye",(MethodInfo *)0x0);
      if (bVar1) {
        return "Eyes";
      }
    }
    else if (uVar2 == 0x8cbc8bf2) {
      bVar1 = System_String__op_Equality(pSVar3,"hookl",(MethodInfo *)0x0);
      if (bVar1) {
        return "Hook Left";
      }
    }
    else if ((uVar2 == 0x9ebca848) &&
            (bVar1 = System_String__op_Equality(pSVar3,"hookr",(MethodInfo *)0x0), bVar1)) {
      return "Hook Right";
    }
  }
  else if (uVar2 == 0xee03d4e6) {
    bVar1 = System_String__op_Equality(pSVar3,"gearl",(MethodInfo *)0x0);
    if (bVar1) {
      return "Gear Left";
    }
  }
  else if (uVar2 == 0xf203a92b) {
    bVar1 = System_String__op_Equality(pSVar3,"glass",(MethodInfo *)0x0);
    if (bVar1) {
      return "Glasses";
    }
  }
  else if ((uVar2 == 0xfffbb60f) &&
          (bVar1 = System_String__op_Equality(pSVar3,"hookrtiling",(MethodInfo *)0x0), bVar1)) {
    return "Hook Right Tiling";
  }
  pSVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SplitSkinName(name,(MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$SkinLocaleItem
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SkinLocaleItem (System_String_o* name, const MethodInfo* method);
// 0x182397890
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823979ba: mov rcx, rdi
// asm:   0x1823979bd: jmp 0x1823979d9

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SkinLocaleItem
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184347b2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"hookr");
    il2cpp_codegen_initialize_runtime_metadata(&"WeaponTrail");
    il2cpp_codegen_initialize_runtime_metadata(&"hookltiling");
    il2cpp_codegen_initialize_runtime_metadata(&"hookrtiling");
    il2cpp_codegen_initialize_runtime_metadata(&"GearR");
    il2cpp_codegen_initialize_runtime_metadata(&"gearl");
    il2cpp_codegen_initialize_runtime_metadata(&"eye");
    il2cpp_codegen_initialize_runtime_metadata(&"HookR");
    il2cpp_codegen_initialize_runtime_metadata(&"glass");
    il2cpp_codegen_initialize_runtime_metadata(&"gearr");
    il2cpp_codegen_initialize_runtime_metadata(&"Glass");
    il2cpp_codegen_initialize_runtime_metadata(&"HookL");
    il2cpp_codegen_initialize_runtime_metadata(&"HookRTiling");
    il2cpp_codegen_initialize_runtime_metadata(&"HookLTiling");
    il2cpp_codegen_initialize_runtime_metadata(&"ThunderspearL");
    il2cpp_codegen_initialize_runtime_metadata(&"thunderspearl");
    il2cpp_codegen_initialize_runtime_metadata(&"Eye");
    il2cpp_codegen_initialize_runtime_metadata(&"hookl");
    il2cpp_codegen_initialize_runtime_metadata(&"ThunderspearR");
    il2cpp_codegen_initialize_runtime_metadata(&"GearL");
    il2cpp_codegen_initialize_runtime_metadata(&"thunderspearr");
    il2cpp_codegen_initialize_runtime_metadata(&"weapontrail");
    Il2CppMethodInitialized_184347b2d = '\x01';
  }
  pSVar3 = name;
  if ((name == (System_String_o *)0x0) &&
     (pSVar3 = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8),
     (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8) == (System_String_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar3 = System_String__ToLowerInvariant(pSVar3,(MethodInfo *)0x0);
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(pSVar3,(MethodInfo *)0x0);
  if (uVar2 < 0x6819cf83) {
    if (uVar2 < 0x549c3958) {
      if (uVar2 == 0x803fdd4) {
        bVar1 = System_String__op_Equality(pSVar3,"gearr",(MethodInfo *)0x0);
        if (bVar1) {
          return "GearR";
        }
      }
      else if ((uVar2 == 0x549c3957) &&
              (bVar1 = System_String__op_Equality(pSVar3,"weapontrail",(MethodInfo *)0x0), bVar1)) {
        return "WeaponTrail";
      }
    }
    else if (uVar2 == 0x5a19b978) {
      bVar1 = System_String__op_Equality(pSVar3,"thunderspearr",(MethodInfo *)0x0);
      if (bVar1) {
        return "ThunderspearR";
      }
    }
    else if (uVar2 == 0x62c4fae1) {
      bVar1 = System_String__op_Equality(pSVar3,"hookltiling",(MethodInfo *)0x0);
      if (bVar1) {
        return "HookLTiling";
      }
    }
    else if ((uVar2 == 0x6819cf82) &&
            (bVar1 = System_String__op_Equality(pSVar3,"thunderspearl",(MethodInfo *)0x0), bVar1)) {
      return "ThunderspearL";
    }
  }
  else if (uVar2 < 0x9ebca849) {
    if (uVar2 == 0x8ba8ed1a) {
      bVar1 = System_String__op_Equality(pSVar3,"eye",(MethodInfo *)0x0);
      if (bVar1) {
        return "Eye";
      }
    }
    else if (uVar2 == 0x8cbc8bf2) {
      bVar1 = System_String__op_Equality(pSVar3,"hookl",(MethodInfo *)0x0);
      if (bVar1) {
        return "HookL";
      }
    }
    else if ((uVar2 == 0x9ebca848) &&
            (bVar1 = System_String__op_Equality(pSVar3,"hookr",(MethodInfo *)0x0), bVar1)) {
      return "HookR";
    }
  }
  else if (uVar2 == 0xee03d4e6) {
    bVar1 = System_String__op_Equality(pSVar3,"gearl",(MethodInfo *)0x0);
    if (bVar1) {
      return "GearL";
    }
  }
  else if (uVar2 == 0xf203a92b) {
    bVar1 = System_String__op_Equality(pSVar3,"glass",(MethodInfo *)0x0);
    if (bVar1) {
      return "Glass";
    }
  }
  else if ((uVar2 == 0xfffbb60f) &&
          (bVar1 = System_String__op_Equality(pSVar3,"hookrtiling",(MethodInfo *)0x0), bVar1)) {
    return "HookRTiling";
  }
  return name;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$UsesExactSkinLabel
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__UsesExactSkinLabel (System_String_o* name, const MethodInfo* method);
// 0x182398d00

bool Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__UsesExactSkinLabel
               (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_184347b2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"gearl");
    il2cpp_codegen_initialize_runtime_metadata(&"gearr");
    Il2CppMethodInitialized_184347b2e = '\x01';
  }
  if ((name == (System_String_o *)0x0) &&
     (name = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8), name == (System_String_o *)0x0)) {
    ThrowNullReferenceException();
  }
  a = System_String__ToLowerInvariant(name,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(a,"gearl",(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  bVar1 = System_String__op_Equality(a,"gearr",(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$SplitSkinName
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SplitSkinName (System_String_o* name, const MethodInfo* method);
// 0x182397d60

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SplitSkinName
          (System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint16_t uVar8;
  System_Collections_Generic_List_string__o *__this;
  System_String_o *pSVar9;
  int index;
  int startIndex;
  
  if (Il2CppMethodInitialized_184347b2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    Il2CppMethodInitialized_184347b2f = '\x01';
  }
  bVar5 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
  if (bVar5) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (name != (System_String_o *)0x0) {
    startIndex = 0;
    for (index = 1; index < (name->fields)._stringLength; index = index + 1) {
      uVar8 = System_String__get_Chars(name,index,(MethodInfo *)0x0);
      if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354e48);
      }
      bVar5 = System_Char__IsUpper(uVar8,(MethodInfo *)0x0);
      uVar8 = System_String__get_Chars(name,index + -1,(MethodInfo *)0x0);
      bVar6 = System_Char__IsLower(uVar8,(MethodInfo *)0x0);
      if (index + 1 < (name->fields)._stringLength) {
        uVar8 = System_String__get_Chars(name,index + 1,(MethodInfo *)0x0);
        if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354e48);
        }
        bVar7 = System_Char__IsLower(uVar8,(MethodInfo *)0x0);
      }
      else {
        bVar7 = false;
      }
      if ((bVar5) && (bVar7 != false || bVar6)) {
        pSVar9 = System_String__Substring_1972740(name,startIndex,index - startIndex,(MethodInfo *)0x0);
        if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_182397faa;
        il2cpp_runtime_helper_180012890(__this,pSVar9);
        startIndex = index;
      }
    }
    pSVar9 = System_String__Substring(name,startIndex,(MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
    if (__this != (System_Collections_Generic_List_string__o *)0x0) {
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this->fields)._items;
      if (pSVar3 != (System_String_array *)0x0) {
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this->fields)._size = uVar2 + 1;
          if ((uint)pSVar3->max_length <= uVar2) {
            ThrowIndexOutOfRangeException();
          }
          pSVar3->m_Items[(int)uVar2] = pSVar9;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar9);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar9,
                     (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
        }
        pSVar9 = System_String__Join_196ecd0
                           (" ",(System_Collections_Generic_IEnumerable_string__o *)__this,
                            (MethodInfo *)0x0);
        return pSVar9;
      }
    }
  }
label_182397faa:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$SyncHumanGlobalSelection
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SyncHumanGlobalSelection (Settings_HumanCustomSkinSettings_o* settings, const MethodInfo* method);
// 0x182397fb0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SyncHumanGlobalSelection
               (Settings_HumanCustomSkinSettings_o *settings,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_IntSetting_o *__this;
  
  if (Il2CppMethodInitialized_184347b30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSelectedSetIndex);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184347b30 = '\x01';
  }
  if (settings == (Settings_HumanCustomSkinSettings_o *)0x0) {
    return;
  }
  pSVar1 = (settings->fields).SkinMode;
  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
    if ((pSVar1->fields)._value != 0) {
      return;
    }
    pSVar1 = (settings->fields).SelectedSetIndex;
    if ((pSVar1 != (Settings_IntSetting_o *)0x0) &&
       (__this = (settings->fields).LastGlobalPresetIndex, __this != (Settings_IntSetting_o *)0x0)) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)__this,(pSVar1->fields)._value,
                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$AfterSkinSetChange
// il2cpp: System_Action_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__AfterSkinSetChange (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_Action_o* beforeRefresh, const MethodInfo* method);
// 0x182394c20

System_Action_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__AfterSkinSetChange
          (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,System_Action_o *beforeRefresh,
          MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  int32_t iVar3;
  undefined4 uVar4;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass31_0_o *object;
  System_Action_o *__this;
  
  if (Il2CppMethodInitialized_184347b31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass31_0_AfterSkinSetChan
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass31_0);
    Il2CppMethodInitialized_184347b31 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass31_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass31_0_o *)0x0) {
    (object->fields).beforeRefresh = beforeRefresh;
    Il2CppCodeGenWriteBarrier(&(object->fields).beforeRefresh,beforeRefresh);
    pUVar1 = (context->fields).GameObject;
    pGVar2 = (context->fields).Node;
    iVar3 = (context->fields).InputSource;
    uVar4 = *(undefined4 *)&(context->fields).field_0x1c;
    (object->fields).context.fields.ElementId = (context->fields).ElementId;
    (object->fields).context.fields.GameObject = pUVar1;
    (object->fields).context.fields.Node = pGVar2;
    (object->fields).context.fields.InputSource = iVar3;
    *(undefined4 *)&(object->fields).context.fields.field_0x1c = uVar4;
    Il2CppCodeGenWriteBarrier((void **)&(object->fields).context,(void *)0x0);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass31_0_AfterSkinSetChan
               ,(MethodInfo *)0x0);
    return __this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$RefreshSkins
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__RefreshSkins (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x182396620

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__RefreshSkins
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  UnityEngine_Transform_o *pUVar2;
  System_String_o *id;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  float fVar3;
  
  if (Il2CppMethodInitialized_184347b32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"skins");
    Il2CppMethodInitialized_184347b32 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)(context->fields).GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    __this = (context->fields).GameObject;
    if (__this == (UnityEngine_GameObject_o *)0x0) goto label_182396835;
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     (__this,(MethodInfo_6F53B0 *)
                             MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  else {
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  }
  if (Il2CppMethodInitialized_184347b33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_GisketchVirtualScrollRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"skins");
    Il2CppMethodInitialized_184347b33 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_182396835;
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)root,(MethodInfo *)0x0);
  }
  else {
    pUVar2 = (UnityEngine_Transform_o *)0x0;
  }
  id = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__ContentId
                 ("skins",(MethodInfo *)0x0);
  pUVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__FindById(pUVar2,id,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_182396835;
    __this_00 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar2,
                           (MethodInfo_6651A0 *)
                           MethodInfo_UnityEngine_Component_GetComponent_GisketchVirtualScrollRuntime);
  }
  else {
    __this_00 = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this_00 == (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *)0x0) {
label_182396835:
      ThrowNullReferenceException();
    }
    fVar3 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__get_CurrentScrollOffset
                      (__this_00,(MethodInfo *)0x0);
  }
  else {
    fVar3 = 0.0;
  }
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory->static_fields->_pendingScrollOffset =
       fVar3;
  Gisketch_Aottg2UI_Game_AottgSettingsScreen__RefreshCategory(root,"skins",(MethodInfo *)0x0);
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__Groups((MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SyncState(root,groups,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SyncAll(root,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$CurrentScrollOffset
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CurrentScrollOffset (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x182395340

float Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CurrentScrollOffset
                (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  System_String_o *id;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this;
  float fVar3;
  
  if (Il2CppMethodInitialized_184347b33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_GisketchVirtualScrollRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"skins");
    Il2CppMethodInitialized_184347b33 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_182395460;
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)root,(MethodInfo *)0x0);
  }
  else {
    pUVar2 = (UnityEngine_Transform_o *)0x0;
  }
  id = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__ContentId
                 ("skins",(MethodInfo *)0x0);
  pUVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__FindById(pUVar2,id,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_182395460;
    __this = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar2,
                        (MethodInfo_6651A0 *)
                        MethodInfo_UnityEngine_Component_GetComponent_GisketchVirtualScrollRuntime);
  }
  else {
    __this = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return 0.0;
  }
  if (__this != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *)0x0) {
    fVar3 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__get_CurrentScrollOffset
                      (__this,(MethodInfo *)0x0);
    return fVar3;
  }
label_182395460:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$FindById
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__FindById (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo* method);
// 0x182395470
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823954ff: nop 
// asm:   0x182395558: mov rax, rdi
// asm:   0x18239555b: jmp 0x182395564
// asm:   0x18239555d: mov rax, rsi
// asm:   0x182395560: jmp 0x182395564

UnityEngine_Transform_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__FindById
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *a;
  UnityEngine_Transform_o *pUVar3;
  int index;
  
  if (Il2CppMethodInitialized_184347b34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347b34 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (root == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    a = UnityEngine_Object__get_name((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
    bVar1 = System_String__Equals_196c550(a,id,5,(MethodInfo *)0x0);
    if (bVar1) {
      return root;
    }
    for (index = 0; iVar2 = UnityEngine_Transform__get_childCount(root,(MethodInfo *)0x0), index < iVar2;
        index = index + 1) {
      pUVar3 = UnityEngine_Transform__GetChild(root,index,(MethodInfo *)0x0);
      pUVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__FindById
                         (pUVar3,id,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        return pUVar3;
      }
    }
  }
  return (UnityEngine_Transform_o *)0x0;
}


