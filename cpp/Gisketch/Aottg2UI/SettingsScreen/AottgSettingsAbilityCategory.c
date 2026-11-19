// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsAbilityCategory
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsAbilityCategory.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsAbilityCategory.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory___c___cctor (const MethodInfo* method);
// 0x5e3ac40

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_0754859f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory_c);
    Il2CppMethodInitialized_0754859f = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory_c)
  ;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory_c->static_fields->__9 =
       (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory___c_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsAbilityCategory.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory___c___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory___c_o* __this, const MethodInfo* method);
// 0x5e3acb0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory___c___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory___c_o *__this,MethodInfo *method
               )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsAbilityCategory.<>c$$<Groups>b__2_0
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory___c___Groups_b__2_0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory___c_o* __this, const MethodInfo* method);
// 0x5e3acc0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory___c___Groups_b__2_0
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory___c_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t iStack_4;
  
  Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__UnusedPoints((MethodInfo *)0x0);
  pSVar1 = System_Int32__ToString(&iStack_4,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsAbilityCategory$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory__Build (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x5e39e50

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory__Build
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  System_String_o *categoryId;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory_o *__this;
  System_String_o **method_00;
  
  method_00 = (System_String_o **)content;
  if (g_data_0754859d == '\0') {
    method_00 = &"ability";
    il2cpp_codegen_initialize_runtime_metadata(&"ability");
    g_data_0754859d = '\x01';
  }
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory__Groups((MethodInfo *)method_00);
  categoryId = "ability";
  if (Il2CppMethodInitialized_075485a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory);
    Il2CppMethodInitialized_075485a1 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory);
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory___ctor
            (__this,context,categoryId,groups,(System_String_o *)0x0,0.0,(System_Nullable_float__o)0x0,
             (MethodInfo *)0x0);
  if (content == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (content,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsAbilityCategory$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory__SyncState (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5e3a820

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory__SyncState
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  MethodInfo *method_00;
  
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory__Groups((MethodInfo *)root);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SyncState(root,groups,method_00);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsAbilityCategory$$Groups
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory__Groups (const MethodInfo* method);
// 0x5e39f20

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory__Groups(MethodInfo *method)

{
  Settings_AbilitySettings_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *item;
  System_String_o *id;
  System_String_o *id_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *pGVar3;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar4;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory___c_StaticFields *pGVar5;
  System_Func_string__o *__this;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *pGVar8;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *pGVar9;
  MethodInfo *pMVar10;
  Settings_ColorSetting_o *setting;
  Settings_BoolSetting_o *pSVar11;
  Settings_IntSetting_o *pSVar12;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffb0;
  
  if (Il2CppMethodInitialized_0754859e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory_c_Groups_b__2_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory_c);
    il2cpp_codegen_initialize_runtime_metadata(&"UseOldEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"UnusedPoints");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-bomb-radius");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-toggles");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-bomb-cooldown");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-bomb-speed");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-bomb-unused-points.value");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-bomb-color");
    il2cpp_codegen_initialize_runtime_metadata(&"20");
    il2cpp_codegen_initialize_runtime_metadata(&"BombColor");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-bomb-range");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-cursor-cooldown");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-bomb-collision");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-unused-points");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowBombColors");
    il2cpp_codegen_initialize_runtime_metadata(&"BombCollision");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-show-bomb-colors");
    il2cpp_codegen_initialize_runtime_metadata(&"Ability");
    il2cpp_codegen_initialize_runtime_metadata(&"CursorCooldown");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-use-old-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-bomb-visuals");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-bomb-stats");
    Il2CppMethodInitialized_0754859e = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->AbilitySettings;
  pGVar3 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array,3);
  pGVar4 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,5);
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory_c->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory_c);
  }
  id_00 = "settings-ability-unused-points";
  id = "settings-ability-bomb-stats";
  item = "UnusedPoints";
  pSVar2 = "Ability";
  pGVar5 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory_c->static_fields;
  __this = pGVar5->__9__2_0;
  if (__this == (System_Func_string__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory_c->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory_c);
      pGVar5 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory_c->static_fields;
    }
    pIVar6 = (Il2CppObject *)pGVar5->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string);
    System_Func_object____ctor
              ((System_Func_object__o *)__this,pIVar6,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory_c_Groups_b__2_0,
               (MethodInfo_4F0C6A0 *)0x0);
    pGVar5 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory_c->static_fields;
    pGVar5->__9__2_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar5->__9__2_0);
  }
  method_00 = (MethodInfo *)0x0;
  pIVar6 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dynamic
                     (id_00,pSVar2,item,__this,"20","settings-ability-bomb-unused-points.value",
                      (System_Func_string__o *)0x0,in_stack_ffffffffffffffb0);
  if (pGVar4 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) goto label_05e3a76c;
  if (pIVar6 != (Il2CppObject *)0x0) {
    pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pGVar4->obj).klass)->_1).element_class);
    if (pIVar7 == (Il2CppObject *)0x0) goto label_05e3a75d;
  }
  if ((int)pGVar4->max_length == 0) goto label_05e3a758;
  pGVar4->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar6;
  Il2CppCodeGenWriteBarrier(pGVar4->m_Items);
  pSVar2 = "settings-ability-bomb-radius";
  if (pSVar1 == (Settings_AbilitySettings_o *)0x0) {
    pSVar12 = (Settings_IntSetting_o *)0x0;
  }
  else {
    pSVar12 = (pSVar1->fields).BombRadius;
  }
  pGVar8 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow);
  Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___ctor(pGVar8,pSVar2,pSVar12,0,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *)0x0) {
    pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pGVar8,(((pGVar4->obj).klass)->_1).element_class);
    if (pIVar6 == (Il2CppObject *)0x0) goto label_05e3a75d;
  }
  if ((pGVar4->max_length & 0xfffffffe) == 0) goto label_05e3a758;
  pGVar4->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar8;
  Il2CppCodeGenWriteBarrier(pGVar4->m_Items + 1);
  pSVar2 = "settings-ability-bomb-range";
  if (pSVar1 == (Settings_AbilitySettings_o *)0x0) {
    pSVar12 = (Settings_IntSetting_o *)0x0;
  }
  else {
    pSVar12 = (pSVar1->fields).BombRange;
  }
  pGVar8 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow);
  Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___ctor(pGVar8,pSVar2,pSVar12,1,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *)0x0) {
    pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pGVar8,(((pGVar4->obj).klass)->_1).element_class);
    if (pIVar6 == (Il2CppObject *)0x0) goto label_05e3a75d;
  }
  if ((uint)pGVar4->max_length < 3) goto label_05e3a758;
  pGVar4->m_Items[2] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar8;
  Il2CppCodeGenWriteBarrier(pGVar4->m_Items + 2);
  pSVar2 = "settings-ability-bomb-speed";
  if (pSVar1 == (Settings_AbilitySettings_o *)0x0) {
    pSVar12 = (Settings_IntSetting_o *)0x0;
  }
  else {
    pSVar12 = (pSVar1->fields).BombSpeed;
  }
  pGVar8 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow);
  Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___ctor(pGVar8,pSVar2,pSVar12,2,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *)0x0) {
    pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pGVar8,(((pGVar4->obj).klass)->_1).element_class);
    if (pIVar6 == (Il2CppObject *)0x0) goto label_05e3a75d;
  }
  if ((pGVar4->max_length & 0xfffffffc) == 0) goto label_05e3a758;
  pGVar4->m_Items[3] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar8;
  Il2CppCodeGenWriteBarrier(pGVar4->m_Items + 3);
  pSVar2 = "settings-ability-bomb-cooldown";
  if (pSVar1 == (Settings_AbilitySettings_o *)0x0) {
    pSVar12 = (Settings_IntSetting_o *)0x0;
  }
  else {
    pSVar12 = (pSVar1->fields).BombCooldown;
  }
  pGVar8 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow);
  pMVar10 = (MethodInfo *)0x3;
  Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___ctor(pGVar8,pSVar2,pSVar12,3,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *)0x0) {
    pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pGVar8,(((pGVar4->obj).klass)->_1).element_class);
    if (pIVar6 == (Il2CppObject *)0x0) goto label_05e3a75d;
  }
  if ((uint)pGVar4->max_length < 5) goto label_05e3a758;
  pGVar4->m_Items[4] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar8;
  Il2CppCodeGenWriteBarrier(pGVar4->m_Items + 4);
  pGVar9 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor(pGVar9,id,pGVar4,pMVar10);
  if (pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0) {
label_05e3a76c:
    ThrowNullReferenceException();
  }
  if ((int)pGVar3->max_length == 0) goto label_05e3a758;
  pGVar3->m_Items[0] = pGVar9;
  Il2CppCodeGenWriteBarrier(pGVar3->m_Items);
  pGVar4 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,3);
  pSVar2 = "settings-ability-bomb-visuals";
  if (pSVar1 == (Settings_AbilitySettings_o *)0x0) {
    setting = (Settings_ColorSetting_o *)0x0;
  }
  else {
    setting = (pSVar1->fields).BombColor;
  }
  pIVar6 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Color
                     ("settings-ability-bomb-color","Ability","BombColor",setting,
                      (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,method_00);
  if (pGVar4 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) goto label_05e3a76c;
  if (pIVar6 != (Il2CppObject *)0x0) {
    pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pGVar4->obj).klass)->_1).element_class);
    if (pIVar7 == (Il2CppObject *)0x0) goto label_05e3a75d;
  }
  if ((int)pGVar4->max_length == 0) goto label_05e3a758;
  pGVar4->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar6;
  Il2CppCodeGenWriteBarrier(pGVar4->m_Items);
  if (pSVar1 == (Settings_AbilitySettings_o *)0x0) {
    pSVar11 = (Settings_BoolSetting_o *)0x0;
  }
  else {
    pSVar11 = (pSVar1->fields).ShowBombColors;
  }
  pIVar6 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                     ("settings-ability-show-bomb-colors","Ability","ShowBombColors",pSVar11,
                      (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,method_00);
  if (pIVar6 != (Il2CppObject *)0x0) {
    pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pGVar4->obj).klass)->_1).element_class);
    if (pIVar7 == (Il2CppObject *)0x0) goto label_05e3a75d;
  }
  if ((pGVar4->max_length & 0xfffffffe) == 0) goto label_05e3a758;
  pGVar4->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar6;
  Il2CppCodeGenWriteBarrier(pGVar4->m_Items + 1);
  if (pSVar1 == (Settings_AbilitySettings_o *)0x0) {
    pMVar10 = (MethodInfo *)0x0;
  }
  else {
    pMVar10 = (MethodInfo *)(pSVar1->fields).UseOldEffect;
  }
  pIVar6 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                     ("settings-ability-use-old-effect","Ability","UseOldEffect",
                      (Settings_BoolSetting_o *)pMVar10,(System_String_o *)0x0,
                      (System_Action_GisketchActionContext__o *)0x0,method_00);
  if (pIVar6 != (Il2CppObject *)0x0) {
    pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pGVar4->obj).klass)->_1).element_class);
    if (pIVar7 == (Il2CppObject *)0x0) goto label_05e3a75d;
  }
  if (2 < (uint)pGVar4->max_length) {
    pGVar4->m_Items[2] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar6;
    Il2CppCodeGenWriteBarrier(pGVar4->m_Items + 2);
    pGVar9 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor(pGVar9,pSVar2,pGVar4,pMVar10);
    if ((pGVar3->max_length & 0xfffffffe) == 0) goto label_05e3a758;
    pGVar3->m_Items[1] = pGVar9;
    Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 1);
    pGVar4 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,2);
    pSVar2 = "settings-ability-toggles";
    if (pSVar1 == (Settings_AbilitySettings_o *)0x0) {
      pSVar11 = (Settings_BoolSetting_o *)0x0;
    }
    else {
      pSVar11 = (pSVar1->fields).CursorCooldown;
    }
    pIVar6 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                       ("settings-ability-cursor-cooldown","Ability","CursorCooldown",pSVar11,
                        (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,method_00);
    if (pGVar4 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) goto label_05e3a76c;
    if (pIVar6 != (Il2CppObject *)0x0) {
      pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pGVar4->obj).klass)->_1).element_class);
      if (pIVar7 == (Il2CppObject *)0x0) goto label_05e3a75d;
    }
    if ((int)pGVar4->max_length != 0) {
      pGVar4->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar6;
      Il2CppCodeGenWriteBarrier(pGVar4->m_Items);
      if (pSVar1 == (Settings_AbilitySettings_o *)0x0) {
        pMVar10 = (MethodInfo *)0x0;
      }
      else {
        pMVar10 = (MethodInfo *)(pSVar1->fields).BombCollision;
      }
      pIVar6 = (Il2CppObject *)
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                         ("settings-ability-bomb-collision","Ability","BombCollision",
                          (Settings_BoolSetting_o *)pMVar10,(System_String_o *)0x0,
                          (System_Action_GisketchActionContext__o *)0x0,method_00);
      if (pIVar6 != (Il2CppObject *)0x0) {
        pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pGVar4->obj).klass)->_1).element_class);
        if (pIVar7 == (Il2CppObject *)0x0) {
label_05e3a75d:
          pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
        }
      }
      if ((pGVar4->max_length & 0xfffffffe) != 0) {
        pGVar4->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar6;
        Il2CppCodeGenWriteBarrier(pGVar4->m_Items + 1);
        pGVar9 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor(pGVar9,pSVar2,pGVar4,pMVar10);
        if (2 < (uint)pGVar3->max_length) {
          pGVar3->m_Items[2] = pGVar9;
          Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 2);
          return pGVar3;
        }
      }
    }
  }
label_05e3a758:
  ThrowIndexOutOfRangeException();
}


