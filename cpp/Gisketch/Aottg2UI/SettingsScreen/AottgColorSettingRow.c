// Type: Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgColorSettingRow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow.<>c__DisplayClass4_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass4_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x445d350

void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass4_0___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass4_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow.<>c__DisplayClass4_0$$<BuildPicker>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass4_0___BuildPicker_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass4_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* frame, const MethodInfo* method);
// 0x445d360

void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass4_0___BuildPicker_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass4_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *frame,MethodInfo *method)

{
  ushort uVar1;
  System_String_o *pSVar2;
  System_String_o *value;
  System_String_c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Gisketch_Aottg2UI_Code_AottgUi_c *pGVar5;
  code *vtableDispatch;
  bool_conflict bVar6;
  System_String_o *id;
  System_Action_GisketchActionContext__o *save;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *__this_00;
  VirtualInvokeData *pVVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar8;
  long lVar9;
  
  if (g_data_057ae759 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildPicker_b__1);
    il2cpp_runtime_helper_023445d0(&"-color");
    g_data_057ae759 = '\x01';
  }
  id = System_String__Concat_3ae5ba0((__this->fields).pickerId,"-color",(MethodInfo *)0x0);
  pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  value = (__this->fields).value;
  save = (__this->fields).__9__1;
  if (save == (System_Action_GisketchActionContext__o *)0x0) {
    save = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    (__this->fields).__9__1 = save;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__9__1,save);
  }
  bVar6 = (__this->fields).disabled;
  __this_00 = (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIColorPicker);
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker___ctor
            (__this_00,id,pSVar2,value,save,1,0,1,(uint)(byte)bVar6,(MethodInfo *)0x0);
  if (frame != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (frame,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  uVar8 = extraout_RDX;
  if (g_data_057ae75a == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ae75a = '\x01';
    uVar8 = extraout_RDX_00;
  }
  pSVar2 = (frame->fields)._ownerId;
  if (pSVar2 != (System_String_o *)0x0) {
    pSVar3 = pSVar2->klass;
    uVar1._0_1_ = (pSVar3->_2).rank;
    uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar4 = (pSVar3->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(long *)((long)&pIVar4->interfaceType + lVar9) == TypeInfo_IAottgSettingAdapter) {
          pVVar7 = &(pSVar3->vtable)._0_Equals + (*(int *)((long)&pIVar4->offset + lVar9) + 0xb);
          goto label_0445d535;
        }
        lVar9 = lVar9 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar9);
    }
    pVVar7 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar2,TypeInfo_IAottgSettingAdapter,0xb);
label_0445d535:
    (*pVVar7->methodPtr)(pSVar2,pVVar7->method);
    uVar8 = extraout_RDX_01;
  }
  pGVar5 = frame[1].klass;
  if (pGVar5 != (Gisketch_Aottg2UI_Code_AottgUi_c *)0x0) {
    vtableDispatch = (code *)(pGVar5->_1).namespaze;
    (*vtableDispatch)
              ((pGVar5->_1).element_class,*(undefined8 *)&(pGVar5->_1).byval_arg.bits,uVar8,
               vtableDispatch);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow.<>c__DisplayClass4_0$$<BuildPicker>b__1
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass4_0___BuildPicker_b__1 (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass4_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x445d490

void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass4_0___BuildPicker_b__1
               (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___c__DisplayClass4_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  ushort uVar1;
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *pGVar2;
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c *pGVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_Action_GisketchActionContext__o *pSVar5;
  VirtualInvokeData *pVVar6;
  long lVar7;
  
  if (g_data_057ae75a == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ae75a = '\x01';
  }
  pGVar2 = (__this->fields).adapter;
  if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
    pGVar3 = pGVar2->klass;
    uVar1._0_1_ = (pGVar3->_2).rank;
    uVar1._1_1_ = (pGVar3->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar4 = (pGVar3->_1).interfaceOffsets;
      lVar7 = 0;
      do {
        if (*(long *)((long)&pIVar4->interfaceType + lVar7) == TypeInfo_IAottgSettingAdapter) {
          pVVar6 = pGVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar7) + 0xb);
          goto label_0445d535;
        }
        lVar7 = lVar7 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar7);
    }
    pVVar6 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pGVar2,TypeInfo_IAottgSettingAdapter,0xb);
