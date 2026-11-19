// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingDescriptor
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingDescriptor.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingDescriptor$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* __this, System_String_o* id, System_String_o* label, int32_t kind, Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o* adapter, const MethodInfo* method);
// 0x5dc65d0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *__this,System_String_o *id,
               System_String_o *label,int32_t kind,
               Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *adapter,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *pGVar1;
  
  if (Il2CppMethodInitialized_075481c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array);
    Il2CppMethodInitialized_075481c6 = '\x01';
  }
  (__this->fields).MaxVisibleItems = 8;
  pGVar1 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array,0);
  (__this->fields).Options = pGVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Options);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Id);
  (__this->fields).Label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Label);
  (__this->fields).Kind = kind;
  (__this->fields).Adapter = adapter;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Adapter);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingDescriptor$$Changed
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor__Changed (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5dc6680

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor__Changed
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  System_String_o *rowId;
  System_Action_GisketchActionContext__o *pSVar1;
  bool bVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  
  if (Il2CppMethodInitialized_075481c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075481c7 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar2) {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     (context.fields.GameObject,
                      (MethodInfo_353BB40 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  rowId = (__this->fields).Id;
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SyncRow(root,rowId,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).OnChanged;
  if (pSVar1 == (System_Action_GisketchActionContext__o *)0x0) {
    return;
  }
  (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
  return;
}


