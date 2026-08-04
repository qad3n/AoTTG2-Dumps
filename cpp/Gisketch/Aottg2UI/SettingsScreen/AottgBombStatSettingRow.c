// Type: Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgBombStatSettingRow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, System_String_o* id, System_String_o* label, Settings_IntSetting_o* setting, int32_t kind, const MethodInfo* method);
// 0x445c0c0

void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,System_String_o *id,
               System_String_o *label,Settings_IntSetting_o *setting,int32_t kind,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  il2cpp_runtime_helper_022b4080(&__this->fields,id);
  (__this->fields)._label = label;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._label,label);
  (__this->fields)._setting = setting;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._setting,setting);
  (__this->fields)._kind = kind;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__Build (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x445c120

void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *buildControl;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this_01;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  method_00 = (MethodInfo *)ui;
  if (g_data_057ae74e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildStepper);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingRowFrame);
    g_data_057ae74e = '\x01';
  }
  method_01 = (MethodInfo *)(__this->fields)._id;
  if (g_data_057ae750 == '\0') {
    il2cpp_runtime_helper_023445d0(&")");
    il2cpp_runtime_helper_023445d0(&" (");
    g_data_057ae750 = '\x01';
  }
  pSVar2 = (__this->fields)._label;
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__StatValue(__this,method_00);
  pSVar2 = System_String__Concat_3af7470(pSVar2," (",pSVar1,")",(MethodInfo *)0x0);
  buildControl = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  __this_00 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgSettingRowFrame);
  __this_01 = __this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___ctor
            (__this_00,(System_String_o *)method_01,pSVar2,220.0,buildControl,(System_String_o *)0x0,
             (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
             (System_Nullable_float__o)0x0,in_stack_ffffffffffffffc0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae750 == '\0') {
    il2cpp_runtime_helper_023445d0(&")");
    il2cpp_runtime_helper_023445d0(&" (");
    g_data_057ae750 = '\x01';
  }
  pSVar2 = (__this_01->fields)._label;
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__StatValue
                     ((Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *)__this_01,method_01);
  System_String__Concat_3af7470(pSVar2," (",pSVar1,")",(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$BuildStepper
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__BuildStepper (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x445c2d0

void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__BuildStepper
               (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  int iVar1;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *pSVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined1 auStackY_90 [4];
  float fStackY_8c;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGStackY_88;
  System_String_Fields SStackY_80;
  
  if (g_data_057ae74f == '\0') {
    SStackY_80._stringLength = 0x445c2f6;
    SStackY_80._firstChar = 0;
    SStackY_80._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    SStackY_80._stringLength = 0x445c302;
    SStackY_80._firstChar = 0;
    SStackY_80._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildStepper_b__7_0);
    SStackY_80._stringLength = 0x445c30e;
    SStackY_80._firstChar = 0;
    SStackY_80._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"clear");
    SStackY_80._stringLength = 0x445c31a;
    SStackY_80._firstChar = 0;
    SStackY_80._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"Center");
    SStackY_80._stringLength = 0x445c326;
    SStackY_80._firstChar = 0;
    SStackY_80._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"-bomb-stepper");
    SStackY_80._stringLength = 0x445c332;
    SStackY_80._firstChar = 0;
    SStackY_80._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"Row");
    g_data_057ae74f = '\x01';
  }
  SStackY_80._stringLength = 0x445c348;
  SStackY_80._firstChar = 0;
  SStackY_80._6_2_ = 0;
  build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  SStackY_80._stringLength = 0x445c362;
  SStackY_80._firstChar = 0;
  SStackY_80._6_2_ = 0;
  System_Action_object____ctor();
  SStackY_80._stringLength = 0x445c377;
  SStackY_80._firstChar = 0;
  SStackY_80._6_2_ = 0;
  pSVar2 = System_String__Concat_3ae5ba0((__this->fields)._id,"-bomb-stepper",(MethodInfo *)0x0);
  SStackY_80._stringLength = 0x445c389;
  SStackY_80._firstChar = 0;
  SStackY_80._6_2_ = 0;
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(220.0,(MethodInfo *)0x0);
  SStackY_80._stringLength = 0x445c39b;
  SStackY_80._firstChar = 0;
  SStackY_80._6_2_ = 0;
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  SStackY_80._stringLength = 0x445c429;
  SStackY_80._firstChar = 0;
  SStackY_80._6_2_ = 0;
  pSVar3 = "Row";
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","Center","Center",(System_String_o *)0x0,(System_String_o *)0x0,8.0
                      ,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    SStackY_80._stringLength = 0x445c454;
    SStackY_80._firstChar = 0;
    SStackY_80._6_2_ = 0;
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (control,"clear",build,pSVar2,layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  SStackY_80._stringLength = 0x445c465;
  SStackY_80._firstChar = 0;
  SStackY_80._6_2_ = 0;
  _auStackY_90 = (System_String_c *)il2cpp_runtime_helper_022b2c90();
  pGStackY_88 = width;
  SStackY_80 = (System_String_Fields)control;
  if (g_data_057ae751 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"k");
    il2cpp_runtime_helper_023445d0(&"0.##");
    il2cpp_runtime_helper_023445d0(&" / ");
    il2cpp_runtime_helper_023445d0(&"m");
    il2cpp_runtime_helper_023445d0();
    g_data_057ae751 = '\x01';
  }
  auStackY_90 = (undefined1  [4])0x0;
  if (pSVar3[1].monitor == (void *)0x0) {
    iVar1 = pSVar3[1].fields._stringLength;
    fStackY_8c = 0.0;
  }
  else {
    fStackY_8c = (float)*(int *)((long)pSVar3[1].monitor + 0x14);
    iVar1 = pSVar3[1].fields._stringLength;
  }
  if (iVar1 == 2) {
    fVar5 = BombUtil__GetBombSpeed(fStackY_8c,3.0,10.5,10.5,(MethodInfo *)0x0);
    auStackY_90 = (undefined1  [4])BombUtil__GetOldSpeedCost(fVar5,(MethodInfo *)0x0);
    pSVar3 = System_Single__ToString_3cccfe0((float)auStackY_90,(System_String_o *)auStackY_90,"0.##");
    fVar5 = BombUtil__GetBombSpeed(fStackY_8c,3.0,10.5,10.5,(MethodInfo *)0x0);
    fVar5 = fVar5 / 100.0;
    _auStackY_90 = (System_String_c *)CONCAT44(fStackY_8c,fVar5);
    puVar4 = &"k";
  }
  else {
    auStackY_90 = (undefined1  [4])0x0;
    if (iVar1 == 1) {
      fVar5 = BombUtil__GetBombRange(fStackY_8c,0.0,4.0,7.0,(MethodInfo *)0x0);
      auStackY_90 = (undefined1  [4])BombUtil__GetOldRangeCost(fVar5,(MethodInfo *)0x0);
      pSVar3 = System_Single__ToString_3cccfe0((float)auStackY_90,(System_String_o *)auStackY_90,"0.##")
      ;
      fVar5 = BombUtil__GetBombRange(fStackY_8c,0.0,4.0,7.0,(MethodInfo *)0x0);
    }
    else {
      if (iVar1 != 0) {
        fVar5 = BombUtil__GetBombCooldown(fStackY_8c,4.0,7.0,7.0,(MethodInfo *)0x0);
        auStackY_90 = (undefined1  [4])BombUtil__GetOldCooldownCost(fVar5,(MethodInfo *)0x0);
        pSVar3 = System_Single__ToString_3cccfe0
                           ((float)auStackY_90,(System_String_o *)auStackY_90,"0.##");
        fVar5 = BombUtil__GetBombCooldown(fStackY_8c,4.0,7.0,7.0,(MethodInfo *)0x0);
        _auStackY_90 = (System_String_c *)CONCAT44(fStackY_8c,fVar5);
        puVar4 = &"s";
        goto label_0445c6d6;
      }
      fVar5 = BombUtil__GetBombRadius(fStackY_8c,5.4,7.4,7.0,(MethodInfo *)0x0);
      auStackY_90 = (undefined1  [4])BombUtil__GetOldRadiusCost(fVar5,(MethodInfo *)0x0);
      pSVar3 = System_Single__ToString_3cccfe0((float)auStackY_90,(System_String_o *)auStackY_90,"0.##")
      ;
      fVar5 = BombUtil__GetBombRadius(fStackY_8c,5.4,7.4,7.0,(MethodInfo *)0x0);
    }
    _auStackY_90 = (System_String_c *)CONCAT44(fStackY_8c,fVar5);
    puVar4 = &"m";
  }
