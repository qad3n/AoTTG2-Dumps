// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsGroup.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* __this, System_String_o* id, System_String_o* title, Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_array* rows, const MethodInfo* method);
// 0x4463970

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this,System_String_o *id,
               System_String_o *title,Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_array *rows,
               MethodInfo *method)

{
  if (g_data_057ae7a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingDescriptor);
    g_data_057ae7a7 = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  il2cpp_runtime_helper_022b4080(&__this->fields,id);
  (__this->fields)._title = title;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._title,title);
  if (rows == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_array *)0x0) {
    rows = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgSettingDescriptor,0);
  }
  (__this->fields)._rows = rows;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._rows,rows);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__Build (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x4463a10

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_c *text;
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar1;
  bool_conflict bVar2;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Code_AottgComponent_o *pGVar4;
  void *pvVar5;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  System_String_o *pSVar6;
  ulong uVar7;
  
  if (g_data_057ae7a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__4_0);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    g_data_057ae7a8 = '\x01';
  }
  build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pSVar3 = (__this->fields)._id;
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pSVar6 = "Column";
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,8.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,"clear",build,pSVar3,layout,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae7a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingRow);
    il2cpp_runtime_helper_023445d0(&"-header");
    il2cpp_runtime_helper_023445d0(&"creditsSubcategoryHeader");
    g_data_057ae7a9 = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty((System_String_o *)pSVar6[1].klass,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    text = pSVar6[1].klass;
    pSVar3 = System_String__Concat_3ae5ba0((System_String_o *)pSVar6->fields,"-header",(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (__this_00,(System_String_o *)text,"creditsSubcategoryHeader",pSVar3,(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      goto label_04463c0f;
    }
  }
  else {
label_04463c0f:
    pvVar5 = pSVar6[1].monitor;
    if (pvVar5 != (void *)0x0) {
      if (__this_00 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_04463c8b;
      uVar7 = 0;
      do {
        if ((long)(int)*(uint *)((long)pvVar5 + 0x18) <= (long)uVar7) {
          return;
        }
        if (*(uint *)((long)pvVar5 + 0x18) <= uVar7) {
          pvVar5 = (void *)il2cpp_runtime_helper_022b2ca0();
          goto label_04463ca5;
        }
        pGVar1 = *(Gisketch_Aottg2UI_Code_AottgComponent_c **)((long)pvVar5 + uVar7 * 8 + 0x20);
        pGVar4 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgSettingRow);
        Gisketch_Aottg2UI_Code_AottgComponent___ctor(pGVar4,(MethodInfo *)0x0);
        pGVar4[1].klass = pGVar1;
        il2cpp_runtime_helper_022b4080(pGVar4 + 1,pGVar1);
        Gisketch_Aottg2UI_Code_AottgUi__Component(__this_00,pGVar4,(MethodInfo *)0x0);
        uVar7 = uVar7 + 1;
        pvVar5 = pSVar6[1].monitor;
      } while (pvVar5 != (void *)0x0);
    }
  }
  pvVar5 = (void *)il2cpp_runtime_helper_022b2c90();
label_04463c8b:
  if (*(int *)((long)pvVar5 + 0x18) < 1) {
    return;
  }
label_04463ca5:
  pGVar1 = *(Gisketch_Aottg2UI_Code_AottgComponent_c **)((long)pvVar5 + 0x20);
  pGVar4 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgSettingRow);
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(pGVar4,(MethodInfo *)0x0);
  pGVar4[1].klass = pGVar1;
  il2cpp_runtime_helper_022b4080(pGVar4 + 1,pGVar1);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae7aa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingSliderValueDialog);
    il2cpp_runtime_helper_023445d0(&"Edit Setting");
    g_data_057ae7aa = '\x01';
  }
  if (**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) != 0) {
    return;
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$<Build>b__4_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___Build_b__4_0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* group, const MethodInfo* method);
// 0x4463b70

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___Build_b__4_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *group,MethodInfo *method)

{
  uint uVar1;
  System_String_o *text;
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar2;
  bool_conflict bVar3;
  System_String_o *id;
  Gisketch_Aottg2UI_Code_AottgComponent_o *pGVar4;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_array *pGVar5;
  ulong uVar6;
  
  if (g_data_057ae7a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingRow);
    il2cpp_runtime_helper_023445d0(&"-header");
    il2cpp_runtime_helper_023445d0(&"creditsSubcategoryHeader");
    g_data_057ae7a9 = '\x01';
  }
  bVar3 = System_String__IsNullOrEmpty((__this->fields)._title,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    text = (__this->fields)._title;
    id = System_String__Concat_3ae5ba0((__this->fields)._id,"-header",(MethodInfo *)0x0);
    if (group != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (group,text,"creditsSubcategoryHeader",id,(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      goto label_04463c0f;
    }
  }
  else {
label_04463c0f:
    pGVar5 = (__this->fields)._rows;
    if (pGVar5 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_array *)0x0) {
      if (group == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_04463c8b;
      uVar6 = 0;
      do {
        uVar1 = (uint)pGVar5->max_length;
        if ((long)(int)uVar1 <= (long)uVar6) {
          return;
        }
        if (uVar1 <= uVar6) {
          pGVar5 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_array *)il2cpp_runtime_helper_022b2ca0();
          goto label_04463ca5;
        }
        pGVar2 = (Gisketch_Aottg2UI_Code_AottgComponent_c *)pGVar5->m_Items[uVar6];
        pGVar4 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgSettingRow);
        Gisketch_Aottg2UI_Code_AottgComponent___ctor(pGVar4,(MethodInfo *)0x0);
        pGVar4[1].klass = pGVar2;
        il2cpp_runtime_helper_022b4080(pGVar4 + 1,pGVar2);
        Gisketch_Aottg2UI_Code_AottgUi__Component(group,pGVar4,(MethodInfo *)0x0);
        uVar6 = uVar6 + 1;
        pGVar5 = (__this->fields)._rows;
      } while (pGVar5 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_array *)0x0);
    }
  }
  pGVar5 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_array *)il2cpp_runtime_helper_022b2c90();
label_04463c8b:
  if ((int)pGVar5->max_length < 1) {
    return;
  }
label_04463ca5:
  pGVar2 = (Gisketch_Aottg2UI_Code_AottgComponent_c *)pGVar5->m_Items[0];
  pGVar4 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgSettingRow);
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(pGVar4,(MethodInfo *)0x0);
  pGVar4[1].klass = pGVar2;
  il2cpp_runtime_helper_022b4080(pGVar4 + 1,pGVar2);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae7aa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingSliderValueDialog);
    il2cpp_runtime_helper_023445d0(&"Edit Setting");
    g_data_057ae7aa = '\x01';
  }
  if (**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) != 0) {
    return;
  }
  return;
}


