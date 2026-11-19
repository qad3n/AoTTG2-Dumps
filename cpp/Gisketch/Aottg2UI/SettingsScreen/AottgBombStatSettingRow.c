// Type: Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgBombStatSettingRow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, System_String_o* id, Settings_IntSetting_o* setting, int32_t kind, const MethodInfo* method);
// 0x5dbad40

void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,System_String_o *id,
               Settings_IntSetting_o *setting,int32_t kind,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  (__this->fields)._setting = setting;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._setting);
  (__this->fields)._kind = kind;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__Build (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5dbad90

void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *id;
  Settings_IntSetting_o *setting;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_Fields searchContext;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_Action_AottgUi__o *__this_00;
  System_String_o *searchTitle;
  System_Func_string__o *__this_01;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *pMVar4;
  MethodInfo *in_stack_ffffffffffffff80;
  
  pMVar4 = (MethodInfo *)ui;
  if (Il2CppMethodInitialized_0754814a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_BuildStepper);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_DirtyValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string);
    Il2CppMethodInitialized_0754814a = '\x01';
  }
  id = (__this->fields)._id;
  setting = (__this->fields)._setting;
  iVar1 = (__this->fields)._kind;
  if (Il2CppMethodInitialized_0754814c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&")");
    il2cpp_codegen_initialize_runtime_metadata(&" (");
    Il2CppMethodInitialized_0754814c = '\x01';
  }
  pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__StatLabel(iVar1,pMVar4);
  pSVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__StatValue(setting,iVar1,method_00);
  pSVar3 = System_String__Concat_5302810
                     (pSVar2," (",pSVar3,")",(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  pMVar4 = (MethodInfo *)__this;
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_BuildStepper,
             (MethodInfo_4A81BE0 *)0x0);
  searchTitle = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__StatLabel
                          ((__this->fields)._kind,pMVar4);
  pSVar2 = (__this->fields)._id;
  if (Il2CppMethodInitialized_07548155 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".label");
    Il2CppMethodInitialized_07548155 = '\x01';
  }
  pSVar2 = System_String__Concat_52f0320(pSVar2,".label",(MethodInfo *)0x0);
  searchContext = (__this->fields)._searchContext.fields;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string);
  System_Func_object____ctor
            ((System_Func_object__o *)__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_DirtyValue,
             (MethodInfo_4F0C6A0 *)0x0);
  iVar1 = (__this->fields)._layoutMode;
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___ctor
            (__this_02,id,pSVar3,220.0,__this_00,(System_String_o *)0x0,searchTitle,(System_String_o *)0x0,
             (System_String_o *)0x0,(System_Nullable_float__o)0x0,(System_String_o *)0x0,
             (System_String_o *)0x0,pSVar2,
             (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o)searchContext,__this_01,
             (System_String_o *)0x0,(System_String_o *)0x0,iVar1,in_stack_ffffffffffffff80);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_02,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$ApplySearchContext
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__ApplySearchContext (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, const MethodInfo* method);
// 0x5dbb170

void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__ApplySearchContext
               (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context,MethodInfo *method)

{
  (__this->fields)._searchContext.fields.GroupTitle = context.fields.GroupTitle;
  (__this->fields)._searchContext.fields.CategoryTitle = context.fields.CategoryTitle;
  (__this->fields)._searchContext.fields.GroupId = context.fields.GroupId;
  (__this->fields)._searchContext.fields.ScreenTitle = context.fields.ScreenTitle;
  (__this->fields)._searchContext.fields.CategoryId = context.fields.CategoryId;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields)._searchContext);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$ApplyLayoutMode
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__ApplyLayoutMode (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, int32_t mode, const MethodInfo* method);
// 0x5dbb1a0

void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__ApplyLayoutMode
               (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,int32_t mode,
               MethodInfo *method)