label_0445c6d6:
  pSVar2 = System_Single__ToString_3cccfe0(fVar5,(System_String_o *)auStackY_90,"0.##");
  System_String__Concat_3af7470(pSVar3," / ",pSVar2,(System_String_o *)*puVar4,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$LabelText
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__LabelText (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, const MethodInfo* method);
// 0x445c260

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__LabelText
          (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,MethodInfo *method)

{
  System_String_o *str2;
  System_String_o *pSVar1;
  
  if (g_data_057ae750 == '\0') {
    il2cpp_runtime_helper_023445d0(&")");
    il2cpp_runtime_helper_023445d0(&" (");
    g_data_057ae750 = '\x01';
  }
  pSVar1 = (__this->fields)._label;
  str2 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__StatValue(__this,method);
  pSVar1 = System_String__Concat_3af7470(pSVar1," (",str2,")",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$StatValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__StatValue (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, const MethodInfo* method);
// 0x445c470

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__StatValue
          (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_IntSetting_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  undefined8 *puVar4;
  float fVar5;
  float local_18;
  float local_14;
  
  if (g_data_057ae751 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"k");
    il2cpp_runtime_helper_023445d0(&"0.##");
    il2cpp_runtime_helper_023445d0(&" / ");
    il2cpp_runtime_helper_023445d0(&"m");
    il2cpp_runtime_helper_023445d0();
    g_data_057ae751 = '\x01';
  }
  pSVar2 = (__this->fields)._setting;
  local_18 = 0.0;
  if (pSVar2 == (Settings_IntSetting_o *)0x0) {
    iVar1 = (__this->fields)._kind;
    local_14 = 0.0;
  }
  else {
    local_14 = (float)(pSVar2->fields)._value;
    iVar1 = (__this->fields)._kind;
  }
  if (iVar1 == 2) {
    fVar5 = BombUtil__GetBombSpeed(local_14,3.0,10.5,10.5,(MethodInfo *)0x0);
    local_18 = BombUtil__GetOldSpeedCost(fVar5,(MethodInfo *)0x0);
    pSVar3 = System_Single__ToString_3cccfe0(local_18,(System_String_o *)&local_18,"0.##");
    fVar5 = BombUtil__GetBombSpeed(local_14,3.0,10.5,10.5,(MethodInfo *)0x0);
    fVar5 = fVar5 / 100.0;
    _local_18 = (System_String_c *)CONCAT44(local_14,fVar5);
    puVar4 = &"k";
  }
  else {
    local_18 = 0.0;
    if (iVar1 == 1) {
      fVar5 = BombUtil__GetBombRange(local_14,0.0,4.0,7.0,(MethodInfo *)0x0);
      local_18 = BombUtil__GetOldRangeCost(fVar5,(MethodInfo *)0x0);
      pSVar3 = System_Single__ToString_3cccfe0(local_18,(System_String_o *)&local_18,"0.##");
      fVar5 = BombUtil__GetBombRange(local_14,0.0,4.0,7.0,(MethodInfo *)0x0);
    }
    else {
      if (iVar1 != 0) {
        fVar5 = BombUtil__GetBombCooldown(local_14,4.0,7.0,7.0,(MethodInfo *)0x0);
        local_18 = BombUtil__GetOldCooldownCost(fVar5,(MethodInfo *)0x0);
        pSVar3 = System_Single__ToString_3cccfe0(local_18,(System_String_o *)&local_18,"0.##");
        fVar5 = BombUtil__GetBombCooldown(local_14,4.0,7.0,7.0,(MethodInfo *)0x0);
        _local_18 = (System_String_c *)CONCAT44(local_14,fVar5);
        puVar4 = &"s";
        goto label_0445c6d6;
      }
      fVar5 = BombUtil__GetBombRadius(local_14,5.4,7.4,7.0,(MethodInfo *)0x0);
      local_18 = BombUtil__GetOldRadiusCost(fVar5,(MethodInfo *)0x0);
      pSVar3 = System_Single__ToString_3cccfe0(local_18,(System_String_o *)&local_18,"0.##");
      fVar5 = BombUtil__GetBombRadius(local_14,5.4,7.4,7.0,(MethodInfo *)0x0);
    }
    _local_18 = (System_String_c *)CONCAT44(local_14,fVar5);
    puVar4 = &"m";
  }
label_0445c6d6:
  str2 = System_Single__ToString_3cccfe0(fVar5,(System_String_o *)&local_18,"0.##");
  pSVar3 = System_String__Concat_3af7470
                     (pSVar3," / ",str2,(System_String_o *)*puVar4,(MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$Change
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__Change (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, int32_t delta, const MethodInfo* method);
// 0x445c710

void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__Change
               (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,int32_t delta,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  int32_t iVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_00;
  int iVar3;
  int value;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (g_data_057ae752 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae752 = '\x01';
  }
  method_00 = (MethodInfo *)(__this->fields)._setting;
  if (method_00 == (MethodInfo *)0x0) {
    return;
  }
  value = *(int32_t *)((long)&method_00->name + 4);
  iVar3 = ((Settings_IntSetting_Fields *)&method_00->invoker_method)->_value + delta;
  if (iVar3 <= value) {
    value = iVar3;
  }
  if (iVar3 < *(int *)&method_00->name) {
    value = *(int *)&method_00->name;
  }
  if (0 < delta) {
    if (g_data_057ae753 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      g_data_057ae753 = '\x01';
      method_00 = (MethodInfo *)(__this->fields)._setting;
      if (method_00 == (MethodInfo *)0x0) {
        g_data_057ae753 = 1;
        return;
      }
    }
    if (*(int *)((long)&method_00->name + 4) <= *(int *)((long)&method_00->invoker_method + 4)) {
      return;
    }
    iVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__TotalPoints(method_00);
    if (0x13 < iVar2) {
      return;
    }
    method_00 = (MethodInfo *)(__this->fields)._setting;
    if (method_00 == (MethodInfo *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      method_01 = method_00;
      if (g_data_057ae753 == '\0') {
        method_01 = (MethodInfo *)&MethodInfo_Int32_get_Value;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae753 = '\x01';
      }
      pIVar1 = method_00->klass;
      if ((pIVar1 != (Il2CppClass *)0x0) &&
         (*(int *)((long)&(pIVar1->_1).name + 4) < *(int *)((long)&(pIVar1->_1).namespaze + 4))) {
        Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__TotalPoints(method_01);
        return;
      }
      return;
    }
  }
  Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)method_00,value,MethodInfo_Void_set_Value);
  if ((context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) &&
     (__this_00 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                  UnityEngine_GameObject__GetComponentInParent_object_(context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot)
     , __this_00 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0)) {
    Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$CanIncrement
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__CanIncrement (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, const MethodInfo* method);
// 0x445c800

bool_conflict
Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__CanIncrement
          (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  int32_t iVar2;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)__this;
  if (g_data_057ae753 == '\0') {
    method_00 = (MethodInfo *)&MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae753 = '\x01';
  }
  pSVar1 = (__this->fields)._setting;
  if ((pSVar1 != (Settings_IntSetting_o *)0x0) && ((pSVar1->fields)._value < (pSVar1->fields).MaxValue)) {
    iVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__TotalPoints(method_00);
    return CONCAT31((int3)((uint)iVar2 >> 8),iVar2 < 0x14);
  }
  return 0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$TotalPoints
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__TotalPoints (const MethodInfo* method);
// 0x445c850

int32_t Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__TotalPoints(MethodInfo *method)

{
  long lVar1;
  int32_t iVar2;
  
  if (g_data_057ae754 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    method = (MethodInfo *)&MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae754 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
  if (lVar1 != 0) {
    if ((((*(long *)(lVar1 + 0x28) != 0) && (*(long *)(lVar1 + 0x30) != 0)) && (*(long *)(lVar1 + 0x38) != 0))
       && (*(long *)(lVar1 + 0x40) != 0)) {
      return *(int *)(*(long *)(lVar1 + 0x28) + 0x14) + *(int *)(*(long *)(lVar1 + 0x30) + 0x14) +
             *(int *)(*(long *)(lVar1 + 0x38) + 0x14) + *(int *)(*(long *)(lVar1 + 0x40) + 0x14);
    }
    il2cpp_runtime_helper_022b2c90();
    iVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__TotalPoints(method);
    iVar2 = 0x14 - iVar2;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    return iVar2;
  }
  return 0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$UnusedPoints
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__UnusedPoints (const MethodInfo* method);
// 0x445c8d0

int32_t Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__UnusedPoints(MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__TotalPoints(method);
  iVar1 = 0x14 - iVar1;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return iVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$<BuildStepper>b__7_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___BuildStepper_b__7_0 (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x445c8f0

void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___BuildStepper_b__7_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_TypedSetting_int__o *__this_00;
  int32_t iVar2;
  int iVar3;
  System_Action_GisketchActionContext__o *pSVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  System_String_o *id;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_01;
  bool bVar9;
  int value;
  System_Nullable_bool__Fields __this_02;
  UnityEngine_GameObject_o *in_stack_ffffffffffffff88;
  undefined2 uStack_38;
  undefined2 uStack_36;
  int32_t iStack_34;
  
  if (g_data_057ae755 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildStepper_b__7_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildStepper_b__7_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"+");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-");
    il2cpp_runtime_helper_023445d0(&"settingStepperValue");
    il2cpp_runtime_helper_023445d0(&"-minus");
    il2cpp_runtime_helper_023445d0(&"-plus");
    il2cpp_runtime_helper_023445d0(&"-value");
    il2cpp_runtime_helper_023445d0(&"0");
    g_data_057ae755 = '\x01';
  }
  iStack_34 = 0;
  pSVar4 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor();
  __this_02 = (System_Nullable_bool__Fields)(__this->fields)._id;
  pSVar5 = System_String__Concat_3ae5ba0((System_String_o *)__this_02,"-minus",(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    in_stack_ffffffffffffff88 = (UnityEngine_GameObject_o *)0x0;
    bVar9 = false;
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                       (row,4,"-",pSVar4,pSVar5,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    pSVar1 = (__this->fields)._setting;
    if (pSVar1 != (Settings_IntSetting_o *)0x0) {
      bVar9 = (pSVar1->fields).MinValue < (pSVar1->fields)._value;
    }
    uStack_36 = 0;
    __this_02 = (System_Nullable_bool__Fields)&uStack_36;
    System_Nullable_bool____ctor((System_Nullable_bool__o)__this_02,(uint)bVar9,MethodInfo_Nullable_1_Boolean);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined2 *)((long)&(pGVar6->fields).hasIcon + 3) = uStack_36;
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(54.0,(MethodInfo *)0x0);
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search);
      pSVar1 = (__this->fields)._setting;
      pSVar5 = "0";
      if (pSVar1 != (Settings_IntSetting_o *)0x0) {
        iStack_34 = (pSVar1->fields)._value;
        pSVar5 = System_Int32__ToString((int32_t)&iStack_34,(MethodInfo *)0x0);
      }
      id = System_String__Concat_3ae5ba0((__this->fields)._id,"-value",(MethodInfo *)0x0);
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (row,pSVar5,"settingStepperValue",id,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(70.0,(MethodInfo *)0x0);
      in_stack_ffffffffffffff88 = (UnityEngine_GameObject_o *)0x0;
      __this_02 = "Column";
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar8);
        pSVar4 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        System_Action_GisketchActionContext____ctor();
        pSVar5 = System_String__Concat_3ae5ba0((__this->fields)._id,"-plus",(MethodInfo *)0x0);
        in_stack_ffffffffffffff88 = (UnityEngine_GameObject_o *)0x0;
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                           (row,4,"+",pSVar4,pSVar5,(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                            (MethodInfo *)0x0);
        if (g_data_057ae753 == '\0') {
          row = (Gisketch_Aottg2UI_Code_AottgUi_o *)&MethodInfo_Int32_get_Value;
          il2cpp_runtime_helper_023445d0();
          g_data_057ae753 = '\x01';
        }
        pSVar1 = (__this->fields)._setting;
        if ((pSVar1 == (Settings_IntSetting_o *)0x0) || ((pSVar1->fields).MaxValue <= (pSVar1->fields)._value)
           ) {
          bVar9 = false;
        }
        else {
          iVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__TotalPoints((MethodInfo *)row);
          bVar9 = iVar2 < 0x14;
        }
        uStack_38 = 0;
        __this_02 = (System_Nullable_bool__Fields)&uStack_38;
        System_Nullable_bool____ctor((System_Nullable_bool__o)__this_02,(uint)bVar9,MethodInfo_Nullable_1_Boolean);
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          *(undefined2 *)((long)&(pGVar6->fields).hasIcon + 3) = uStack_38;
          pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(54.0,(MethodInfo *)0x0);
          pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,0.0,(MethodInfo *)0x0);
          (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar8);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae752 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae752 = '\x01';
  }
  __this_00 = *(Settings_TypedSetting_int__o **)((long)__this_02 + 0x20);
  if (__this_00 != (Settings_TypedSetting_int__o *)0x0) {
    value = *(int *)((long)&__this_00[1].klass + 4);
    iVar3 = (__this_00->fields)._value + -1;
    if (iVar3 <= value) {
      value = iVar3;
    }
    if (iVar3 < *(int *)&__this_00[1].klass) {
      value = *(int *)&__this_00[1].klass;
    }
    Settings_TypedSetting_int___set_Value(__this_00,value,MethodInfo_Void_set_Value);
    if ((in_stack_ffffffffffffff88 != (UnityEngine_GameObject_o *)0x0) &&
       (__this_01 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                    UnityEngine_GameObject__GetComponentInParent_object_
                              (in_stack_ffffffffffffff88,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot),
       __this_01 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0)) {
      Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$<BuildStepper>b__7_1
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___BuildStepper_b__7_1 (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x445cdc0

void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___BuildStepper_b__7_1
               (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  int iVar1;
  Settings_IntSetting_o *__this_00;
  int iVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_01;
  int value;
  
  if (g_data_057ae752 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae752 = '\x01';
  }
  __this_00 = (__this->fields)._setting;
  if (__this_00 != (Settings_IntSetting_o *)0x0) {
    iVar1 = (__this_00->fields).MinValue;
    value = (__this_00->fields).MaxValue;
    iVar2 = (__this_00->fields)._value + -1;
    if (iVar2 <= value) {
      value = iVar2;
    }
    if (iVar2 < iVar1) {
      value = iVar1;
    }
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_00,value,MethodInfo_Void_set_Value);
    if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                  UnityEngine_GameObject__GetComponentInParent_object_(context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot)
      ;
      if (__this_01 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow$$<BuildStepper>b__7_2
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___BuildStepper_b__7_2 (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x445ce70

void Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___BuildStepper_b__7_2
               (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__Change(__this,context,1,in_RDX);
  return;
}


