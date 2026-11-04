// Type: Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgBombStatSettingRow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, System_String_o* id, System_String_o* label, Settings_IntSetting_o* setting, int32_t kind, const MethodInfo* method);
// 0x1821ebc70

void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,System_String_o *id,
               System_String_o *label,Settings_IntSetting_o *setting,int32_t kind,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id,id);
  (__this->fields)._label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label,label);
  (__this->fields)._setting = setting;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._setting,setting);
  (__this->fields)._kind = kind;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__Build (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1821ea620

void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  int32_t layoutMode;
  System_String_o *id;
  System_String_o *searchTitle;
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *label;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *labelBindKey;
  DG_Tweening_Core_DOGetter_Vector2__o *__this_01;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this_02;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o local_98 [2];
  
  if (Il2CppMethodInitialized_18434706f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_BuildStepper);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_DirtyValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string);
    Il2CppMethodInitialized_18434706f = '\x01';
  }
  id = (__this->fields)._id;
  label = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__LabelText_21eaaa0
                    ((__this->fields)._label,(__this->fields)._setting,(__this->fields)._kind,
                     (MethodInfo *)0x0);
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_BuildStepper,
             (MethodInfo *)0x0);
  searchTitle = (__this->fields)._label;
  pSVar1 = (__this->fields)._id;
  if (Il2CppMethodInitialized_184347079 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".label");
    Il2CppMethodInitialized_184347079 = '\x01';
  }
  labelBindKey = System_String__Concat_1969e50(pSVar1,".label",(MethodInfo *)0x0);
  pSVar2 = (__this->fields)._searchContext.fields.ScreenTitle;
  pSVar3 = (__this->fields)._searchContext.fields.CategoryId;
  pSVar4 = (__this->fields)._searchContext.fields.CategoryTitle;
  pSVar5 = (__this->fields)._searchContext.fields.GroupId;
  pSVar1 = (__this->fields)._searchContext.fields.GroupTitle;
  __this_01 = (DG_Tweening_Core_DOGetter_Vector2__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string);
  System_Func_object____ctor
            (__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_DirtyValue,
             (MethodInfo_1387740 *)0x0);
  layoutMode = (__this->fields)._layoutMode;
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame);
  local_98[0].fields.ScreenTitle = pSVar2;
  local_98[0].fields.CategoryId = pSVar3;
  local_98[0].fields.CategoryTitle = pSVar4;
  local_98[0].fields.GroupId = pSVar5;
  local_98[0].fields.GroupTitle = pSVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___ctor
            (__this_02,id,label,220.0,(System_Action_AottgUi__o *)__this_00,(System_String_o *)0x0,searchTitle
             ,(System_String_o *)0x0,(System_String_o *)0x0,(System_Nullable_float__o)0x0,
             (System_String_o *)0x0,(System_String_o *)0x0,labelBindKey,local_98,
             (System_Func_string__o *)__this_01,(System_String_o *)0x0,(System_String_o *)0x0,layoutMode,
             (MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_02,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$ApplySearchContext
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__ApplySearchContext (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, const MethodInfo* method);
// 0x1821ea430

void
Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__ApplySearchContext(Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, MethodInfo* method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  
  pSVar1 = (context->fields).CategoryId;
  pSVar2 = (context->fields).CategoryTitle;
  pSVar3 = (context->fields).GroupId;
  (__this->fields)._searchContext.fields.ScreenTitle = (context->fields).ScreenTitle;
  (__this->fields)._searchContext.fields.CategoryId = pSVar1;
  pSVar1 = (context->fields).GroupTitle;
  (__this->fields)._searchContext.fields.CategoryTitle = pSVar2;
  (__this->fields)._searchContext.fields.GroupId = pSVar3;
  (__this->fields)._searchContext.fields.GroupTitle = pSVar1;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields)._searchContext,(void *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$ApplyLayoutMode
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__ApplyLayoutMode (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, int32_t mode, const MethodInfo* method);
// 0x181adfeb0

void
Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__ApplyLayoutMode(Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, int32_t mode, MethodInfo* method)

{
  (__this->fields)._layoutMode = value;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncState (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x1821eb3a0

void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncState
               (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncAll(root,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$BuildStepper
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__BuildStepper (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x1821ea460

void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__BuildStepper
               (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347070 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_BuildStepper_b__17_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"-bomb-stepper");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_184347070 = '\x01';
  }
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_BuildStepper_b__17_0,
             (MethodInfo *)0x0);
  id = System_String__Concat_1969e50((__this->fields)._id,"-bomb-stepper",(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(220.0,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","Center","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,8.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (control,"clear",(System_Action_AottgUi__o *)__this_00,id,layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$LabelText
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__LabelText (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, const MethodInfo* method);
// 0x1821eab20

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__LabelText
          (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__LabelText_21eaaa0
                     ((__this->fields)._label,(__this->fields)._setting,(__this->fields)._kind,
                      (MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$LabelText
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__LabelText (System_String_o* label, Settings_IntSetting_o* setting, int32_t kind, const MethodInfo* method);
// 0x1821eaaa0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__LabelText_21eaaa0
          (System_String_o *label,Settings_IntSetting_o *setting,int32_t kind,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347071 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&")");
    il2cpp_codegen_initialize_runtime_metadata(&" (");
    Il2CppMethodInitialized_184347071 = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__StatValue(setting,kind,(MethodInfo *)0x0)
  ;
  pSVar1 = System_String__Concat_1969590
                     (label," (",pSVar1,")",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$StatValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__StatValue (Settings_IntSetting_o* setting, int32_t kind, const MethodInfo* method);
// 0x1821eabc0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__StatValue
          (Settings_IntSetting_o *setting,int32_t kind,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str2;
  int iVar2;
  System_String_o *str3;
  float fVar3;
  float pointsSpent;
  float local_res8 [2];
  
  if (Il2CppMethodInitialized_184347072 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"k");
    il2cpp_codegen_initialize_runtime_metadata(&"0.##");
    il2cpp_codegen_initialize_runtime_metadata(&" / ");
    il2cpp_codegen_initialize_runtime_metadata(&"m");
    il2cpp_codegen_initialize_runtime_metadata(&"s");
    Il2CppMethodInitialized_184347072 = '\x01';
  }
  local_res8[0] = 0.0;
  if (setting == (Settings_IntSetting_o *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (setting->fields)._value;
  }
  fVar3 = (float)iVar2;
  pointsSpent = (float)iVar2;
  if (kind == 0) {
    fVar3 = BombUtil__GetBombRadius(fVar3,5.4,7.4,7.0,(MethodInfo *)0x0);
    local_res8[0] = BombUtil__GetOldRadiusCost(fVar3,(MethodInfo *)0x0);
    pSVar1 = System_Single__ToString_1b49f60(local_res8,"0.##",(MethodInfo *)0x0);
    local_res8[0] = BombUtil__GetBombRadius(pointsSpent,5.4,7.4,7.0,(MethodInfo *)0x0);
  }
  else {
    if (kind != 1) {
      if (kind == 2) {
        fVar3 = BombUtil__GetBombSpeed(fVar3,3.0,10.5,10.5,(MethodInfo *)0x0);
        local_res8[0] = BombUtil__GetOldRangeCost(fVar3,(MethodInfo *)0x0);
        pSVar1 = System_Single__ToString_1b49f60(local_res8,"0.##",(MethodInfo *)0x0);
        local_res8[0] = BombUtil__GetBombSpeed(pointsSpent,3.0,10.5,10.5,(MethodInfo *)0x0);
        local_res8[0] = local_res8[0] / 100.0;
        str2 = System_Single__ToString_1b49f60(local_res8,"0.##",(MethodInfo *)0x0);
        str3 = "k";
      }
      else {
        fVar3 = BombUtil__GetBombCooldown(fVar3,4.0,7.0,7.0,(MethodInfo *)0x0);
        local_res8[0] = BombUtil__GetOldCooldownCost(fVar3,(MethodInfo *)0x0);
        pSVar1 = System_Single__ToString_1b49f60(local_res8,"0.##",(MethodInfo *)0x0);
        local_res8[0] = BombUtil__GetBombCooldown(pointsSpent,4.0,7.0,7.0,(MethodInfo *)0x0);
        str2 = System_Single__ToString_1b49f60(local_res8,"0.##",(MethodInfo *)0x0);
        str3 = "s";
      }
      goto label_1821eae67;
    }
    fVar3 = BombUtil__GetBombSpeed(fVar3,0.0,4.0,7.0,(MethodInfo *)0x0);
    local_res8[0] = BombUtil__GetOldRangeCost(fVar3,(MethodInfo *)0x0);
    pSVar1 = System_Single__ToString_1b49f60(local_res8,"0.##",(MethodInfo *)0x0);
    local_res8[0] = BombUtil__GetBombSpeed(pointsSpent,0.0,4.0,7.0,(MethodInfo *)0x0);
  }
  str2 = System_Single__ToString_1b49f60(local_res8,"0.##",(MethodInfo *)0x0);
  str3 = "m";
label_1821eae67:
  pSVar1 = System_String__Concat_1969590(pSVar1," / ",str2,str3,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$Change
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__Change (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, int32_t delta, const MethodInfo* method);
// 0x1821ea8e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821ea9cf: mov rdi, qword ptr [rsp + 0x30]

void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__Change
               (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,int32_t delta,MethodInfo *method)

{
  int iVar1;
  Settings_IntSetting_o *pSVar2;
  UnityEngine_GameObject_o *__this_00;
  int32_t iVar3;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  int iVar4;
  int value;
  
  if (Il2CppMethodInitialized_184347073 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184347073 = '\x01';
  }
  if ((__this->fields)._setting != (Settings_IntSetting_o *)0x0) {
    pSVar2 = (__this->fields)._setting;
    iVar1 = (pSVar2->fields).MinValue;
    iVar4 = (pSVar2->fields)._value + delta;
    if (((iVar4 < iVar1) || (value = (pSVar2->fields).MaxValue, iVar4 <= value)) &&
       (value = iVar4, iVar4 < iVar1)) {
      value = iVar1;
    }
    if (0 < delta) {
      if (Il2CppMethodInitialized_184347075 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
        Il2CppMethodInitialized_184347075 = '\x01';
      }
      if ((pSVar2->fields).MaxValue <= (pSVar2->fields)._value) {
        return;
      }
      iVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__TotalPoints((MethodInfo *)0x0);
      if (0x13 < iVar3) {
        return;
      }
    }
    pSVar2 = (__this->fields)._setting;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar2,value,
               (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    __this_00 = (context->fields).GameObject;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
      root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
    }
    else {
      root = UnityEngine_GameObject__GetComponentInParent_object_
                       (__this_00,
                        (MethodInfo_6F53B0 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    }
    Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncAll(root,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$DirtyValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__DirtyValue (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, const MethodInfo* method);
// 0x1821ea9f0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__DirtyValue
          (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t local_res8 [8];
  
  if (Il2CppMethodInitialized_184347074 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184347074 = '\x01';
  }
  if ((__this->fields)._setting != (Settings_IntSetting_o *)0x0) {
    local_res8[0] = (((__this->fields)._setting)->fields)._value;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    return pSVar1;
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$CanIncrement
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__CanIncrement (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, const MethodInfo* method);
// 0x1821ea840

bool Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__CanIncrement
               (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  int32_t iVar2;
  
  pSVar1 = (__this->fields)._setting;
  if (Il2CppMethodInitialized_184347075 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184347075 = '\x01';
  }
  if ((pSVar1 != (Settings_IntSetting_o *)0x0) && ((pSVar1->fields)._value < (pSVar1->fields).MaxValue)) {
    iVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__TotalPoints((MethodInfo *)0x0);
    return iVar2 < 0x14;
  }
  return false;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$CanIncrement
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__CanIncrement (Settings_IntSetting_o* setting, const MethodInfo* method);
// 0x1821ea890

bool Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__CanIncrement_21ea890
               (Settings_IntSetting_o *setting,MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_184347075 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184347075 = '\x01';
  }
  if ((setting != (Settings_IntSetting_o *)0x0) && ((setting->fields)._value < (setting->fields).MaxValue)) {
    iVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__TotalPoints((MethodInfo *)0x0);
    return iVar1 < 0x14;
  }
  return false;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$TotalPoints
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__TotalPoints (const MethodInfo* method);
// 0x1821eb3b0

int32_t Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__TotalPoints(MethodInfo *method)

{
  Settings_AbilitySettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  
  if (Il2CppMethodInitialized_184347076 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184347076 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->AbilitySettings;
  if (pSVar1 != (Settings_AbilitySettings_o *)0x0) {
    pSVar2 = (pSVar1->fields).BombRadius;
    if ((((pSVar2 != (Settings_IntSetting_o *)0x0) &&
         (pSVar3 = (pSVar1->fields).BombRange, pSVar3 != (Settings_IntSetting_o *)0x0)) &&
        (pSVar4 = (pSVar1->fields).BombSpeed, pSVar4 != (Settings_IntSetting_o *)0x0)) &&
       (pSVar5 = (pSVar1->fields).BombCooldown, pSVar5 != (Settings_IntSetting_o *)0x0)) {
      return (pSVar5->fields)._value + (pSVar4->fields)._value + (pSVar3->fields)._value +
             (pSVar2->fields)._value;
    }
    ThrowNullReferenceException();
  }
  return 0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$UnusedPoints
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__UnusedPoints (const MethodInfo* method);
// 0x1821ebc10

int32_t Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__UnusedPoints(MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  
  iVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__TotalPoints((MethodInfo *)0x0);
  iVar2 = 0;
  if (-1 < 0x14 - iVar1) {
    iVar2 = 0x14 - iVar1;
  }
  return iVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$SyncAll
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncAll (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x1821eaea0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821eb147: mov rdi, qword ptr [rsp + 0x48]

void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncAll
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Settings_AbilitySettings_o *pSVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  bool bVar2;
  int32_t iVar3;
  System_String_o *value;
  Settings_IntSetting_o *setting;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184347077 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-bomb-radius");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-bomb-cooldown");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-bomb-speed");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-bomb-unused-points.value");
    il2cpp_codegen_initialize_runtime_metadata(&"Bomb Range");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-bomb-range");
    il2cpp_codegen_initialize_runtime_metadata(&"Bomb Cooldown");
    il2cpp_codegen_initialize_runtime_metadata(&"Bomb Radius");
    il2cpp_codegen_initialize_runtime_metadata(&"Bomb Speed");
    Il2CppMethodInitialized_184347077 = '\x01';
  }
  setting = (Settings_IntSetting_o *)0x0;
  local_res8[0] = 0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
label_1821eb157:
      ThrowNullReferenceException();
    }
    if ((root->fields)._State_k__BackingField != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->AbilitySettings;
      if (pSVar1 == (Settings_AbilitySettings_o *)0x0) {
        Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncRow
                  (root,"settings-ability-bomb-radius","Bomb Radius",(Settings_IntSetting_o *)0x0,0,
                   (MethodInfo *)0x0);
        Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncRow
                  (root,"settings-ability-bomb-range","Bomb Range",(Settings_IntSetting_o *)0x0,1,
                   (MethodInfo *)0x0);
        Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncRow
                  (root,"settings-ability-bomb-speed","Bomb Speed",(Settings_IntSetting_o *)0x0,2,
                   (MethodInfo *)0x0);
      }
      else {
        Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncRow
                  (root,"settings-ability-bomb-radius","Bomb Radius",(pSVar1->fields).BombRadius,0,
                   (MethodInfo *)0x0);
        Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncRow
                  (root,"settings-ability-bomb-range","Bomb Range",(pSVar1->fields).BombRange,1,
                   (MethodInfo *)0x0);
        Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncRow
                  (root,"settings-ability-bomb-speed","Bomb Speed",(pSVar1->fields).BombSpeed,2,
                   (MethodInfo *)0x0);
        setting = (pSVar1->fields).BombCooldown;
      }
      Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncRow
                (root,"settings-ability-bomb-cooldown","Bomb Cooldown",setting,3,(MethodInfo *)0x0);
      __this = (root->fields)._State_k__BackingField;
      iVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__TotalPoints((MethodInfo *)0x0);
      local_res8[0] = 0;
      if (-1 < 0x14 - iVar3) {
        local_res8[0] = 0x14 - iVar3;
      }
      value = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
      if (__this == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) goto label_1821eb157;
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
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncRow (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* id, System_String_o* label, Settings_IntSetting_o* setting, int32_t kind, const MethodInfo* method);
// 0x1821eb160
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821eb273: mov rax, qword ptr [rip + 0x1efe7d6]  ; "0"

void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncRow
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *id,System_String_o *label,
               Settings_IntSetting_o *setting,int32_t kind,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  bool bVar5;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184347078 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_184347078 = '\x01';
  }
  local_res8[0] = 0;
  if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    pGVar1 = (root->fields)._State_k__BackingField;
    if (Il2CppMethodInitialized_184347079 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&".label");
      Il2CppMethodInitialized_184347079 = '\x01';
    }
    pSVar3 = System_String__Concat_1969e50(id,".label",(MethodInfo *)0x0);
    pSVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__LabelText_21eaaa0
                       (label,setting,kind,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar1,pSVar3,pSVar4,(MethodInfo *)0x0);
      pGVar1 = (root->fields)._State_k__BackingField;
      if (Il2CppMethodInitialized_18434707a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&".value");
        Il2CppMethodInitialized_18434707a = '\x01';
      }
      pSVar4 = System_String__Concat_1969e50(id,".value",(MethodInfo *)0x0);
      pSVar3 = "0";
      if (setting != (Settings_IntSetting_o *)0x0) {
        local_res8[0] = (setting->fields)._value;
        pSVar3 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
      }
      if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar1,pSVar4,pSVar3,(MethodInfo *)0x0);
        pGVar1 = (root->fields)._State_k__BackingField;
        if (Il2CppMethodInitialized_18434707b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&".minus.enabled");
          Il2CppMethodInitialized_18434707b = '\x01';
        }
        pSVar3 = System_String__Concat_1969e50(id,".minus.enabled",(MethodInfo *)0x0);
        if (setting == (Settings_IntSetting_o *)0x0) {
          bVar5 = false;
        }
        else {
          bVar5 = (setting->fields).MinValue < (setting->fields)._value;
        }
        if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar1,pSVar3,bVar5,(MethodInfo *)0x0);
          pGVar1 = (root->fields)._State_k__BackingField;
          if (Il2CppMethodInitialized_18434707c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&".plus.enabled");
            Il2CppMethodInitialized_18434707c = '\x01';
          }
          pSVar3 = System_String__Concat_1969e50(id,".plus.enabled",(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_184347075 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
            Il2CppMethodInitialized_184347075 = '\x01';
          }
          if ((setting == (Settings_IntSetting_o *)0x0) ||
             ((setting->fields).MaxValue <= (setting->fields)._value)) {
            bVar5 = false;
          }
          else {
            iVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__TotalPoints((MethodInfo *)0x0);
            bVar5 = iVar2 < 0x14;
          }
          if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
            Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar1,pSVar3,bVar5,(MethodInfo *)0x0);
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
// 0x1821eaa60

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__LabelKey(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347079 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".label");
    Il2CppMethodInitialized_184347079 = '\x01';
  }
  pSVar1 = System_String__Concat_1969e50(id,".label",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$ValueKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__ValueKey (System_String_o* id, const MethodInfo* method);
// 0x1821ebc30

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__ValueKey(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434707a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".value");
    Il2CppMethodInitialized_18434707a = '\x01';
  }
  pSVar1 = System_String__Concat_1969e50(id,".value",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$MinusEnabledKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__MinusEnabledKey (System_String_o* id, const MethodInfo* method);
// 0x1821eab40

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__MinusEnabledKey
          (System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434707b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".minus.enabled");
    Il2CppMethodInitialized_18434707b = '\x01';
  }
  pSVar1 = System_String__Concat_1969e50(id,".minus.enabled",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$PlusEnabledKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__PlusEnabledKey (System_String_o* id, const MethodInfo* method);
// 0x1821eab80

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__PlusEnabledKey
          (System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434707c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".plus.enabled");
    Il2CppMethodInitialized_18434707c = '\x01';
  }
  pSVar1 = System_String__Concat_1969e50(id,".plus.enabled",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$<BuildStepper>b__17_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___BuildStepper_b__17_0 (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x1821eb440
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821eb59b: mov edx, r15d
// asm:   0x1821eb59e: jmp 0x1821eb5b0
// asm:   0x1821eb758: mov rbx, qword ptr [rip + 0x1efe2f1]  ; "0"

void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___BuildStepper_b__17_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  int32_t iVar2;
  DG_Tweening_Core_DOSetter_Color2__o *pDVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  System_String_o *id;
  bool bVar9;
  System_Nullable_bool__Fields local_res8 [4];
  int32_t local_res10 [2];
  
  if (Il2CppMethodInitialized_18434707d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_BuildStepper_b__17_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_BuildStepper_b__17_2);
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
    Il2CppMethodInitialized_18434707d = '\x01';
  }
  bVar9 = false;
  local_res10[0] = 0;
  pDVar3 = (DG_Tweening_Core_DOSetter_Color2__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (pDVar3,(Il2CppObject *)__this,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_BuildStepper_b__17_1,
             (MethodInfo_1387DC0 *)0x0);
  pSVar4 = System_String__Concat_1969e50((__this->fields)._id,"-minus",(MethodInfo *)0x0);
  if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button_18c6fe0
                     (row,5,"-",(System_Action_GisketchActionContext__o *)pDVar3,pSVar4,
                      (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                      (System_String_o *)0x0,(MethodInfo *)0x0);
  if ((__this->fields)._setting != (Settings_IntSetting_o *)0x0) {
    pSVar1 = (__this->fields)._setting;
    bVar9 = (pSVar1->fields).MinValue < (pSVar1->fields)._value;
  }
  local_res8[0].hasValue = false;
  local_res8[0].value = false;
  System_Nullable_bool____ctor
            ((System_Data_SqlTypes_SqlByte_o *)local_res8,bVar9,MethodInfo_System_Nullable_bool_ctor);
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar5->fields).enabled.fields = local_res8[0];
    pGVar6 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar6,(MethodInfo *)0x0);
    pSVar4 = (__this->fields)._id;
    if (Il2CppMethodInitialized_18434707b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&".minus.enabled");
      Il2CppMethodInitialized_18434707b = '\x01';
    }
    pSVar4 = System_String__Concat_1969e50(pSVar4,".minus.enabled",(MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (pGVar6->fields).enabled = pSVar4;
      Il2CppCodeGenWriteBarrier(&(pGVar6->fields).enabled,pSVar4);
      (pGVar5->fields).bind = pGVar6;
      Il2CppCodeGenWriteBarrier(&(pGVar5->fields).bind,pGVar6);
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(54.0,(MethodInfo *)0x0);
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      (pGVar5->fields).layout = pGVar8;
      Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout,pGVar8);
      pSVar4 = "0";
      if ((__this->fields)._setting != (Settings_IntSetting_o *)0x0) {
        local_res10[0] = (((__this->fields)._setting)->fields)._value;
        pSVar4 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
      }
      id = System_String__Concat_1969e50((__this->fields)._id,"-value",(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (row,pSVar4,"settingStepperValue",id,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar6 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar6,(MethodInfo *)0x0);
      pSVar4 = (__this->fields)._id;
      if (Il2CppMethodInitialized_18434707a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&".value");
        Il2CppMethodInitialized_18434707a = '\x01';
      }
      pSVar4 = System_String__Concat_1969e50(pSVar4,".value",(MethodInfo *)0x0);
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (pGVar6->fields).text = pSVar4;
        Il2CppCodeGenWriteBarrier(&(pGVar6->fields).text,pSVar4);
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar5->fields).bind = pGVar6;
          Il2CppCodeGenWriteBarrier(&(pGVar5->fields).bind,pGVar6);
          pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(70.0,(MethodInfo *)0x0);
          pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,0.0,(MethodInfo *)0x0);
          (pGVar5->fields).layout = pGVar8;
          Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout,pGVar8);
          pDVar3 = (DG_Tweening_Core_DOSetter_Color2__o *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
          System_Action_GisketchActionContext____ctor
                    (pDVar3,(Il2CppObject *)__this,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_BuildStepper_b__17_2,
                     (MethodInfo_1387DC0 *)0x0);
          pSVar4 = System_String__Concat_1969e50((__this->fields)._id,"-plus",(MethodInfo *)0x0)
          ;
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button_18c6fe0
                             (row,5,"+",(System_Action_GisketchActionContext__o *)pDVar3,
                              pSVar4,(System_String_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                              (MethodInfo *)0x0);
          pSVar1 = (__this->fields)._setting;
          if (Il2CppMethodInitialized_184347075 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
            Il2CppMethodInitialized_184347075 = '\x01';
          }
          if ((pSVar1 == (Settings_IntSetting_o *)0x0) ||
             ((pSVar1->fields).MaxValue <= (pSVar1->fields)._value)) {
            bVar9 = false;
          }
          else {
            iVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__TotalPoints((MethodInfo *)0x0);
            bVar9 = iVar2 < 0x14;
          }
          local_res8[0].hasValue = false;
          local_res8[0].value = false;
          System_Nullable_bool____ctor
                    ((System_Data_SqlTypes_SqlByte_o *)local_res8,bVar9,MethodInfo_System_Nullable_bool_ctor);
          if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar5->fields).enabled.fields = local_res8[0];
            pGVar6 = il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
            Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                      ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar6,(MethodInfo *)0x0);
            pSVar4 = (__this->fields)._id;
            if (Il2CppMethodInitialized_18434707c == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&".plus.enabled");
              Il2CppMethodInitialized_18434707c = '\x01';
            }
            pSVar4 = System_String__Concat_1969e50(pSVar4,".plus.enabled",(MethodInfo *)0x0);
            if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
              (pGVar6->fields).enabled = pSVar4;
              Il2CppCodeGenWriteBarrier(&(pGVar6->fields).enabled,pSVar4);
              (pGVar5->fields).bind = pGVar6;
              Il2CppCodeGenWriteBarrier(&(pGVar5->fields).bind,pGVar6);
              pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(54.0,(MethodInfo *)0x0);
              pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                 ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                  (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                                  0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
              (pGVar5->fields).layout = pGVar8;
              Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout,pGVar8);
              return;
            }
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$<BuildStepper>b__17_1
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___BuildStepper_b__17_1 (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1821ebb30

void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___BuildStepper_b__17_1
               (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  int iVar1;
  Settings_IntSetting_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  int iVar2;
  int value;
  
  if (Il2CppMethodInitialized_184347073 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184347073 = '\x01';
  }
  if ((__this->fields)._setting != (Settings_IntSetting_o *)0x0) {
    __this_00 = (__this->fields)._setting;
    iVar1 = (__this_00->fields).MinValue;
    iVar2 = (__this_00->fields)._value + -1;
    if (((iVar2 < iVar1) || (value = (__this_00->fields).MaxValue, iVar2 <= value)) &&
       (value = iVar2, iVar2 < iVar1)) {
      value = iVar1;
    }
    __this_01 = (context->fields).GameObject;
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)__this_00,value,
               (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
      root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
    }
    else {
      root = UnityEngine_GameObject__GetComponentInParent_object_
                       (__this_01,
                        (MethodInfo_6F53B0 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    }
    Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__SyncAll(root,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$<BuildStepper>b__17_2
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___BuildStepper_b__17_2 (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1821ebbe0

void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___BuildStepper_b__17_2
               (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  local_28.fields.ElementId = (context->fields).ElementId;
  local_28.fields.GameObject = (context->fields).GameObject;
  local_28.fields.Node = (context->fields).Node;
  local_28.fields.InputSource = (context->fields).InputSource;
  local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
  Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__Change(__this,&local_28,1,(MethodInfo *)0x0);
  return;
}