label_0445d535:
    (*pVVar6->methodPtr)(pGVar2,pVVar6->method);
  }
  pSVar5 = (__this->fields).changed;
  if (pSVar5 != (System_Action_GisketchActionContext__o *)0x0) {
    (*(code *)(pSVar5->fields).invoke_impl)((pSVar5->fields).method_code,(pSVar5->fields).method);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* descriptor, const MethodInfo* method);
// 0x445ce80

void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o *__this,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._descriptor = descriptor;
  il2cpp_runtime_helper_022b4080(&__this->fields,descriptor);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__Build (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x445ceb0

void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar3;
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *adapter;
  Il2CppObject *pIVar4;
  Il2CppClass *pIVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  System_String_o *searchKeywords;
  System_String_o *icon;
  bool_conflict bVar7;
  System_Action_AottgUi__o *pSVar8;
  System_Action_AottgUi__o *__this_00;
  System_Action_GisketchActionContext__o *changed;
  Il2CppObject *__this_01;
  Il2CppMethodPointer *ppIVar9;
  void *pvVar10;
  System_Action_AottgUi__o *pSVar11;
  System_String_o *pSVar12;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  undefined1 extraout_DL;
  Gisketch_Aottg2UI_Code_AottgUi_o *control;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar13;
  System_Action_AottgUi__o *pSVar14;
  Il2CppObject *__this_02;
  long lVar15;
  System_String_o *in_R8;
  MethodInfo *in_R9;
  MethodInfo *in_stack_ffffffffffffffa0;
  
  if (g_data_057ae756 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildPicker);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingRowFrame);
    g_data_057ae756 = '\x01';
  }
  pGVar3 = (__this->fields)._descriptor;
  if (pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    return;
  }
  pGVar13 = (Gisketch_Aottg2UI_Code_AottgUi_o *)(pGVar3->fields).Id;
  pSVar12 = (pGVar3->fields).Label;
  pSVar8 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  pSVar11 = (System_Action_AottgUi__o *)0x0;
  control = (Gisketch_Aottg2UI_Code_AottgUi_o *)__this;
  pSVar14 = pSVar8;
  System_Action_object____ctor();
  pGVar3 = (__this->fields)._descriptor;
  if (pGVar3 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    in_R8 = (pGVar3->fields).Tooltip;
    in_R9 = (MethodInfo *)(pGVar3->fields).SearchTitle;
    searchKeywords = (pGVar3->fields).SearchKeywords;
    icon = (pGVar3->fields).Icon;
    __this_00 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgSettingRowFrame);
    pSVar14 = __this_00;
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___ctor
              ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *)__this_00,(System_String_o *)pGVar13
               ,pSVar12,92.0,pSVar8,in_R8,(System_String_o *)in_R9,searchKeywords,icon,
               (System_Nullable_float__o)0x0,in_stack_ffffffffffffffa0);
    pSVar11 = pSVar8;
    control = pGVar13;
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar13 = control;
  pSVar8 = pSVar14;
  if (g_data_057ae757 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    pSVar8 = (System_Action_AottgUi__o *)&MethodInfo_Void_Changed;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae757 = '\x01';
  }
  lVar15 = (pSVar14->fields).method_ptr;
  if (lVar15 != 0) {
    pSVar12 = *(System_String_o **)(lVar15 + 0x10);
    adapter = *(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o **)(lVar15 + 0x28);
    bVar1 = *(byte *)(lVar15 + 0x58);
    changed = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__BuildPicker_435d080
              (control,adapter,(uint)bVar1,pSVar12,changed,in_R9);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae758 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildPicker_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass4_0);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"-color-frame");
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"setting-color");
    g_data_057ae758 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass4_0);
  __this_02 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].klass = (Il2CppClass *)pGVar13;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,pGVar13);
    __this_01[2].monitor = in_R8;
    il2cpp_runtime_helper_022b4080(&__this_01[2].monitor);
    *(undefined1 *)&__this_01[3].klass = extraout_DL;
    bVar7 = System_String__IsNullOrEmpty((System_String_o *)pSVar11,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      pSVar11 = "setting-color";
    }
    __this_01[1].klass = (Il2CppClass *)pSVar11;
    il2cpp_runtime_helper_022b4080(__this_01 + 1,pSVar11);
    pIVar4 = (Il2CppObject *)__this_01[2].klass;
    pvVar10 = "#FFFFFFFF";
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar5 = pIVar4->klass;
      uVar2._0_1_ = (pIVar5->_2).rank;
      uVar2._1_1_ = (pIVar5->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar6 = (pIVar5->_1).interfaceOffsets;
        lVar15 = 0;
        do {
          if (*(long *)((long)&pIVar6->interfaceType + lVar15) == TypeInfo_IAottgSettingAdapter) {
            ppIVar9 = &pIVar5->vtable[*(int *)((long)&pIVar6->offset + lVar15)].methodPtr;
            goto label_0445d210;
          }
          lVar15 = lVar15 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar15);
      }
      ppIVar9 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pIVar4,TypeInfo_IAottgSettingAdapter,0);