{
  (__this->fields)._layoutMode = mode;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncState (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5dbb1b0

void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncState
               (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncAll(root,(MethodInfo *)root);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$BuildStepper
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__BuildStepper (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x5dbb410

void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__BuildStepper
               (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  System_Action_AottgUi__o *__this_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_0754814b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_BuildStepper_b__16_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"-bomb-stepper");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_0754814b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_BuildStepper_b__16_0,
             (MethodInfo_4A81BE0 *)0x0);
  id = System_String__Concat_52f0320((__this->fields)._id,"-bomb-stepper",(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(220.0,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","Center","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,8.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (control == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (control,"clear",__this_00,id,layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$LabelText
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__LabelText (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, const MethodInfo* method);
// 0x5dbaff0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__LabelText
          (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,MethodInfo *method)

{
  int32_t kind;
  Settings_IntSetting_o *setting;
  System_String_o *pSVar1;
  System_String_o *str2;
  MethodInfo *method_00;
  
  setting = (__this->fields)._setting;
  kind = (__this->fields)._kind;
  if (Il2CppMethodInitialized_0754814c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&")");
    il2cpp_codegen_initialize_runtime_metadata(&" (");
    Il2CppMethodInitialized_0754814c = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__StatLabel(kind,method);
  str2 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__StatValue(setting,kind,method_00);
  pSVar1 = System_String__Concat_5302810
                     (pSVar1," (",str2,")",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$LabelText
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__LabelText (Settings_IntSetting_o* setting, int32_t kind, const MethodInfo* method);
// 0x5dbb5b0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__LabelText_5cbb5b0
          (Settings_IntSetting_o *setting,int32_t kind,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str2;
  MethodInfo *method_00;
  undefined4 in_register_00000034;
  MethodInfo *method_01;
  
  method_01 = (MethodInfo *)CONCAT44(in_register_00000034,kind);
  if (Il2CppMethodInitialized_0754814c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&")");
    il2cpp_codegen_initialize_runtime_metadata(&" (");
    Il2CppMethodInitialized_0754814c = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__StatLabel(kind,method_01);
  str2 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__StatValue(setting,kind,method_00);
  pSVar1 = System_String__Concat_5302810
                     (pSVar1," (",str2,")",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$StatLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__StatLabel (int32_t kind, const MethodInfo* method);
// 0x5dbb060

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__StatLabel(int32_t kind,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_20;
  int32_t local_10;
  
  if (Il2CppMethodInitialized_0754814d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_StatKind);
    il2cpp_codegen_initialize_runtime_metadata(&"Ability");
    il2cpp_codegen_initialize_runtime_metadata(&"Bomb");
    Il2CppMethodInitialized_0754814d = '\x01';
  }
  local_20.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_StatKind
  ;
  local_20.monitor = (void *)0xffffffffffffffff;
  local_10 = kind;
  pSVar1 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_52f0320("Bomb",pSVar1,(MethodInfo *)0x0);
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Key
                     ("Ability",pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$StatValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__StatValue (Settings_IntSetting_o* setting, int32_t kind, const MethodInfo* method);
// 0x5dbb620

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__StatValue
          (Settings_IntSetting_o *setting,int32_t kind,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o **ppSVar2;
  float fVar3;
  float local_18;
  float local_14;
  
  if (Il2CppMethodInitialized_0754814e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"k");
    il2cpp_codegen_initialize_runtime_metadata(&"0.##");
    il2cpp_codegen_initialize_runtime_metadata(&" / ");
    il2cpp_codegen_initialize_runtime_metadata(&"m");
    il2cpp_codegen_initialize_runtime_metadata(&"s");
    Il2CppMethodInitialized_0754814e = '\x01';
  }
  if (setting == (Settings_IntSetting_o *)0x0) {
    local_14 = 0.0;
  }
  else {
    local_14 = (float)(setting->fields)._value;
  }
  if (kind == 2) {
    fVar3 = BombUtil__GetBombSpeed(local_14,3.0,10.5,10.5,(MethodInfo *)0x0);
    local_18 = BombUtil__GetOldSpeedCost(fVar3,(MethodInfo *)0x0);
    pSVar1 = System_Single__ToString_54d0a60(&local_18,"0.##",(MethodInfo *)0x0);
    fVar3 = BombUtil__GetBombSpeed(local_14,3.0,10.5,10.5,(MethodInfo *)0x0);
    _local_18 = CONCAT44(local_14,fVar3 / 100.0);
    ppSVar2 = &"k";
  }
  else {
    if (kind == 1) {
      fVar3 = BombUtil__GetBombRange(local_14,0.0,4.0,7.0,(MethodInfo *)0x0);
      local_18 = BombUtil__GetOldRangeCost(fVar3,(MethodInfo *)0x0);
      pSVar1 = System_Single__ToString_54d0a60(&local_18,"0.##",(MethodInfo *)0x0);
      fVar3 = BombUtil__GetBombRange(local_14,0.0,4.0,7.0,(MethodInfo *)0x0);
    }
    else {
      if (kind != 0) {
        fVar3 = BombUtil__GetBombCooldown(local_14,4.0,7.0,7.0,(MethodInfo *)0x0);
        local_18 = BombUtil__GetOldCooldownCost(fVar3,(MethodInfo *)0x0);
        pSVar1 = System_Single__ToString_54d0a60(&local_18,"0.##",(MethodInfo *)0x0);
        fVar3 = BombUtil__GetBombCooldown(local_14,4.0,7.0,7.0,(MethodInfo *)0x0);
        _local_18 = CONCAT44(local_14,fVar3);
        ppSVar2 = &"s";
        goto label_05dbb876;
      }
      fVar3 = BombUtil__GetBombRadius(local_14,5.4,7.4,7.0,(MethodInfo *)0x0);
      local_18 = BombUtil__GetOldRadiusCost(fVar3,(MethodInfo *)0x0);
      pSVar1 = System_Single__ToString_54d0a60(&local_18,"0.##",(MethodInfo *)0x0);
      fVar3 = BombUtil__GetBombRadius(local_14,5.4,7.4,7.0,(MethodInfo *)0x0);
    }
    _local_18 = CONCAT44(local_14,fVar3);
    ppSVar2 = &"m";
  }
label_05dbb876:
  str2 = System_Single__ToString_54d0a60(&local_18,"0.##",(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_5302810(pSVar1," / ",str2,*ppSVar2,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$Change
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__Change (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, int32_t delta, const MethodInfo* method);
// 0x5dbb8b0

void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__Change
               (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,int32_t delta,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int32_t iVar4;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  uint uVar5;
  Settings_IntSetting_o *__this_00;
  uint value;
  MethodInfo *method_00;
  MethodInfo **method_01;
  
  method_01 = (MethodInfo **)__this;
  if (Il2CppMethodInitialized_0754814f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    method_01 = &MethodInfo_Settings_TypedSetting_int_set_Value;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_0754814f = '\x01';
  }
  __this_00 = (__this->fields)._setting;
  if (__this_00 != (Settings_IntSetting_o *)0x0) {
    iVar3 = (__this_00->fields)._value;
    uVar2 = (__this_00->fields).MinValue;
    uVar5 = (__this_00->fields).MaxValue;
    uVar1 = iVar3 + delta;
    value = uVar5;
    if ((int)uVar1 < (int)uVar5) {
      value = uVar1;
    }
    if ((int)uVar1 < (int)uVar2) {
      value = uVar2;
    }
    if (delta < 1) {
label_05dbb955:
      method_00 = (MethodInfo *)(ulong)value;
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)__this_00,value,
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
        root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
      }
      else {
        method_00 = MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot;
        root = UnityEngine_GameObject__GetComponentInParent_object_
                         (context.fields.GameObject,
                          (MethodInfo_353BB40 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
      }
      Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncAll(root,method_00);
      return;
    }
    if (g_data_07548151 == '\0') {
      method_01 = &MethodInfo_Settings_TypedSetting_int_get_Value;
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
      g_data_07548151 = '\x01';
      iVar3 = (__this_00->fields)._value;
      uVar5 = (__this_00->fields).MaxValue;
    }
    if (iVar3 < (int)uVar5) {
      iVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__TotalPoints((MethodInfo *)method_01);
      if (iVar4 < 0x14) {
        __this_00 = (__this->fields)._setting;
        if (__this_00 == (Settings_IntSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        goto label_05dbb955;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$DirtyValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__DirtyValue (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, const MethodInfo* method);
// 0x5dbb9f0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__DirtyValue
          (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  System_String_o *pSVar2;
  int32_t local_c;
  
  if (Il2CppMethodInitialized_07548150 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07548150 = '\x01';
  }
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 == (Settings_IntSetting_o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  local_c = (pSVar1->fields)._value;
  pSVar2 = System_Int32__ToString(&local_c,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$CanIncrement
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__CanIncrement (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, const MethodInfo* method);
// 0x5dbb9b0

bool Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__CanIncrement
               (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  int32_t iVar2;
  MethodInfo **ppMVar3;
  
  pSVar1 = (__this->fields)._setting;
  if (g_data_07548151 == '\0') {
    ppMVar3 = &MethodInfo_Settings_TypedSetting_int_get_Value;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    g_data_07548151 = '\x01';
    __this = (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *)ppMVar3;
  }
  if ((pSVar1 == (Settings_IntSetting_o *)0x0) || ((pSVar1->fields).MaxValue <= (pSVar1->fields)._value)) {
    return false;
  }
  iVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__TotalPoints((MethodInfo *)__this);
  return iVar2 < 0x14;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$CanIncrement
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__CanIncrement (Settings_IntSetting_o* setting, const MethodInfo* method);
// 0x5dbba60

bool Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__CanIncrement_5cbba60
               (Settings_IntSetting_o *setting,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo **method_00;
  
  method_00 = (MethodInfo **)setting;
  if (g_data_07548151 == '\0') {
    method_00 = &MethodInfo_Settings_TypedSetting_int_get_Value;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    g_data_07548151 = '\x01';
  }
  if ((setting == (Settings_IntSetting_o *)0x0) || ((setting->fields).MaxValue <= (setting->fields)._value)) {
    return false;
  }
  iVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__TotalPoints((MethodInfo *)method_00);
  return iVar1 < 0x14;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$TotalPoints
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__TotalPoints (const MethodInfo* method);
// 0x5dbbaa0

int32_t Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__TotalPoints(MethodInfo *method)

{
  Settings_AbilitySettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  
  if (Il2CppMethodInitialized_07548152 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07548152 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->AbilitySettings;
  if (pSVar1 == (Settings_AbilitySettings_o *)0x0) {
    return 0;
  }
  pSVar2 = (pSVar1->fields).BombRadius;
  if ((((pSVar2 == (Settings_IntSetting_o *)0x0) ||
       (pSVar3 = (pSVar1->fields).BombRange, pSVar3 == (Settings_IntSetting_o *)0x0)) ||
      (pSVar4 = (pSVar1->fields).BombSpeed, pSVar4 == (Settings_IntSetting_o *)0x0)) ||
     (pSVar5 = (pSVar1->fields).BombCooldown, pSVar5 == (Settings_IntSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pSVar2->fields)._value + (pSVar3->fields)._value + (pSVar4->fields)._value + (pSVar5->fields)._value
  ;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$UnusedPoints
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__UnusedPoints (const MethodInfo* method);
// 0x5dbbb20

int32_t Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__UnusedPoints(MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  
  iVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__TotalPoints(method);
  iVar2 = 0;
  if (0 < 0x14 - iVar1) {
    iVar2 = 0x14 - iVar1;
  }
  return iVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$SyncAll
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncAll (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5dbb1c0

void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncAll
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Settings_AbilitySettings_o *pSVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  bool bVar2;
  int32_t iVar3;
  System_String_o *value;
  Gisketch_Aottg2UI_GisketchUIRoot_o *method_00;
  MethodInfo *in_R8;
  Settings_IntSetting_o *setting;
  int local_2c;
  
  if (Il2CppMethodInitialized_07548153 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-bomb-radius");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-bomb-cooldown");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-bomb-speed");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-bomb-unused-points.value");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-bomb-range");
    Il2CppMethodInitialized_07548153 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
label_05dbb400:
      ThrowNullReferenceException();
    }
    if ((root->fields)._State_k__BackingField != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->AbilitySettings;
      if (pSVar1 == (Settings_AbilitySettings_o *)0x0) {
        setting = (Settings_IntSetting_o *)0x0;
        Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncRow
                  (root,"settings-ability-bomb-radius",(Settings_IntSetting_o *)0x0,0,in_R8);
        Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncRow
                  (root,"settings-ability-bomb-range",(Settings_IntSetting_o *)0x0,1,in_R8);
        Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncRow
                  (root,"settings-ability-bomb-speed",(Settings_IntSetting_o *)0x0,2,in_R8);
      }
      else {
        Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncRow
                  (root,"settings-ability-bomb-radius",(pSVar1->fields).BombRadius,0,in_R8);
        Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncRow
                  (root,"settings-ability-bomb-range",(pSVar1->fields).BombRange,1,in_R8);
        Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncRow
                  (root,"settings-ability-bomb-speed",(pSVar1->fields).BombSpeed,2,in_R8);
        setting = (pSVar1->fields).BombCooldown;
      }
      method_00 = root;
      Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncRow
                (root,"settings-ability-bomb-cooldown",setting,3,in_R8);
      __this = (root->fields)._State_k__BackingField;
      iVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__TotalPoints((MethodInfo *)method_00);
      local_2c = 0x14 - iVar3;
      if (0x14 - iVar3 < 1) {
        local_2c = 0;
      }
      value = System_Int32__ToString(&local_2c,(MethodInfo *)0x0);
      if (__this == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) goto label_05dbb400;
      Gisketch_Aottg2UI_State_GisketchUIState__Set(__this,"settings-ability-bomb-unused-points.value",value,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
      }
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SyncRow
                (root,"settings-ability-bomb-radius",(MethodInfo *)0x0);
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SyncRow
                (root,"settings-ability-bomb-range",(MethodInfo *)0x0);
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SyncRow
                (root,"settings-ability-bomb-speed",(MethodInfo *)0x0);
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SyncRow
                (root,"settings-ability-bomb-cooldown",(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$SyncRow
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncRow (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* id, Settings_IntSetting_o* setting, int32_t kind, const MethodInfo* method);
// 0x5dbbb40
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dbbcb6: jmp 0x5dbbdb8
// asm:   0x5dbbcbb: lea rax, [rip + 0x1515ad6]  ; "0"
// asm:   0x5dbbcc2: mov rdx, qword ptr [rax]
// asm:   0x5dbbcc5: test rbx, rbx

void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncRow
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *id,Settings_IntSetting_o *setting,
               int32_t kind,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  int32_t iVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  MethodInfo *method_00;
  bool bVar6;
  MethodInfo *method_01;
  MethodInfo **method_02;
  int32_t local_44;
  Gisketch_Aottg2UI_GisketchUIRoot_o *local_40;
  MethodInfo *local_38;
  
  if (Il2CppMethodInitialized_07548154 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_07548154 = '\x01';
  }
  local_44 = 0;
  if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    pGVar1 = (root->fields)._State_k__BackingField;
    local_40 = root;
    if (Il2CppMethodInitialized_07548155 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&".label");
      Il2CppMethodInitialized_07548155 = '\x01';
    }
    method_01 = (MethodInfo *)".label";
    local_38 = (MethodInfo *)id;
    pSVar4 = System_String__Concat_52f0320(id,".label",(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0754814c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&")");
      il2cpp_codegen_initialize_runtime_metadata(&" (");
      Il2CppMethodInitialized_0754814c = '\x01';
    }
    pSVar5 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__StatLabel(kind,method_01);
    str2 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__StatValue(setting,kind,method_00);
    pSVar5 = System_String__Concat_5302810
                       (pSVar5," (",str2,")",(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar1,pSVar4,pSVar5,(MethodInfo *)0x0);
      method_02 = (MethodInfo **)local_38;
      pGVar2 = local_40;
      pGVar1 = (local_40->fields)._State_k__BackingField;
      if (Il2CppMethodInitialized_07548156 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&".value");
        Il2CppMethodInitialized_07548156 = '\x01';
      }
      pSVar5 = System_String__Concat_52f0320
                         ((System_String_o *)method_02,".value",(MethodInfo *)0x0);
      pSVar4 = "0";
      if (setting != (Settings_IntSetting_o *)0x0) {
        local_44 = (setting->fields)._value;
        pSVar4 = System_Int32__ToString(&local_44,(MethodInfo *)0x0);
      }
      if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar1,pSVar5,pSVar4,(MethodInfo *)0x0);
        pGVar1 = (pGVar2->fields)._State_k__BackingField;
        if (Il2CppMethodInitialized_07548157 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&".minus.enabled");
          Il2CppMethodInitialized_07548157 = '\x01';
        }
        bVar6 = false;
        pSVar4 = System_String__Concat_52f0320
                           ((System_String_o *)method_02,".minus.enabled",(MethodInfo *)0x0);
        if (setting != (Settings_IntSetting_o *)0x0) {
          bVar6 = (setting->fields).MinValue < (setting->fields)._value;
        }
        if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar1,pSVar4,bVar6,(MethodInfo *)0x0);
          pGVar1 = (pGVar2->fields)._State_k__BackingField;
          if (Il2CppMethodInitialized_07548158 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&".plus.enabled");
            Il2CppMethodInitialized_07548158 = '\x01';
          }
          pSVar4 = System_String__Concat_52f0320
                             ((System_String_o *)method_02,".plus.enabled",(MethodInfo *)0x0);
          if (g_data_07548151 == '\0') {
            method_02 = &MethodInfo_Settings_TypedSetting_int_get_Value;
            il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
            g_data_07548151 = '\x01';
          }
          if ((setting == (Settings_IntSetting_o *)0x0) ||
             ((setting->fields).MaxValue <= (setting->fields)._value)) {
            bVar6 = false;
          }
          else {
            iVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__TotalPoints
                              ((MethodInfo *)method_02);
            bVar6 = iVar3 < 0x14;
          }
          if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
            Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar1,pSVar4,bVar6,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$LabelKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__LabelKey (System_String_o* id, const MethodInfo* method);
// 0x5dbb130

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__LabelKey(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07548155 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".label");
    Il2CppMethodInitialized_07548155 = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320(id,".label",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$ValueKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__ValueKey (System_String_o* id, const MethodInfo* method);
// 0x5dbbdf0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__ValueKey(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07548156 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".value");
    Il2CppMethodInitialized_07548156 = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320(id,".value",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$MinusEnabledKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__MinusEnabledKey (System_String_o* id, const MethodInfo* method);
// 0x5dbbe30

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__MinusEnabledKey
          (System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07548157 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".minus.enabled");
    Il2CppMethodInitialized_07548157 = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320(id,".minus.enabled",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$PlusEnabledKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__PlusEnabledKey (System_String_o* id, const MethodInfo* method);
// 0x5dbbe70

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__PlusEnabledKey
          (System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07548158 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".plus.enabled");
    Il2CppMethodInitialized_07548158 = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320(id,".plus.enabled",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$<BuildStepper>b__16_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___BuildStepper_b__16_0 (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x5dbbeb0

void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___BuildStepper_b__16_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  int32_t iVar2;
  System_Action_GisketchActionContext__o *pSVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  System_String_o *id;
  bool bVar9;
  MethodInfo **ppMVar10;
  System_Nullable_bool__Fields aSStack_40 [4];
  System_Nullable_bool__Fields aSStack_38 [2];
  int32_t iStack_34;
  
  if (Il2CppMethodInitialized_07548159 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_BuildStepper_b__16_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_BuildStepper_b__16_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"+");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"settingStepperValue");
    il2cpp_codegen_initialize_runtime_metadata(&"-minus");
    il2cpp_codegen_initialize_runtime_metadata(&"-plus");
    il2cpp_codegen_initialize_runtime_metadata(&"-value");
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_07548159 = '\x01';
  }
  iStack_34 = 0;
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (pSVar3,(Il2CppObject *)__this,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_BuildStepper_b__16_1,
             (MethodInfo_4A803E0 *)0x0);
  pSVar4 = System_String__Concat_52f0320((__this->fields)._id,"-minus",(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    bVar9 = false;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button_5265860
                       (row,5,"-",pSVar3,pSVar4,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    pSVar1 = (__this->fields)._setting;
    if (pSVar1 != (Settings_IntSetting_o *)0x0) {
      bVar9 = (pSVar1->fields).MinValue < (pSVar1->fields)._value;
    }
    aSStack_38[0].hasValue = false;
    aSStack_38[0].value = false;
    System_Nullable_bool____ctor
              ((System_Nullable_bool__o *)aSStack_38,bVar9,
               (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).enabled.fields = aSStack_38[0];
      pGVar6 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar6,(MethodInfo *)0x0);
      pSVar4 = (__this->fields)._id;
      if (Il2CppMethodInitialized_07548157 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&".minus.enabled");
        Il2CppMethodInitialized_07548157 = '\x01';
      }
      pSVar4 = System_String__Concat_52f0320(pSVar4,".minus.enabled",(MethodInfo *)0x0);
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (pGVar6->fields).enabled = pSVar4;
        Il2CppCodeGenWriteBarrier(&(pGVar6->fields).enabled);
        (pGVar5->fields).bind = pGVar6;
        Il2CppCodeGenWriteBarrier(&(pGVar5->fields).bind);
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(54.0,(MethodInfo *)0x0);
        pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        (pGVar5->fields).layout = pGVar8;
        Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout);
        pSVar1 = (__this->fields)._setting;
        if (pSVar1 == (Settings_IntSetting_o *)0x0) {
          pSVar4 = "0";
        }
        else {
          iStack_34 = (pSVar1->fields)._value;
          pSVar4 = System_Int32__ToString(&iStack_34,(MethodInfo *)0x0);
        }
        id = System_String__Concat_52f0320((__this->fields)._id,"-value",(MethodInfo *)0x0);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                           (row,pSVar4,"settingStepperValue",id,(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pGVar6 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar6,(MethodInfo *)0x0);
        pSVar4 = (__this->fields)._id;
        if (Il2CppMethodInitialized_07548156 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&".value");
          Il2CppMethodInitialized_07548156 = '\x01';
        }
        pSVar4 = System_String__Concat_52f0320(pSVar4,".value",(MethodInfo *)0x0);
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
          (pGVar6->fields).text = pSVar4;
          Il2CppCodeGenWriteBarrier(&(pGVar6->fields).text);
          if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar5->fields).bind = pGVar6;
            Il2CppCodeGenWriteBarrier(&(pGVar5->fields).bind);
            pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(70.0,(MethodInfo *)0x0);
            pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                               ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                ,0.0,0.0,0.0,(MethodInfo *)0x0);
            (pGVar5->fields).layout = pGVar8;
            Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout);
            pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
            System_Action_GisketchActionContext____ctor
                      (pSVar3,(Il2CppObject *)__this,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_BuildStepper_b__16_2
                       ,(MethodInfo_4A803E0 *)0x0);
            pSVar4 = System_String__Concat_52f0320
                               ((__this->fields)._id,"-plus",(MethodInfo *)0x0);
            pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button_5265860
                               (row,5,"+",pSVar3,pSVar4,(System_String_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                                (System_String_o *)0x0,(MethodInfo *)0x0);
            pSVar1 = (__this->fields)._setting;
            if (g_data_07548151 == '\0') {
              ppMVar10 = &MethodInfo_Settings_TypedSetting_int_get_Value;
              il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
              g_data_07548151 = '\x01';
              row = (Gisketch_Aottg2UI_Code_AottgUi_o *)ppMVar10;
            }
            if ((pSVar1 == (Settings_IntSetting_o *)0x0) ||
               ((pSVar1->fields).MaxValue <= (pSVar1->fields)._value)) {
              bVar9 = false;
            }
            else {
              iVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__TotalPoints((MethodInfo *)row)
              ;
              bVar9 = iVar2 < 0x14;
            }
            aSStack_40[0].hasValue = false;
            aSStack_40[0].value = false;
            System_Nullable_bool____ctor
                      ((System_Nullable_bool__o *)aSStack_40,bVar9,
                       (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
            if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (pGVar5->fields).enabled.fields = aSStack_40[0];
              pGVar6 = il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
              Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar6,(MethodInfo *)0x0);
              pSVar4 = (__this->fields)._id;
              if (Il2CppMethodInitialized_07548158 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&".plus.enabled");
                Il2CppMethodInitialized_07548158 = '\x01';
              }
              pSVar4 = System_String__Concat_52f0320(pSVar4,".plus.enabled",(MethodInfo *)0x0);
              if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
                (pGVar6->fields).enabled = pSVar4;
                Il2CppCodeGenWriteBarrier(&(pGVar6->fields).enabled);
                (pGVar5->fields).bind = pGVar6;
                Il2CppCodeGenWriteBarrier(&(pGVar5->fields).bind);
                pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(54.0,(MethodInfo *)0x0);
                pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                   ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                    (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                    ,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
                (pGVar5->fields).layout = pGVar8;
                Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$<BuildStepper>b__16_1
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___BuildStepper_b__16_1 (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5dbc520

void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___BuildStepper_b__16_1
               (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  uint uVar1;
  Settings_IntSetting_o *__this_00;
  uint uVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  uint value;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_0754814f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_0754814f = '\x01';
  }
  __this_00 = (__this->fields)._setting;
  if (__this_00 == (Settings_IntSetting_o *)0x0) {
    return;
  }
  uVar1 = (__this_00->fields).MinValue;
  value = (__this_00->fields).MaxValue;
  uVar2 = (__this_00->fields)._value - 1;
  if ((int)uVar2 < (int)value) {
    value = uVar2;
  }
  if ((int)uVar2 < (int)uVar1) {
    value = uVar1;
  }
  pMVar3 = (MethodInfo *)(ulong)value;
  Settings_TypedSetting_int___set_Value
            ((Settings_TypedSetting_int__o *)__this_00,value,
             (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
    Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncAll
              ((Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0,pMVar3);
    return;
  }
  pMVar3 = MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot;
  root = UnityEngine_GameObject__GetComponentInParent_object_
                   (context.fields.GameObject,
                    (MethodInfo_353BB40 *)
                    MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncAll(root,pMVar3);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$<BuildStepper>b__16_2
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___BuildStepper_b__16_2 (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5dbc5d0

void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___BuildStepper_b__16_2
               (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__Change(__this,context,1,in_RDX);
  return;
}


