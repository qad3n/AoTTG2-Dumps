// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsSkinsCategory.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c___cctor (const MethodInfo* method);
// 0x5e51340

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07548653 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c);
    Il2CppMethodInitialized_07548653 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c->static_fields->__9 =
       (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c_o* __this, const MethodInfo* method);
// 0x5e513b0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c$$<MarkSetsChanged>b__30_0
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c___MarkSetsChanged_b__30_0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c_o* __this, const MethodInfo* method);
// 0x5e513c0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c___MarkSetsChanged_b__30_0
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07548654 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory);
    Il2CppMethodInitialized_07548654 = '\x01';
  }
  pSVar1 = System_Int32__ToString
                     (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory->static_fields->
                       _setsRevision,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass18_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass18_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x5e509d0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass18_0___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass18_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass18_0$$<HumanGlobalSetDropdown>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass18_0___HumanGlobalSetDropdown_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass18_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5e51400
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e514c4: pop rbx
// asm:   0x5e514c5: pop r14
// asm:   0x5e514c7: pop rbp
// asm:   0x5e514c8: jmp 0x5e50810  ; Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__RefreshSkins()

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass18_0___HumanGlobalSetDropdown_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass18_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  int index;
  Settings_IntSetting_o *pSVar1;
  System_Collections_Generic_List_int__o *__this_00;
  Settings_HumanCustomSkinSettings_o *pSVar2;
  bool bVar3;
  int32_t value;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_GisketchUIRoot_o *method_02;
  float fVar4;
  
  if (Il2CppMethodInitialized_07548655 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSelectedSetIndex);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_07548655 = '\x01';
  }
  pSVar1 = (__this->fields).filteredIndex;
  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
    index = (pSVar1->fields)._value;
    if (index < 0) {
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__RefreshSkins:
      if (Il2CppMethodInitialized_07548650 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        il2cpp_codegen_initialize_runtime_metadata(&"skins");
        Il2CppMethodInitialized_07548650 = '\x01';
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
      method_01 = (MethodInfo *)0x0;
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar3) {
        if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        method_01 = MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot;
        root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
               UnityEngine_GameObject__GetComponentInParent_object_
                         (context.fields.GameObject,
                          (MethodInfo_353BB40 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
      }
      fVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CurrentScrollOffset(root,method_01)
      ;
      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory->static_fields->
      _pendingScrollOffset = fVar4;
      method_02 = root;
      Gisketch_Aottg2UI_Game_AottgSettingsScreen__RefreshCategory
                (root,"skins",(MethodInfo *)0x0);
      groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__Groups((MethodInfo *)method_02);
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SyncState(root,groups,method_00);
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
      }
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SyncAll(root,(MethodInfo *)groups);
      return;
    }
    __this_00 = (__this->fields).originalIndices;
    if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
      if ((__this_00->fields)._size <= index)
      goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__RefreshSkins;
      value = System_Collections_Generic_List_int___get_Item
                        (__this_00,index,
                         (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      pSVar2 = (__this->fields).settings;
      if ((pSVar2 != (Settings_HumanCustomSkinSettings_o *)0x0) &&
         (pSVar1 = (pSVar2->fields).SelectedSetIndex, pSVar1 != (Settings_IntSetting_o *)0x0)) {
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pSVar1,value,
                   (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        pSVar2 = (__this->fields).settings;
        if ((pSVar2 != (Settings_HumanCustomSkinSettings_o *)0x0) &&
           (pSVar1 = (pSVar2->fields).LastGlobalPresetIndex, pSVar1 != (Settings_IntSetting_o *)0x0)) {
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)pSVar1,value,
                     (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__RefreshSkins;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass24_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass24_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5e50ca0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass24_0___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass24_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass24_0$$<SetActions>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass24_0___SetActions_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass24_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5e514e0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass24_0___SetActions_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass24_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Settings_ISetSettingsContainer_o *settings;
  System_Action_o *afterChange;
  MethodInfo *in_RCX;
  
  settings = (__this->fields).settings;
  afterChange = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__AfterSkinSetChange
                          (context,(__this->fields).afterChange,method);
  Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenName(context,settings,0,afterChange,in_RCX);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass24_0$$<SetActions>b__1
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass24_0___SetActions_b__1 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass24_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5e51530

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass24_0___SetActions_b__1
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass24_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Settings_ISetSettingsContainer_o *settings;
  System_Action_o *afterChange;
  MethodInfo *method_00;
  
  settings = (__this->fields).settings;
  afterChange = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__AfterSkinSetChange
                          (context,(__this->fields).afterChange,method);
  Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenDelete(context,settings,afterChange,method_00);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass24_0$$<SetActions>b__2
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass24_0___SetActions_b__2 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass24_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5e516e0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass24_0___SetActions_b__2
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass24_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  bool bVar3;
  System_Action_o *afterChange;
  MethodInfo *method_00;
  ulong uVar4;
  long lVar5;
  
  obj = (Il2CppObject *)(__this->fields).settings;
  afterChange = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__AfterSkinSetChange
                          (context,(__this->fields).afterChange,method);
  if (Il2CppMethodInitialized_0754866b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ISetSettingsContainer);
    Il2CppMethodInitialized_0754866b = '\x01';
  }
  if (obj != (Il2CppObject *)0x0) {
    pIVar1 = obj->klass;
    uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar4 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar5 = 0;
      do {
        if (*(Settings_ISetSettingsContainer_c **)((long)&pIVar2->interfaceType + lVar5) ==
            TypeInfo_Settings_ISetSettingsContainer) {
          method_00 = (MethodInfo *)(pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 8));
          goto label_05e51799;
        }
        lVar5 = lVar5 + 0x10;
      } while (uVar4 * 0x10 != lVar5);
    }
    method_00 = (MethodInfo *)
                GetInterfaceInvokeDataFromVTableSlowPath
                          (obj,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,8);
label_05e51799:
    bVar3 = (*method_00->methodPointer)(obj,(MethodInfo *)method_00->virtualMethodPointer);
    if (bVar3) {
      Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenName
                (context,(Settings_ISetSettingsContainer_o *)obj,1,afterChange,method_00);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass24_0$$<SetActions>b__3
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass24_0___SetActions_b__3 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass24_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5e518a0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass24_0___SetActions_b__3
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass24_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Settings_ISetSettingsContainer_o *settings;
  System_Action_o *afterChange;
  MethodInfo *in_RCX;
  
  settings = (__this->fields).settings;
  afterChange = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__AfterSkinSetChange
                          (context,(__this->fields).afterChange,method);
  Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenName(context,settings,2,afterChange,in_RCX);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass29_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass29_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass29_0_o* __this, const MethodInfo* method);
// 0x5e510c0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass29_0___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass29_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass29_0$$<AfterSkinSetChange>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass29_0___AfterSkinSetChange_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass29_0_o* __this, const MethodInfo* method);
// 0x5e518f0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass29_0___AfterSkinSetChange_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass29_0_o *__this,
               MethodInfo *method)

{
  System_Action_o *pSVar1;
  MethodInfo *method_00;
  
  pSVar1 = (__this->fields).beforeRefresh;
  method_00 = (MethodInfo *)__this;
  if (pSVar1 != (System_Action_o *)0x0) {
    method_00 = (MethodInfo *)(pSVar1->fields).method_code;
    (*(code *)(pSVar1->fields).invoke_impl)(method_00,(pSVar1->fields).method);
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__MarkSetsChanged(method_00);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__RefreshSkins
            ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)(__this->fields).context.fields,method_00);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass7_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass7_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x5e4d6d0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass7_0___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass7_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass7_0$$<HumanGroup>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass7_0___HumanGroup_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x5e51930

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass7_0___HumanGroup_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass7_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SyncHumanGlobalSelection
            ((__this->fields).settings,method);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass8_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass8_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x5e4f150

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass8_0___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass8_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass8_0$$<TitanGroup>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass8_0___TitanGroup_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass8_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5e51940

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass8_0___TitanGroup_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass8_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__AddTitanSlot
            (context,(__this->fields).set,method);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass9_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass9_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass9_0_o* __this, const MethodInfo* method);
// 0x5e4ff00

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass9_0___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass9_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass9_0$$<AddTitanSlotBlocks>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass9_0___AddTitanSlotBlocks_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass9_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5e51950

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass9_0___AddTitanSlotBlocks_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass9_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__RemoveTitanSlot
            (context,(__this->fields).set,(__this->fields).slot,in_RDX);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__Build (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x5e4ba00

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__Build
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  float initialScrollOffset;
  System_String_o *categoryId;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory_o *__this;
  System_String_o **method_00;
  
  method_00 = (System_String_o **)content;
  if (Il2CppMethodInitialized_07548636 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory);
    method_00 = &"skins";
    il2cpp_codegen_initialize_runtime_metadata(&"skins");
    Il2CppMethodInitialized_07548636 = '\x01';
  }
  initialScrollOffset =
       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory->static_fields->
       _pendingScrollOffset;
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory->static_fields->_pendingScrollOffset =
       0.0;
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__Groups((MethodInfo *)method_00);
  categoryId = "skins";
  if (Il2CppMethodInitialized_075485a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory);
    Il2CppMethodInitialized_075485a2 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory);
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory___ctor
            (__this,context,categoryId,groups,(System_String_o *)0x0,initialScrollOffset,
             (System_Nullable_float__o)0x0,(MethodInfo *)0x0);
  if (content == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (content,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SyncState (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5e4bc70

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SyncState
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  MethodInfo *method_00;
  
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__Groups((MethodInfo *)root);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SyncState(root,groups,method_00);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$Groups
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__Groups (const MethodInfo* method);
// 0x5e4bb00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e4bbb4: jmp 0x5e4bc63

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__Groups(MethodInfo *method)

{
  uint uVar1;
  Settings_CustomSkinSettings_o *pSVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *pGVar3;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *pGVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Settings_BaseCustomSkinSettings_ShifterCustomSkinSet__o *settings;
  Settings_BaseCustomSkinSettings_SkyboxCustomSkinSet__o *settings_00;
  
  if (Il2CppMethodInitialized_07548637 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"skybox");
    il2cpp_codegen_initialize_runtime_metadata(&"shifter");
    Il2CppMethodInitialized_07548637 = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
  method_02 = (MethodInfo *)0x4;
  pGVar3 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array,4);
  if (pSVar2 == (Settings_CustomSkinSettings_o *)0x0) {
    pGVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__HumanGroup
                       ((Settings_HumanCustomSkinSettings_o *)0x0,method_02);
  }
  else {
    pGVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__HumanGroup
                       ((pSVar2->fields).Human,method_02);
  }
  if (pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pGVar3->max_length != 0) {
    pGVar3->m_Items[0] = pGVar4;
    Il2CppCodeGenWriteBarrier(pGVar3->m_Items);
    if (pSVar2 == (Settings_CustomSkinSettings_o *)0x0) {
      pGVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanGroup
                         ((Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *)0x0,(MethodInfo *)pGVar4);
      uVar1 = (uint)pGVar3->max_length;
    }
    else {
      pGVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanGroup
                         ((pSVar2->fields).Titan,(MethodInfo *)pGVar4);
      uVar1 = (uint)pGVar3->max_length;
    }
    if ((uVar1 & 0xfffffffe) != 0) {
      pGVar3->m_Items[1] = pGVar4;
      Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 1);
      if (pSVar2 == (Settings_CustomSkinSettings_o *)0x0) {
        settings = (Settings_BaseCustomSkinSettings_ShifterCustomSkinSet__o *)0x0;
      }
      else {
        settings = (pSVar2->fields).Shifter;
      }
      pGVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SkinGroup
                         ("shifter",(Settings_ICustomSkinSettings_o *)settings,method_00);
      if (2 < (uint)pGVar3->max_length) {
        pGVar3->m_Items[2] = pGVar4;
        Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 2);
        if (pSVar2 == (Settings_CustomSkinSettings_o *)0x0) {
          settings_00 = (Settings_BaseCustomSkinSettings_SkyboxCustomSkinSet__o *)0x0;
        }
        else {
          settings_00 = (pSVar2->fields).Skybox;
        }
        pGVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SkinGroup
                           ("skybox",(Settings_ICustomSkinSettings_o *)settings_00,method_01);
        if ((pGVar3->max_length & 0xfffffffc) != 0) {
          pGVar3->m_Items[3] = pGVar4;
          Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 3);
          return pGVar3;
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$HumanGroup
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__HumanGroup (Settings_HumanCustomSkinSettings_o* settings, const MethodInfo* method);
// 0x5e4bc90
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e4c028: jmp 0x5e4c661
// asm:   0x5e4c180: mov r12d, r14d
// asm:   0x5e4c183: mov r14, qword ptr [rsp + 0x10]
// asm:   0x5e4c4d7: jmp 0x5e4c52d

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__HumanGroup
          (Settings_HumanCustomSkinSettings_o *settings,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  Settings_IntSetting_o *pSVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass7_0_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Action_GisketchActionContext__o *__this_02;
  MethodInfo *pMVar6;
  Il2CppObject *pIVar7;
  System_Action_o *__this_03;
  MethodInfo *pMVar8;
  Settings_BaseSetSetting_o *container;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *blocks;
  System_Object_array *pSVar9;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *pGVar10;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this_04;
  System_String_o *titleKey;
  Settings_HumanCustomSkinSettings_o *pSVar11;
  MethodInfo *in_R9;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass7_0_Fields *targetAddress;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (Il2CppMethodInitialized_07548638 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass7_0_HumanGroup_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass7_0);
    il2cpp_codegen_initialize_runtime_metadata(&"SetSpecificSkinsEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"SkinsLocal");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-human-enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-human-gas-enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-human-local");
    il2cpp_codegen_initialize_runtime_metadata(&"GlobalSkinOverridesEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-human-actions");
    il2cpp_codegen_initialize_runtime_metadata(&"SkinsLocalTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"SkinsEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"Skins.Human");
    il2cpp_codegen_initialize_runtime_metadata(&"HookEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-human-global-overrides");
    il2cpp_codegen_initialize_runtime_metadata(&"SkinMode");
    il2cpp_codegen_initialize_runtime_metadata(&"human-character");
    il2cpp_codegen_initialize_runtime_metadata(&"GasEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"GlobalSkinOverridesEnabledTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-human-hook-enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-human-set-specific");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-human-mode");
    il2cpp_codegen_initialize_runtime_metadata(&"SetSpecificSkinsEnabledTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"human-global");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-human");
    Il2CppMethodInitialized_07548638 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass7_0)
  ;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass7_0_o *)0x0)
  goto label_05e4c661;
  targetAddress = &__this->fields;
  (__this->fields).settings = settings;
  Il2CppCodeGenWriteBarrier(&targetAddress->settings);
  __this_00 = (System_Collections_Generic_List_object__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgComponent);
  System_Collections_Generic_List_object____ctor
            (__this_00,(MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_AottgComponent_ctor);
  __this_01 = (System_Collections_Generic_List_object__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgComponent);
  System_Collections_Generic_List_object____ctor
            (__this_01,(MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_AottgComponent_ctor);
  pSVar11 = (__this->fields).settings;
  if (pSVar11 == (Settings_HumanCustomSkinSettings_o *)0x0) {
    blocks = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array,2);
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_05e4c661;
  }
  else {
    pSVar4 = (pSVar11->fields).SkinMode;
    if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_05e4c661;
    iVar2 = (pSVar4->fields)._value;
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_02,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_RefreshSkins,
               (MethodInfo_4A803E0 *)0x0);
    pMVar6 = (MethodInfo *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                       ("settings-skins-human-mode","Skins.Human","SkinMode",pSVar4,
                        (System_String_o *)0x0,__this_02,in_stack_ffffffffffffffb8);
    pMVar8 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_05e4c661;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar9 = (__this_00->fields)._items;
    if (pSVar9 == (System_Object_array *)0x0) goto label_05e4c661;
    uVar3 = (__this_00->fields)._size;
    if (uVar3 < (uint)pSVar9->max_length) {
      (__this_00->fields)._size = uVar3 + 1;
      pSVar9->m_Items[(int)uVar3] = (Il2CppObject *)pMVar6;
      Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar3);
      pSVar11 = targetAddress->settings;
      if (iVar2 != 1) goto label_05e4bfbd;
label_05e4c053:
      pIVar7 = (Il2CppObject *)
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CharacterDropdown(pSVar11,pMVar6);
      pMVar8 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar9 = (__this_00->fields)._items;
      if (pSVar9 == (System_Object_array *)0x0) goto label_05e4c661;
      uVar3 = (__this_00->fields)._size;
      if (uVar3 < (uint)pSVar9->max_length) {
        (__this_00->fields)._size = uVar3 + 1;
        pSVar9->m_Items[(int)uVar3] = pIVar7;
        Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar3);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_00,pIVar7,(MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
      }
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_00,(Il2CppObject *)pMVar6,(MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method)
      ;
      pSVar11 = targetAddress->settings;
      if (iVar2 == 1) goto label_05e4c053;
label_05e4bfbd:
      pIVar7 = (Il2CppObject *)
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__HumanGlobalSetDropdown
                         (pSVar11,pMVar6);
      pMVar8 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar9 = (__this_00->fields)._items;
      if (pSVar9 == (System_Object_array *)0x0) goto label_05e4c661;
      uVar3 = (__this_00->fields)._size;
      if (uVar3 < (uint)pSVar9->max_length) {
        (__this_00->fields)._size = uVar3 + 1;
        pSVar9->m_Items[(int)uVar3] = pIVar7;
        Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar3);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_00,pIVar7,(MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
      }
      pSVar11 = (__this->fields).settings;
      __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
      pMVar8 = (MethodInfo *)0x0;
      System_Action___ctor
                (__this_03,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass7_0_HumanGroup_b__0
                 ,(MethodInfo *)0x0);
      pIVar7 = (Il2CppObject *)
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SetActions
                         ("settings-skins-human-actions",(Settings_ISetSettingsContainer_o *)pSVar11,__this_03,pMVar8);
      pMVar8 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar9 = (__this_00->fields)._items;
      if (pSVar9 == (System_Object_array *)0x0) goto label_05e4c661;
      uVar3 = (__this_00->fields)._size;
      if (uVar3 < (uint)pSVar9->max_length) {
        (__this_00->fields)._size = uVar3 + 1;
        pSVar9->m_Items[(int)uVar3] = pIVar7;
        Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar3);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_00,pIVar7,(MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
      }
    }
    if (targetAddress->settings == (Settings_HumanCustomSkinSettings_o *)0x0) goto label_05e4c661;
    pIVar7 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CommonSkinSwitch
                       ("settings-skins-human-enabled","Human","SkinsEnabled",
                        (targetAddress->settings->fields).SkinsEnabled,(System_String_o *)0x0,
                        (MethodInfo *)__this_02);
    pMVar8 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar9 = (__this_00->fields)._items;
    if (pSVar9 == (System_Object_array *)0x0) goto label_05e4c661;
    uVar3 = (__this_00->fields)._size;
    if (uVar3 < (uint)pSVar9->max_length) {
      (__this_00->fields)._size = uVar3 + 1;
      pSVar9->m_Items[(int)uVar3] = pIVar7;
      Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar3);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_00,pIVar7,(MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
    }
    if (targetAddress->settings == (Settings_HumanCustomSkinSettings_o *)0x0) goto label_05e4c661;
    pIVar7 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CommonSkinSwitch
                       ("settings-skins-human-local","Human","SkinsLocal",
                        (targetAddress->settings->fields).SkinsLocal,"SkinsLocalTooltip",
                        (MethodInfo *)__this_02);
    pMVar8 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar9 = (__this_00->fields)._items;
    if (pSVar9 == (System_Object_array *)0x0) goto label_05e4c661;
    uVar3 = (__this_00->fields)._size;
    if (uVar3 < (uint)pSVar9->max_length) {
      (__this_00->fields)._size = uVar3 + 1;
      pSVar9->m_Items[(int)uVar3] = pIVar7;
      Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar3);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_00,pIVar7,(MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
    }
    if (targetAddress->settings == (Settings_HumanCustomSkinSettings_o *)0x0) goto label_05e4c661;
    pIVar7 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                       ("settings-skins-human-global-overrides","Skins.Human","GlobalSkinOverridesEnabled",
                        (targetAddress->settings->fields).GlobalSkinOverridesEnabled,"GlobalSkinOverridesEnabledTooltip",
                        (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
    pMVar8 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar9 = (__this_00->fields)._items;
    if (pSVar9 == (System_Object_array *)0x0) goto label_05e4c661;
    uVar3 = (__this_00->fields)._size;
    if (uVar3 < (uint)pSVar9->max_length) {
      (__this_00->fields)._size = uVar3 + 1;
      pSVar9->m_Items[(int)uVar3] = pIVar7;
      Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar3);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_00,pIVar7,(MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
    }
    if (targetAddress->settings == (Settings_HumanCustomSkinSettings_o *)0x0) goto label_05e4c661;
    pIVar7 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                       ("settings-skins-human-set-specific","Skins.Human","SetSpecificSkinsEnabled",
                        (targetAddress->settings->fields).SetSpecificSkinsEnabled,"SetSpecificSkinsEnabledTooltip",
                        (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
    pMVar8 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar9 = (__this_00->fields)._items;
    if (pSVar9 == (System_Object_array *)0x0) goto label_05e4c661;
    uVar3 = (__this_00->fields)._size;
    if (uVar3 < (uint)pSVar9->max_length) {
      (__this_00->fields)._size = uVar3 + 1;
      pSVar9->m_Items[(int)uVar3] = pIVar7;
      Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar3);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_00,pIVar7,(MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
    }
    if (targetAddress->settings == (Settings_HumanCustomSkinSettings_o *)0x0) goto label_05e4c661;
    pIVar7 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                       ("settings-skins-human-gas-enabled","Skins.Human","GasEnabled",
                        (targetAddress->settings->fields).GasEnabled,(System_String_o *)0x0,
                        (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
    pMVar8 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar9 = (__this_00->fields)._items;
    if (pSVar9 == (System_Object_array *)0x0) goto label_05e4c661;
    uVar3 = (__this_00->fields)._size;
    if (uVar3 < (uint)pSVar9->max_length) {
      (__this_00->fields)._size = uVar3 + 1;
      pSVar9->m_Items[(int)uVar3] = pIVar7;
      Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar3);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_00,pIVar7,(MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
    }
    if (targetAddress->settings == (Settings_HumanCustomSkinSettings_o *)0x0) goto label_05e4c661;
    pMVar8 = (MethodInfo *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                       ("settings-skins-human-hook-enabled","Skins.Human","HookEnabled",
                        (targetAddress->settings->fields).HookEnabled,(System_String_o *)0x0,
                        (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
    pMVar6 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar9 = (__this_00->fields)._items;
    if (pSVar9 == (System_Object_array *)0x0) goto label_05e4c661;
    uVar3 = (__this_00->fields)._size;
    if (uVar3 < (uint)pSVar9->max_length) {
      (__this_00->fields)._size = uVar3 + 1;
      pSVar9->m_Items[(int)uVar3] = (Il2CppObject *)pMVar8;
      Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar3);
      if (iVar2 != 1) goto label_05e4c4c1;
label_05e4c4f8:
      pSVar11 = targetAddress->settings;
      pSVar5 = "human-character";
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_00,(Il2CppObject *)pMVar8,(MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method)
      ;
      if (iVar2 == 1) goto label_05e4c4f8;
label_05e4c4c1:
      pSVar11 = targetAddress->settings;
      pSVar5 = "human-global";
    }
    if (Il2CppMethodInitialized_07548645 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSelectedSet);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
      Il2CppMethodInitialized_07548645 = '\x01';
    }
    if (pSVar11 == (Settings_HumanCustomSkinSettings_o *)0x0) {
      container = (Settings_BaseSetSetting_o *)0x0;
    }
    else {
      pSVar4 = (pSVar11->fields).SkinMode;
      if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_05e4c661;
      if (((pSVar4->fields)._value == 0) ||
         (container = (Settings_BaseSetSetting_o *)
                      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__HumanCharacterSkinContainer
                                (pSVar11,pMVar8), container == (Settings_BaseSetSetting_o *)0x0)) {
        container = Settings_SetSettingsContainer_object___GetSelectedSet
                              ((Settings_SetSettingsContainer_T__o *)pSVar11,
                               (MethodInfo_40477A0 *)
                               MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSelectedSet);
      }
    }
    in_R9 = (MethodInfo *)(ulong)(iVar2 == 1);
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__AddSkinInputRows
              ((System_Collections_Generic_List_AottgComponent__o *)__this_01,
               (System_Collections_Generic_List_AottgComponent__o *)__this_01,pSVar5,"Skins.Human",
               (Settings_BaseSettingsContainer_o *)container,iVar2 == 1,in_stack_ffffffffffffffb8);
    blocks = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array,2);
  }
  pMVar8 = MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray;
  pSVar9 = System_Collections_Generic_List_object___ToArray
                     (__this_00,
                      (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray)
  ;
  pGVar10 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__TwoColumn
                      ((Gisketch_Aottg2UI_Code_AottgComponent_array *)pSVar9,pMVar8);
  if (blocks == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0) {
label_05e4c661:
    ThrowNullReferenceException();
  }
  if ((int)blocks->max_length != 0) {
    blocks->m_Items[0] = pGVar10;
    Il2CppCodeGenWriteBarrier(blocks->m_Items);
    if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_05e4c661;
    pMVar8 = MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray;
    pSVar9 = System_Collections_Generic_List_object___ToArray
                       (__this_01,
                        (MethodInfo_395F5A0 *)
                        MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray);
    pMVar8 = (MethodInfo *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__TwoColumn
                       ((Gisketch_Aottg2UI_Code_AottgComponent_array *)pSVar9,pMVar8);
    if ((blocks->max_length & 0xfffffffe) != 0) {
      blocks->m_Items[1] = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)pMVar8;
      Il2CppCodeGenWriteBarrier(blocks->m_Items + 1);
      __this_04 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
      pSVar5 = "settings-skins-human";
      titleKey = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__GroupTitleKey
                           ("settings-skins-human",pMVar8);
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_5d40ea0
                (__this_04,pSVar5,(System_String_o *)0x0,titleKey,blocks,in_R9);
      return __this_04;
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$TitanGroup
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanGroup (Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o* settings, const MethodInfo* method);
// 0x5e4c670
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e4c93b: xor esi, esi
// asm:   0x5e4c93d: jmp 0x5e4c951
// asm:   0x5e4c93f: mov rdi, qword ptr [rsi + 0xc8]
// asm:   0x5e4c946: xor esi, esi
// asm:   0x5e4c948: cmp qword ptr [rdi + rdx*8 - 8], rcx
// asm:   0x5e4c94d: cmove rsi, rax
// asm:   0x5e4cb9d: jmp 0x5e4cc50
// asm:   0x5e4ccba: jmp 0x5e4cf19
// asm:   0x5e4cedd: nop dword ptr [rax]

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanGroup
          (Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *settings,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  Settings_IntSetting_o *setting;
  Settings_ListSetting_TitanCustomSkinSlot__o *pSVar4;
  int32_t iVar5;
  int32_t iVar6;
  System_Collections_Generic_List_AottgSettingsRowBlock__o *blocks;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass8_0_o *__this;
  Settings_TitanCustomSkinSet_o *pSVar7;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_array *names;
  System_Action_GisketchActionContext__o *pSVar8;
  MethodInfo *pMVar9;
  Il2CppObject *pIVar10;
  System_Object_array *pSVar11;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *item;
  Gisketch_Aottg2UI_Code_AottgComponent_array *rows;
  System_String_o *pSVar12;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *buttons;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_o *__this_01;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *__this_02;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *pGVar13;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this_03;
  System_String_o *titleKey;
  Il2CppRGCTXData *pIVar14;
  Settings_TitanCustomSkinSet_o *pSVar15;
  MethodInfo *pMVar16;
  MethodInfo *in_R9;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass8_0_Fields *targetAddress;
  MethodInfo *in_stack_ffffffffffffffa8;
  
  if (Il2CppMethodInitialized_07548639 == '\0') {
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
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass8_0_TitanGroup_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass8_0);
    il2cpp_codegen_initialize_runtime_metadata(&"OverrideModels");
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
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Add");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-titan");
    Il2CppMethodInitialized_07548639 = '\x01';
  }
  blocks = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgSettingsRowBlock);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)blocks,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_AottgSettingsRowBlock_ctor);
  if (settings == (Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *)0x0) {
label_05e4cf14:
    if (blocks != (System_Collections_Generic_List_AottgSettingsRowBlock__o *)0x0) {
label_05e4cf19:
      pMVar16 = MethodInfo_System_Collections_Generic_List_AottgSettingsRowBlock_ToArray;
      pGVar13 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)
                System_Collections_Generic_List_object___ToArray
                          ((System_Collections_Generic_List_object__o *)blocks,
                           (MethodInfo_395F5A0 *)
                           MethodInfo_System_Collections_Generic_List_AottgSettingsRowBlock_ToArray);
      __this_03 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
      pSVar12 = "settings-skins-titan";
      titleKey = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__GroupTitleKey
                           ("settings-skins-titan",pMVar16);
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_5d40ea0
                (__this_03,pSVar12,(System_String_o *)0x0,titleKey,pGVar13,in_R9);
      return __this_03;
    }
  }
  else {
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass8_0
                       );
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    pSVar7 = (Settings_TitanCustomSkinSet_o *)
             Settings_SetSettingsContainer_object___GetSelectedSet
                       ((Settings_SetSettingsContainer_T__o *)settings,
                        (MethodInfo_40477A0 *)
                        MethodInfo_Settings_SetSettingsContainer_TitanCustomSkinSet_GetSelectedSet);
    if (__this != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass8_0_o *)0x0) {
      if (pSVar7 == (Settings_TitanCustomSkinSet_o *)0x0) {
        (__this->fields).set = (Settings_TitanCustomSkinSet_o *)0x0;
      }
      else {
        bVar2 = (TypeInfo_Settings_TitanCustomSkinSet->_2).typeHierarchyDepth;
        if ((pSVar7->klass->_2).typeHierarchyDepth < bVar2) {
          pSVar15 = (Settings_TitanCustomSkinSet_o *)0x0;
        }
        else {
          pSVar15 = (Settings_TitanCustomSkinSet_o *)0x0;
          if ((pSVar7->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
              (Il2CppClass *)TypeInfo_Settings_TitanCustomSkinSet) {
            pSVar15 = pSVar7;
          }
        }
        (__this->fields).set = pSVar15;
      }
      targetAddress = &__this->fields;
      Il2CppCodeGenWriteBarrier(&targetAddress->set);
      __this_00 = (System_Collections_Generic_List_object__o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgComponent);
      System_Collections_Generic_List_object____ctor
                (__this_00,
                 (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_AottgComponent_ctor);
      setting = (settings->fields).SelectedSetIndex;
      names = Settings_SetSettingsContainer_object___GetSetNames
                        ((Settings_SetSettingsContainer_T__o *)settings,
                         (MethodInfo_40482D0 *)
                         MethodInfo_Settings_SetSettingsContainer_TitanCustomSkinSet_GetSetNames);
      pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (pSVar8,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_RefreshSkins
                 ,(MethodInfo_4A803E0 *)0x0);
      pMVar9 = (MethodInfo *)
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SetDropdown
                         ("settings-skins-titan-set","Skins.Common",setting,names,pSVar8,in_R9);
      pMVar16 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
      if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pIVar14 = (Il2CppRGCTXData *)(__this_00->fields)._items;
        if (pIVar14 != (Il2CppRGCTXData *)0x0) {
          uVar3 = (__this_00->fields)._size;
          if (uVar3 < *(uint *)&pIVar14[3].rgctxDataDummy) {
            (__this_00->fields)._size = uVar3 + 1;
            pIVar14[(long)(int)uVar3 + 4].method = pMVar9;
            Il2CppCodeGenWriteBarrier(&pIVar14[(long)(int)uVar3 + 4].rgctxDataDummy);
          }
          else {
            pIVar14 = pMVar16->klass->rgctx_data;
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pMVar9,(MethodInfo_395D230 *)pIVar14[0xe].method);
          }
          pIVar10 = (Il2CppObject *)
                    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SetActions
                              ("settings-skins-titan-actions",(Settings_ISetSettingsContainer_o *)settings,
                               (System_Action_o *)0x0,(MethodInfo *)pIVar14);
          pMVar16 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar11 = (__this_00->fields)._items;
          if (pSVar11 != (System_Object_array *)0x0) {
            uVar3 = (__this_00->fields)._size;
            if (uVar3 < (uint)pSVar11->max_length) {
              (__this_00->fields)._size = uVar3 + 1;
              pSVar11->m_Items[(int)uVar3] = pIVar10;
              Il2CppCodeGenWriteBarrier(pSVar11->m_Items + (int)uVar3);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_00,pIVar10,(MethodInfo_395D230 *)pMVar16->klass->rgctx_data[0xe].method);
            }
            pIVar10 = (Il2CppObject *)
                      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CommonSkinSwitch
                                ("settings-skins-titan-enabled","Titan","SkinsEnabled",
                                 (settings->fields).SkinsEnabled,(System_String_o *)0x0,in_R9);
            pMVar16 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar11 = (__this_00->fields)._items;
            if (pSVar11 != (System_Object_array *)0x0) {
              uVar3 = (__this_00->fields)._size;
              if (uVar3 < (uint)pSVar11->max_length) {
                (__this_00->fields)._size = uVar3 + 1;
                pSVar11->m_Items[(int)uVar3] = pIVar10;
                Il2CppCodeGenWriteBarrier(pSVar11->m_Items + (int)uVar3);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_00,pIVar10,(MethodInfo_395D230 *)pMVar16->klass->rgctx_data[0xe].method);
              }
              pIVar10 = (Il2CppObject *)
                        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CommonSkinSwitch
                                  ("settings-skins-titan-local","Titan","SkinsLocal",
                                   (settings->fields).SkinsLocal,"SkinsLocalTooltip",in_R9);
              pMVar16 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar11 = (__this_00->fields)._items;
              if (pSVar11 != (System_Object_array *)0x0) {
                uVar3 = (__this_00->fields)._size;
                if (uVar3 < (uint)pSVar11->max_length) {
                  (__this_00->fields)._size = uVar3 + 1;
                  pSVar11->m_Items[(int)uVar3] = pIVar10;
                  Il2CppCodeGenWriteBarrier(pSVar11->m_Items + (int)uVar3);
                  pSVar7 = targetAddress->set;
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_00,pIVar10,(MethodInfo_395D230 *)pMVar16->klass->rgctx_data[0xe].method);
                  pSVar7 = targetAddress->set;
                }
                if (pSVar7 != (Settings_TitanCustomSkinSet_o *)0x0) {
                  in_R9 = (MethodInfo *)0x0;
                  pIVar10 = (Il2CppObject *)
                            Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                      ("settings-skins-titan-override","Skins.Titan","OverrideModels",
                                       (pSVar7->fields).OverrideModels,"OverrideModelsTooltip",
                                       (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffa8
                                      );
                  pMVar16 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
                  piVar1 = &(__this_00->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar11 = (__this_00->fields)._items;
                  if (pSVar11 == (System_Object_array *)0x0) goto label_05e4cf0f;
                  uVar3 = (__this_00->fields)._size;
                  if (uVar3 < (uint)pSVar11->max_length) {
                    (__this_00->fields)._size = uVar3 + 1;
                    pSVar11->m_Items[(int)uVar3] = pIVar10;
                    Il2CppCodeGenWriteBarrier(pSVar11->m_Items + (int)uVar3);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              (__this_00,pIVar10,(MethodInfo_395D230 *)pMVar16->klass->rgctx_data[0xe].method)
                    ;
                  }
                }
                pMVar16 = MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray;
                pSVar11 = System_Collections_Generic_List_object___ToArray
                                    (__this_00,
                                     (MethodInfo_395F5A0 *)
                                     MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray);
                item = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__TwoColumn
                                 ((Gisketch_Aottg2UI_Code_AottgComponent_array *)pSVar11,pMVar16);
                pMVar16 = MethodInfo_System_Collections_Generic_List_AottgSettingsRowBlock_Add;
                if (blocks != (System_Collections_Generic_List_AottgSettingsRowBlock__o *)0x0) {
                  piVar1 = &(blocks->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pGVar13 = (blocks->fields)._items;
                  if (pGVar13 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0) {
                    uVar3 = (blocks->fields)._size;
                    if (uVar3 < (uint)pGVar13->max_length) {
                      (blocks->fields)._size = uVar3 + 1;
                      pGVar13->m_Items[(int)uVar3] = item;
                      Il2CppCodeGenWriteBarrier(pGVar13->m_Items + (int)uVar3);
                      pSVar7 = targetAddress->set;
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)blocks,(Il2CppObject *)item,
                                 (MethodInfo_395D230 *)pMVar16->klass->rgctx_data[0xe].method);
                      pSVar7 = targetAddress->set;
                    }
                    if (pSVar7 == (Settings_TitanCustomSkinSet_o *)0x0) goto label_05e4cf19;
                    pMVar16 = (MethodInfo *)0x1;
                    rows = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,1);
                    pSVar12 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SlotCountLabel
                                        ((__this->fields).set,pMVar16);
                    buttons = (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)
                              SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array
                                         ,1);
                    pSVar8 = il2cpp_codegen_object_new
                                       ((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
                    System_Action_GisketchActionContext____ctor
                              (pSVar8,(Il2CppObject *)__this,
                               (intptr_t)
                               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass8_0_TitanGroup_b__0
                               ,(MethodInfo_4A803E0 *)0x0);
                    pSVar7 = (__this->fields).set;
                    if ((pSVar7 != (Settings_TitanCustomSkinSet_o *)0x0) &&
                       (pSVar4 = (pSVar7->fields).Slots,
                       pSVar4 != (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0)) {
                      iVar5 = Settings_ListSetting_object___GetCount
                                        ((Settings_ListSetting_T__o *)pSVar4,
                                         (MethodInfo_515DE80 *)
                                         MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
                      __this_01 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)
                                             TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton
                                            );
                      in_R9 = (MethodInfo *)0x0;
                      Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton___ctor
                                (__this_01,"Common.Add",pSVar8,1,0x13 < iVar5,(System_String_o *)0x0,
                                 (MethodInfo *)0x0);
                      if (buttons != (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)0x0
                         ) {
                        if ((int)buttons->max_length == 0) {
label_05e4cf77:
                          ThrowIndexOutOfRangeException();
                        }
                        buttons->m_Items[0] = __this_01;
                        Il2CppCodeGenWriteBarrier(buttons->m_Items);
                        __this_02 = il2cpp_codegen_object_new
                                              ((Il2CppClass *)
                                               TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow);
                        Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___ctor
                                  (__this_02,"settings-skins-titan-slot-actions",pSVar12,buttons,(MethodInfo *)0x0);
                        if (rows != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
                          if ((__this_02 != (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *)0x0) &&
                             (pIVar10 = il2cpp_vm_Object_IsInst
                                                  ((Il2CppObject *)__this_02,
                                                   (((rows->obj).klass)->_1).element_class),
                             pIVar10 == (Il2CppObject *)0x0)) {
                            pIVar10 = il2cpp_codegen_get_array_type_mismatch_exception();
                            il2cpp_codegen_raise_exception(pIVar10,(MethodInfo *)0x0);
                          }
                          if ((int)rows->max_length == 0) goto label_05e4cf77;
                          rows->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_02;
                          Il2CppCodeGenWriteBarrier(rows->m_Items);
                          pMVar9 = (MethodInfo *)
                                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__TwoColumn
                                             (rows,(MethodInfo *)__this_02);
                          pMVar16 = MethodInfo_System_Collections_Generic_List_AottgSettingsRowBlock_Add;
                          piVar1 = &(blocks->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          pIVar14 = (Il2CppRGCTXData *)(blocks->fields)._items;
                          if (pIVar14 != (Il2CppRGCTXData *)0x0) {
                            uVar3 = (blocks->fields)._size;
                            if (uVar3 < *(uint *)&pIVar14[3].rgctxDataDummy) {
                              (blocks->fields)._size = uVar3 + 1;
                              pIVar14[(long)(int)uVar3 + 4].method = pMVar9;
                              Il2CppCodeGenWriteBarrier(&pIVar14[(long)(int)uVar3 + 4].rgctxDataDummy);
                            }
                            else {
                              pIVar14 = pMVar16->klass->rgctx_data;
                              System_Collections_Generic_List_object___AddWithResize
                                        ((System_Collections_Generic_List_object__o *)blocks,
                                         (Il2CppObject *)pMVar9,(MethodInfo_395D230 *)pIVar14[0xe].method);
                            }
                            pSVar7 = targetAddress->set;
                            if (pSVar7 != (Settings_TitanCustomSkinSet_o *)0x0) {
                              iVar5 = 0;
                              do {
                                pSVar4 = (pSVar7->fields).Slots;
                                if (pSVar4 == (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0) break;
                                iVar6 = Settings_ListSetting_object___GetCount
                                                  ((Settings_ListSetting_T__o *)pSVar4,
                                                   (MethodInfo_515DE80 *)
                                                   MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount
                                                  );
                                if (iVar6 <= iVar5) goto label_05e4cf14;
                                Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__AddTitanSlotBlocks
                                          (blocks,targetAddress->set,iVar5,(MethodInfo *)pIVar14);
                                iVar5 = iVar5 + 1;
                                pSVar7 = targetAddress->set;
                              } while (pSVar7 != (Settings_TitanCustomSkinSet_o *)0x0);
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
      }
    }
  }
label_05e4cf0f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$AddTitanSlotBlocks
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__AddTitanSlotBlocks (System_Collections_Generic_List_AottgSettingsRowBlock__o* blocks, Settings_TitanCustomSkinSet_o* set, int32_t index, const MethodInfo* method);
// 0x5e4f3c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e4f66d: jmp 0x5e4fec9
// body from a decompile with inferred signatures (Il2CppDecompileFallback.java): the final configuration did not decompile it


void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__AddTitanSlotBlocks
               (System_Collections_Generic_List_AottgSettingsRowBlock__o *blocks,
               Settings_TitanCustomSkinSet_o *set,int32_t index,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  Il2CppClass *pIVar4;
  void *pvVar5;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *pGVar6;
  Settings_IntSetting_o *pSVar7;
  int32_t iVar8;
  Il2CppObject *pIVar9;
  Settings_BaseSetting_o *pSVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar13;
  System_String_o *newValue;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *buttons;
  System_Action_GisketchActionContext__o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_o *__this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *__this_01;
  MethodInfo *pMVar14;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *pGVar15;
  Il2CppObject *pIVar16;
  System_String_array *pSVar17;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  void **ppvVar18;
  Settings_BaseSetting_o *pSVar19;
  MethodInfo *pMVar20;
  MethodInfo *in_stack_ffffffffffffffa0;
  int32_t iStack_48;
  int32_t iStack_44;
  System_Collections_Generic_List_AottgSettingsRowBlock__o *pSStack_40;
  System_String_o *pSStack_38;
  
  iStack_44 = index;
  if (Il2CppMethodInitialized_0754863a == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSkinSlot);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass9_0_AddTitanSlotBlock
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass9_0);
    il2cpp_codegen_initialize_runtime_metadata(&"-head");
    il2cpp_codegen_initialize_runtime_metadata(&"trashcan");
    il2cpp_codegen_initialize_runtime_metadata(&"{0}");
    il2cpp_codegen_initialize_runtime_metadata(&"-slot-");
    il2cpp_codegen_initialize_runtime_metadata(&"-eye");
    il2cpp_codegen_initialize_runtime_metadata(&"Skins.Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"-eye-model");
    il2cpp_codegen_initialize_runtime_metadata(&"-body-model");
    il2cpp_codegen_initialize_runtime_metadata(&"Target");
    il2cpp_codegen_initialize_runtime_metadata(&"Body");
    il2cpp_codegen_initialize_runtime_metadata(&"Slot");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Head");
    il2cpp_codegen_initialize_runtime_metadata(&"-head-model");
    il2cpp_codegen_initialize_runtime_metadata(&"Eye");
    il2cpp_codegen_initialize_runtime_metadata(&"-hair-model");
    il2cpp_codegen_initialize_runtime_metadata(&"-body");
    il2cpp_codegen_initialize_runtime_metadata(&"Hair");
    il2cpp_codegen_initialize_runtime_metadata(&"-header");
    il2cpp_codegen_initialize_runtime_metadata(&"-hair");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Model");
    il2cpp_codegen_initialize_runtime_metadata(&"-target");
    Il2CppMethodInitialized_0754863a = '\x01';
  }
  iStack_48 = 0;
  pIVar9 = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass9_0)
  ;
  System_Object___ctor(pIVar9,(MethodInfo *)0x0);
  if (pIVar9 == (Il2CppObject *)0x0) goto label_05e4fed8;
  pIVar9[1].klass = (Il2CppClass *)set;
  Il2CppCodeGenWriteBarrier(&pIVar9[1].klass);
  if ((pIVar9[1].klass == (Il2CppClass *)0x0) ||
     (pIVar4 = ((pIVar9[1].klass)->_1).declaringType, pIVar4 == (Il2CppClass *)0x0)) goto label_05e4fed8;
  pSVar10 = Settings_ListSetting_object___GetItemAt
                      ((Settings_ListSetting_T__o *)pIVar4,index,
                       (MethodInfo_515DEA0 *)MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetItemAt);
  if (pSVar10 == (Settings_BaseSetting_o *)0x0) {
    pIVar9[1].monitor = (void *)0x0;
label_05e4f65c:
    Il2CppCodeGenWriteBarrier(&pIVar9[1].monitor);
    pvVar5 = pIVar9[1].monitor;
  }
  else {
    bVar2 = (TypeInfo_Settings_TitanCustomSkinSlot->_2).typeHierarchyDepth;
    if ((pSVar10->klass->_2).typeHierarchyDepth < bVar2) {
      pSVar19 = (Settings_BaseSetting_o *)0x0;
    }
    else {
      pSVar19 = (Settings_BaseSetting_o *)0x0;
      if ((pSVar10->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
          (Il2CppClass *)TypeInfo_Settings_TitanCustomSkinSlot) {
        pSVar19 = pSVar10;
      }
    }
    pIVar9[1].monitor = pSVar19;
    if ((pSVar10->klass->_2).typeHierarchyDepth < bVar2) goto label_05e4f65c;
    Il2CppCodeGenWriteBarrier(&pIVar9[1].monitor);
    pvVar5 = pIVar9[1].monitor;
  }
  if (pvVar5 == (void *)0x0) {
    return;
  }
  ppvVar18 = &pIVar9[1].monitor;
  pSStack_40 = blocks;
  pSVar11 = (System_String_o *)
            Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SetScopeId(pIVar9[1].klass);
  pSVar12 = System_Int32__ToString(&iStack_44,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)
              System_String__Concat_5302810
                        ("settings-skins-titan",pSVar11,"-slot-",pSVar12,(MethodInfo *)0x0);
  pGVar13 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
            SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,2);
  pMVar20 = (MethodInfo *)"-header";
  pSVar11 = System_String__Concat_52f0320
                      ((System_String_o *)method_00,"-header",(MethodInfo *)0x0);
  pSVar12 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanLocale
                      ("Slot",pMVar20);
  iStack_48 = iStack_44 + 1;
  newValue = System_Int32__ToString(&iStack_48,(MethodInfo *)0x0);
  if (pSVar12 != (System_String_o *)0x0) {
    pSVar12 = System_String__Replace_5304550(pSVar12,"{0}",newValue,(MethodInfo *)0x0);
    buttons = (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)
              SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array,1);
    __this = (System_Action_GisketchActionContext__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this,pIVar9,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass9_0_AddTitanSlotBlock
               ,(MethodInfo_4A803E0 *)0x0);
    if ((pIVar9[1].klass != (Il2CppClass *)0x0) &&
       (pIVar4 = ((pIVar9[1].klass)->_1).declaringType, pSStack_38 = pSVar12, pIVar4 != (Il2CppClass *)0x0)) {
      iVar8 = Settings_ListSetting_object___GetCount
                        ((Settings_ListSetting_T__o *)pIVar4,
                         (MethodInfo_515DE80 *)MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
      __this_00 = (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton);
      pMVar20 = (MethodInfo *)0x0;
      Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton___ctor
                (__this_00,"Common.Delete",__this,6,iVar8 < 2,"trashcan",(MethodInfo *)0x0);
      if (buttons != (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)0x0) {
        if ((int)buttons->max_length == 0) {
label_05e4fedd:
          ThrowIndexOutOfRangeException();
        }
        buttons->m_Items[0] = __this_00;
        Il2CppCodeGenWriteBarrier(buttons->m_Items);
        __this_01 = (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow);
        Gisketch_Aottg2UI_SettingsScreen_AottgActionRow___ctor
                  (__this_01,pSVar11,pSStack_38,buttons,(MethodInfo *)0x0);
        if (pGVar13 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
          if ((__this_01 != (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *)0x0) &&
             (pIVar9 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)__this_01,(((pGVar13->obj).klass)->_1).element_class),
             pIVar9 == (Il2CppObject *)0x0)) {
label_05e4fee2:
            pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
          }
          if ((int)pGVar13->max_length == 0) goto label_05e4fedd;
          pGVar13->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01;
          Il2CppCodeGenWriteBarrier(pGVar13->m_Items);
          pSVar11 = System_String__Concat_52f0320
                              ((System_String_o *)method_00,"-target",(MethodInfo *)0x0);
          if (*ppvVar18 != (void *)0x0) {
            pMVar14 = (MethodInfo *)
                      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown
                                (pSVar11,"Skins.Titan","Target",
                                 *(Settings_IntSetting_o **)((long)*ppvVar18 + 0x30),(System_String_o *)0x0,
                                 (System_Action_GisketchActionContext__o *)0x0,pMVar20);
            if ((pMVar14 != (MethodInfo *)0x0) &&
               (pIVar9 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)pMVar14,(((pGVar13->obj).klass)->_1).element_class),
               pIVar9 == (Il2CppObject *)0x0)) goto label_05e4fee2;
            if ((pGVar13->max_length & 0xfffffffe) == 0) goto label_05e4fedd;
            pGVar13->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pMVar14;
            Il2CppCodeGenWriteBarrier(pGVar13->m_Items + 1);
            pGVar15 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__TwoColumn(pGVar13,pMVar14);
            pMVar14 = MethodInfo_System_Collections_Generic_List_AottgSettingsRowBlock_Add;
            if (pSStack_40 != (System_Collections_Generic_List_AottgSettingsRowBlock__o *)0x0) {
              piVar1 = &(pSStack_40->fields)._version;
              *piVar1 = *piVar1 + 1;
              pGVar6 = (pSStack_40->fields)._items;
              if (pGVar6 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0) {
                uVar3 = (pSStack_40->fields)._size;
                if (uVar3 < (uint)pGVar6->max_length) {
                  (pSStack_40->fields)._size = uVar3 + 1;
                  pGVar6->m_Items[(int)uVar3] = pGVar15;
                  Il2CppCodeGenWriteBarrier(pGVar6->m_Items + (int)uVar3);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSStack_40,(Il2CppObject *)pGVar15,
                             (MethodInfo_395D230 *)pMVar14->klass->rgctx_data[0xe].method);
                }
                pGVar13 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                          SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,8);
                pSVar11 = System_String__Concat_52f0320
                                    ((System_String_o *)method_00,"-body",(MethodInfo *)0x0);
                if ((*ppvVar18 != (void *)0x0) &&
                   (pIVar9 = (Il2CppObject *)
                             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_5d4a5e0
                                       (pSVar11,"Skins.Titan","Body",
                                        *(Settings_StringSetting_o **)((long)*ppvVar18 + 0x38),
                                        (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                                        pMVar20),
                   pGVar13 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0)) {
                  if ((pIVar9 != (Il2CppObject *)0x0) &&
                     (pIVar16 = il2cpp_vm_Object_IsInst(pIVar9,(((pGVar13->obj).klass)->_1).element_class),
                     pIVar16 == (Il2CppObject *)0x0)) goto label_05e4fee2;
                  if ((int)pGVar13->max_length == 0) goto label_05e4fedd;
                  pGVar13->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                  Il2CppCodeGenWriteBarrier(pGVar13->m_Items);
                  pSVar11 = System_String__Concat_52f0320
                                      ((System_String_o *)method_00,"-head",(MethodInfo *)0x0);
                  if (*ppvVar18 != (void *)0x0) {
                    pIVar9 = (Il2CppObject *)
                             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_5d4a5e0
                                       (pSVar11,"Skins.Titan","Head",
                                        *(Settings_StringSetting_o **)((long)*ppvVar18 + 0x40),
                                        (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                                        pMVar20);
                    if ((pIVar9 != (Il2CppObject *)0x0) &&
                       (pIVar16 = il2cpp_vm_Object_IsInst(pIVar9,(((pGVar13->obj).klass)->_1).element_class),
                       pIVar16 == (Il2CppObject *)0x0)) goto label_05e4fee2;
                    if ((pGVar13->max_length & 0xfffffffe) == 0) goto label_05e4fedd;
                    pGVar13->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                    Il2CppCodeGenWriteBarrier(pGVar13->m_Items + 1);
                    pSVar11 = System_String__Concat_52f0320
                                        ((System_String_o *)method_00,"-eye",(MethodInfo *)0x0)
                    ;
                    if (*ppvVar18 != (void *)0x0) {
                      pIVar9 = (Il2CppObject *)
                               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_5d4a5e0
                                         (pSVar11,"Skins.Titan","Eye",
                                          *(Settings_StringSetting_o **)((long)*ppvVar18 + 0x48),
                                          (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0
                                          ,pMVar20);
                      if ((pIVar9 != (Il2CppObject *)0x0) &&
                         (pIVar16 = il2cpp_vm_Object_IsInst(pIVar9,(((pGVar13->obj).klass)->_1).element_class)
                         , pIVar16 == (Il2CppObject *)0x0)) goto label_05e4fee2;
                      if ((uint)pGVar13->max_length < 3) goto label_05e4fedd;
                      pGVar13->m_Items[2] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                      Il2CppCodeGenWriteBarrier(pGVar13->m_Items + 2);
                      pSVar11 = System_String__Concat_52f0320
                                          ((System_String_o *)method_00,"-hair",
                                           (MethodInfo *)0x0);
                      if (*ppvVar18 != (void *)0x0) {
                        pIVar9 = (Il2CppObject *)
                                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_5d4a5e0
                                           (pSVar11,"Skins.Titan","Hair",
                                            *(Settings_StringSetting_o **)((long)*ppvVar18 + 0x50),
                                            (System_String_o *)0x0,
                                            (System_Action_GisketchActionContext__o *)0x0,pMVar20);
                        if ((pIVar9 != (Il2CppObject *)0x0) &&
                           (pIVar16 = il2cpp_vm_Object_IsInst
                                                (pIVar9,(((pGVar13->obj).klass)->_1).element_class),
                           pIVar16 == (Il2CppObject *)0x0)) goto label_05e4fee2;
                        if ((pGVar13->max_length & 0xfffffffc) == 0) goto label_05e4fedd;
                        pGVar13->m_Items[3] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                        Il2CppCodeGenWriteBarrier(pGVar13->m_Items + 3);
                        pSVar11 = System_String__Concat_52f0320
                                            ((System_String_o *)method_00,"-body-model",
                                             (MethodInfo *)0x0);
                        if (*ppvVar18 != (void *)0x0) {
                          pSVar7 = *(Settings_IntSetting_o **)((long)*ppvVar18 + 0x58);
                          pMVar20 = extraout_RDX;
                          if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init
                                      ((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
                            pMVar20 = extraout_RDX_00;
                          }
                          pSVar17 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanIndexOptions
                                              ("Body",
                                               TypeInfo_Characters_BasicTitanSetup->static_fields->BodyCount,
                                               pMVar20);
                          pIVar9 = (Il2CppObject *)
                                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown_5d40a70
                                             (pSVar11,"Skins.Titan","Model",pSVar7,
                                              pSVar17,(System_String_o *)0x0,
                                              (System_Action_GisketchActionContext__o *)0x0,
                                              in_stack_ffffffffffffffa0);
                          if ((pIVar9 != (Il2CppObject *)0x0) &&
                             (pIVar16 = il2cpp_vm_Object_IsInst
                                                  (pIVar9,(((pGVar13->obj).klass)->_1).element_class),
                             pIVar16 == (Il2CppObject *)0x0)) goto label_05e4fee2;
                          if ((uint)pGVar13->max_length < 5) goto label_05e4fedd;
                          pGVar13->m_Items[4] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                          Il2CppCodeGenWriteBarrier(pGVar13->m_Items + 4);
                          pSVar11 = System_String__Concat_52f0320
                                              ((System_String_o *)method_00,"-head-model",
                                               (MethodInfo *)0x0);
                          if (*ppvVar18 != (void *)0x0) {
                            pSVar7 = *(Settings_IntSetting_o **)((long)*ppvVar18 + 0x60);
                            pSVar17 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanIndexOptions
                                                ("Head",
                                                 TypeInfo_Characters_BasicTitanSetup->static_fields->HeadCount
                                                 ,method_01);
                            pIVar9 = (Il2CppObject *)
                                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown_5d40a70
                                               (pSVar11,"Skins.Titan","Model",pSVar7,
                                                pSVar17,(System_String_o *)0x0,
                                                (System_Action_GisketchActionContext__o *)0x0,
                                                in_stack_ffffffffffffffa0);
                            if ((pIVar9 != (Il2CppObject *)0x0) &&
                               (pIVar16 = il2cpp_vm_Object_IsInst
                                                    (pIVar9,(((pGVar13->obj).klass)->_1).element_class),
                               pIVar16 == (Il2CppObject *)0x0)) goto label_05e4fee2;
                            if ((uint)pGVar13->max_length < 6) goto label_05e4fedd;
                            pGVar13->m_Items[5] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                            Il2CppCodeGenWriteBarrier(pGVar13->m_Items + 5);
                            pSVar11 = System_String__Concat_52f0320
                                                ((System_String_o *)method_00,"-eye-model",
                                                 (MethodInfo *)0x0);
                            if (*ppvVar18 != (void *)0x0) {
                              pSVar7 = *(Settings_IntSetting_o **)((long)*ppvVar18 + 0x68);
                              pSVar17 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanIndexOptions
                                                  ("Eye",
                                                   TypeInfo_Characters_BasicTitanSetup->static_fields->
                                                   EyeCount,method_02);
                              pIVar9 = (Il2CppObject *)
                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown_5d40a70
                                                 (pSVar11,"Skins.Titan","Model",pSVar7,
                                                  pSVar17,(System_String_o *)0x0,
                                                  (System_Action_GisketchActionContext__o *)0x0,
                                                  in_stack_ffffffffffffffa0);
                              if ((pIVar9 != (Il2CppObject *)0x0) &&
                                 (pIVar16 = il2cpp_vm_Object_IsInst
                                                      (pIVar9,(((pGVar13->obj).klass)->_1).element_class),
                                 pIVar16 == (Il2CppObject *)0x0)) goto label_05e4fee2;
                              if ((uint)pGVar13->max_length < 7) goto label_05e4fedd;
                              pGVar13->m_Items[6] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                              Il2CppCodeGenWriteBarrier(pGVar13->m_Items + 6);
                              pSVar11 = System_String__Concat_52f0320
                                                  ((System_String_o *)method_00,"-hair-model",
                                                   (MethodInfo *)0x0);
                              if (*ppvVar18 != (void *)0x0) {
                                pSVar7 = *(Settings_IntSetting_o **)((long)*ppvVar18 + 0x70);
                                pSVar17 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanHairOptions
                                                    (method_00);
                                pMVar20 = (MethodInfo *)
                                          Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown_5d40a70
                                                    (pSVar11,"Skins.Titan","Model",
                                                     pSVar7,pSVar17,(System_String_o *)0x0,
                                                     (System_Action_GisketchActionContext__o *)0x0,
                                                     in_stack_ffffffffffffffa0);
                                if ((pMVar20 != (MethodInfo *)0x0) &&
                                   (pIVar9 = il2cpp_vm_Object_IsInst
                                                       ((Il2CppObject *)pMVar20,
                                                        (((pGVar13->obj).klass)->_1).element_class),
                                   pIVar9 == (Il2CppObject *)0x0)) goto label_05e4fee2;
                                if ((pGVar13->max_length & 0xfffffff8) == 0) goto label_05e4fedd;
                                pGVar13->m_Items[7] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pMVar20;
                                Il2CppCodeGenWriteBarrier(pGVar13->m_Items + 7);
                                pGVar15 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__TwoColumn
                                                    (pGVar13,pMVar20);
                                pMVar20 = MethodInfo_System_Collections_Generic_List_AottgSettingsRowBlock_Add
                                ;
                                piVar1 = &(pSStack_40->fields)._version;
                                *piVar1 = *piVar1 + 1;
                                pGVar6 = (pSStack_40->fields)._items;
                                if (pGVar6 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)
                                              0x0) {
                                  uVar3 = (pSStack_40->fields)._size;
                                  if (uVar3 < (uint)pGVar6->max_length) {
                                    (pSStack_40->fields)._size = uVar3 + 1;
                                    pGVar6->m_Items[(int)uVar3] = pGVar15;
                                    Il2CppCodeGenWriteBarrier(pGVar6->m_Items + (int)uVar3);
                                    return;
                                  }
                                  System_Collections_Generic_List_object___AddWithResize
                                            ((System_Collections_Generic_List_object__o *)pSStack_40,
                                             (Il2CppObject *)pGVar15,
                                             (MethodInfo_395D230 *)pMVar20->klass->rgctx_data[0xe].method);
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
            }
          }
        }
      }
    }
  }
label_05e4fed8:
  ThrowNullReferenceException();
}

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$SlotCountLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SlotCountLabel (Settings_TitanCustomSkinSet_o* set, const MethodInfo* method);
// 0x5e4f2d0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SlotCountLabel
          (Settings_TitanCustomSkinSet_o *set,MethodInfo *method)

{
  Settings_ListSetting_TitanCustomSkinSlot__o *__this;
  int32_t iVar1;
  undefined8 in_RAX;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (Il2CppMethodInitialized_0754863b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
    il2cpp_codegen_initialize_runtime_metadata(&"{0}");
    il2cpp_codegen_initialize_runtime_metadata(&"{1}");
    il2cpp_codegen_initialize_runtime_metadata(&"SlotCount");
    Il2CppMethodInitialized_0754863b = '\x01';
  }
  pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanLocale
                     ("SlotCount",method);
  if ((set != (Settings_TitanCustomSkinSet_o *)0x0) &&
     (__this = (set->fields).Slots, __this != (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0)) {
    iVar1 = Settings_ListSetting_object___GetCount
                      ((Settings_ListSetting_T__o *)__this,
                       (MethodInfo_515DE80 *)MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
    uStack_18 = CONCAT44(iVar1,(undefined4)uStack_18);
    pSVar3 = System_Int32__ToString((int32_t *)((long)&uStack_18 + 4),(MethodInfo *)0x0);
    if (pSVar2 != (System_String_o *)0x0) {
      pSVar2 = System_String__Replace_5304550(pSVar2,"{0}",pSVar3,(MethodInfo *)0x0);
      uStack_18 = CONCAT44(0x14,(undefined4)uStack_18);
      pSVar3 = System_Int32__ToString((int32_t *)((long)&uStack_18 + 4),(MethodInfo *)0x0);
      if (pSVar2 != (System_String_o *)0x0) {
        pSVar2 = System_String__Replace_5304550(pSVar2,"{1}",pSVar3,(MethodInfo *)0x0);
        return pSVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$CommonLocale
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CommonLocale (System_String_o* item, const MethodInfo* method);
// 0x5e504b0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CommonLocale
          (System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_0754863c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_0754863c = '\x01';
  }
  if (Il2CppMethodInitialized_0754862e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Common.");
    Il2CppMethodInitialized_0754862e = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320("Common.",item,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$TitanLocale
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanLocale (System_String_o* item, const MethodInfo* method);
// 0x5e4ffe0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanLocale
          (System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_0754863d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Skins.Titan");
    Il2CppMethodInitialized_0754863d = '\x01';
  }
  pSVar1 = "Skins.Titan";
  if (Il2CppMethodInitialized_0754862d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_0754862d = '\x01';
  }
  pSVar1 = System_String__Concat_5302810
                     ("SettingsPopup.",pSVar1,".",item,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$TitanIndexOptions
// il2cpp: System_String_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanIndexOptions (System_String_o* prefix, int32_t count, const MethodInfo* method);
// 0x5e50090
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e501ea: jmp 0x5e502a6

System_String_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanIndexOptions
          (System_String_o *prefix,int32_t count,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  MethodInfo *pMVar3;
  System_Collections_Generic_List_string__o *__this;
  System_String_o *pSVar4;
  System_String_array *pSVar5;
  int32_t local_2c;
  
  if (Il2CppMethodInitialized_0754863e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Any");
    Il2CppMethodInitialized_0754863e = '\x01';
  }
  local_2c = 0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pSVar4 = "Any";
  if (Il2CppMethodInitialized_0754863c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_0754863c = '\x01';
  }
  if (Il2CppMethodInitialized_0754862e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Common.");
    Il2CppMethodInitialized_0754862e = '\x01';
  }
  pSVar4 = System_String__Concat_52f0320("Common.",pSVar4,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar4 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar4,(MethodInfo *)0x0);
  pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (__this->fields)._items;
    if (pSVar5 != (System_String_array *)0x0) {
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar5->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pSVar5->m_Items[(int)uVar2] = pSVar4;
        Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar4,
                   (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
      }
      local_2c = 0;
      if (0 < count) {
        local_2c = 0;
        do {
          pSVar4 = System_Int32__ToString(&local_2c,(MethodInfo *)0x0);
          pSVar4 = System_String__Concat_52f0320(prefix,pSVar4,(MethodInfo *)0x0);
          pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this->fields)._items;
          if (pSVar5 == (System_String_array *)0x0) goto label_05e502c5;
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = pSVar4;
            Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar4,
                       (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
          }
          local_2c = local_2c + 1;
        } while (local_2c < count);
      }
      pSVar5 = (System_String_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this,
                          (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return pSVar5;
    }
  }
label_05e502c5:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$TitanHairOptions
// il2cpp: System_String_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanHairOptions (const MethodInfo* method);
// 0x5e502d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e50431: jmp 0x5e50460

System_String_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__TitanHairOptions(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  uint32_t uVar3;
  MethodInfo *pMVar4;
  System_Collections_Generic_List_string__o *__this;
  System_String_o *pSVar5;
  System_String_array *pSVar6;
  
  if (Il2CppMethodInitialized_0754863f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_AddRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Any");
    Il2CppMethodInitialized_0754863f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pSVar5 = "Any";
  if (Il2CppMethodInitialized_0754863c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_0754863c = '\x01';
  }
  if (Il2CppMethodInitialized_0754862e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Common.");
    Il2CppMethodInitialized_0754862e = '\x01';
  }
  pSVar5 = System_String__Concat_52f0320("Common.",pSVar5,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar5 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar5,(MethodInfo *)0x0);
  pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar6 = (__this->fields)._items;
    if (pSVar6 != (System_String_array *)0x0) {
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar6->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pSVar6->m_Items[(int)uVar2] = pSVar5;
        Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
        uVar3 = (TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar5,
                   (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        uVar3 = (TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor;
      }
      if (uVar3 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
      }
      System_Collections_Generic_List_object___AddRange
                ((System_Collections_Generic_List_object__o *)__this,
                 (System_Collections_Generic_IEnumerable_T__o *)
                 TypeInfo_Characters_BasicTitanSetup->static_fields->AllHairs,
                 (MethodInfo_395D490 *)MethodInfo_System_Collections_Generic_List_string_AddRange);
      pSVar6 = (System_String_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this,
                          (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return pSVar6;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$AddTitanSlot
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__AddTitanSlot (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Settings_TitanCustomSkinSet_o* set, const MethodInfo* method);
// 0x5e50540

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__AddTitanSlot
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,Settings_TitanCustomSkinSet_o *set,
               MethodInfo *method)

{
  Settings_ListSetting_TitanCustomSkinSlot__o *__this;
  int32_t iVar1;
  Settings_TitanCustomSkinSlot_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548640 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_AddItem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSkinSlot);
    Il2CppMethodInitialized_07548640 = '\x01';
  }
  if ((set != (Settings_TitanCustomSkinSet_o *)0x0) &&
     (__this = (set->fields).Slots, __this != (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0)) {
    iVar1 = Settings_ListSetting_object___GetCount
                      ((Settings_ListSetting_T__o *)__this,
                       (MethodInfo_515DE80 *)MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
    if (0x13 < iVar1) {
      return;
    }
    method_00 = (MethodInfo *)(set->fields).Slots;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_TitanCustomSkinSlot);
    Settings_TitanCustomSkinSlot___ctor(__this_00,(MethodInfo *)0x0);
    if (method_00 != (MethodInfo *)0x0) {
      Settings_ListSetting_object___AddItem
                ((Settings_ListSetting_T__o *)method_00,(Settings_BaseSetting_o *)__this_00,
                 (MethodInfo_515E0E0 *)MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_AddItem);
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__MarkSetsChanged(method_00);
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__RefreshSkins(context,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$RemoveTitanSlot
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__RemoveTitanSlot (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Settings_TitanCustomSkinSet_o* set, Settings_TitanCustomSkinSlot_o* slot, const MethodInfo* method);
// 0x5e50920

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__RemoveTitanSlot
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,Settings_TitanCustomSkinSet_o *set,
               Settings_TitanCustomSkinSlot_o *slot,MethodInfo *method)

{
  Settings_ListSetting_TitanCustomSkinSlot__o *pSVar1;
  int32_t iVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548641 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanCustomSkinSlot_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_TypedSetting_List_TitanCustomSkinSlot_get_Value);
    Il2CppMethodInitialized_07548641 = '\x01';
  }
  if ((set != (Settings_TitanCustomSkinSet_o *)0x0) &&
     (pSVar1 = (set->fields).Slots, pSVar1 != (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0)) {
    iVar2 = Settings_ListSetting_object___GetCount
                      ((Settings_ListSetting_T__o *)pSVar1,
                       (MethodInfo_515DE80 *)MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
    if (iVar2 < 2) {
      return;
    }
    pSVar1 = (set->fields).Slots;
    if ((pSVar1 != (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0) &&
       (method_00 = (MethodInfo *)(pSVar1->fields)._value, method_00 != (MethodInfo *)0x0)) {
      System_Collections_Generic_List_object___Remove
                ((System_Collections_Generic_List_object__o *)method_00,(Il2CppObject *)slot,
                 (MethodInfo_395ED70 *)MethodInfo_System_Collections_Generic_List_TitanCustomSkinSlot_Remove);
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__MarkSetsChanged(method_00);
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__RefreshSkins(context,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$SkinGroup
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SkinGroup (System_String_o* id, Settings_ICustomSkinSettings_o* settings, const MethodInfo* method);
// 0x5e4cf90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e4d47c: nop dword ptr [rax]

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SkinGroup
          (System_String_o *id,Settings_ICustomSkinSettings_o *settings,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Settings_ICustomSkinSettings_c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_List_object__o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar6;
  VirtualInvokeData *pVVar7;
  Settings_IntSetting_o *setting;
  System_String_array *names;
  System_Action_GisketchActionContext__o *__this_01;
  Il2CppObject *pIVar8;
  Settings_BoolSetting_o *pSVar9;
  Settings_BaseSettingsContainer_o *container;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *blocks;
  System_Object_array *pSVar10;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *pGVar11;
  MethodInfo *pMVar12;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this_02;
  ulong uVar13;
  long lVar14;
  MethodInfo *in_R9;
  MethodInfo *in_stack_ffffffffffffffa8;
  
  pMVar12 = (MethodInfo *)settings;
  if (Il2CppMethodInitialized_07548642 == '\0') {
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
    Il2CppMethodInitialized_07548642 = '\x01';
  }
  pSVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__Pascal(id,pMVar12);
  __this = (System_Collections_Generic_List_object__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgComponent);
  System_Collections_Generic_List_object____ctor
            (__this,(MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_AottgComponent_ctor);
  __this_00 = (System_Collections_Generic_List_object__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgComponent);
  System_Collections_Generic_List_object____ctor
            (__this_00,(MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_AottgComponent_ctor);
  if (settings != (Settings_ICustomSkinSettings_o *)0x0) {
    pSVar6 = System_String__Concat_5301f10("settings-skins-",id,"-set",(MethodInfo *)0x0);
    pSVar3 = settings->klass;
    uVar13 = (ulong)(pSVar3->_2).interface_offsets_count;
    if (uVar13 != 0) {
      pIVar4 = (pSVar3->_1).interfaceOffsets;
      lVar14 = 0;
      do {
        if (*(Settings_ISetSettingsContainer_c **)((long)&pIVar4->interfaceType + lVar14) ==
            TypeInfo_Settings_ISetSettingsContainer) {
          pVVar7 = pSVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar14) + 1);
          goto label_05e4d188;
        }
        lVar14 = lVar14 + 0x10;
      } while (uVar13 * 0x10 != lVar14);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)settings,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,1);
label_05e4d188:
    setting = (Settings_IntSetting_o *)(*pVVar7->methodPtr)((Il2CppObject *)settings,pVVar7->method);
    pSVar3 = settings->klass;
    uVar13 = (ulong)(pSVar3->_2).interface_offsets_count;
    if (uVar13 != 0) {
      pIVar4 = (pSVar3->_1).interfaceOffsets;
      lVar14 = 0;
      do {
        if (*(Settings_ISetSettingsContainer_c **)((long)&pIVar4->interfaceType + lVar14) ==
            TypeInfo_Settings_ISetSettingsContainer) {
          pVVar7 = pSVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar14) + 3);
          goto label_05e4d1f9;
        }
        lVar14 = lVar14 + 0x10;
      } while (uVar13 * 0x10 != lVar14);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)settings,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,3);
label_05e4d1f9:
    names = (System_String_array *)(*pVVar7->methodPtr)((Il2CppObject *)settings,pVVar7->method);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_01,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_RefreshSkins,
               (MethodInfo_4A803E0 *)0x0);
    pIVar8 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SetDropdown
                       (pSVar6,"Skins.Common",setting,names,__this_01,in_R9);
    pMVar12 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
    if (__this == (System_Collections_Generic_List_object__o *)0x0) goto label_05e4d6ba;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar10 = (__this->fields)._items;
    if (pSVar10 == (System_Object_array *)0x0) goto label_05e4d6ba;
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)pSVar10->max_length) {
      (__this->fields)._size = uVar2 + 1;
      pSVar10->m_Items[(int)uVar2] = pIVar8;
      Il2CppCodeGenWriteBarrier(pSVar10->m_Items + (int)uVar2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this,pIVar8,(MethodInfo_395D230 *)pMVar12->klass->rgctx_data[0xe].method);
    }
    pMVar12 = (MethodInfo *)0x0;
    pSVar6 = System_String__Concat_5301f10("settings-skins-",id,"-actions",(MethodInfo *)0x0);
    pIVar8 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SetActions
                       (pSVar6,(Settings_ISetSettingsContainer_o *)settings,(System_Action_o *)0x0,pMVar12);
    pMVar12 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar10 = (__this->fields)._items;
    if (pSVar10 == (System_Object_array *)0x0) goto label_05e4d6ba;
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)pSVar10->max_length) {
      (__this->fields)._size = uVar2 + 1;
      pSVar10->m_Items[(int)uVar2] = pIVar8;
      Il2CppCodeGenWriteBarrier(pSVar10->m_Items + (int)uVar2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this,pIVar8,(MethodInfo_395D230 *)pMVar12->klass->rgctx_data[0xe].method);
    }
    pSVar6 = System_String__Concat_5301f10("settings-skins-",id,"-enabled",(MethodInfo *)0x0);
    pSVar3 = settings->klass;
    uVar13 = (ulong)(pSVar3->_2).interface_offsets_count;
    if (uVar13 != 0) {
      pIVar4 = (pSVar3->_1).interfaceOffsets;
      lVar14 = 0;
      do {
        if (*(Settings_ICustomSkinSettings_c **)((long)&pIVar4->interfaceType + lVar14) ==
            TypeInfo_Settings_ICustomSkinSettings) {
          pVVar7 = pSVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar14) + 1);
          goto label_05e4d3b8;
        }
        lVar14 = lVar14 + 0x10;
      } while (uVar13 * 0x10 != lVar14);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)settings,(Il2CppClass *)TypeInfo_Settings_ICustomSkinSettings,1);
label_05e4d3b8:
    pSVar9 = (Settings_BoolSetting_o *)(*pVVar7->methodPtr)((Il2CppObject *)settings,pVVar7->method);
    pIVar8 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CommonSkinSwitch
                       (pSVar6,pSVar5,"SkinsEnabled",pSVar9,(System_String_o *)0x0,in_R9);
    pMVar12 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar10 = (__this->fields)._items;
    if (pSVar10 == (System_Object_array *)0x0) goto label_05e4d6ba;
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)pSVar10->max_length) {
      (__this->fields)._size = uVar2 + 1;
      pSVar10->m_Items[(int)uVar2] = pIVar8;
      Il2CppCodeGenWriteBarrier(pSVar10->m_Items + (int)uVar2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this,pIVar8,(MethodInfo_395D230 *)pMVar12->klass->rgctx_data[0xe].method);
    }
    pSVar6 = System_String__Concat_5301f10("settings-skins-",id,"-local",(MethodInfo *)0x0);
    pSVar3 = settings->klass;
    uVar13 = (ulong)(pSVar3->_2).interface_offsets_count;
    if (uVar13 != 0) {
      pIVar4 = (pSVar3->_1).interfaceOffsets;
      lVar14 = 0;
      do {
        if (*(Settings_ICustomSkinSettings_c **)((long)&pIVar4->interfaceType + lVar14) ==
            TypeInfo_Settings_ICustomSkinSettings) {
          pVVar7 = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar14);
          goto label_05e4d4b1;
        }
        lVar14 = lVar14 + 0x10;
      } while (uVar13 * 0x10 != lVar14);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)settings,(Il2CppClass *)TypeInfo_Settings_ICustomSkinSettings,0);
label_05e4d4b1:
    pSVar9 = (Settings_BoolSetting_o *)(*pVVar7->methodPtr)((Il2CppObject *)settings,pVVar7->method);
    pIVar8 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CommonSkinSwitch
                       (pSVar6,pSVar5,"SkinsLocal",pSVar9,"SkinsLocalTooltip",in_R9);
    pMVar12 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar10 = (__this->fields)._items;
    if (pSVar10 == (System_Object_array *)0x0) goto label_05e4d6ba;
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)pSVar10->max_length) {
      (__this->fields)._size = uVar2 + 1;
      pSVar10->m_Items[(int)uVar2] = pIVar8;
      Il2CppCodeGenWriteBarrier(pSVar10->m_Items + (int)uVar2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this,pIVar8,(MethodInfo_395D230 *)pMVar12->klass->rgctx_data[0xe].method);
    }
    pSVar5 = System_String__Concat_52f0320("Skins.",pSVar5,(MethodInfo *)0x0);
    pSVar3 = settings->klass;
    uVar13 = (ulong)(pSVar3->_2).interface_offsets_count;
    if (uVar13 != 0) {
      pIVar4 = (pSVar3->_1).interfaceOffsets;
      lVar14 = 0;
      do {
        if (*(Settings_ISetSettingsContainer_c **)((long)&pIVar4->interfaceType + lVar14) ==
            TypeInfo_Settings_ISetSettingsContainer) {
          pVVar7 = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar14);
          goto label_05e4d5b1;
        }
        lVar14 = lVar14 + 0x10;
      } while (uVar13 * 0x10 != lVar14);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)settings,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,0);
label_05e4d5b1:
    container = (Settings_BaseSettingsContainer_o *)
                (*pVVar7->methodPtr)((Il2CppObject *)settings,pVVar7->method);
    in_R9 = (MethodInfo *)0x0;
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__AddSkinInputRows
              ((System_Collections_Generic_List_AottgComponent__o *)__this,
               (System_Collections_Generic_List_AottgComponent__o *)__this_00,id,pSVar5,container,false,
               in_stack_ffffffffffffffa8);
  }
  pSVar5 = System_String__Concat_52f0320("settings-skins-",id,(MethodInfo *)0x0);
  blocks = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array,2);
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    pMVar12 = MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray;
    pSVar10 = System_Collections_Generic_List_object___ToArray
                        (__this,(MethodInfo_395F5A0 *)
                                MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray);
    pGVar11 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__TwoColumn
                        ((Gisketch_Aottg2UI_Code_AottgComponent_array *)pSVar10,pMVar12);
    if (blocks != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0) {
      if ((int)blocks->max_length != 0) {
        blocks->m_Items[0] = pGVar11;
        Il2CppCodeGenWriteBarrier(blocks->m_Items);
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_05e4d6ba;
        pMVar12 = MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray;
        pSVar10 = System_Collections_Generic_List_object___ToArray
                            (__this_00,
                             (MethodInfo_395F5A0 *)
                             MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray);
        pMVar12 = (MethodInfo *)
                  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__TwoColumn
                            ((Gisketch_Aottg2UI_Code_AottgComponent_array *)pSVar10,pMVar12);
        if ((blocks->max_length & 0xfffffffe) != 0) {
          blocks->m_Items[1] = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)pMVar12;
          Il2CppCodeGenWriteBarrier(blocks->m_Items + 1);
          __this_02 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
          pSVar6 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__GroupTitleKey(pSVar5,pMVar12);
          Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_5d40ea0
                    (__this_02,pSVar5,(System_String_o *)0x0,pSVar6,blocks,in_R9);
          return __this_02;
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_05e4d6ba:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$HumanGlobalSetDropdown
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__HumanGlobalSetDropdown (Settings_HumanCustomSkinSettings_o* settings, const MethodInfo* method);
// 0x5e4db20

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__HumanGlobalSetDropdown
          (Settings_HumanCustomSkinSettings_o *settings,MethodInfo *method)

{
  System_Collections_Generic_List_int__o **targetAddress;
  int32_t *piVar1;
  Settings_HumanCustomSkinSettings_o *pSVar2;
  System_String_array *pSVar3;
  System_Int32_array *pSVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  uint uVar7;
  int32_t iVar8;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass18_0_o *__this;
  System_String_array *pSVar9;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_int__o *pSVar10;
  Settings_IntSetting_o *pSVar11;
  System_String_o *pSVar12;
  System_Action_GisketchActionContext__o *__this_01;
  Gisketch_Aottg2UI_Code_AottgComponent_o *pGVar13;
  uint item;
  long lVar14;
  int32_t value;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_07548643 == '\0') {
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
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass18_0_HumanGlobalSetDr
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass18_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom Set:");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-human-set");
    il2cpp_codegen_initialize_runtime_metadata(&"Skins.Common");
    Il2CppMethodInitialized_07548643 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass18_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass18_0_o *)0x0) {
    (__this->fields).settings = settings;
    Il2CppCodeGenWriteBarrier(&(__this->fields).settings);
    pSVar2 = (__this->fields).settings;
    if (pSVar2 != (Settings_HumanCustomSkinSettings_o *)0x0) {
      pSVar9 = Settings_SetSettingsContainer_object___GetSetNames
                         ((Settings_SetSettingsContainer_T__o *)pSVar2,
                          (MethodInfo_40482D0 *)
                          MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSetNames);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)__this_00,
                 (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
      pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
      System_Collections_Generic_List_int____ctor
                (pSVar10,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
      targetAddress = &(__this->fields).originalIndices;
      (__this->fields).originalIndices = pSVar10;
      Il2CppCodeGenWriteBarrier(targetAddress);
      if (pSVar9 != (System_String_array *)0x0) {
        uVar7 = (uint)pSVar9->max_length;
        if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
          if (0 < (int)uVar7) {
            lVar14 = 0;
            do {
              if (uVar7 <= (uint)lVar14) goto label_05e4e05f;
              if (pSVar9->m_Items[lVar14] == (System_String_o *)0x0) goto label_05e4e05a;
              bVar6 = System_String__StartsWith_53002b0
                                (pSVar9->m_Items[lVar14],"Custom Set:",4,(MethodInfo *)0x0);
              if (!bVar6) {
                if ((uint)lVar14 < (uint)pSVar9->max_length) goto label_05e4e05a;
                goto label_05e4e05f;
              }
              uVar7 = (uint)pSVar9->max_length;
              lVar14 = lVar14 + 1;
            } while ((int)lVar14 < (int)uVar7);
          }
        }
        else if (0 < (int)uVar7) {
          item = 0;
          do {
            if (uVar7 <= item) goto label_05e4e05f;
            if (pSVar9->m_Items[(int)item] == (System_String_o *)0x0) goto label_05e4e05a;
            bVar6 = System_String__StartsWith_53002b0
                              (pSVar9->m_Items[(int)item],"Custom Set:",4,(MethodInfo *)0x0);
            pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
            if (!bVar6) {
              if ((uint)pSVar9->max_length <= item) goto label_05e4e05f;
              pSVar12 = pSVar9->m_Items[(int)item];
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar3 = (__this_00->fields)._items;
              if (pSVar3 == (System_String_array *)0x0) goto label_05e4e05a;
              uVar7 = (__this_00->fields)._size;
              if (uVar7 < (uint)pSVar3->max_length) {
                (__this_00->fields)._size = uVar7 + 1;
                pSVar3->m_Items[(int)uVar7] = pSVar12;
                Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar7);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar12,
                           (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
              }
              pMVar5 = MethodInfo_System_Collections_Generic_List_int_Add;
              pSVar10 = *targetAddress;
              if (pSVar10 == (System_Collections_Generic_List_int__o *)0x0) goto label_05e4e05a;
              piVar1 = &(pSVar10->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar4 = (pSVar10->fields)._items;
              if (pSVar4 == (System_Int32_array *)0x0) goto label_05e4e05a;
              uVar7 = (pSVar10->fields)._size;
              if (uVar7 < (uint)pSVar4->max_length) {
                (pSVar10->fields)._size = uVar7 + 1;
                pSVar4->m_Items[(int)uVar7] = item;
              }
              else {
                System_Collections_Generic_List_int___AddWithResize
                          (pSVar10,item,(MethodInfo_3916AC0 *)pMVar5->klass->rgctx_data[0xe].method);
              }
            }
            item = item + 1;
            uVar7 = (uint)pSVar9->max_length;
          } while ((int)item < (int)uVar7);
        }
        pSVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
        Settings_IntSetting___ctor_5a412e0(pSVar11,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
        (__this->fields).filteredIndex = pSVar11;
        Il2CppCodeGenWriteBarrier(&(__this->fields).filteredIndex);
        pSVar2 = (__this->fields).settings;
        if (((pSVar2 != (Settings_HumanCustomSkinSettings_o *)0x0) &&
            (pSVar11 = (pSVar2->fields).LastGlobalPresetIndex, pSVar11 != (Settings_IntSetting_o *)0x0)) &&
           (pSVar10 = (__this->fields).originalIndices,
           pSVar10 != (System_Collections_Generic_List_int__o *)0x0)) {
          iVar8 = System_Collections_Generic_List_int___IndexOf
                            (pSVar10,(pSVar11->fields)._value,
                             (MethodInfo_3917A80 *)MethodInfo_System_Collections_Generic_List_int_IndexOf);
          pSVar11 = (__this->fields).filteredIndex;
          if (pSVar11 != (Settings_IntSetting_o *)0x0) {
            value = 0;
            if (0 < iVar8) {
              value = iVar8;
            }
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)pSVar11,value,
                       (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
              if ((__this_00->fields)._size < 1) {
                pSVar9 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
                pSVar12 = "None";
                if (Il2CppMethodInitialized_0754863c == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
                  Il2CppMethodInitialized_0754863c = '\x01';
                }
                if (Il2CppMethodInitialized_0754862e == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&"Common.");
                  Il2CppMethodInitialized_0754862e = '\x01';
                }
                pSVar12 = System_String__Concat_52f0320("Common.",pSVar12,(MethodInfo *)0x0);
                if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).
                    cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
                }
                pSVar12 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar12,(MethodInfo *)0x0)
                ;
                if (pSVar9 == (System_String_array *)0x0) goto label_05e4e05a;
                if ((int)pSVar9->max_length == 0) {
label_05e4e05f:
                  ThrowIndexOutOfRangeException();
                }
                pSVar9->m_Items[0] = pSVar12;
                Il2CppCodeGenWriteBarrier(pSVar9->m_Items);
              }
              else {
                pSVar9 = (System_String_array *)
                         System_Collections_Generic_List_object___ToArray
                                   ((System_Collections_Generic_List_object__o *)__this_00,
                                    (MethodInfo_395F5A0 *)
                                    MethodInfo_System_Collections_Generic_List_string_ToArray);
              }
              pSVar11 = (__this->fields).filteredIndex;
              __this_01 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
              System_Action_GisketchActionContext____ctor
                        (__this_01,(Il2CppObject *)__this,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass18_0_HumanGlobalSetDr
                         ,(MethodInfo_4A803E0 *)0x0);
              pGVar13 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SetDropdown
                                  ("settings-skins-human-set","Skins.Common",pSVar11,pSVar9,__this_01,in_R9)
              ;
              return pGVar13;
            }
          }
        }
      }
    }
  }
label_05e4e05a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$CharacterDropdown
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CharacterDropdown (Settings_HumanCustomSkinSettings_o* settings, const MethodInfo* method);
// 0x5e4d6e0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e4d86a: jmp 0x5e4dad3
// asm:   0x5e4d8e8: test eax, eax
// asm:   0x5e4d8ea: jg 0x5e4d9a1
// asm:   0x5e4d8f0: jmp 0x5e4da4d

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CharacterDropdown
          (Settings_HumanCustomSkinSettings_o *settings,MethodInfo *method)

{
  byte bVar1;
  int32_t val1;
  int iVar2;
  Settings_HumanCustomSettings_o *pSVar3;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar4;
  Settings_ListSetting_T__o *obj;
  Il2CppClass *pIVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  Settings_IntSetting_o *setting;
  uint32_t length;
  VirtualInvokeData *pVVar7;
  System_Collections_Generic_List_BaseSetting__o *__this;
  System_String_array *names;
  System_String_o *pSVar8;
  Settings_BaseSetting_o *pSVar9;
  System_Action_GisketchActionContext__o *__this_00;
  Gisketch_Aottg2UI_Code_AottgComponent_o *pGVar10;
  ulong uVar11;
  long lVar12;
  MethodInfo *in_R9;
  System_String_o **targetAddress;
  
  if (Il2CppMethodInitialized_07548644 == '\0') {
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
    Il2CppMethodInitialized_07548644 = '\x01';
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if (pSVar3 == (Settings_HumanCustomSettings_o *)0x0) {
label_05e4d841:
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BaseSetting);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_BaseSetting_ctor);
  }
  else {
    pSVar4 = (pSVar3->fields).CustomSets;
    if (pSVar4 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) goto label_05e4dad3;
    obj = (pSVar4->fields).Sets;
    if (obj == (Settings_ListSetting_T__o *)0x0) goto label_05e4d841;
    pIVar5 = (Il2CppClass *)obj->klass;
    uVar11 = (ulong)(pIVar5->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar6 = (pIVar5->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(Settings_IListSetting_c **)((long)&pIVar6->interfaceType + lVar12) ==
            TypeInfo_Settings_IListSetting) {
          pVVar7 = pIVar5->vtable + (*(int *)((long)&pIVar6->offset + lVar12) + 2);
          goto label_05e4d887;
        }
        lVar12 = lVar12 + 0x10;
      } while (uVar11 * 0x10 != lVar12);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_Settings_IListSetting,2);
label_05e4d887:
    __this = (System_Collections_Generic_List_BaseSetting__o *)
             (*pVVar7->methodPtr)((Il2CppObject *)obj,pVVar7->method);
  }
  if (__this != (System_Collections_Generic_List_BaseSetting__o *)0x0) {
    val1 = (__this->fields)._size;
    if ((((Il2CppClass *)TypeInfo_System_Math)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    length = System_Math__Max_54bad40(val1,1,(MethodInfo *)0x0);
    names = (System_String_array *)SZArrayNew(TypeInfo_string_array,length);
    pSVar8 = "None";
    iVar2 = (__this->fields)._size;
    if (iVar2 == 0) {
      if (Il2CppMethodInitialized_0754863c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        Il2CppMethodInitialized_0754863c = '\x01';
      }
      if (Il2CppMethodInitialized_0754862e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"Common.");
        Il2CppMethodInitialized_0754862e = '\x01';
      }
      pSVar8 = System_String__Concat_52f0320("Common.",pSVar8,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      pSVar8 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar8,(MethodInfo *)0x0);
      if (names == (System_String_array *)0x0) goto label_05e4dad3;
      if ((int)names->max_length == 0) {
label_05e4dab5:
        ThrowIndexOutOfRangeException();
      }
      names->m_Items[0] = pSVar8;
      Il2CppCodeGenWriteBarrier(names->m_Items);
      iVar2 = (__this->fields)._size;
    }
    if (0 < iVar2) {
      if (names == (System_String_array *)0x0) {
        pSVar9 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)__this,0,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_BaseSetting_get_Item);
        if (pSVar9 != (Settings_BaseSetting_o *)0x0) {
          bVar1 = (TypeInfo_Settings_BaseSetSetting->_2).typeHierarchyDepth;
          if ((bVar1 <= (pSVar9->klass->_2).typeHierarchyDepth) &&
             ((pSVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_Settings_BaseSetSetting)) {
            ThrowNullReferenceException();
          }
label_05e4db0c:
          il2cpp_codegen_raise_invalid_cast_exception(pSVar9);
        }
        goto label_05e4dad3;
      }
      targetAddress = names->m_Items;
      uVar11 = 0;
      do {
        pSVar9 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)__this,(int32_t)uVar11,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_BaseSetting_get_Item);
        if (pSVar9 == (Settings_BaseSetting_o *)0x0) goto label_05e4dad3;
        bVar1 = (TypeInfo_Settings_BaseSetSetting->_2).typeHierarchyDepth;
        if (((pSVar9->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pSVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_BaseSetSetting)) goto label_05e4db0c;
        if ((*(uint64_t *)((char *)pSVar9 + 0x30)) == (Settings_BaseSetting_c *)0x0) goto label_05e4dad3;
        if ((uint)names->max_length <= uVar11) goto label_05e4dab5;
        *targetAddress = (((*(Il2CppClass **)((char *)pSVar9 + 0x30)))->_1).byval_arg.data;
        Il2CppCodeGenWriteBarrier(targetAddress);
        uVar11 = uVar11 + 1;
        targetAddress = targetAddress + 1;
      } while ((long)uVar11 < (long)(__this->fields)._size);
    }
    if (settings != (Settings_HumanCustomSkinSettings_o *)0x0) {
      setting = (settings->fields).SelectedCharacterIndex;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (__this_00,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_RefreshSkins
                 ,(MethodInfo_4A803E0 *)0x0);
      pGVar10 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SetDropdown
                          ("settings-skins-human-character","Skins.Human",setting,names,__this_00,in_R9);
      return pGVar10;
    }
  }
label_05e4dad3:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$HumanSkinContainer
// il2cpp: Settings_BaseSettingsContainer_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__HumanSkinContainer (Settings_HumanCustomSkinSettings_o* settings, const MethodInfo* method);
// 0x5e4e7a0

Settings_BaseSettingsContainer_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__HumanSkinContainer
          (Settings_HumanCustomSkinSettings_o *settings,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_BaseSettingsContainer_o *pSVar2;
  Settings_BaseSetSetting_o *pSVar3;
  
  if (Il2CppMethodInitialized_07548645 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07548645 = '\x01';
  }
  if (settings == (Settings_HumanCustomSkinSettings_o *)0x0) {
    return (Settings_BaseSettingsContainer_o *)0x0;
  }
  pSVar1 = (settings->fields).SkinMode;
  if (pSVar1 == (Settings_IntSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pSVar1->fields)._value != 0) {
    pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__HumanCharacterSkinContainer
                       (settings,method);
    if (pSVar2 != (Settings_BaseSettingsContainer_o *)0x0) {
      return pSVar2;
    }
  }
  pSVar3 = Settings_SetSettingsContainer_object___GetSelectedSet
                     ((Settings_SetSettingsContainer_T__o *)settings,
                      (MethodInfo_40477A0 *)
                      MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSelectedSet);
  return (Settings_BaseSettingsContainer_o *)pSVar3;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$HumanCharacterSkinContainer
// il2cpp: Settings_BaseSettingsContainer_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__HumanCharacterSkinContainer (Settings_HumanCustomSkinSettings_o* settings, const MethodInfo* method);
// 0x5e509e0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e50b1d: nop dword ptr [rax]
// asm:   0x5e50b6f: nop 
// asm:   0x5e50c2a: jmp 0x5e50c71
// asm:   0x5e50c8e: jmp 0x5e50c71

Settings_BaseSettingsContainer_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__HumanCharacterSkinContainer
          (Settings_HumanCustomSkinSettings_o *settings,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_HumanCustomSettings_o *pSVar3;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar4;
  Settings_ListSetting_T__o *obj;
  Settings_IntSetting_o *pSVar5;
  Il2CppClass *pIVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  int32_t iVar8;
  VirtualInvokeData *pVVar9;
  Settings_BaseSettingsContainer_o *pSVar10;
  ulong uVar11;
  long lVar12;
  
  if (Il2CppMethodInitialized_07548646 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSettingsContainer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IListSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSets);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07548646 = '\x01';
  }
  if (settings == (Settings_HumanCustomSkinSettings_o *)0x0) {
    return (Settings_BaseSettingsContainer_o *)0x0;
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if (pSVar3 == (Settings_HumanCustomSettings_o *)0x0) {
    return (Settings_BaseSettingsContainer_o *)0x0;
  }
  pSVar4 = (pSVar3->fields).CustomSets;
  if (pSVar4 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) {
label_05e50c90:
    ThrowNullReferenceException();
  }
  obj = (pSVar4->fields).Sets;
  if (obj == (Settings_ListSetting_T__o *)0x0) {
    return (Settings_BaseSettingsContainer_o *)0x0;
  }
  pSVar5 = (settings->fields).SelectedCharacterIndex;
  if (pSVar5 == (Settings_IntSetting_o *)0x0) goto label_05e50c90;
  iVar2 = (pSVar5->fields)._value;
  if (-1 < iVar2) {
    pIVar6 = (Il2CppClass *)obj->klass;
    uVar11 = (ulong)(pIVar6->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar7 = (pIVar6->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(Settings_IListSetting_c **)((long)&pIVar7->interfaceType + lVar12) ==
            TypeInfo_Settings_IListSetting) {
          pVVar9 = pIVar6->vtable + *(int *)((long)&pIVar7->offset + lVar12);
          goto label_05e50af1;
        }
        lVar12 = lVar12 + 0x10;
      } while (uVar11 * 0x10 != lVar12);
    }
    pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_Settings_IListSetting,0);
label_05e50af1:
    iVar8 = (*pVVar9->methodPtr)((Il2CppObject *)obj,pVVar9->method);
    if (iVar2 < iVar8) {
      pIVar6 = (Il2CppClass *)obj->klass;
      uVar11 = (ulong)(pIVar6->_2).interface_offsets_count;
      if (uVar11 != 0) {
        pIVar7 = (pIVar6->_1).interfaceOffsets;
        lVar12 = 0;
        do {
          if (*(Settings_IListSetting_c **)((long)&pIVar7->interfaceType + lVar12) ==
              TypeInfo_Settings_IListSetting) {
            pVVar9 = pIVar6->vtable + (*(int *)((long)&pIVar7->offset + lVar12) + 1);
            goto label_05e50c43;
          }
          lVar12 = lVar12 + 0x10;
        } while (uVar11 * 0x10 != lVar12);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                         ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_Settings_IListSetting,1);
label_05e50c43:
      pSVar10 = (Settings_BaseSettingsContainer_o *)
                (*pVVar9->methodPtr)((Il2CppObject *)obj,iVar2,pVVar9->method);
      if (pSVar10 == (Settings_BaseSettingsContainer_o *)0x0) {
        return (Settings_BaseSettingsContainer_o *)0x0;
      }
      goto label_05e50c53;
    }
  }
  pIVar6 = (Il2CppClass *)obj->klass;
  uVar11 = (ulong)(pIVar6->_2).interface_offsets_count;
  if (uVar11 != 0) {
    pIVar7 = (pIVar6->_1).interfaceOffsets;
    lVar12 = 0;
    do {
      if (*(Settings_IListSetting_c **)((long)&pIVar7->interfaceType + lVar12) ==
          TypeInfo_Settings_IListSetting) {
        pVVar9 = pIVar6->vtable + *(int *)((long)&pIVar7->offset + lVar12);
        goto label_05e50ba1;
      }
      lVar12 = lVar12 + 0x10;
    } while (uVar11 * 0x10 != lVar12);
  }
  pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_Settings_IListSetting,0);
label_05e50ba1:
  iVar8 = (*pVVar9->methodPtr)((Il2CppObject *)obj,pVVar9->method);
  if (iVar8 < 1) {
    return (Settings_BaseSettingsContainer_o *)0x0;
  }
  pIVar6 = (Il2CppClass *)obj->klass;
  uVar11 = (ulong)(pIVar6->_2).interface_offsets_count;
  if (uVar11 != 0) {
    pIVar7 = (pIVar6->_1).interfaceOffsets;
    lVar12 = 0;
    do {
      if (*(Settings_IListSetting_c **)((long)&pIVar7->interfaceType + lVar12) ==
          TypeInfo_Settings_IListSetting) {
        pVVar9 = pIVar6->vtable + (*(int *)((long)&pIVar7->offset + lVar12) + 1);
        goto label_05e50c18;
      }
      lVar12 = lVar12 + 0x10;
    } while (uVar11 * 0x10 != lVar12);
  }
  pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_Settings_IListSetting,1);
label_05e50c18:
  pSVar10 = (Settings_BaseSettingsContainer_o *)(*pVVar9->methodPtr)((Il2CppObject *)obj,0,pVVar9->method);
  if (pSVar10 == (Settings_BaseSettingsContainer_o *)0x0) {
    return (Settings_BaseSettingsContainer_o *)0x0;
  }
label_05e50c53:
  bVar1 = (TypeInfo_Settings_BaseSettingsContainer->_2).typeHierarchyDepth;
  if ((((Il2CppClass *)pSVar10->klass)->_2).typeHierarchyDepth < bVar1) {
    return (Settings_BaseSettingsContainer_o *)0x0;
  }
  if ((((Il2CppClass *)pSVar10->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
      (Il2CppClass *)TypeInfo_Settings_BaseSettingsContainer) {
    return pSVar10;
  }
  return (Settings_BaseSettingsContainer_o *)0x0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$SetDropdown
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SetDropdown (System_String_o* id, System_String_o* sub, Settings_IntSetting_o* setting, System_String_array* names, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x5e4f160

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SetDropdown
          (System_String_o *id,System_String_o *sub,Settings_IntSetting_o *setting,System_String_array *names,
          System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  System_String_o *item;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Code_AottgComponent_o *pGVar2;
  MethodInfo *in_stack_ffffffffffffffb0;
  
  if (Il2CppMethodInitialized_07548647 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Set");
    Il2CppMethodInitialized_07548647 = '\x01';
  }
  item = "Set";
  if ((names == (System_String_array *)0x0) || (names->max_length == 0)) {
    names = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
    pSVar1 = "None";
    if (Il2CppMethodInitialized_0754863c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      Il2CppMethodInitialized_0754863c = '\x01';
    }
    if (Il2CppMethodInitialized_0754862e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"Common.");
      Il2CppMethodInitialized_0754862e = '\x01';
    }
    pSVar1 = System_String__Concat_52f0320("Common.",pSVar1,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,(MethodInfo *)0x0);
    if (names == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((int)names->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    names->m_Items[0] = pSVar1;
    Il2CppCodeGenWriteBarrier(names->m_Items);
  }
  pGVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown_5d40a70
                     (id,sub,item,setting,names,(System_String_o *)0x0,changed,in_stack_ffffffffffffffb0);
  return pGVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$CommonSkinSwitch
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CommonSkinSwitch (System_String_o* id, System_String_o* prefix, System_String_o* item, Settings_BoolSetting_o* setting, System_String_o* tooltipItem, const MethodInfo* method);
// 0x5e4e5b0

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CommonSkinSwitch
          (System_String_o *id,System_String_o *prefix,System_String_o *item,Settings_BoolSetting_o *setting,
          System_String_o *tooltipItem,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str0;
  Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this_00;
  MethodInfo *in_stack_ffffffffffffffb0;
  
  if (Il2CppMethodInitialized_07548648 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"Groups.Skins");
    il2cpp_codegen_initialize_runtime_metadata(&"Skins.Common");
    Il2CppMethodInitialized_07548648 = '\x01';
  }
  pSVar1 = "Groups.Skins";
  if (Il2CppMethodInitialized_0754862d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_0754862d = '\x01';
  }
  pSVar1 = System_String__Concat_5302810
                     ("SettingsPopup.",pSVar1,".",prefix,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  str0 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,(MethodInfo *)0x0);
  pSVar1 = "Skins.Common";
  if (Il2CppMethodInitialized_0754862d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_0754862d = '\x01';
  }
  pSVar1 = System_String__Concat_5302810
                     ("SettingsPopup.",pSVar1,".",item,(MethodInfo *)0x0);
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_5301f10(str0," ",pSVar1,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter___ctor(__this,setting,(MethodInfo *)0x0);
  descriptor = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__LabeledDescriptor
                         (id,"Skins.Common",pSVar1,0,
                          (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this,tooltipItem,
                          (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb0);
  if (Il2CppMethodInitialized_07548623 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Il2CppMethodInitialized_07548623 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor(__this_00,descriptor,(MethodInfo *)0x0);
  return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$SetActions
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SetActions (System_String_o* id, Settings_ISetSettingsContainer_o* settings, System_Action_o* afterChange, const MethodInfo* method);
// 0x5e4e070
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e4e44f: nop 

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SetActions
          (System_String_o *id,Settings_ISetSettingsContainer_o *settings,System_Action_o *afterChange,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_String_o *pSVar4;
  bool bVar5;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass24_0_o *__this;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *buttons;
  System_Action_GisketchActionContext__o *pSVar7;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_o *pGVar8;
  VirtualInvokeData *pVVar9;
  Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_o *pGVar10;
  ulong uVar11;
  long lVar12;
  
  if (Il2CppMethodInitialized_07548649 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ISetSettingsContainer);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass24_0_SetActions_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass24_0_SetActions_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass24_0_SetActions_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass24_0_SetActions_b__3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass24_0);
    il2cpp_codegen_initialize_runtime_metadata(&"SetActions");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Rename");
    il2cpp_codegen_initialize_runtime_metadata(&"trashcan");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Create");
    il2cpp_codegen_initialize_runtime_metadata(&"pencil");
    il2cpp_codegen_initialize_runtime_metadata(&"copy");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Copy");
    il2cpp_codegen_initialize_runtime_metadata(&"Skins.Common");
    il2cpp_codegen_initialize_runtime_metadata(&"plus");
    Il2CppMethodInitialized_07548649 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass24_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass24_0_o *)0x0) {
    (__this->fields).settings = settings;
    Il2CppCodeGenWriteBarrier(&(__this->fields).settings);
    (__this->fields).afterChange = afterChange;
    Il2CppCodeGenWriteBarrier(&(__this->fields).afterChange);
    pSVar4 = "Skins.Common";
    pSVar6 = "SetActions";
    if (Il2CppMethodInitialized_0754862d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.");
      il2cpp_codegen_initialize_runtime_metadata(&".");
      Il2CppMethodInitialized_0754862d = '\x01';
    }
    pSVar6 = System_String__Concat_5302810
                       ("SettingsPopup.",pSVar4,".",pSVar6,(MethodInfo *)0x0);
    buttons = (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)
              SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array,4);
    pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (pSVar7,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass24_0_SetActions_b__0
               ,(MethodInfo_4A803E0 *)0x0);
    pGVar8 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton);
    Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton___ctor
              (pGVar8,"Common.Create",pSVar7,1,false,"plus",(MethodInfo *)0x0);
    if (buttons != (Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton_array *)0x0) {
      if ((int)buttons->max_length != 0) {
        buttons->m_Items[0] = pGVar8;
        Il2CppCodeGenWriteBarrier(buttons->m_Items);
        pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
        System_Action_GisketchActionContext____ctor
                  (pSVar7,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass24_0_SetActions_b__1
                   ,(MethodInfo_4A803E0 *)0x0);
        pSVar4 = "Common.Delete";
        pIVar1 = (Il2CppObject *)(__this->fields).settings;
        if (pIVar1 == (Il2CppObject *)0x0) {
          bVar5 = true;
        }
        else {
          pIVar2 = pIVar1->klass;
          uVar11 = (ulong)(pIVar2->_2).interface_offsets_count;
          if (uVar11 != 0) {
            pIVar3 = (pIVar2->_1).interfaceOffsets;
            lVar12 = 0;
            do {
              if (*(Settings_ISetSettingsContainer_c **)((long)&pIVar3->interfaceType + lVar12) ==
                  TypeInfo_Settings_ISetSettingsContainer) {
                pVVar9 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar12) + 7);
                goto label_05e4e37d;
              }
              lVar12 = lVar12 + 0x10;
            } while (uVar11 * 0x10 != lVar12);
          }
          pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                             (pIVar1,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,7);
label_05e4e37d:
          bVar5 = (*pVVar9->methodPtr)(pIVar1,pVVar9->method);
          bVar5 = !bVar5;
        }
        pGVar8 = il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton);
        Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton___ctor
                  (pGVar8,pSVar4,pSVar7,6,bVar5,"trashcan",(MethodInfo *)0x0);
        if ((buttons->max_length & 0xfffffffe) != 0) {
          buttons->m_Items[1] = pGVar8;
          Il2CppCodeGenWriteBarrier(buttons->m_Items + 1);
          pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
          System_Action_GisketchActionContext____ctor
                    (pSVar7,(Il2CppObject *)__this,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass24_0_SetActions_b__2
                     ,(MethodInfo_4A803E0 *)0x0);
          pSVar4 = "Common.Rename";
          pIVar1 = (Il2CppObject *)(__this->fields).settings;
          if (pIVar1 == (Il2CppObject *)0x0) {
            bVar5 = true;
          }
          else {
            pIVar2 = pIVar1->klass;
            uVar11 = (ulong)(pIVar2->_2).interface_offsets_count;
            if (uVar11 != 0) {
              pIVar3 = (pIVar2->_1).interfaceOffsets;
              lVar12 = 0;
              do {
                if (*(Settings_ISetSettingsContainer_c **)((long)&pIVar3->interfaceType + lVar12) ==
                    TypeInfo_Settings_ISetSettingsContainer) {
                  pVVar9 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar12) + 8);
                  goto label_05e4e48d;
                }
                lVar12 = lVar12 + 0x10;
              } while (uVar11 * 0x10 != lVar12);
            }
            pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                               (pIVar1,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,8);
label_05e4e48d:
            bVar5 = (*pVVar9->methodPtr)(pIVar1,pVVar9->method);
            bVar5 = !bVar5;
          }
          pGVar8 = il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton);
          Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton___ctor
                    (pGVar8,pSVar4,pSVar7,1,bVar5,"pencil",(MethodInfo *)0x0);
          if (2 < (uint)buttons->max_length) {
            buttons->m_Items[2] = pGVar8;
            Il2CppCodeGenWriteBarrier(buttons->m_Items + 2);
            pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
            System_Action_GisketchActionContext____ctor
                      (pSVar7,(Il2CppObject *)__this,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass24_0_SetActions_b__3
                       ,(MethodInfo_4A803E0 *)0x0);
            pGVar8 = il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton);
            Gisketch_Aottg2UI_SettingsScreen_AottgActionRow_ActionButton___ctor
                      (pGVar8,"Common.Copy",pSVar7,1,false,"copy",(MethodInfo *)0x0);
            if ((buttons->max_length & 0xfffffffc) != 0) {
              buttons->m_Items[3] = pGVar8;
              Il2CppCodeGenWriteBarrier(buttons->m_Items + 3);
              pGVar10 = Gisketch_Aottg2UI_SettingsScreen_AottgActionRow__Keyed
                                  (id,pSVar6,buttons,(MethodInfo *)0x0);
              return (Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar10;
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
// 0x5e4e810
// eh: try 0x5e4e9b1..0x5e4f0c8 -> pad 0x5e4f102 (+39 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5e4f128..0x5e4f12d -> pad 0x5e4f132 cleanup
// eh: try 0x5e4f135..0x5e4f13f -> pad 0x5e4f147 catch (...) [compiler noexcept guard]
// asm: 63 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e4e999: lea r12, [rip + 0x142aa58]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x5e4e9a0: jmp 0x5e4e9ce
// asm:   0x5e4e9bc: nop dword ptr [rax]
// asm:   0x5e4e9c0: mov rbx, qword ptr [rsp + 0x10]
// asm:   0x5e4e9c5: test rbx, rbx
// asm:   0x5e4e9c8: je 0x5e4f05a
// asm:   0x5e4e9ee: nop 
// asm:   0x5e4eb1d: jmp 0x5e4eb55
// asm:   0x5e4f00d: nop dword ptr [rax]
// asm:   0x5e4f0ae: mov rdi, r14
// asm:   0x5e4f0b1: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e4f0c8: jmp 0x5e4f110
// asm:   0x5e4f0ca: jmp 0x5e4f110
// asm:   0x5e4f0cc: jmp 0x5e4f110
// asm:   0x5e4f0ce: jmp 0x5e4f110
// asm:   0x5e4f0d0: jmp 0x5e4f110
// asm:   0x5e4f0d2: jmp 0x5e4f110
// asm:   0x5e4f0d4: jmp 0x5e4f110
// asm:   0x5e4f0d6: jmp 0x5e4f110
// asm:   0x5e4f0d8: jmp 0x5e4f110
// asm:   0x5e4f0da: jmp 0x5e4f110
// asm:   0x5e4f0dc: jmp 0x5e4f110
// asm:   0x5e4f0de: jmp 0x5e4f110
// asm:   0x5e4f0e0: jmp 0x5e4f110
// asm:   0x5e4f0e2: jmp 0x5e4f110
// asm:   0x5e4f0e4: jmp 0x5e4f110
// asm:   0x5e4f0e6: jmp 0x5e4f110
// asm:   0x5e4f0e8: jmp 0x5e4f110
// asm:   0x5e4f0ea: jmp 0x5e4f110
// asm:   0x5e4f0ec: jmp 0x5e4f110
// asm:   0x5e4f0ee: jmp 0x5e4f110
// asm:   0x5e4f0f0: jmp 0x5e4f110
// asm:   0x5e4f0f2: jmp 0x5e4f110
// asm:   0x5e4f0f4: jmp 0x5e4f110
// asm:   0x5e4f0f6: jmp 0x5e4f110
// asm:   0x5e4f0f8: jmp 0x5e4f110
// asm:   0x5e4f0fa: jmp 0x5e4f110
// asm:   0x5e4f0fc: jmp 0x5e4f110
// asm:   0x5e4f0fe: jmp 0x5e4f110
// asm:   0x5e4f100: jmp 0x5e4f110
// asm:   0x5e4f102: jmp 0x5e4f110
// asm:   0x5e4f104: jmp 0x5e4f110
// asm:   0x5e4f106: jmp 0x5e4f110
// asm:   0x5e4f108: jmp 0x5e4f110
// asm:   0x5e4f10a: jmp 0x5e4f110
// asm:   0x5e4f10c: jmp 0x5e4f110
// asm:   0x5e4f10e: jmp 0x5e4f110
// asm:   0x5e4f110: mov rbx, rax
// asm:   0x5e4f113: cmp edx, 1
// asm:   0x5e4f116: jne 0x5e4f135
// asm:   0x5e4f118: mov rdi, rbx
// asm:   0x5e4f11b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e4f120: mov r14, qword ptr [rax]
// asm:   0x5e4f123: mov qword ptr [rsp + 0x60], r14
// asm:   0x5e4f128: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e4f12d: jmp 0x5e4efcb
// asm:   0x5e4f132: mov rbx, rax
// asm:   0x5e4f135: lea rdi, [rsp + 0x60]
// asm:   0x5e4f13a: call 0x2fe1770  ; il2cpp_runtime_helper_02fe1770()
// asm:   0x5e4f13f: mov rdi, rbx
// asm:   0x5e4f142: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e4f147: mov rdi, rax
// asm:   0x5e4f14a: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__AddSkinInputRows
               (System_Collections_Generic_List_AottgComponent__o *rows,
               System_Collections_Generic_List_AottgComponent__o *skinRows,System_String_o *idPrefix,
               System_String_o *sub,Settings_BaseSettingsContainer_o *container,bool characterMode,
               MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  System_Collections_Specialized_OrderedDictionary_o *pSVar5;
  Il2CppClass *pIVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  Settings_StringSetting_c *pSVar8;
  System_Object_array *pSVar9;
  char cVar10;
  bool bVar11;
  Il2CppObject *pIVar12;
  VirtualInvokeData *pVVar13;
  undefined8 *puVar14;
  System_String_o *pSVar15;
  System_String_array *values;
  System_String_o *pSVar16;
  Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this_00;
  ulong uVar17;
  MethodInfo *pMVar18;
  System_Collections_Generic_List_object__o *__this_01;
  MethodInfo *method_00;
  long lVar19;
  undefined7 in_register_00000089;
  Settings_StringSetting_o *setting;
  MethodInfo *in_stack_ffffffffffffff60;
  Il2CppObject *local_98;
  MethodInfo *local_90;
  undefined4 local_84;
  System_String_o *local_80;
  Il2CppObject *local_78;
  System_String_o *local_70;
  System_Collections_Generic_List_object__o *local_68;
  System_Collections_Generic_List_object__o *local_60;
  System_String_o *local_58;
  MethodInfo *local_50;
  undefined8 local_48;
  Il2CppObject **local_40;
  Il2CppObject **local_38;
  
  local_84 = (undefined4)CONCAT71(in_register_00000089,characterMode);
  local_68 = (System_Collections_Generic_List_object__o *)rows;
  local_60 = (System_Collections_Generic_List_object__o *)skinRows;
  local_58 = idPrefix;
  local_50 = (MethodInfo *)sub;
  if (Il2CppMethodInitialized_0754864a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
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
    Il2CppMethodInitialized_0754864a = '\x01';
  }
  local_98 = (Il2CppObject *)0x0;
  local_78 = (Il2CppObject *)0x0;
  if (container == (Settings_BaseSettingsContainer_o *)0x0) {
    return;
  }
  local_70 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SetScopeId
                       (container,(MethodInfo *)skinRows);
  pSVar5 = (container->fields).Settings;
  if (pSVar5 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar12 = (Il2CppObject *)
            (*(pSVar5->klass->vtable)._22_GetEnumerator.methodPtr)
                      (pSVar5,(pSVar5->klass->vtable)._22_GetEnumerator.method);
  local_48 = 0;
  local_40 = &local_98;
  local_38 = &local_78;
joined_r0x05e4e993:
  do {
    do {
      local_98 = pIVar12;
      if (pIVar12 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar6 = pIVar12->klass;
      uVar17 = (ulong)(pIVar6->_2).interface_offsets_count;
      if (uVar17 != 0) {
        pIVar7 = (pIVar6->_1).interfaceOffsets;
        lVar19 = 0;
        do {
          if (*(Il2CppClass **)((long)&pIVar7->interfaceType + lVar19) ==
              (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
            pVVar13 = pIVar6->vtable + *(int *)((long)&pIVar7->offset + lVar19);
            goto label_05e4ea23;
          }
          lVar19 = lVar19 + 0x10;
        } while (uVar17 * 0x10 != lVar19);
      }
      pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIVar12,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05e4ea23:
      cVar10 = (*pVVar13->methodPtr)(pIVar12,pVVar13->method);
      pIVar12 = local_98;
      if (cVar10 == '\0') {
        pIVar12 = il2cpp_vm_Object_IsInst(local_98,(Il2CppClass *)TypeInfo_System_IDisposable);
        if (pIVar12 == (Il2CppObject *)0x0) {
          return;
        }
        pIVar6 = pIVar12->klass;
        uVar17 = (ulong)(pIVar6->_2).interface_offsets_count;
        local_78 = pIVar12;
        if (uVar17 == 0) goto label_05e4f01f;
        pIVar7 = (pIVar6->_1).interfaceOffsets;
        lVar19 = 0;
        goto label_05e4f010;
      }
      if (local_98 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar6 = local_98->klass;
      uVar17 = (ulong)(pIVar6->_2).interface_offsets_count;
      if (uVar17 != 0) {
        pIVar7 = (pIVar6->_1).interfaceOffsets;
        lVar19 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar7->interfaceType + lVar19) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar13 = pIVar6->vtable + (*(int *)((long)&pIVar7->offset + lVar19) + 1);
            goto label_05e4eab7;
          }
          lVar19 = lVar19 + 0x10;
        } while (uVar17 * 0x10 != lVar19);
      }
      pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                          (local_98,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05e4eab7:
      pIVar12 = (*pVVar13->methodPtr)(pIVar12,pVVar13->method);
      if (pIVar12 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pIVar12->klass->_1).element_class !=
          (TypeInfo_System_Collections_DictionaryEntry->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar12);
      }
      puVar14 = il2cpp_vm_Object_Unbox(pIVar12);
      setting = (Settings_StringSetting_o *)puVar14[1];
      if (setting == (Settings_StringSetting_o *)0x0) {
label_05e4eb12:
        setting = (Settings_StringSetting_o *)0x0;
        pSVar16 = (System_String_o *)*puVar14;
      }
      else {
        bVar2 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
        if ((setting->klass->_2).typeHierarchyDepth < bVar2) goto label_05e4eb12;
        if ((setting->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_BaseSetting) {
          setting = (Settings_StringSetting_o *)0x0;
        }
        pSVar16 = (System_String_o *)*puVar14;
      }
      if ((pSVar16 != (System_String_o *)0x0) && (pSVar16->klass != g_data_07556758)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar16);
      }
      pIVar12 = local_98;
    } while (setting == (Settings_StringSetting_o *)0x0);
    pSVar8 = setting->klass;
    bVar2 = (pSVar8->_2).typeHierarchyDepth;
    bVar3 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
  } while ((((bVar2 < bVar3) ||
            ((pSVar8->_2).typeHierarchy[(ulong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Settings_StringSetting))
           && ((bVar3 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth, bVar2 < bVar3 ||
               ((pSVar8->_2).typeHierarchy[(ulong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Settings_FloatSetting)
               ))) ||
          ((bVar11 = System_String__op_Equality(pSVar16,"Name",(MethodInfo *)0x0),
           pIVar12 = local_98, bVar11 ||
           (bVar11 = System_String__op_Equality(pSVar16,"UniqueId",(MethodInfo *)0x0),
           pIVar12 = local_98, bVar11))));
  pSVar15 = pSVar16;
  if ((char)local_84 != '\0') {
    if (pSVar16 == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar11 = System_String__StartsWith_53002b0(pSVar16,"Skin",4,(MethodInfo *)0x0);
    pIVar12 = local_98;
    if (!bVar11) goto joined_r0x05e4e993;
    if ("Skin" == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar15 = System_String__Substring
                        (pSVar16,("Skin"->fields)._stringLength,(MethodInfo *)0x0);
  }
  bVar11 = System_String__op_Equality(pSVar15,"Ground",(MethodInfo *)0x0);
  local_90 = local_50;
  if (bVar11) {
    local_90 = (MethodInfo *)"Skins.Common";
  }
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
  if (values == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)values->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  values->m_Items[0] = "settings-skins-";
  Il2CppCodeGenWriteBarrier(values->m_Items);
  if ((values->max_length & 0xfffffffe) == 0) {
    ThrowIndexOutOfRangeException();
  }
  values->m_Items[1] = local_58;
  Il2CppCodeGenWriteBarrier(values->m_Items + 1);
  if ((uint)values->max_length < 3) {
    ThrowIndexOutOfRangeException();
  }
  values->m_Items[2] = local_70;
  Il2CppCodeGenWriteBarrier(values->m_Items + 2);
  pMVar18 = (MethodInfo *)"-";
  if ((values->max_length & 0xfffffffc) == 0) {
    ThrowIndexOutOfRangeException();
  }
  values->m_Items[3] = "-";
  Il2CppCodeGenWriteBarrier(values->m_Items + 3);
  pSVar16 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SafeId(pSVar16,pMVar18);
  if ((uint)values->max_length < 5) {
    ThrowIndexOutOfRangeException();
  }
  values->m_Items[4] = pSVar16;
  Il2CppCodeGenWriteBarrier(values->m_Items + 4);
  pSVar16 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
  bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
  local_80 = pSVar15;
  if (((setting->klass->_2).typeHierarchyDepth < bVar2) ||
     ((setting->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_StringSetting))
  {
    __this = (Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter);
    pMVar18 = local_90;
    bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
    if (((setting->klass->_2).typeHierarchyDepth < bVar2) ||
       ((setting->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_FloatSetting)
       ) {
      il2cpp_codegen_raise_invalid_cast_exception(setting);
    }
    Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter___ctor
              ((Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *)__this,
               (Settings_FloatSetting_o *)setting,(MethodInfo *)0x0);
  }
  else {
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
    pMVar18 = local_90;
    bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
    if (((setting->klass->_2).typeHierarchyDepth < bVar2) ||
       ((setting->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_StringSetting
       )) {
      il2cpp_codegen_raise_invalid_cast_exception(setting);
    }
    Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter___ctor(__this,setting,(MethodInfo *)0x0);
  }
  local_90 = (MethodInfo *)pSVar16;
  if (Il2CppMethodInitialized_0754862d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_0754862d = '\x01';
  }
  method_00 = pMVar18;
  pSVar16 = System_String__Concat_5302810
                      ("SettingsPopup.",(System_String_o *)pMVar18,".",local_80,
                       (MethodInfo *)0x0);
  pSVar15 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SplitSkinName(local_80,method_00);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar15 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text_525ff30
                      (pSVar16,pSVar15,(MethodInfo *)0x0);
  descriptor = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__LabeledDescriptor
                         ((System_String_o *)local_90,(System_String_o *)pMVar18,pSVar15,4,
                          (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this,
                          (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                          in_stack_ffffffffffffff60);
  if (descriptor == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    ThrowNullReferenceException();
  }
  (descriptor->fields).LabelKey = pSVar16;
  Il2CppCodeGenWriteBarrier(&(descriptor->fields).LabelKey);
  bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
  if ((setting->klass->_2).typeHierarchyDepth < bVar2) {
    setting = (Settings_StringSetting_o *)0x0;
  }
  else if ((setting->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
           (Il2CppClass *)TypeInfo_Settings_StringSetting) {
    setting = (Settings_StringSetting_o *)0x0;
  }
  __this_01 = local_60;
  if (setting == (Settings_StringSetting_o *)0x0) {
    __this_01 = local_68;
  }
  if (Il2CppMethodInitialized_07548623 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Il2CppMethodInitialized_07548623 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor(__this_00,descriptor,(MethodInfo *)0x0);
  pMVar18 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
  if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar9 = (__this_01->fields)._items;
    if (pSVar9 != (System_Object_array *)0x0) {
      uVar4 = (__this_01->fields)._size;
      if (uVar4 < (uint)pSVar9->max_length) {
        (__this_01->fields)._size = uVar4 + 1;
        pSVar9->m_Items[(int)uVar4] = (Il2CppObject *)__this_00;
        Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar4);
        pIVar12 = local_98;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_01,(Il2CppObject *)__this_00,
                   (MethodInfo_395D230 *)pMVar18->klass->rgctx_data[0xe].method);
        pIVar12 = local_98;
      }
      goto joined_r0x05e4e993;
    }
  }
  ThrowNullReferenceException();
  while (lVar19 = lVar19 + 0x10, uVar17 * 0x10 != lVar19) {
label_05e4f010:
    if (*(System_IDisposable_c **)((long)&pIVar7->interfaceType + lVar19) == TypeInfo_System_IDisposable) {
      pVVar13 = pIVar6->vtable + *(int *)((long)&pIVar7->offset + lVar19);
      goto label_05e4f03d;
    }
  }
label_05e4f01f:
  pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar12,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05e4f03d:
  (*pVVar13->methodPtr)(pIVar12,pVVar13->method);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$SetScopeId
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SetScopeId (Settings_BaseSettingsContainer_o* container, const MethodInfo* method);
// 0x5e4ff10

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SetScopeId
          (Settings_BaseSettingsContainer_o *container,MethodInfo *method)

{
  byte bVar1;
  Settings_InspectorSettingMetadata_o *pSVar2;
  bool bVar3;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754864b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    Il2CppMethodInitialized_0754864b = '\x01';
  }
  if (container != (Settings_BaseSettingsContainer_o *)0x0) {
    bVar1 = (TypeInfo_Settings_BaseSetSetting->_2).typeHierarchyDepth;
    if ((bVar1 <= (container->klass->_2).typeHierarchyDepth) &&
       ((container->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Settings_BaseSetSetting)) {
      pSVar2 = (*(uint64_t *)((char *)container + 0x40));
      if (pSVar2 != (Settings_InspectorSettingMetadata_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        bVar3 = System_String__IsNullOrEmpty((pSVar2->fields).Header,(MethodInfo *)0x0);
        if (bVar3) goto label_05e4ff8f;
        pSVar2 = (*(uint64_t *)((char *)container + 0x40));
        if (pSVar2 != (Settings_InspectorSettingMetadata_o *)0x0) {
          pSVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SafeId
                             ((pSVar2->fields).Header,method_00);
          pSVar4 = System_String__Concat_52f0320("-",pSVar4,(MethodInfo *)0x0);
          return pSVar4;
        }
      }
      ThrowNullReferenceException();
    }
  }
label_05e4ff8f:
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$SplitSkinName
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SplitSkinName (System_String_o* name, const MethodInfo* method);
// 0x5e50cb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e50d90: mov ebx, r12d

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SplitSkinName
          (System_String_o *name,MethodInfo *method)

{
  int index;
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
  int index_00;
  int iVar10;
  
  if (Il2CppMethodInitialized_0754864c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    Il2CppMethodInitialized_0754864c = '\x01';
  }
  bVar5 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
  if (bVar5) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (name != (System_String_o *)0x0) {
    iVar10 = 0;
    if (1 < (name->fields)._stringLength) {
      iVar10 = 0;
      index_00 = 1;
      do {
        uVar8 = System_String__get_Chars(name,index_00,(MethodInfo *)0x0);
        if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_07556750);
        }
        bVar7 = false;
        bVar5 = System_Char__IsUpper(uVar8,(MethodInfo *)0x0);
        uVar8 = System_String__get_Chars(name,index_00 + -1,(MethodInfo *)0x0);
        bVar6 = System_Char__IsLower(uVar8,(MethodInfo *)0x0);
        index = index_00 + 1;
        if (index < (name->fields)._stringLength) {
          uVar8 = System_String__get_Chars(name,index,(MethodInfo *)0x0);
          if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_07556750);
          }
          bVar7 = System_Char__IsLower(uVar8,(MethodInfo *)0x0);
        }
        if ((bVar5) && (bVar7 != false || bVar6)) {
          pSVar9 = System_String__Substring_53042f0(name,iVar10,index_00 - iVar10,(MethodInfo *)0x0);
          pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
          if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_05e50f67;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this->fields)._items;
          if (pSVar3 == (System_String_array *)0x0) goto label_05e50f67;
          uVar2 = (__this->fields)._size;
          iVar10 = index_00;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = pSVar9;
            Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar9,
                       (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
          }
        }
        index_00 = index;
      } while (index < (name->fields)._stringLength);
    }
    pSVar9 = System_String__Substring(name,iVar10,(MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
    if (__this != (System_Collections_Generic_List_string__o *)0x0) {
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this->fields)._items;
      if (pSVar3 != (System_String_array *)0x0) {
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pSVar9;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar9,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        }
        pSVar9 = System_String__Join_5303350
                           (" ",(System_Collections_Generic_IEnumerable_string__o *)__this,
                            (MethodInfo *)0x0);
        return pSVar9;
      }
    }
  }
label_05e50f67:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$SyncHumanGlobalSelection
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SyncHumanGlobalSelection (Settings_HumanCustomSkinSettings_o* settings, const MethodInfo* method);
// 0x5e50f70

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__SyncHumanGlobalSelection
               (Settings_HumanCustomSkinSettings_o *settings,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_IntSetting_o *__this;
  
  if (Il2CppMethodInitialized_0754864d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSelectedSetIndex);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_0754864d = '\x01';
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
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$AfterSkinSetChange
// il2cpp: System_Action_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__AfterSkinSetChange (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_Action_o* beforeRefresh, const MethodInfo* method);
// 0x5e50ff0

System_Action_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__AfterSkinSetChange
          (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_Action_o *beforeRefresh,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass29_0_o *__this;
  System_Action_o *__this_00;
  
  if (Il2CppMethodInitialized_0754864e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass29_0_AfterSkinSetChan
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass29_0);
    Il2CppMethodInitialized_0754864e = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass29_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c__DisplayClass29_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).beforeRefresh = beforeRefresh;
  Il2CppCodeGenWriteBarrier(&(__this->fields).beforeRefresh);
  (__this->fields).context.fields.Node = context.fields.Node;
  (__this->fields).context.fields.InputSource = context.fields.InputSource;
  *(undefined4 *)&(__this->fields).context.fields.field_0x1c = context.fields._28_4_;
  (__this->fields).context.fields.ElementId = context.fields.ElementId;
  (__this->fields).context.fields.GameObject = context.fields.GameObject;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields).context);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass29_0_AfterSkinSetChan
             ,(MethodInfo *)0x0);
  return __this_00;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$MarkSetsChanged
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__MarkSetsChanged (const MethodInfo* method);
// 0x5e50600
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e507fd: jmp 0x5e50755

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__MarkSetsChanged(MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  Il2CppObject *object;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c_StaticFields *pGVar5;
  System_Func_string__o *__this;
  System_String_o **method_00;
  
  if (Il2CppMethodInitialized_0754864f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c_MarkSetsChanged_b__30_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c);
    il2cpp_codegen_initialize_runtime_metadata(&"settings-skins-sets-changed");
    il2cpp_codegen_initialize_runtime_metadata(&"Skins.Common");
    il2cpp_codegen_initialize_runtime_metadata(&"SetsChanged");
    Il2CppMethodInitialized_0754864f = '\x01';
  }
  pSVar3 = "Skins.Common";
  pSVar4 = "SetsChanged";
  if (Il2CppMethodInitialized_0754862d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_0754862d = '\x01';
  }
  pSVar4 = System_String__Concat_5302810
                     ("SettingsPopup.",pSVar3,".",pSVar4,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar4 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar4,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c);
  }
  pSVar3 = "settings-skins-sets-changed";
  pGVar5 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c->static_fields;
  __this = pGVar5->__9__30_0;
  method_00 = &"settings-skins-sets-changed";
  if (__this == (System_Func_string__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c);
      pGVar5 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c->static_fields;
    }
    object = (Il2CppObject *)pGVar5->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string);
    method_00 = (System_String_o **)0x0;
    System_Func_object____ctor
              ((System_Func_object__o *)__this,object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c_MarkSetsChanged_b__30_0
               ,(MethodInfo_4F0C6A0 *)0x0);
    pGVar5 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c->static_fields;
    pGVar5->__9__30_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar5->__9__30_0);
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
            cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__Register
            (pSVar3,pSVar4,__this,(MethodInfo *)method_00);
  piVar1 = &TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory->static_fields->_setsRevision
  ;
  *piVar1 = *piVar1 + 1;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$RefreshSkins
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__RefreshSkins (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5e50810

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__RefreshSkins
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_GisketchUIRoot_o *method_02;
  float fVar2;
  
  if (Il2CppMethodInitialized_07548650 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"skins");
    Il2CppMethodInitialized_07548650 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  method_01 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    method_01 = MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot;
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     (context.fields.GameObject,
                      (MethodInfo_353BB40 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  fVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CurrentScrollOffset(root,method_01);
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory->static_fields->_pendingScrollOffset =
       fVar2;
  method_02 = root;
  Gisketch_Aottg2UI_Game_AottgSettingsScreen__RefreshCategory(root,"skins",(MethodInfo *)0x0);
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__Groups((MethodInfo *)method_02);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SyncState(root,groups,method_00);
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SyncAll(root,(MethodInfo *)groups);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$CurrentScrollOffset
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CurrentScrollOffset (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5e510d0

float Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__CurrentScrollOffset
                (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *__this;
  MethodInfo *method_00;
  float fVar4;
  
  if (Il2CppMethodInitialized_07548651 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_GisketchVirtualScrollRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"skins");
    Il2CppMethodInitialized_07548651 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar2 = (UnityEngine_Transform_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_05e51227;
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)root,(MethodInfo *)0x0);
  }
  pSVar3 = "skins";
  if (Il2CppMethodInitialized_075485a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"settings-");
    il2cpp_codegen_initialize_runtime_metadata(&"-content");
    Il2CppMethodInitialized_075485a5 = '\x01';
  }
  pSVar3 = System_String__Concat_5301f10("settings-",pSVar3,"-content",(MethodInfo *)0x0)
  ;
  pUVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__FindById(pUVar2,pSVar3,method_00);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this = (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_05e51227;
    __this = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar2,
                        (MethodInfo_34B0830 *)
                        MethodInfo_UnityEngine_Component_GetComponent_GisketchVirtualScrollRuntime);
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
    fVar4 = Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__get_CurrentScrollOffset
                      (__this,(MethodInfo *)0x0);
    return fVar4;
  }
label_05e51227:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$FindById
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__FindById (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo* method);
// 0x5e51230
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e512cf: nop 

UnityEngine_Transform_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__FindById
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *a;
  MethodInfo *method_00;
  int index;
  UnityEngine_Transform_o *pUVar3;
  
  if (Il2CppMethodInitialized_07548652 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548652 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Transform_o *)0x0;
  if (!bVar1) {
    if (root == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    a = UnityEngine_Object__get_name((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
    bVar1 = System_String__Equals_52ffe30(a,id,5,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar3 = root;
    }
    else {
      index = 0;
      iVar2 = UnityEngine_Transform__get_childCount(root,(MethodInfo *)0x0);
      pUVar3 = (UnityEngine_Transform_o *)0x0;
      if (0 < iVar2) {
        do {
          pUVar3 = UnityEngine_Transform__GetChild(root,index,(MethodInfo *)0x0);
          pUVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__FindById(pUVar3,id,method_00);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar1) {
            return pUVar3;
          }
          index = index + 1;
          iVar2 = UnityEngine_Transform__get_childCount(root,(MethodInfo *)0x0);
          pUVar3 = (UnityEngine_Transform_o *)0x0;
        } while (index < iVar2);
      }
    }
  }
  return pUVar3;
}


