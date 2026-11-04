// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingDescriptor
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingDescriptor.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingDescriptor$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* __this, System_String_o* id, System_String_o* label, int32_t kind, Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o* adapter, const MethodInfo* method);
// 0x18230bf80

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *__this,System_String_o *id,
               System_String_o *label,int32_t kind,
               Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *adapter,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *value;
  
  if (Il2CppMethodInitialized_184347721 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array);
    Il2CppMethodInitialized_184347721 = '\x01';
  }
  (__this->fields).MaxVisibleItems = 8;
  value = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)
          SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array,0);
  (__this->fields).Options = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Options,value);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Id,id);
  (__this->fields).Label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Label,label);
  (__this->fields).Adapter = adapter;
  (__this->fields).Kind = kind;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Adapter,adapter);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingDescriptor$$Changed
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor__Changed (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x18230be70

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor__Changed
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  System_String_o *rowId;
  System_Action_GisketchActionContext__o *pSVar1;
  bool bVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int32_t iStack_10;
  undefined4 uStack_c;
  
  if (Il2CppMethodInitialized_184347722 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347722 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)(context->fields).GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar2) {
    __this_00 = (context->fields).GameObject;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     (__this_00,
                      (MethodInfo_6F53B0 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  else {
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  }
  rowId = (__this->fields).Id;
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SyncRow(root,rowId,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).OnChanged;
  if (pSVar1 != (System_Action_GisketchActionContext__o *)0x0) {
    local_28 = *(undefined4 *)&(context->fields).ElementId;
    uStack_24 = *(undefined4 *)((longlong)&(context->fields).ElementId + 4);
    uStack_20 = *(undefined4 *)&(context->fields).GameObject;
    uStack_1c = *(undefined4 *)((longlong)&(context->fields).GameObject + 4);
    local_18 = *(undefined4 *)&(context->fields).Node;
    uStack_14 = *(undefined4 *)((longlong)&(context->fields).Node + 4);
    iStack_10 = (context->fields).InputSource;
    uStack_c = *(undefined4 *)&(context->fields).field_0x1c;
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,&local_28,(pSVar1->fields).method);
  }
  return;
}