label_0445d210:
      __this_02 = pIVar4;
      pvVar10 = (void *)(**ppIVar9)();
      if (pIVar4 == (Il2CppObject *)0x0) goto label_0445d341;
    }
    __this_01[1].monitor = pvVar10;
    il2cpp_runtime_helper_022b4080(&__this_01[1].monitor);
    pSVar11 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar12 = System_String__Concat_3ae5ba0
                        ((System_String_o *)__this_01[1].klass,"-color-frame",(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","Center","Center",(System_String_o *)0x0,(System_String_o *)0x0,
                        0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    __this_02 = (Il2CppObject *)0x0;
    if (pSVar8 != (System_Action_AottgUi__o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)pSVar8,"clear",pSVar11,pSVar12,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
label_0445d341:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow$$BuildPicker
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__BuildPicker (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x445cfe0

void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__BuildPicker
               (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  ushort uVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar2;
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *adapter;
  Il2CppObject *pIVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  bool_conflict bVar6;
  System_Action_GisketchActionContext__o *changed;
  Il2CppObject *__this_00;
  Il2CppMethodPointer *ppIVar7;
  void *pvVar8;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *in_RCX;
  undefined1 extraout_DL;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar10;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  Il2CppObject *__this_02;
  long lVar11;
  void *in_R8;
  MethodInfo *in_R9;
  
  pGVar10 = control;
  __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)__this;
  if (g_data_057ae757 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&MethodInfo_Void_Changed;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae757 = '\x01';
  }
  pGVar2 = (__this->fields)._descriptor;
  if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    pSVar9 = (pGVar2->fields).Id;
    adapter = (pGVar2->fields).Adapter;
    bVar6 = (pGVar2->fields).Disabled;
    changed = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__BuildPicker_435d080
              (control,adapter,(uint)(byte)bVar6,pSVar9,changed,in_R9);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae758 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildPicker_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass4_0);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"-color-frame");
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"setting-color");
    g_data_057ae758 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass4_0);
  __this_02 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)pGVar10;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,pGVar10);
    __this_00[2].monitor = in_R8;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor);
    *(undefined1 *)&__this_00[3].klass = extraout_DL;
    bVar6 = System_String__IsNullOrEmpty(in_RCX,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      in_RCX = "setting-color";
    }
    __this_00[1].klass = (Il2CppClass *)in_RCX;
    il2cpp_runtime_helper_022b4080(__this_00 + 1,in_RCX);
    pIVar3 = (Il2CppObject *)__this_00[2].klass;
    pvVar8 = "#FFFFFFFF";
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar4 = pIVar3->klass;
      uVar1._0_1_ = (pIVar4->_2).rank;
      uVar1._1_1_ = (pIVar4->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar5 = (pIVar4->_1).interfaceOffsets;
        lVar11 = 0;
        do {
          if (*(long *)((long)&pIVar5->interfaceType + lVar11) == TypeInfo_IAottgSettingAdapter) {
            ppIVar7 = &pIVar4->vtable[*(int *)((long)&pIVar5->offset + lVar11)].methodPtr;
            goto label_0445d210;
          }
          lVar11 = lVar11 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar11);
      }
      ppIVar7 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pIVar3,TypeInfo_IAottgSettingAdapter,0);
label_0445d210:
      __this_02 = pIVar3;
      pvVar8 = (void *)(**ppIVar7)();
      if (pIVar3 == (Il2CppObject *)0x0) goto label_0445d341;
    }
    __this_00[1].monitor = pvVar8;
    il2cpp_runtime_helper_022b4080(&__this_00[1].monitor);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar9 = System_String__Concat_3ae5ba0
                       ((System_String_o *)__this_00[1].klass,"-color-frame",(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","Center","Center",(System_String_o *)0x0,(System_String_o *)0x0,
                        0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    __this_02 = (Il2CppObject *)0x0;
    if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (__this_01,"clear",build,pSVar9,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
label_0445d341:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow$$BuildPicker
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__BuildPicker (Gisketch_Aottg2UI_Code_AottgUi_o* control, Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o* adapter, bool disabled, System_String_o* id, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x445d080

void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__BuildPicker_435d080
               (Gisketch_Aottg2UI_Code_AottgUi_o *control,
               Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *adapter,bool_conflict disabled,
               System_String_o *id,System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  bool_conflict bVar5;
  Il2CppObject *__this;
  Il2CppMethodPointer *ppIVar6;
  void *pvVar7;
  System_Action_AottgUi__o *build;
  System_String_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Il2CppObject *__this_00;
  long lVar8;
  
  if (g_data_057ae758 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildPicker_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass4_0);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"-color-frame");
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"setting-color");
    g_data_057ae758 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass4_0);
  __this_00 = __this;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[2].klass = (Il2CppClass *)adapter;
    il2cpp_runtime_helper_022b4080(__this + 2,adapter);
    __this[2].monitor = changed;
    il2cpp_runtime_helper_022b4080(&__this[2].monitor);
    *(char *)&__this[3].klass = (char)disabled;
    bVar5 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      id = "setting-color";
    }
    __this[1].klass = (Il2CppClass *)id;
    il2cpp_runtime_helper_022b4080(__this + 1,id);
    pIVar2 = (Il2CppObject *)__this[2].klass;
    pvVar7 = "#FFFFFFFF";
    if (pIVar2 != (Il2CppObject *)0x0) {
      pIVar3 = pIVar2->klass;
      uVar1._0_1_ = (pIVar3->_2).rank;
      uVar1._1_1_ = (pIVar3->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar8 = 0;
        do {
          if (*(long *)((long)&pIVar4->interfaceType + lVar8) == TypeInfo_IAottgSettingAdapter) {
            ppIVar6 = &pIVar3->vtable[*(int *)((long)&pIVar4->offset + lVar8)].methodPtr;
            goto label_0445d210;
          }
          lVar8 = lVar8 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar8);
      }
      ppIVar6 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pIVar2,TypeInfo_IAottgSettingAdapter,0);
label_0445d210:
      __this_00 = pIVar2;
      pvVar7 = (void *)(**ppIVar6)();
      if (pIVar2 == (Il2CppObject *)0x0) goto label_0445d341;
    }
    __this[1].monitor = pvVar7;
    il2cpp_runtime_helper_022b4080(&__this[1].monitor);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    id_00 = System_String__Concat_3ae5ba0((System_String_o *)__this[1].klass,"-color-frame",(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","Center","Center",(System_String_o *)0x0,(System_String_o *)0x0,
                        0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    __this_00 = (Il2CppObject *)0x0;
    if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (control,"clear",build,id_00,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
label_0445d341:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


