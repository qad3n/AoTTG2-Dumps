// Type: Gisketch.Aottg2UI.Code.GisketchUIColorPicker
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/GisketchUIColorPicker.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.Definition$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o __this, System_String_o* id, bool enableAlpha, System_Action_GisketchActionContext__o* save, bool livePreview, bool disabled, const MethodInfo* method);
// 0x3b6a720

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o __this,System_String_o *id,
               bool_conflict enableAlpha,System_Action_GisketchActionContext__o *save,
               bool_conflict livePreview,bool_conflict disabled,MethodInfo *method)

{
  System_String_Fields SVar1;
  undefined4 in_register_0000000c;
  undefined4 in_register_00000034;
  
  SVar1._4_4_ = in_register_0000000c;
  SVar1._stringLength = livePreview;
  id->klass = (System_String_c *)CONCAT44(in_register_00000034,enableAlpha);
  il2cpp_runtime_helper_022b4080();
  *(char *)&id->monitor = (char)save;
  id->fields = SVar1;
  il2cpp_runtime_helper_022b4080(&id->fields,SVar1);
  *(char *)&id[1].klass = (char)disabled;
  *(char *)((long)&id[1].klass + 1) = (char)method;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.<>c__DisplayClass16_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x3b6af00

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.<>c__DisplayClass16_0$$<Build>b__0
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0___Build_b__0 (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x3b6e130

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0___Build_b__0
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *pGVar1;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  long lVar2;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o context;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o context_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  System_String_o *actionId;
  System_Nullable_bool__Fields SVar9;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar10;
  System_Nullable_bool__Fields SVar11;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar12;
  System_Action_GisketchActionContext__o *action;
  System_Nullable_bool__Fields __this_02;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar13;
  System_Globalization_CultureInfo_o *pSVar14;
  int in_ECX;
  MethodInfo *pMVar15;
  int extraout_EDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *method_00;
  System_Nullable_bool__Fields unaff_RBP;
  uint alpha;
  uint uVar16;
  System_Nullable_bool__Fields SVar17;
  System_Action_GisketchActionContext__o *pSVar18;
  System_Nullable_bool__Fields SVar19;
  int in_R8D;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *unaff_R12;
  bool bVar20;
  UnityEngine_Color_o rgbColor;
  UnityEngine_Color_o rgbColor_00;
  float fStackY_20c;
  float fStackY_208;
  float fStackY_204;
  System_Nullable_bool__Fields SStackY_200;
  System_Nullable_bool__Fields SStackY_1f8;
  System_Nullable_bool__Fields SStackY_1f0;
  undefined1 *puStackY_1e8;
  System_Nullable_bool__Fields SStackY_1e0;
  System_Nullable_bool__Fields SStackY_1d8;
  MethodInfo *in_stack_fffffffffffffe88;
  undefined8 in_stack_fffffffffffffe90;
  MethodInfo *in_stack_fffffffffffffe98;
  undefined8 in_stack_fffffffffffffea0;
  undefined8 in_stack_fffffffffffffea8;
  MethodInfo *in_stack_fffffffffffffed0;
  undefined2 uStack_122;
  System_Nullable_bool__Fields SStack_120;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_118;
  System_Nullable_bool__Fields SStack_110;
  undefined1 *puStack_108;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0_o *pGStack_100;
  System_Nullable_bool__Fields SStack_f8;
  MethodInfo *in_stack_ffffffffffffff68;
  undefined8 in_stack_ffffffffffffff70;
  MethodInfo *in_stack_ffffffffffffff78;
  undefined8 in_stack_ffffffffffffff80;
  undefined8 in_stack_ffffffffffffff88;
  MethodInfo *in_stack_ffffffffffffffb0;
  undefined2 uStack_42;
  System_Nullable_bool__Fields SStack_40;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_38;
  
  __this_02 = (System_Nullable_bool__Fields)row;
  SVar19 = (System_Nullable_bool__Fields)__this;
  if (g_data_057a9de7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__1);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"subtext");
    il2cpp_runtime_helper_023445d0(&"-label");
    SVar19 = (System_Nullable_bool__Fields)&"text";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9de7 = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 == (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
label_03b6e714:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    SVar19 = (System_Nullable_bool__Fields)(pGVar1->fields)._id;
    SVar9 = (System_Nullable_bool__Fields)(pGVar1->fields)._label;
    __this_02 = "-label";
    pSVar7 = System_String__Concat_3ae5ba0
                       ((System_String_o *)SVar19,(System_String_o *)"-label",(MethodInfo *)0x0);
    if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_03b6e714;
    in_R8D = 0;
    SVar19 = (System_Nullable_bool__Fields)row;
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (row,(System_String_o *)SVar9,"subtext",pSVar7,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,in_stack_ffffffffffffff68);
    in_ECX = (int)pSVar7;
    unaff_R12 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&g_data_057b9b70;
    pSVar7 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    unaff_RBP = (System_Nullable_bool__Fields)(__this->fields).__9__1;
    if (unaff_RBP == (System_Nullable_bool__Fields)0x0) {
      SVar19 = (System_Nullable_bool__Fields)&(__this->fields).__9__1;
      unaff_RBP = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
      in_ECX = 0;
      System_Action_GisketchActionContext____ctor();
      (__this->fields).__9__1 = (System_Action_GisketchActionContext__o *)unaff_RBP;
      SVar9 = unaff_RBP;
      il2cpp_runtime_helper_022b4080();
    }
    pGVar1 = (__this->fields).__4__this;
    __this_02 = SVar9;
    if (pGVar1 == (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) goto label_03b6e714;
    pSVar8 = (pGVar1->fields)._id;
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057a9de3 == '\0') {
      il2cpp_runtime_helper_023445d0(&"-button");
      g_data_057a9de3 = '\x01';
    }
    pSVar8 = System_String__Concat_3ae5ba0(pSVar8,"-button",(MethodInfo *)0x0);
    __this_00 = (row->fields)._actions;
    if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      actionId = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                           (__this_00,(row->fields)._ownerId,
                            (System_Action_GisketchActionContext__o *)unaff_RBP,(MethodInfo *)0x0);
    }
    in_stack_ffffffffffffff70 = 0;
    __this_02.hasValue = 3;
    __this_02.value = 0;
    SVar19 = (System_Nullable_bool__Fields)row;
    unaff_R12 = Gisketch_Aottg2UI_Code_AottgUi__Button
                          (row,3,pSVar7,actionId,pSVar8,(System_String_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                           in_stack_ffffffffffffff78);
    in_ECX = (int)actionId;
    in_R8D = (int)pSVar8;
    pGVar1 = (__this->fields).__4__this;
    if (pGVar1 == (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) goto label_03b6e714;
    bVar20 = *(char *)((long)&(pGVar1->fields)._livePreview + 2) == '\0';
    uStack_42 = 0;
    __this_02._1_7_ = 0;
    __this_02.hasValue._0_1_ = bVar20;
    SVar19 = (System_Nullable_bool__Fields)&uStack_42;
    System_Nullable_bool____ctor((System_Nullable_bool__o)SVar19,(uint)bVar20,MethodInfo_Nullable_1_Boolean);
    if (unaff_R12 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_03b6e714;
    *(undefined2 *)((long)&(unaff_R12->fields).hasIcon + 3) = uStack_42;
    pGStack_38 = row;
    if (g_data_057a9d9a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"point");
      g_data_057a9d9a = '\x01';
    }
    row = (Gisketch_Aottg2UI_Code_AottgUi_o *)&TypeInfo_GisketchLength;
    SVar9 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    __this_02.hasValue = 0;
    __this_02.value = 0;
    SVar19 = SVar9;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)SVar9,(MethodInfo *)0x0);
    if (SVar9 == (System_Nullable_bool__Fields)0x0) goto label_03b6e714;
    *(undefined4 *)((long)SVar9 + 0x10) = 0x42680000;
    *(undefined8 *)((long)SVar9 + 0x18) = "point";
    il2cpp_runtime_helper_022b4080((long)SVar9 + 0x18);
    if (g_data_057a9d9a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"point");
      g_data_057a9d9a = '\x01';
    }
    unaff_RBP = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    __this_02.hasValue = 0;
    __this_02.value = 0;
    SVar19 = unaff_RBP;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)unaff_RBP,(MethodInfo *)0x0);
    if (unaff_RBP == (System_Nullable_bool__Fields)0x0) goto label_03b6e714;
    *(undefined4 *)((long)unaff_RBP + 0x10) = 0x42680000;
    *(undefined8 *)((long)unaff_RBP + 0x18) = "point";
    il2cpp_runtime_helper_022b4080((long)unaff_RBP + 0x18);
    in_stack_ffffffffffffff80 = 0;
    in_stack_ffffffffffffff88 = 0;
    in_stack_ffffffffffffff70 = 0;
    in_stack_ffffffffffffff78 = (MethodInfo *)0x0;
    in_ECX = 0;
    in_R8D = 0;
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)SVar9,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)unaff_RBP,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,in_stack_ffffffffffffffb0);
    (unaff_R12->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar10;
    il2cpp_runtime_helper_022b4080(&(unaff_R12->fields).search,pGVar10);
    __this_02.hasValue = 1;
    __this_02.value = 0;
    SVar19 = TypeInfo_GisketchNodeDefinition;
    SVar9 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_022b2a40();
    pGVar1 = (__this->fields).__4__this;
    if (pGVar1 == (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) goto label_03b6e714;
    pSVar7 = (pGVar1->fields)._id;
    if (g_data_057a9de4 == '\0') {
      il2cpp_runtime_helper_023445d0(&"-swatch");
      g_data_057a9de4 = '\x01';
    }
    unaff_RBP = (System_Nullable_bool__Fields)
                System_String__Concat_3ae5ba0(pSVar7,"-swatch",(MethodInfo *)0x0);
    SStack_40 = (System_Nullable_bool__Fields)(__this->fields).value;
    if (g_data_057a9d9a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"point");
      g_data_057a9d9a = '\x01';
    }
    SVar11 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    __this_02.hasValue = 0;
    __this_02.value = 0;
    SVar19 = SVar11;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)SVar11,(MethodInfo *)0x0);
    if (SVar11 == (System_Nullable_bool__Fields)0x0) goto label_03b6e714;
    *(undefined4 *)((long)SVar11 + 0x10) = 0x42280000;
    *(undefined8 *)((long)SVar11 + 0x18) = "point";
    il2cpp_runtime_helper_022b4080((long)SVar11 + 0x18);
    if (g_data_057a9d9a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"point");
      g_data_057a9d9a = '\x01';
    }
    row = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    __this_02.hasValue = 0;
    __this_02.value = 0;
    SVar19 = (System_Nullable_bool__Fields)row;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)row,(MethodInfo *)0x0);
    if ((System_Nullable_bool__Fields)row == (System_Nullable_bool__Fields)0x0) goto label_03b6e714;
    *(undefined4 *)((long)row + 0x10) = 0x42280000;
    *(undefined8 *)((long)row + 0x18) = "point";
    il2cpp_runtime_helper_022b4080((long)row + 0x18);
    in_stack_ffffffffffffff80 = 0;
    in_stack_ffffffffffffff88 = 0;
    in_stack_ffffffffffffff70 = 0;
    in_stack_ffffffffffffff78 = (MethodInfo *)0x0;
    pMVar15 = (MethodInfo *)0x0;
    in_R8D = 0;
    SVar17 = (System_Nullable_bool__Fields)row;
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)SVar11,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)row,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,in_stack_ffffffffffffffb0);
    __this_02 = SStack_40;
    SVar19 = unaff_RBP;
    pGVar12 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchNode
                        ((System_String_o *)unaff_RBP,(System_String_o *)SStack_40,pGVar10,pMVar15);
    __this_01 = pGStack_38;
    in_ECX = (int)pMVar15;
    if (SVar9 == (System_Nullable_bool__Fields)0x0) goto label_03b6e714;
    if (*(int *)((long)SVar9 + 0x18) != 0) {
      *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)((long)SVar9 + 0x20) = pGVar12;
      il2cpp_runtime_helper_022b4080((long)SVar9 + 0x20,pGVar12);
      SVar19 = (System_Nullable_bool__Fields)&(unaff_R12->fields).deferredChildren;
      (unaff_R12->fields).deferredChildren = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)SVar9;
      il2cpp_runtime_helper_022b4080();
      pGVar1 = (__this->fields).__4__this;
      __this_02 = SVar9;
      if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
        pSVar7 = (__this->fields).value;
        pSVar8 = (pGVar1->fields)._id;
        if (g_data_057a9de5 == '\0') {
          il2cpp_runtime_helper_023445d0(&"-value");
          g_data_057a9de5 = '\x01';
        }
        pSVar8 = System_String__Concat_3ae5ba0(pSVar8,"-value",(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Text
                  (__this_01,pSVar7,"text",pSVar8,(System_String_o *)0x0,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)SVar17);
        return;
      }
      goto label_03b6e714;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  pMVar15 = extraout_RDX;
  SVar9 = SVar19;
  if (g_data_057a9de8 == '\0') {
    SVar9 = (System_Nullable_bool__Fields)&TypeInfo_GisketchUIColorPicker;
    SStack_f8.hasValue = 0x3b6e744;
    SStack_f8.value = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9de8 = '\x01';
    pMVar15 = extraout_RDX_00;
  }
  if (*(long *)((long)SVar19 + 0x10) != 0) {
    pSVar7 = *(System_String_o **)(*(long *)((long)SVar19 + 0x10) + 0x10);
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      SStack_f8.hasValue = 0x3b6e783;
      SStack_f8.value = 0;
      il2cpp_runtime_helper_02337ed0();
      pMVar15 = extraout_RDX_01;
    }
    SStack_f8.hasValue = 0x3b6e7a3;
    SStack_f8.value = 0;
    context_00.fields.GameObject = (UnityEngine_GameObject_o *)in_stack_ffffffffffffff78;
    context_00.fields.ElementId = (System_String_o *)in_stack_ffffffffffffff70;
    context_00.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)in_stack_ffffffffffffff80;
    context_00.fields._24_8_ = in_stack_ffffffffffffff88;
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open(context_00,pSVar7,1,pMVar15);
    return;
  }
  SStack_f8 = (System_Nullable_bool__Fields)
              Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0___BuildCompact_b__0;
  il2cpp_runtime_helper_022b2c90();
  SVar17 = __this_02;
  SVar11 = SVar9;
  SStack_120 = SVar19;
  pGStack_118 = unaff_R12;
  SStack_110 = (System_Nullable_bool__Fields)row;
  puStack_108 = &stack0xffffffffffffff70;
  pGStack_100 = __this;
  SStack_f8 = unaff_RBP;
  if (g_data_057a9de9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildCompact_b__1);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-label");
    SVar11 = (System_Nullable_bool__Fields)&"accountInputLabel";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9de9 = '\x01';
  }
  alpha = SVar17.hasValue;
  lVar2 = *(long *)((long)SVar9 + 0x10);
  if (lVar2 != 0) {
    SVar11 = *(System_Nullable_bool__Fields *)(lVar2 + 0x10);
    pSVar7 = *(System_String_o **)(lVar2 + 0x18);
    SVar19 = "-label";
    pSVar8 = System_String__Concat_3ae5ba0
                       ((System_String_o *)SVar11,(System_String_o *)"-label",(MethodInfo *)0x0);
    alpha = SVar19.hasValue;
    if (__this_02 != (System_Nullable_bool__Fields)0x0) {
      in_R8D = 0;
      SVar11 = __this_02;
      Gisketch_Aottg2UI_Code_AottgUi__Text
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_02,pSVar7,"accountInputLabel",pSVar8,
                 (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                 in_stack_fffffffffffffe88);
      alpha = (uint)pSVar7;
      in_ECX = (int)pSVar8;
      pSVar7 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      action = *(System_Action_GisketchActionContext__o **)((long)SVar9 + 0x20);
      if (action == (System_Action_GisketchActionContext__o *)0x0) {
        unaff_RBP = (System_Nullable_bool__Fields)((long)SVar9 + 0x20);
        action = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        in_ECX = 0;
        System_Action_GisketchActionContext____ctor();
        *(System_Action_GisketchActionContext__o **)((long)SVar9 + 0x20) = action;
        pSVar18 = action;
        SVar11 = unaff_RBP;
        il2cpp_runtime_helper_022b4080();
        alpha = (uint)pSVar18;
      }
      if (*(long *)((long)SVar9 + 0x10) != 0) {
        unaff_RBP = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar9 + 0x10) + 0x10);
        if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057a9de3 == '\0') {
          il2cpp_runtime_helper_023445d0(&"-button");
          g_data_057a9de3 = '\x01';
        }
        row = (Gisketch_Aottg2UI_Code_AottgUi_o *)
              System_String__Concat_3ae5ba0((System_String_o *)unaff_RBP,"-button",(MethodInfo *)0x0);
        if (*(Gisketch_Aottg2UI_Code_AottgActionRegistry_o **)((long)__this_02 + 0x18) ==
            (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
          pSVar8 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        }
        else {
          pSVar8 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                             (*(Gisketch_Aottg2UI_Code_AottgActionRegistry_o **)((long)__this_02 + 0x18),
                              *(System_String_o **)((long)__this_02 + 0x20),action,(MethodInfo *)0x0);
        }
        in_stack_fffffffffffffe90 = 0;
        alpha = 3;
        SVar11 = __this_02;
        SVar19 = (System_Nullable_bool__Fields)row;
        pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Button
                            ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_02,3,pSVar7,pSVar8,
                             (System_String_o *)row,(System_String_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                             in_stack_fffffffffffffe98);
        in_ECX = (int)pSVar8;
        in_R8D = SVar19.hasValue;
        if (*(long *)((long)SVar9 + 0x10) != 0) {
          bVar20 = *(char *)(*(long *)((long)SVar9 + 0x10) + 0x3a) == '\0';
          uStack_122 = 0;
          alpha = (uint)bVar20;
          SVar11 = (System_Nullable_bool__Fields)&uStack_122;
          System_Nullable_bool____ctor((System_Nullable_bool__o)SVar11,(uint)bVar20,MethodInfo_Nullable_1_Boolean);
          if (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            *(undefined2 *)((long)&(pGVar12->fields).hasIcon + 3) = uStack_122;
            if (g_data_057a9d9a == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
              il2cpp_runtime_helper_023445d0(&"point");
              g_data_057a9d9a = '\x01';
            }
            __this_02 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
            alpha = 0;
            SVar11 = __this_02;
            Gisketch_Aottg2UI_Data_GisketchLength___ctor
                      ((Gisketch_Aottg2UI_Data_GisketchLength_o *)__this_02,(MethodInfo *)0x0);
            if (__this_02 != (System_Nullable_bool__Fields)0x0) {
              *(undefined4 *)((long)__this_02 + 0x10) = 0x42680000;
              unaff_RBP = (System_Nullable_bool__Fields)&"point";
              *(undefined8 *)((long)__this_02 + 0x18) = "point";
              il2cpp_runtime_helper_022b4080((long)__this_02 + 0x18);
              if (g_data_057a9d9a == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
                il2cpp_runtime_helper_023445d0(&"point");
                g_data_057a9d9a = '\x01';
              }
              SVar19 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
              alpha = 0;
              SVar11 = SVar19;
              Gisketch_Aottg2UI_Data_GisketchLength___ctor
                        ((Gisketch_Aottg2UI_Data_GisketchLength_o *)SVar19,(MethodInfo *)0x0);
              if (SVar19 != (System_Nullable_bool__Fields)0x0) {
                *(undefined4 *)((long)SVar19 + 0x10) = 0x42680000;
                *(undefined8 *)((long)SVar19 + 0x18) = "point";
                il2cpp_runtime_helper_022b4080((long)SVar19 + 0x18);
                in_stack_fffffffffffffea0 = 0;
                in_stack_fffffffffffffea8 = 0;
                in_stack_fffffffffffffe90 = 0;
                in_stack_fffffffffffffe98 = (MethodInfo *)0x0;
                in_ECX = 0;
                in_R8D = 0;
                pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                    ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                     (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)__this_02,
                                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)SVar19,
                                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,
                                     0.0,0.0,0.0,0.0,0.0,in_stack_fffffffffffffed0);
                (pGVar12->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar10;
                il2cpp_runtime_helper_022b4080(&(pGVar12->fields).search,pGVar10);
                alpha = 1;
                SVar11 = TypeInfo_GisketchNodeDefinition;
                row = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_022b2a40();
                if (*(long *)((long)SVar9 + 0x10) != 0) {
                  pSVar7 = *(System_String_o **)(*(long *)((long)SVar9 + 0x10) + 0x10);
                  if (g_data_057a9de4 == '\0') {
                    il2cpp_runtime_helper_023445d0(&"-swatch");
                    g_data_057a9de4 = '\x01';
                  }
                  __this_02 = (System_Nullable_bool__Fields)
                              System_String__Concat_3ae5ba0(pSVar7,"-swatch",(MethodInfo *)0x0);
                  SVar9 = *(System_Nullable_bool__Fields *)((long)SVar9 + 0x18);
                  if (g_data_057a9d9a == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
                    il2cpp_runtime_helper_023445d0(&"point");
                    g_data_057a9d9a = '\x01';
                  }
                  SVar19 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
                  alpha = 0;
                  SVar11 = SVar19;
                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                            ((Gisketch_Aottg2UI_Data_GisketchLength_o *)SVar19,(MethodInfo *)0x0);
                  if (SVar19 != (System_Nullable_bool__Fields)0x0) {
                    *(undefined4 *)((long)SVar19 + 0x10) = 0x42280000;
                    *(undefined8 *)((long)SVar19 + 0x18) = "point";
                    il2cpp_runtime_helper_022b4080((long)SVar19 + 0x18);
                    if (g_data_057a9d9a == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
                      il2cpp_runtime_helper_023445d0(&"point");
                      g_data_057a9d9a = '\x01';
                    }
                    unaff_RBP = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
                    alpha = 0;
                    SVar11 = unaff_RBP;
                    Gisketch_Aottg2UI_Data_GisketchLength___ctor
                              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)unaff_RBP,(MethodInfo *)0x0);
                    if (unaff_RBP != (System_Nullable_bool__Fields)0x0) {
                      *(undefined4 *)((long)unaff_RBP + 0x10) = 0x42280000;
                      *(undefined8 *)((long)unaff_RBP + 0x18) = "point";
                      il2cpp_runtime_helper_022b4080((long)unaff_RBP + 0x18);
                      in_stack_fffffffffffffea0 = 0;
                      in_stack_fffffffffffffea8 = 0;
                      in_stack_fffffffffffffe90 = 0;
                      in_stack_fffffffffffffe98 = (MethodInfo *)0x0;
                      pMVar15 = (MethodInfo *)0x0;
                      in_R8D = 0;
                      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                          ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                           (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)SVar19,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)unaff_RBP,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,
                                           0.0,0.0,0.0,0.0,0.0,0.0,in_stack_fffffffffffffed0);
                      SVar19 = SVar9;
                      SVar11 = __this_02;
                      pGVar13 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchNode
                                          ((System_String_o *)__this_02,(System_String_o *)SVar9,pGVar10,
                                           pMVar15);
                      alpha = SVar19.hasValue;
                      in_ECX = (int)pMVar15;
                      if ((System_Nullable_bool__Fields)row != (System_Nullable_bool__Fields)0x0) {
                        if (*(int *)((long)row + 0x18) != 0) {
                          *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)((long)row + 0x20) = pGVar13;
                          il2cpp_runtime_helper_022b4080((undefined8 *)((long)row + 0x20),pGVar13);
                          (pGVar12->fields).deferredChildren =
                               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)row;
                          il2cpp_runtime_helper_022b4080(&(pGVar12->fields).deferredChildren,row);
                          return;
                        }
                        goto label_03b6ed26;
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
  il2cpp_runtime_helper_022b2c90();
label_03b6ed26:
  il2cpp_runtime_helper_022b2ca0();
  pMVar15 = extraout_RDX_02;
  SVar19 = SVar11;
  if (g_data_057a9dea == '\0') {
    SVar19 = (System_Nullable_bool__Fields)&TypeInfo_GisketchUIColorPicker;
    SStackY_1d8.hasValue = 0x3b6ed54;
    SStackY_1d8.value = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9dea = '\x01';
    pMVar15 = extraout_RDX_03;
  }
  if (*(long *)((long)SVar11 + 0x10) == 0) {
    SStackY_1d8 = (System_Nullable_bool__Fields)Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse;
    il2cpp_runtime_helper_022b2c90();
    uVar16 = alpha;
    SStackY_200 = SVar11;
    SStackY_1f8 = __this_02;
    SStackY_1f0 = (System_Nullable_bool__Fields)row;
    puStackY_1e8 = &stack0xfffffffffffffe90;
    SStackY_1e0 = SVar9;
    SStackY_1d8 = unaff_RBP;
    pSVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FilterHexInput
                       ((System_String_o *)SVar19,alpha,method_00);
    method_00->methodPointer = (Il2CppMethodPointer)0x0;
    method_00->virtualMethodPointer = (Il2CppMethodPointer)0x0;
    if (pSVar7 == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      *(char *)SVar19 = (char)uVar16;
      *(char *)((long)SVar19 + 1) = (char)extraout_EDX;
      *(char *)((long)SVar19 + 2) = (char)in_ECX;
      rgbColor_00.fields.r = (float)(int)uVar16 / 255.0;
      *(char *)((long)SVar19 + 3) = (char)in_R8D;
      rgbColor_00.fields.b = (float)in_ECX / 255.0;
      rgbColor_00.fields.g = (float)extraout_EDX / 255.0;
      rgbColor_00.fields.a = (float)in_R8D / 255.0;
      UnityEngine_Color__RGBToHSV
                (rgbColor_00,(float *)((long)SVar19 + 4),(float *)((long)SVar19 + 8),
                 (float *)((long)SVar19 + 0xc),(MethodInfo *)0x0);
      return;
    }
    if ((pSVar7->fields)._stringLength == (alpha & 0xff) * 2 + 7) {
      if (g_data_057a9dfc == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
        g_data_057a9dfc = '\x01';
      }
      pSVar8 = System_String__Substring_3af8da0(pSVar7,1,2,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar14 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      bVar3 = System_Byte__Parse_3c17540(pSVar8,0x203,(System_IFormatProvider_o *)pSVar14,(MethodInfo *)0x0);
      if (g_data_057a9dfc == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
        g_data_057a9dfc = '\x01';
      }
      pSVar8 = System_String__Substring_3af8da0(pSVar7,3,2,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar14 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      bVar4 = System_Byte__Parse_3c17540(pSVar8,0x203,(System_IFormatProvider_o *)pSVar14,(MethodInfo *)0x0);
      if (g_data_057a9dfc == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
        g_data_057a9dfc = '\x01';
      }
      pSVar8 = System_String__Substring_3af8da0(pSVar7,5,2,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar14 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      bVar5 = System_Byte__Parse_3c17540(pSVar8,0x203,(System_IFormatProvider_o *)pSVar14,(MethodInfo *)0x0);
      bVar6 = 0xff;
      if ((char)alpha != '\0') {
        if (g_data_057a9dfc == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
          g_data_057a9dfc = '\x01';
        }
        pSVar7 = System_String__Substring_3af8da0(pSVar7,7,2,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar14 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        bVar6 = System_Byte__Parse_3c17540(pSVar7,0x203,(System_IFormatProvider_o *)pSVar14,(MethodInfo *)0x0)
        ;
      }
      fStackY_204 = 0.0;
      fStackY_20c = 0.0;
      fStackY_208 = 0.0;
      rgbColor.fields.r = (float)bVar3 / 255.0;
      rgbColor.fields.b = (float)bVar5 / 255.0;
      rgbColor.fields.g = (float)bVar4 / 255.0;
      rgbColor.fields.a = (float)bVar6 / 255.0;
      UnityEngine_Color__RGBToHSV(rgbColor,&fStackY_20c,&fStackY_208,&fStackY_204,(MethodInfo *)0x0);
      method_00->methodPointer =
           (Il2CppMethodPointer)CONCAT44(fStackY_20c,CONCAT13(bVar6,CONCAT12(bVar5,CONCAT11(bVar4,bVar3))));
      method_00->virtualMethodPointer = (Il2CppMethodPointer)CONCAT44(fStackY_204,fStackY_208);
    }
    return;
  }
  pSVar7 = *(System_String_o **)(*(long *)((long)SVar11 + 0x10) + 0x10);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    SStackY_1d8.hasValue = 0x3b6ed93;
    SStackY_1d8.value = 0;
    il2cpp_runtime_helper_02337ed0();
    pMVar15 = extraout_RDX_04;
  }
  SStackY_1d8.hasValue = 0x3b6edb3;
  SStackY_1d8.value = 0;
  context.fields.GameObject = (UnityEngine_GameObject_o *)in_stack_fffffffffffffe98;
  context.fields.ElementId = (System_String_o *)in_stack_fffffffffffffe90;
  context.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)in_stack_fffffffffffffea0;
  context.fields._24_8_ = in_stack_fffffffffffffea8;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open(context,pSVar7,1,pMVar15);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.<>c__DisplayClass16_0$$<Build>b__1
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0___Build_b__1 (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x3b6e720

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0___Build_b__1
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *pGVar1;
  long lVar2;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o context_00;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  System_String_o *id;
  System_Action_GisketchActionContext__o *action;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar8;
  System_Nullable_bool__Fields SVar9;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar11;
  System_String_o *pSVar12;
  System_Globalization_CultureInfo_o *pSVar13;
  int in_ECX;
  MethodInfo *pMVar14;
  int extraout_EDX;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *method_00;
  System_Nullable_bool__Fields unaff_RBP;
  uint alpha;
  uint uVar15;
  System_Action_GisketchActionContext__o *pSVar16;
  System_Nullable_bool__Fields value;
  System_Nullable_bool__Fields __this_00;
  int in_R8D;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar17;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *unaff_R13;
  bool bVar18;
  UnityEngine_Color_o rgbColor;
  UnityEngine_Color_o rgbColor_00;
  float fStackY_174;
  float fStackY_170;
  float fStackY_16c;
  System_Nullable_bool__Fields SStackY_168;
  System_Nullable_bool__Fields SStackY_160;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGStackY_158;
  undefined1 *puStackY_150;
  System_Nullable_bool__Fields SStackY_148;
  System_Nullable_bool__Fields SStackY_140;
  MethodInfo *in_stack_ffffffffffffff20;
  undefined8 in_stack_ffffffffffffff28;
  MethodInfo *in_stack_ffffffffffffff30;
  undefined8 in_stack_ffffffffffffff38;
  undefined8 in_stack_ffffffffffffff40;
  MethodInfo *in_stack_ffffffffffffff68;
  undefined2 uStack_8a;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass16_0_o *pGStack_88;
  
  value = (System_Nullable_bool__Fields)__this;
  if (g_data_057a9de8 == '\0') {
    value = (System_Nullable_bool__Fields)&TypeInfo_GisketchUIColorPicker;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9de8 = '\x01';
    in_RDX = extraout_RDX;
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
    pSVar12 = (pGVar1->fields)._id;
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      in_RDX = extraout_RDX_00;
    }
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open(context,pSVar12,1,in_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  SVar9 = (System_Nullable_bool__Fields)method;
  __this_00 = value;
  pGStack_88 = __this;
  if (g_data_057a9de9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildCompact_b__1);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-label");
    __this_00 = (System_Nullable_bool__Fields)&"accountInputLabel";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9de9 = '\x01';
  }
  alpha = SVar9.hasValue;
  lVar2 = *(long *)((long)value + 0x10);
  if (lVar2 != 0) {
    __this_00 = *(System_Nullable_bool__Fields *)(lVar2 + 0x10);
    pSVar12 = *(System_String_o **)(lVar2 + 0x18);
    pSVar7 = "-label";
    id = System_String__Concat_3ae5ba0((System_String_o *)__this_00,"-label",(MethodInfo *)0x0);
    alpha = (uint)pSVar7;
    if ((System_Nullable_bool__Fields)method != (System_Nullable_bool__Fields)0x0) {
      in_R8D = 0;
      __this_00 = (System_Nullable_bool__Fields)method;
      Gisketch_Aottg2UI_Code_AottgUi__Text
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)method,pSVar12,"accountInputLabel",id,(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,in_stack_ffffffffffffff20);
      alpha = (uint)pSVar12;
      in_ECX = (int)id;
      pSVar12 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      action = *(System_Action_GisketchActionContext__o **)((long)value + 0x20);
      if (action == (System_Action_GisketchActionContext__o *)0x0) {
        unaff_RBP = (System_Nullable_bool__Fields)((long)value + 0x20);
        action = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        in_ECX = 0;
        System_Action_GisketchActionContext____ctor();
        *(System_Action_GisketchActionContext__o **)((long)value + 0x20) = action;
        pSVar16 = action;
        __this_00 = unaff_RBP;
        il2cpp_runtime_helper_022b4080();
        alpha = (uint)pSVar16;
      }
      if (*(long *)((long)value + 0x10) != 0) {
        unaff_RBP = *(System_Nullable_bool__Fields *)(*(long *)((long)value + 0x10) + 0x10);
        if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057a9de3 == '\0') {
          il2cpp_runtime_helper_023445d0(&"-button");
          g_data_057a9de3 = '\x01';
        }
        unaff_R13 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                    System_String__Concat_3ae5ba0((System_String_o *)unaff_RBP,"-button",(MethodInfo *)0x0)
        ;
        if (*(Gisketch_Aottg2UI_Code_AottgActionRegistry_o **)((long)method + 0x18) ==
            (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
          pSVar7 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        }
        else {
          pSVar7 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                             (*(Gisketch_Aottg2UI_Code_AottgActionRegistry_o **)((long)method + 0x18),
                              *(System_String_o **)((long)method + 0x20),action,(MethodInfo *)0x0);
        }
        in_stack_ffffffffffffff28 = 0;
        alpha = 3;
        __this_00 = (System_Nullable_bool__Fields)method;
        pGVar17 = unaff_R13;
        pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Button
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)method,3,pSVar12,pSVar7,
                            (System_String_o *)unaff_R13,(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                            in_stack_ffffffffffffff30);
        in_ECX = (int)pSVar7;
        in_R8D = (int)pGVar17;
        if (*(long *)((long)value + 0x10) != 0) {
          bVar18 = *(char *)(*(long *)((long)value + 0x10) + 0x3a) == '\0';
          uStack_8a = 0;
          alpha = (uint)bVar18;
          __this_00 = (System_Nullable_bool__Fields)&uStack_8a;
          System_Nullable_bool____ctor((System_Nullable_bool__o)__this_00,(uint)bVar18,MethodInfo_Nullable_1_Boolean);
          if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            *(undefined2 *)((long)&(pGVar8->fields).hasIcon + 3) = uStack_8a;
            if (g_data_057a9d9a == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
              il2cpp_runtime_helper_023445d0(&"point");
              g_data_057a9d9a = '\x01';
            }
            method = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
            alpha = 0;
            __this_00 = (System_Nullable_bool__Fields)method;
            Gisketch_Aottg2UI_Data_GisketchLength___ctor
                      ((Gisketch_Aottg2UI_Data_GisketchLength_o *)method,(MethodInfo *)0x0);
            if ((System_Nullable_bool__Fields)method != (System_Nullable_bool__Fields)0x0) {
              *(undefined4 *)((long)method + 0x10) = 0x42680000;
              unaff_RBP = (System_Nullable_bool__Fields)&"point";
              *(undefined8 *)((long)method + 0x18) = "point";
              il2cpp_runtime_helper_022b4080((long)method + 0x18);
              if (g_data_057a9d9a == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
                il2cpp_runtime_helper_023445d0(&"point");
                g_data_057a9d9a = '\x01';
              }
              SVar9 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
              alpha = 0;
              __this_00 = SVar9;
              Gisketch_Aottg2UI_Data_GisketchLength___ctor
                        ((Gisketch_Aottg2UI_Data_GisketchLength_o *)SVar9,(MethodInfo *)0x0);
              if (SVar9 != (System_Nullable_bool__Fields)0x0) {
                *(undefined4 *)((long)SVar9 + 0x10) = 0x42680000;
                *(undefined8 *)((long)SVar9 + 0x18) = "point";
                il2cpp_runtime_helper_022b4080((long)SVar9 + 0x18);
                in_stack_ffffffffffffff38 = 0;
                in_stack_ffffffffffffff40 = 0;
                in_stack_ffffffffffffff28 = 0;
                in_stack_ffffffffffffff30 = (MethodInfo *)0x0;
                in_ECX = 0;
                in_R8D = 0;
                pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                    ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                     (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)method,
                                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)SVar9,
                                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,
                                     0.0,0.0,0.0,0.0,0.0,in_stack_ffffffffffffff68);
                (pGVar8->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar10;
                il2cpp_runtime_helper_022b4080(&(pGVar8->fields).search,pGVar10);
                alpha = 1;
                __this_00 = TypeInfo_GisketchNodeDefinition;
                unaff_R13 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_022b2a40();
                if (*(long *)((long)value + 0x10) != 0) {
                  pSVar12 = *(System_String_o **)(*(long *)((long)value + 0x10) + 0x10);
                  if (g_data_057a9de4 == '\0') {
                    il2cpp_runtime_helper_023445d0(&"-swatch");
                    g_data_057a9de4 = '\x01';
                  }
                  method = (MethodInfo *)System_String__Concat_3ae5ba0(pSVar12,"-swatch",(MethodInfo *)0x0)
                  ;
                  value = *(System_Nullable_bool__Fields *)((long)value + 0x18);
                  if (g_data_057a9d9a == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
                    il2cpp_runtime_helper_023445d0(&"point");
                    g_data_057a9d9a = '\x01';
                  }
                  SVar9 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
                  alpha = 0;
                  __this_00 = SVar9;
                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                            ((Gisketch_Aottg2UI_Data_GisketchLength_o *)SVar9,(MethodInfo *)0x0);
                  if (SVar9 != (System_Nullable_bool__Fields)0x0) {
                    *(undefined4 *)((long)SVar9 + 0x10) = 0x42280000;
                    *(undefined8 *)((long)SVar9 + 0x18) = "point";
                    il2cpp_runtime_helper_022b4080((long)SVar9 + 0x18);
                    if (g_data_057a9d9a == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
                      il2cpp_runtime_helper_023445d0(&"point");
                      g_data_057a9d9a = '\x01';
                    }
                    unaff_RBP = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
                    alpha = 0;
                    __this_00 = unaff_RBP;
                    Gisketch_Aottg2UI_Data_GisketchLength___ctor
                              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)unaff_RBP,(MethodInfo *)0x0);
                    if (unaff_RBP != (System_Nullable_bool__Fields)0x0) {
                      *(undefined4 *)((long)unaff_RBP + 0x10) = 0x42280000;
                      *(undefined8 *)((long)unaff_RBP + 0x18) = "point";
                      il2cpp_runtime_helper_022b4080((long)unaff_RBP + 0x18);
                      in_stack_ffffffffffffff38 = 0;
                      in_stack_ffffffffffffff40 = 0;
                      in_stack_ffffffffffffff28 = 0;
                      in_stack_ffffffffffffff30 = (MethodInfo *)0x0;
                      pMVar14 = (MethodInfo *)0x0;
                      in_R8D = 0;
                      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                          ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                           (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)SVar9,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)unaff_RBP,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,
                                           0.0,0.0,0.0,0.0,0.0,0.0,in_stack_ffffffffffffff68);
                      SVar9 = value;
                      __this_00 = (System_Nullable_bool__Fields)method;
                      pGVar11 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchNode
                                          ((System_String_o *)method,(System_String_o *)value,pGVar10,pMVar14)
                      ;
                      alpha = SVar9.hasValue;
                      in_ECX = (int)pMVar14;
                      if (unaff_R13 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
                        if ((int)unaff_R13->max_length != 0) {
                          unaff_R13->m_Items[0] = pGVar11;
                          il2cpp_runtime_helper_022b4080(unaff_R13->m_Items,pGVar11);
                          (pGVar8->fields).deferredChildren = unaff_R13;
                          il2cpp_runtime_helper_022b4080(&(pGVar8->fields).deferredChildren,unaff_R13);
                          return;
                        }
                        goto label_03b6ed26;
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
  il2cpp_runtime_helper_022b2c90();
label_03b6ed26:
  il2cpp_runtime_helper_022b2ca0();
  pMVar14 = extraout_RDX_01;
  SVar9 = __this_00;
  if (g_data_057a9dea == '\0') {
    SVar9 = (System_Nullable_bool__Fields)&TypeInfo_GisketchUIColorPicker;
    SStackY_140.hasValue = 0x3b6ed54;
    SStackY_140.value = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9dea = '\x01';
    pMVar14 = extraout_RDX_02;
  }
  if (*(long *)((long)__this_00 + 0x10) == 0) {
    SStackY_140 = (System_Nullable_bool__Fields)Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse;
    il2cpp_runtime_helper_022b2c90();
    uVar15 = alpha;
    SStackY_168 = __this_00;
    SStackY_160 = (System_Nullable_bool__Fields)method;
    pGStackY_158 = unaff_R13;
    puStackY_150 = &stack0xffffffffffffff28;
    SStackY_148 = value;
    SStackY_140 = unaff_RBP;
    pSVar12 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FilterHexInput
                        ((System_String_o *)SVar9,alpha,method_00);
    method_00->methodPointer = (Il2CppMethodPointer)0x0;
    method_00->virtualMethodPointer = (Il2CppMethodPointer)0x0;
    if (pSVar12 == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      *(char *)SVar9 = (char)uVar15;
      *(char *)((long)SVar9 + 1) = (char)extraout_EDX;
      *(char *)((long)SVar9 + 2) = (char)in_ECX;
      rgbColor_00.fields.r = (float)(int)uVar15 / 255.0;
      *(char *)((long)SVar9 + 3) = (char)in_R8D;
      rgbColor_00.fields.b = (float)in_ECX / 255.0;
      rgbColor_00.fields.g = (float)extraout_EDX / 255.0;
      rgbColor_00.fields.a = (float)in_R8D / 255.0;
      UnityEngine_Color__RGBToHSV
                (rgbColor_00,(float *)((long)SVar9 + 4),(float *)((long)SVar9 + 8),
                 (float *)((long)SVar9 + 0xc),(MethodInfo *)0x0);
      return;
    }
    if ((pSVar12->fields)._stringLength == (alpha & 0xff) * 2 + 7) {
      if (g_data_057a9dfc == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
        g_data_057a9dfc = '\x01';
      }
      pSVar7 = System_String__Substring_3af8da0(pSVar12,1,2,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar13 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      bVar3 = System_Byte__Parse_3c17540(pSVar7,0x203,(System_IFormatProvider_o *)pSVar13,(MethodInfo *)0x0);
      if (g_data_057a9dfc == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
        g_data_057a9dfc = '\x01';
      }
      pSVar7 = System_String__Substring_3af8da0(pSVar12,3,2,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar13 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      bVar4 = System_Byte__Parse_3c17540(pSVar7,0x203,(System_IFormatProvider_o *)pSVar13,(MethodInfo *)0x0);
      if (g_data_057a9dfc == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
        g_data_057a9dfc = '\x01';
      }
      pSVar7 = System_String__Substring_3af8da0(pSVar12,5,2,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar13 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      bVar5 = System_Byte__Parse_3c17540(pSVar7,0x203,(System_IFormatProvider_o *)pSVar13,(MethodInfo *)0x0);
      bVar6 = 0xff;
      if ((char)alpha != '\0') {
        if (g_data_057a9dfc == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
          g_data_057a9dfc = '\x01';
        }
        pSVar12 = System_String__Substring_3af8da0(pSVar12,7,2,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar13 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        bVar6 = System_Byte__Parse_3c17540
                          (pSVar12,0x203,(System_IFormatProvider_o *)pSVar13,(MethodInfo *)0x0);
      }
      fStackY_16c = 0.0;
      fStackY_174 = 0.0;
      fStackY_170 = 0.0;
      rgbColor.fields.r = (float)bVar3 / 255.0;
      rgbColor.fields.b = (float)bVar5 / 255.0;
      rgbColor.fields.g = (float)bVar4 / 255.0;
      rgbColor.fields.a = (float)bVar6 / 255.0;
      UnityEngine_Color__RGBToHSV(rgbColor,&fStackY_174,&fStackY_170,&fStackY_16c,(MethodInfo *)0x0);
      method_00->methodPointer =
           (Il2CppMethodPointer)CONCAT44(fStackY_174,CONCAT13(bVar6,CONCAT12(bVar5,CONCAT11(bVar4,bVar3))));
      method_00->virtualMethodPointer = (Il2CppMethodPointer)CONCAT44(fStackY_16c,fStackY_170);
    }
    return;
  }
  pSVar12 = *(System_String_o **)(*(long *)((long)__this_00 + 0x10) + 0x10);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    SStackY_140.hasValue = 0x3b6ed93;
    SStackY_140.value = 0;
    il2cpp_runtime_helper_02337ed0();
    pMVar14 = extraout_RDX_03;
  }
  SStackY_140.hasValue = 0x3b6edb3;
  SStackY_140.value = 0;
  context_00.fields.GameObject = (UnityEngine_GameObject_o *)in_stack_ffffffffffffff30;
  context_00.fields.ElementId = (System_String_o *)in_stack_ffffffffffffff28;
  context_00.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)in_stack_ffffffffffffff38;
  context_00.fields._24_8_ = in_stack_ffffffffffffff40;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open(context_00,pSVar12,1,pMVar14);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.<>c__DisplayClass17_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x3b6b140

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.<>c__DisplayClass17_0$$<BuildCompact>b__0
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0___BuildCompact_b__0 (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* field, const MethodInfo* method);
// 0x3b6e7b0

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0___BuildCompact_b__0
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *field,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *pGVar1;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o context;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  System_String_o *id;
  System_Action_GisketchActionContext__o *action;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  System_Nullable_bool__Fields SVar8;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar10;
  System_String_o *pSVar11;
  System_Globalization_CultureInfo_o *pSVar12;
  int in_ECX;
  MethodInfo *pMVar13;
  int extraout_EDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  System_Nullable_bool__Fields unaff_RBP;
  uint alpha;
  uint uVar14;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar15;
  System_Action_GisketchActionContext__o *pSVar16;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0_o *pGVar17;
  System_Nullable_bool__Fields __this_01;
  int in_R8D;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar18;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *unaff_R13;
  bool bVar19;
  UnityEngine_Color_o rgbColor;
  UnityEngine_Color_o rgbColor_00;
  float fStackY_11c;
  float fStackY_118;
  float fStackY_114;
  System_Nullable_bool__Fields SStackY_110;
  System_Nullable_bool__Fields SStackY_108;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGStackY_100;
  undefined1 *puStackY_f8;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0_o *pGStackY_f0;
  System_Nullable_bool__Fields SStackY_e8;
  MethodInfo *in_stack_ffffffffffffff78;
  undefined8 in_stack_ffffffffffffff80;
  MethodInfo *in_stack_ffffffffffffff88;
  undefined8 in_stack_ffffffffffffff90;
  undefined8 in_stack_ffffffffffffff98;
  MethodInfo *in_stack_ffffffffffffffc0;
  undefined2 uStack_32;
  
  pGVar15 = field;
  __this_01 = (System_Nullable_bool__Fields)__this;
  if (g_data_057a9de9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildCompact_b__1);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-label");
    __this_01 = (System_Nullable_bool__Fields)&"accountInputLabel";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9de9 = '\x01';
  }
  alpha = (uint)pGVar15;
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
    __this_01 = (System_Nullable_bool__Fields)(pGVar1->fields)._id;
    pSVar11 = (pGVar1->fields)._label;
    pSVar6 = "-label";
    id = System_String__Concat_3ae5ba0((System_String_o *)__this_01,"-label",(MethodInfo *)0x0);
    alpha = (uint)pSVar6;
    if (field != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      in_R8D = 0;
      __this_01 = (System_Nullable_bool__Fields)field;
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (field,pSVar11,"accountInputLabel",id,(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,in_stack_ffffffffffffff78);
      alpha = (uint)pSVar11;
      in_ECX = (int)id;
      pSVar11 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      action = (__this->fields).__9__1;
      if (action == (System_Action_GisketchActionContext__o *)0x0) {
        unaff_RBP = (System_Nullable_bool__Fields)&(__this->fields).__9__1;
        action = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        in_ECX = 0;
        System_Action_GisketchActionContext____ctor();
        (__this->fields).__9__1 = action;
        pSVar16 = action;
        __this_01 = unaff_RBP;
        il2cpp_runtime_helper_022b4080();
        alpha = (uint)pSVar16;
      }
      pGVar1 = (__this->fields).__4__this;
      if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
        unaff_RBP = (System_Nullable_bool__Fields)(pGVar1->fields)._id;
        if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057a9de3 == '\0') {
          il2cpp_runtime_helper_023445d0(&"-button");
          g_data_057a9de3 = '\x01';
        }
        unaff_R13 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                    System_String__Concat_3ae5ba0((System_String_o *)unaff_RBP,"-button",(MethodInfo *)0x0)
        ;
        __this_00 = (field->fields)._actions;
        if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
          pSVar6 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        }
        else {
          pSVar6 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                             (__this_00,(field->fields)._ownerId,action,(MethodInfo *)0x0);
        }
        in_stack_ffffffffffffff80 = 0;
        alpha = 3;
        __this_01 = (System_Nullable_bool__Fields)field;
        pGVar18 = unaff_R13;
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Button
                           (field,3,pSVar11,pSVar6,(System_String_o *)unaff_R13,(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                            in_stack_ffffffffffffff88);
        in_ECX = (int)pSVar6;
        in_R8D = (int)pGVar18;
        pGVar1 = (__this->fields).__4__this;
        if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
          bVar19 = *(char *)((long)&(pGVar1->fields)._livePreview + 2) == '\0';
          uStack_32 = 0;
          alpha = (uint)bVar19;
          __this_01 = (System_Nullable_bool__Fields)&uStack_32;
          System_Nullable_bool____ctor((System_Nullable_bool__o)__this_01,(uint)bVar19,MethodInfo_Nullable_1_Boolean);
          if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            *(undefined2 *)((long)&(pGVar7->fields).hasIcon + 3) = uStack_32;
            if (g_data_057a9d9a == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
              il2cpp_runtime_helper_023445d0(&"point");
              g_data_057a9d9a = '\x01';
            }
            field = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
            alpha = 0;
            __this_01 = (System_Nullable_bool__Fields)field;
            Gisketch_Aottg2UI_Data_GisketchLength___ctor
                      ((Gisketch_Aottg2UI_Data_GisketchLength_o *)field,(MethodInfo *)0x0);
            if ((System_Nullable_bool__Fields)field != (System_Nullable_bool__Fields)0x0) {
              *(undefined4 *)((long)field + 0x10) = 0x42680000;
              unaff_RBP = (System_Nullable_bool__Fields)&"point";
              *(undefined8 *)((long)field + 0x18) = "point";
              il2cpp_runtime_helper_022b4080((long)field + 0x18);
              if (g_data_057a9d9a == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
                il2cpp_runtime_helper_023445d0(&"point");
                g_data_057a9d9a = '\x01';
              }
              SVar8 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
              alpha = 0;
              __this_01 = SVar8;
              Gisketch_Aottg2UI_Data_GisketchLength___ctor
                        ((Gisketch_Aottg2UI_Data_GisketchLength_o *)SVar8,(MethodInfo *)0x0);
              if (SVar8 != (System_Nullable_bool__Fields)0x0) {
                *(undefined4 *)((long)SVar8 + 0x10) = 0x42680000;
                *(undefined8 *)((long)SVar8 + 0x18) = "point";
                il2cpp_runtime_helper_022b4080((long)SVar8 + 0x18);
                in_stack_ffffffffffffff90 = 0;
                in_stack_ffffffffffffff98 = 0;
                in_stack_ffffffffffffff80 = 0;
                in_stack_ffffffffffffff88 = (MethodInfo *)0x0;
                in_ECX = 0;
                in_R8D = 0;
                pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                   ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                    (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)field,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)SVar8,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                    ,0.0,0.0,0.0,0.0,in_stack_ffffffffffffffc0);
                (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar9;
                il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar9);
                alpha = 1;
                __this_01 = TypeInfo_GisketchNodeDefinition;
                unaff_R13 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_022b2a40();
                pGVar1 = (__this->fields).__4__this;
                if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
                  pSVar11 = (pGVar1->fields)._id;
                  if (g_data_057a9de4 == '\0') {
                    il2cpp_runtime_helper_023445d0(&"-swatch");
                    g_data_057a9de4 = '\x01';
                  }
                  field = (Gisketch_Aottg2UI_Code_AottgUi_o *)
                          System_String__Concat_3ae5ba0(pSVar11,"-swatch",(MethodInfo *)0x0);
                  __this = (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0_o *)
                           (__this->fields).value;
                  if (g_data_057a9d9a == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
                    il2cpp_runtime_helper_023445d0(&"point");
                    g_data_057a9d9a = '\x01';
                  }
                  SVar8 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
                  alpha = 0;
                  __this_01 = SVar8;
                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                            ((Gisketch_Aottg2UI_Data_GisketchLength_o *)SVar8,(MethodInfo *)0x0);
                  if (SVar8 != (System_Nullable_bool__Fields)0x0) {
                    *(undefined4 *)((long)SVar8 + 0x10) = 0x42280000;
                    *(undefined8 *)((long)SVar8 + 0x18) = "point";
                    il2cpp_runtime_helper_022b4080((long)SVar8 + 0x18);
                    if (g_data_057a9d9a == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
                      il2cpp_runtime_helper_023445d0(&"point");
                      g_data_057a9d9a = '\x01';
                    }
                    unaff_RBP = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
                    alpha = 0;
                    __this_01 = unaff_RBP;
                    Gisketch_Aottg2UI_Data_GisketchLength___ctor
                              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)unaff_RBP,(MethodInfo *)0x0);
                    if (unaff_RBP != (System_Nullable_bool__Fields)0x0) {
                      *(undefined4 *)((long)unaff_RBP + 0x10) = 0x42280000;
                      *(undefined8 *)((long)unaff_RBP + 0x18) = "point";
                      il2cpp_runtime_helper_022b4080((long)unaff_RBP + 0x18);
                      in_stack_ffffffffffffff90 = 0;
                      in_stack_ffffffffffffff98 = 0;
                      in_stack_ffffffffffffff80 = 0;
                      in_stack_ffffffffffffff88 = (MethodInfo *)0x0;
                      pMVar13 = (MethodInfo *)0x0;
                      in_R8D = 0;
                      pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)SVar8,
                                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)unaff_RBP,
                                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,
                                          0.0,0.0,0.0,0.0,0.0,0.0,in_stack_ffffffffffffffc0);
                      pGVar17 = __this;
                      __this_01 = (System_Nullable_bool__Fields)field;
                      pGVar10 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchNode
                                          ((System_String_o *)field,(System_String_o *)__this,pGVar9,pMVar13);
                      alpha = (uint)pGVar17;
                      in_ECX = (int)pMVar13;
                      if (unaff_R13 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
                        if ((int)unaff_R13->max_length != 0) {
                          unaff_R13->m_Items[0] = pGVar10;
                          il2cpp_runtime_helper_022b4080(unaff_R13->m_Items,pGVar10);
                          (pGVar7->fields).deferredChildren = unaff_R13;
                          il2cpp_runtime_helper_022b4080(&(pGVar7->fields).deferredChildren,unaff_R13);
                          return;
                        }
                        goto label_03b6ed26;
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
  il2cpp_runtime_helper_022b2c90();
label_03b6ed26:
  il2cpp_runtime_helper_022b2ca0();
  pMVar13 = extraout_RDX;
  SVar8 = __this_01;
  if (g_data_057a9dea == '\0') {
    SVar8 = (System_Nullable_bool__Fields)&TypeInfo_GisketchUIColorPicker;
    SStackY_e8.hasValue = 0x3b6ed54;
    SStackY_e8.value = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9dea = '\x01';
    pMVar13 = extraout_RDX_00;
  }
  if (*(long *)((long)__this_01 + 0x10) == 0) {
    SStackY_e8 = (System_Nullable_bool__Fields)Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse;
    il2cpp_runtime_helper_022b2c90();
    uVar14 = alpha;
    SStackY_110 = __this_01;
    SStackY_108 = (System_Nullable_bool__Fields)field;
    pGStackY_100 = unaff_R13;
    puStackY_f8 = &stack0xffffffffffffff80;
    pGStackY_f0 = __this;
    SStackY_e8 = unaff_RBP;
    pSVar11 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FilterHexInput
                        ((System_String_o *)SVar8,alpha,method_00);
    method_00->methodPointer = (Il2CppMethodPointer)0x0;
    method_00->virtualMethodPointer = (Il2CppMethodPointer)0x0;
    if (pSVar11 == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      *(char *)SVar8 = (char)uVar14;
      *(char *)((long)SVar8 + 1) = (char)extraout_EDX;
      *(char *)((long)SVar8 + 2) = (char)in_ECX;
      rgbColor_00.fields.r = (float)(int)uVar14 / 255.0;
      *(char *)((long)SVar8 + 3) = (char)in_R8D;
      rgbColor_00.fields.b = (float)in_ECX / 255.0;
      rgbColor_00.fields.g = (float)extraout_EDX / 255.0;
      rgbColor_00.fields.a = (float)in_R8D / 255.0;
      UnityEngine_Color__RGBToHSV
                (rgbColor_00,(float *)((long)SVar8 + 4),(float *)((long)SVar8 + 8),
                 (float *)((long)SVar8 + 0xc),(MethodInfo *)0x0);
      return;
    }
    if ((pSVar11->fields)._stringLength == (alpha & 0xff) * 2 + 7) {
      if (g_data_057a9dfc == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
        g_data_057a9dfc = '\x01';
      }
      pSVar6 = System_String__Substring_3af8da0(pSVar11,1,2,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar12 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      bVar2 = System_Byte__Parse_3c17540(pSVar6,0x203,(System_IFormatProvider_o *)pSVar12,(MethodInfo *)0x0);
      if (g_data_057a9dfc == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
        g_data_057a9dfc = '\x01';
      }
      pSVar6 = System_String__Substring_3af8da0(pSVar11,3,2,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar12 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      bVar3 = System_Byte__Parse_3c17540(pSVar6,0x203,(System_IFormatProvider_o *)pSVar12,(MethodInfo *)0x0);
      if (g_data_057a9dfc == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
        g_data_057a9dfc = '\x01';
      }
      pSVar6 = System_String__Substring_3af8da0(pSVar11,5,2,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar12 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      bVar4 = System_Byte__Parse_3c17540(pSVar6,0x203,(System_IFormatProvider_o *)pSVar12,(MethodInfo *)0x0);
      bVar5 = 0xff;
      if ((char)alpha != '\0') {
        if (g_data_057a9dfc == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
          g_data_057a9dfc = '\x01';
        }
        pSVar11 = System_String__Substring_3af8da0(pSVar11,7,2,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar12 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        bVar5 = System_Byte__Parse_3c17540
                          (pSVar11,0x203,(System_IFormatProvider_o *)pSVar12,(MethodInfo *)0x0);
      }
      fStackY_114 = 0.0;
      fStackY_11c = 0.0;
      fStackY_118 = 0.0;
      rgbColor.fields.r = (float)bVar2 / 255.0;
      rgbColor.fields.b = (float)bVar4 / 255.0;
      rgbColor.fields.g = (float)bVar3 / 255.0;
      rgbColor.fields.a = (float)bVar5 / 255.0;
      UnityEngine_Color__RGBToHSV(rgbColor,&fStackY_11c,&fStackY_118,&fStackY_114,(MethodInfo *)0x0);
      method_00->methodPointer =
           (Il2CppMethodPointer)CONCAT44(fStackY_11c,CONCAT13(bVar5,CONCAT12(bVar4,CONCAT11(bVar3,bVar2))));
      method_00->virtualMethodPointer = (Il2CppMethodPointer)CONCAT44(fStackY_114,fStackY_118);
    }
    return;
  }
  pSVar11 = *(System_String_o **)(*(long *)((long)__this_01 + 0x10) + 0x10);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    SStackY_e8.hasValue = 0x3b6ed93;
    SStackY_e8.value = 0;
    il2cpp_runtime_helper_02337ed0();
    pMVar13 = extraout_RDX_01;
  }
  SStackY_e8.hasValue = 0x3b6edb3;
  SStackY_e8.value = 0;
  context.fields.GameObject = (UnityEngine_GameObject_o *)in_stack_ffffffffffffff88;
  context.fields.ElementId = (System_String_o *)in_stack_ffffffffffffff80;
  context.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)in_stack_ffffffffffffff90;
  context.fields._24_8_ = in_stack_ffffffffffffff98;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open(context,pSVar11,1,pMVar13);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker.<>c__DisplayClass17_0$$<BuildCompact>b__1
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0___BuildCompact_b__1 (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x3b6ed30

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0___BuildCompact_b__1
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *pGVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_Globalization_CultureInfo_o *pSVar8;
  int in_ECX;
  int extraout_EDX;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  uint alpha;
  uint uVar9;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0_o *text;
  int in_R8D;
  UnityEngine_Color_o rgbColor;
  UnityEngine_Color_o rgbColor_00;
  float fStackY_94;
  float fStackY_90;
  float fStackY_8c;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0_o *pGStackY_88;
  
  alpha = (uint)method;
  text = __this;
  if (g_data_057a9dea == '\0') {
    text = (Gisketch_Aottg2UI_Code_GisketchUIColorPicker___c__DisplayClass17_0_o *)&TypeInfo_GisketchUIColorPicker;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9dea = '\x01';
    in_RDX = extraout_RDX;
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 == (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    uVar9 = alpha;
    pGStackY_88 = __this;
    pSVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FilterHexInput
                       ((System_String_o *)text,alpha,method_00);
    method_00->methodPointer = (Il2CppMethodPointer)0x0;
    method_00->virtualMethodPointer = (Il2CppMethodPointer)0x0;
    if (pSVar6 == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      *(char *)&text->klass = (char)uVar9;
      *(char *)((long)&text->klass + 1) = (char)extraout_EDX;
      *(char *)((long)&text->klass + 2) = (char)in_ECX;
      rgbColor_00.fields.r = (float)(int)uVar9 / 255.0;
      *(char *)((long)&text->klass + 3) = (char)in_R8D;
      rgbColor_00.fields.b = (float)in_ECX / 255.0;
      rgbColor_00.fields.g = (float)extraout_EDX / 255.0;
      rgbColor_00.fields.a = (float)in_R8D / 255.0;
      UnityEngine_Color__RGBToHSV
                (rgbColor_00,(float *)((long)&text->klass + 4),(float *)&text->monitor,
                 (float *)((long)&text->monitor + 4),(MethodInfo *)0x0);
      return;
    }
    if ((pSVar6->fields)._stringLength == (alpha & 0xff) * 2 + 7) {
      if (g_data_057a9dfc == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
        g_data_057a9dfc = '\x01';
      }
      pSVar7 = System_String__Substring_3af8da0(pSVar6,1,2,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      bVar2 = System_Byte__Parse_3c17540(pSVar7,0x203,(System_IFormatProvider_o *)pSVar8,(MethodInfo *)0x0);
      if (g_data_057a9dfc == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
        g_data_057a9dfc = '\x01';
      }
      pSVar7 = System_String__Substring_3af8da0(pSVar6,3,2,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      bVar3 = System_Byte__Parse_3c17540(pSVar7,0x203,(System_IFormatProvider_o *)pSVar8,(MethodInfo *)0x0);
      if (g_data_057a9dfc == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
        g_data_057a9dfc = '\x01';
      }
      pSVar7 = System_String__Substring_3af8da0(pSVar6,5,2,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      bVar4 = System_Byte__Parse_3c17540(pSVar7,0x203,(System_IFormatProvider_o *)pSVar8,(MethodInfo *)0x0);
      bVar5 = 0xff;
      if ((char)alpha != '\0') {
        if (g_data_057a9dfc == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
          g_data_057a9dfc = '\x01';
        }
        pSVar6 = System_String__Substring_3af8da0(pSVar6,7,2,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        bVar5 = System_Byte__Parse_3c17540(pSVar6,0x203,(System_IFormatProvider_o *)pSVar8,(MethodInfo *)0x0);
      }
      fStackY_8c = 0.0;
      fStackY_94 = 0.0;
      fStackY_90 = 0.0;
      rgbColor.fields.r = (float)bVar2 / 255.0;
      rgbColor.fields.b = (float)bVar4 / 255.0;
      rgbColor.fields.g = (float)bVar3 / 255.0;
      rgbColor.fields.a = (float)bVar5 / 255.0;
      UnityEngine_Color__RGBToHSV(rgbColor,&fStackY_94,&fStackY_90,&fStackY_8c,(MethodInfo *)0x0);
      method_00->methodPointer =
           (Il2CppMethodPointer)CONCAT44(fStackY_94,CONCAT13(bVar5,CONCAT12(bVar4,CONCAT11(bVar3,bVar2))));
      method_00->virtualMethodPointer = (Il2CppMethodPointer)CONCAT44(fStackY_8c,fStackY_90);
    }
    return;
  }
  pSVar6 = (pGVar1->fields)._id;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_RDX = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open(context,pSVar6,1,in_RDX);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___cctor (const MethodInfo* method);
// 0x3b69fe0

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___cctor(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  System_Collections_Generic_IEqualityComparer_TKey__o *pSVar3;
  long lVar4;
  System_String_o *value;
  void *pvVar5;
  char cVar6;
  bool_conflict bVar7;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *pSVar8;
  Il2CppObject *pIVar9;
  undefined1 *puVar10;
  Il2CppClass *in_RCX;
  void *extraout_RDX;
  Il2CppClass *pIVar11;
  Il2CppClass *in_R8;
  undefined1 in_R9B;
  undefined1 unaff_R12B;
  undefined1 unaff_R14B;
  undefined1 unaff_R15B;
  
  if (g_data_057a9dca == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Gisketch_Aottg2UI_Code_Gisket);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Definition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentFactory);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentRegistry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_BuildVisual);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    il2cpp_runtime_helper_023445d0(&"GisketchUIColorPickerVisual");
    g_data_057a9dca = '\x01';
    if (*(int *)(TypeInfo_StringComparer + 0xe4) != 0) goto label_03b6a00c;
label_03b6a211:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057a9c88 != '\0') goto label_03b6a019;
label_03b6a223:
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057a9c88 = '\x01';
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) goto label_03b6a211;
label_03b6a00c:
    if (g_data_057a9c88 == '\0') goto label_03b6a223;
label_03b6a019:
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = *(System_Collections_Generic_IEqualityComparer_TKey__o **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  __this = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Definition);
  System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition____ctor_3126150
            (__this,pSVar3,MethodInfo_Dictionary_2_System_String_Gisketch_Aottg2UI_Code_Gisket);
  **(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_GisketchUIColorPicker + 0xb8),__this);
  if (g_data_057a9c88 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057a9c88 = '\x01';
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = *(System_Collections_Generic_IEqualityComparer_TKey__o **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor_31042a0(pSVar8,pSVar3,MethodInfo_Dictionary_2_System_String_System_String);
  lVar4 = *(long *)(TypeInfo_GisketchUIColorPicker + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar4 + 8) = pSVar8;
  il2cpp_runtime_helper_022b4080(lVar4 + 8);
  if (*(int *)(TypeInfo_GisketchComponentRegistry + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar4 = **(long **)(TypeInfo_GisketchComponentRegistry + 0xb8);
  pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchComponentFactory);
  pvVar5 = MethodInfo_Boolean_BuildVisual;
  pIVar9[1].klass = (Il2CppClass *)*(undefined8 *)((long)MethodInfo_Boolean_BuildVisual + 8);
  pIVar9[2].monitor = pvVar5;
  pIVar9[2].klass = (Il2CppClass *)0x0;
  il2cpp_runtime_helper_022b4080(pIVar9 + 2);
  cVar1 = *(char *)((long)pvVar5 + 0x52);
  pIVar9[4].klass = (Il2CppClass *)pIVar9;
  cVar6 = il2cpp_runtime_helper_022b2a80(pvVar5);
  if (cVar6 == '\0') {
    if (cVar1 != '\x03') goto label_03b6a339;
    puVar10 = &label_02099410;
label_03b6a264:
    pIVar9[1].monitor = puVar10;
    pIVar9[3].monitor = &label_020993a0;
    value = "GisketchUIColorPickerVisual";
  }
  else {
    if (cVar1 == '\x04') {
      puVar10 = &label_02099440;
      goto label_03b6a264;
    }
    in_RCX = pIVar9[2].klass;
    pIVar9[1].monitor = pIVar9[1].klass;
    pIVar9[4].klass = in_RCX;
    pIVar9[3].monitor = &label_020993a0;
    value = "GisketchUIColorPickerVisual";
  }
  "GisketchUIColorPickerVisual" = value;
  if (lVar4 != 0) {
    if (g_data_057a9e10 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      g_data_057a9e10 = '\x01';
    }
    bVar7 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return;
    }
    pSVar8 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar4 + 0x10);
    if (pSVar8 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar8,(Il2CppObject *)value,pIVar9,MethodInfo_Void_set_Item);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_03b6a339:
  pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_0231a840(0);
  pIVar11 = (Il2CppClass *)0x0;
  il2cpp_runtime_helper_022b2b10();
  System_Object___ctor(pIVar9,(MethodInfo *)0x0);
  pIVar9[1].klass = pIVar11;
  il2cpp_runtime_helper_022b4080(pIVar9 + 1,pIVar11);
  pIVar9[1].monitor = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&pIVar9[1].monitor,extraout_RDX);
  pIVar9[2].klass = in_RCX;
  il2cpp_runtime_helper_022b4080(pIVar9 + 2,in_RCX);
  pIVar9[3].klass = in_R8;
  il2cpp_runtime_helper_022b4080(pIVar9 + 3,in_R8);
  *(undefined1 *)&pIVar9[2].monitor = in_R9B;
  *(undefined1 *)&pIVar9[3].monitor = unaff_R12B;
  *(undefined1 *)((long)&pIVar9[3].monitor + 1) = unaff_R14B;
  *(undefined1 *)((long)&pIVar9[3].monitor + 2) = unaff_R15B;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o* __this, System_String_o* id, System_String_o* label, System_String_o* value, System_Action_GisketchActionContext__o* save, bool enableAlpha, bool livePreview, bool compact, bool disabled, const MethodInfo* method);
// 0x3b6a360

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *__this,System_String_o *id,
               System_String_o *label,System_String_o *value,System_Action_GisketchActionContext__o *save,
               bool_conflict enableAlpha,bool_conflict livePreview,bool_conflict compact,
               bool_conflict disabled,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  il2cpp_runtime_helper_022b4080(&__this->fields,id);
  (__this->fields)._label = label;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._label,label);
  (__this->fields)._value = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._value,value);
  (__this->fields)._save = save;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._save,save);
  *(char *)&(__this->fields)._enableAlpha = (char)enableAlpha;
  *(undefined1 *)&(__this->fields)._livePreview = (undefined1)livePreview;
  *(undefined1 *)((long)&(__this->fields)._livePreview + 1) = (undefined1)compact;
  *(undefined1 *)((long)&(__this->fields)._livePreview + 2) = (undefined1)disabled;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Value
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value (System_String_o* id, System_String_o* fallback, bool enableAlpha, const MethodInfo* method);
// 0x3b6a3f0

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
          (System_String_o *id,System_String_o *fallback,bool_conflict enableAlpha,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  undefined8 *puVar3;
  MethodInfo *method_00;
  System_String_o *extraout_RDX;
  uint uVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Color_o color;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields GStack_50;
  System_String_o *pSStack_40;
  System_String_o *pSStack_38;
  undefined8 *puStack_30;
  System_String_o *local_28;
  
  pSVar2 = fallback;
  if (g_data_057a9dcb == '\0') {
    puStack_30 = (undefined8 *)0x3b6a415;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    puStack_30 = (undefined8 *)0x3b6a421;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    g_data_057a9dcb = '\x01';
  }
  uVar4 = (uint)pSVar2;
  local_28 = (System_String_o *)0x0;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    puStack_30 = (undefined8 *)0x3b6a449;
    il2cpp_runtime_helper_02337ed0();
  }
  __this = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_GisketchUIColorPicker + 0xb8) + 8);
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    puStack_30 = (undefined8 *)0x3b6a49a;
    il2cpp_runtime_helper_022b2c90();
    puStack_30 = &TypeInfo_GisketchUIColorPicker;
    pSStack_40 = id;
    pSStack_38 = fallback;
    if (g_data_057a9df9 == '\0') {
      il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
      il2cpp_runtime_helper_023445d0(&"#FFFFFF");
      g_data_057a9df9 = '\x01';
    }
    GStack_50.R = '\0';
    GStack_50.G = '\0';
    GStack_50.B = '\0';
    GStack_50.A = '\0';
    GStack_50.H = 0.0;
    GStack_50.S = 0.0;
    GStack_50.V = 0.0;
    bVar1 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                      ((System_String_o *)__this,uVar4 & 0xff,
                       (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&GStack_50,method);
    if ((char)bVar1 == '\0') {
      pSVar2 = extraout_RDX;
      if (extraout_RDX == (System_String_o *)0x0) {
        if ((char)uVar4 == '\0') {
          puVar3 = &"#FFFFFF";
        }
        else {
          puVar3 = &"#FFFFFFFF";
        }
        pSVar2 = (System_String_o *)*puVar3;
      }
    }
    else {
      if (g_data_057a9df8 == '\0') {
        il2cpp_runtime_helper_023445d0();
        g_data_057a9df8 = '\x01';
      }
      if ((char)uVar4 == '\0') {
        color.fields.g = (float)GStack_50.G / 255.0;
        color.fields.r = (float)GStack_50.R / 255.0;
        color.fields.b = (float)GStack_50.B / 255.0;
        color.fields.a = (float)GStack_50.A / 255.0;
        pSVar2 = UnityEngine_ColorUtility__ToHtmlStringRGB(color,(MethodInfo *)0x0);
      }
      else {
        pSVar2 = UnityEngine_ColorUtility__ToHtmlStringRGBA
                           ((UnityEngine_Color_o)
                            CONCAT88(CONCAT44((float)GStack_50.A / 255.0,(float)GStack_50.B / 255.0),
                                     CONCAT44((float)GStack_50.G / 255.0,(float)GStack_50.R / 255.0)),
                            (MethodInfo *)0x0);
      }
      pSVar2 = System_String__Concat_3ae5ba0("#",pSVar2,(MethodInfo *)0x0);
    }
    return pSVar2;
  }
  puStack_30 = (undefined8 *)0x3b6a472;
  method_00 = MethodInfo_Boolean_TryGetValue;
  bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (__this,(Il2CppObject *)id,(Il2CppObject **)&local_28,(MethodInfo_3106990 *)MethodInfo_Boolean_TryGetValue);
  if ((char)bVar1 == '\0') {
    puStack_30 = (undefined8 *)0x3b6a48a;
    local_28 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__Normalize
                         (fallback,enableAlpha & 0xff,(System_String_o *)0x0,method_00);
  }
  return local_28;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Register
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Register (System_String_o* id, System_String_o* value, System_Action_GisketchActionContext__o* save, bool enableAlpha, bool livePreview, bool disabled, const MethodInfo* method);
// 0x3b6a5b0

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Register
               (System_String_o *id,System_String_o *value,System_Action_GisketchActionContext__o *save,
               bool_conflict enableAlpha,bool_conflict livePreview,bool_conflict disabled,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o value_00;
  bool_conflict bVar1;
  System_String_o *value_01;
  undefined4 in_register_0000000c;
  System_String_Fields method_00;
  undefined1 extraout_DL;
  System_String_Fields SVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  System_String_o *local_58;
  undefined8 uStack_50;
  System_String_o SStack_48;
  
  uVar5 = (undefined1)disabled;
  uVar3 = (undefined1)livePreview;
  method_00._4_4_ = in_register_0000000c;
  method_00._stringLength = enableAlpha;
  uVar4 = uVar3;
  uVar6 = uVar5;
  if (g_data_057a9dcc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    g_data_057a9dcc = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  SStack_48.fields = (System_String_Fields)save;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_GisketchUIColorPicker + 0xb8) + 8);
  SVar2._stringLength = enableAlpha & 0xff;
  SVar2._4_4_ = 0;
  value_01 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__Normalize
                       (value,SVar2._stringLength,(System_String_o *)0x0,(MethodInfo *)method_00);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    method_00 = MethodInfo_Void_set_Item;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this,(Il2CppObject *)id,(Il2CppObject *)value_01,(MethodInfo_3104DF0 *)MethodInfo_Void_set_Item);
    __this_00 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                **(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8);
    uStack_50 = 0;
    SStack_48.klass = (System_String_c *)0x0;
    SStack_48.monitor = (void *)0x0;
    local_58 = id;
    il2cpp_runtime_helper_022b4080(&local_58,id);
    uStack_50 = CONCAT71(uStack_50._1_7_,(char)enableAlpha);
    value = &SStack_48;
    SStack_48.klass = (System_String_c *)SStack_48.fields;
    SVar2 = SStack_48.fields;
    il2cpp_runtime_helper_022b4080();
    SStack_48.monitor._0_2_ = CONCAT11(uVar5,uVar3);
    if (__this_00 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
      value_00.fields._8_8_ = uStack_50;
      value_00.fields.Id = local_58;
      value_00.fields.Save = (System_Action_GisketchActionContext__o *)SStack_48.klass;
      value_00.fields._24_8_ = SStack_48.monitor;
      System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___set_Item
                (__this_00,(Il2CppObject *)id,value_00,MethodInfo_Void_set_Item);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  value->klass = (System_String_c *)SVar2;
  il2cpp_runtime_helper_022b4080();
  *(undefined1 *)&value->monitor = extraout_DL;
  value->fields = method_00;
  il2cpp_runtime_helper_022b4080(&value->fields,method_00);
  *(undefined1 *)&value[1].klass = uVar4;
  *(undefined1 *)((long)&value[1].klass + 1) = uVar6;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$SetValue
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue (System_String_o* id, System_String_o* value, bool enableAlpha, UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x3b6a770

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue
               (System_String_o *id,System_String_o *value,bool_conflict enableAlpha,
               UnityEngine_GameObject_o *source,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool_conflict bVar1;
  System_String_o *value_00;
  UnityEngine_Transform_o *pUVar2;
  System_String_o *pSVar3;
  MethodInfo *pMVar4;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o local_48;
  
  if (g_data_057a9dcd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9dcd = '\x01';
  }
  local_48.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  local_48.fields.LivePreview = 0;
  local_48.fields.Disabled = 0;
  local_48.fields.Id = (System_String_o *)0x0;
  local_48.fields.EnableAlpha = 0;
  local_48.fields._12_4_ = 0;
  bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = (System_String_o *)0x0;
  if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)**(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8) !=
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       **(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8),(Il2CppObject *)id,&local_48,MethodInfo_Boolean_TryGetValue);
    pMVar4 = (MethodInfo *)(ulong)((byte)local_48.fields.EnableAlpha & 1);
    if ((char)bVar1 == '\0') {
      pMVar4 = (MethodInfo *)(ulong)(enableAlpha & 0xff);
    }
    value_00 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__Normalize
                         (value,(bool_conflict)pMVar4,(System_String_o *)0x0,pMVar4);
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_GisketchUIColorPicker + 0xb8) + 8)
    ;
    pSVar3 = (System_String_o *)0x0;
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pMVar4 = MethodInfo_Void_set_Item;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this,(Il2CppObject *)id,(Il2CppObject *)value_00,(MethodInfo_3104DF0 *)MethodInfo_Void_set_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar2 = (UnityEngine_Transform_o *)0x0;
      pSVar3 = (System_String_o *)source;
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        if ((source == (UnityEngine_GameObject_o *)0x0) ||
           (pUVar2 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0),
           pSVar3 = (System_String_o *)source, pUVar2 == (UnityEngine_Transform_o *)0x0)) goto label_03b6a990;
        pUVar2 = UnityEngine_Transform__get_root(pUVar2,(MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057a9de4 == '\0') {
        il2cpp_runtime_helper_023445d0(&"-swatch");
        g_data_057a9de4 = '\x01';
      }
      pSVar3 = System_String__Concat_3ae5ba0(id,"-swatch",(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetSwatch(pUVar2,pSVar3,value_00,pMVar4);
      if (g_data_057a9de5 == '\0') {
        il2cpp_runtime_helper_023445d0(&"-value");
        g_data_057a9de5 = '\x01';
      }
      pSVar3 = System_String__Concat_3ae5ba0(id,"-value",(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetText(pUVar2,pSVar3,value_00,pMVar4);
      return;
    }
  }
label_03b6a990:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9de4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"-swatch");
    g_data_057a9de4 = '\x01';
  }
  System_String__Concat_3ae5ba0(pSVar3,"-swatch",(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Build
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Build (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x3b6abe0

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Build
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  byte bVar1;
  System_String_o *pSVar2;
  System_Action_GisketchActionContext__o *save;
  bool_conflict bVar3;
  bool_conflict bVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  undefined8 *puVar6;
  System_String_o *pSVar7;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *pMVar8;
  System_String_o **ppSVar9;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  MethodInfo *in_stack_ffffffffffffff58;
  MethodInfo *in_stack_ffffffffffffffa0;
  
  if (g_data_057a9dce == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass16_0);
    il2cpp_runtime_helper_023445d0(&"-color-picker");
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"#FFFFFF");
    il2cpp_runtime_helper_023445d0(&"row");
    g_data_057a9dce = '\x01';
  }
  pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass16_0);
  __this_00 = pGVar5;
  System_Object___ctor((Il2CppObject *)pGVar5,(MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    *(Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o **)&(pGVar5->fields).value = __this;
    il2cpp_runtime_helper_022b4080(&pGVar5->fields,__this);
    pSVar7 = (__this->fields)._id;
    pSVar2 = (__this->fields)._value;
    save = (__this->fields)._save;
    bVar3 = (__this->fields)._enableAlpha;
    bVar4 = (__this->fields)._livePreview;
    bVar1 = *(byte *)((long)&(__this->fields)._livePreview + 2);
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Register
              (pSVar7,pSVar2,save,(uint)(byte)bVar3,(uint)(byte)bVar4,(uint)bVar1,in_stack_ffffffffffffff58);
    pSVar7 = (__this->fields)._id;
    bVar1 = (byte)(__this->fields)._enableAlpha;
    if (bVar1 == 0) {
      puVar6 = &"#FFFFFF";
    }
    else {
      puVar6 = &"#FFFFFFFF";
    }
    pMVar8 = (MethodInfo *)&TypeInfo_GisketchUIColorPicker;
    pSVar2 = (System_String_o *)*puVar6;
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value(pSVar7,pSVar2,(uint)bVar1,pMVar8);
    ppSVar9 = &(pGVar5->fields).unit;
    (pGVar5->fields).unit = pSVar7;
    il2cpp_runtime_helper_022b4080(ppSVar9,pSVar7);
    if (*(char *)((long)&(__this->fields)._livePreview + 1) != '\0') {
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__BuildCompact(__this,ui,*ppSVar9,pMVar8);
      return;
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar7 = System_String__Concat_3ae5ba0((__this->fields)._id,"-color-picker",(MethodInfo *)0x0);
    if (g_data_057a9d9b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"percent");
      g_data_057a9d9b = '\x01';
    }
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    __this_00 = pGVar5;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar5,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (pGVar5->fields).value = 100.0;
      (pGVar5->fields).unit = "percent";
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).unit);
      pMVar8 = (MethodInfo *)0x0;
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                          (System_String_o *)0x0,10.0,pGVar5,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,in_stack_ffffffffffffffa0);
      __this_00 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,"row",build,pSVar7,layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,pMVar8);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$BuildCompact
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__BuildCompact (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* value, const MethodInfo* method);
// 0x3b6af10

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__BuildCompact
               (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               System_String_o *value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  System_Action_AottgUi__o *build;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (g_data_057a9dcf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildCompact_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass17_0);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"-color-picker");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Center");
    g_data_057a9dcf = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass17_0);
  __this_00 = pGVar1;
  System_Object___ctor((Il2CppObject *)pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    *(Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o **)&pGVar1->fields = __this;
    il2cpp_runtime_helper_022b4080(&pGVar1->fields,__this);
    (pGVar1->fields).unit = value;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).unit,value);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    id = System_String__Concat_3ae5ba0((__this->fields)._id,"-color-picker",(MethodInfo *)0x0);
    if (g_data_057a9d9a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"point");
      g_data_057a9d9a = '\x01';
    }
    pGVar1 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    __this_00 = pGVar1;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar1,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (pGVar1->fields).value = 70.0;
      (pGVar1->fields).unit = "point";
      il2cpp_runtime_helper_022b4080(&(pGVar1->fields).unit);
      method_00 = (MethodInfo *)0x0;
      __this_00 = "Column";
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,"Center",
                          (System_String_o *)0x0,(System_String_o *)0x0,4.0,pGVar1,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,in_stack_ffffffffffffffd0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,"clear",build,id,layout,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                   method_00);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Current
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Current (System_String_o* id, bool enableAlpha, const MethodInfo* method);
// 0x3b6b150

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Current
          (System_String_o *id,bool_conflict enableAlpha,MethodInfo *method)

{
  undefined8 *puVar1;
  System_String_o *pSVar2;
  MethodInfo *in_RCX;
  
  if (g_data_057a9dd0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    il2cpp_runtime_helper_023445d0(&"#FFFFFF");
    g_data_057a9dd0 = '\x01';
  }
  if ((char)enableAlpha == '\0') {
    puVar1 = &"#FFFFFF";
  }
  else {
    puVar1 = &"#FFFFFFFF";
  }
  pSVar2 = (System_String_o *)*puVar1;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value(id,pSVar2,enableAlpha & 0xff,in_RCX);
  return pSVar2;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Commit
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Commit (System_String_o* id, Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value, UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x3b6b1d0

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Commit
               (System_String_o *id,Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value,
               UnityEngine_GameObject_o *source,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this_00;
  undefined8 uVar1;
  System_Action_GisketchActionContext__o *pSVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  System_String_o *value_00;
  UnityEngine_Transform_o *pUVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  MethodInfo *method_00;
  uint8_t uVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  undefined4 in_stack_ffffffffffffff38;
  undefined4 in_stack_ffffffffffffff3c;
  undefined4 in_stack_ffffffffffffff40;
  undefined4 in_stack_ffffffffffffff44;
  undefined4 in_stack_ffffffffffffff48;
  undefined4 in_stack_ffffffffffffff4c;
  undefined4 in_stack_ffffffffffffff50;
  undefined4 in_stack_ffffffffffffff54;
  System_String_o local_98;
  undefined8 uStack_80;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o local_78;
  System_String_c *local_58;
  void *pvStack_50;
  System_String_Fields local_48;
  undefined8 uStack_40;
  
  uVar6 = value.fields.R;
  if (g_data_057a9dd1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"save");
    g_data_057a9dd1 = '\x01';
  }
  local_78.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  local_78.fields.LivePreview = 0;
  local_78.fields.Disabled = 0;
  local_78.fields.Id = (System_String_o *)0x0;
  local_78.fields._8_8_ = 0;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
  if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)**(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8) ==
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_03b6b552;
  bVar3 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                     **(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8),(Il2CppObject *)id,&local_78,MethodInfo_Boolean_TryGetValue);
  uVar1 = local_78.fields._8_8_;
  if ((char)bVar3 != '\0') {
    if (g_data_057a9df8 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a9df8 = '\x01';
    }
    color.fields.r = (float)(value.fields._0_4_ & 0xff) / 255.0;
    fVar8 = (float)(value.fields._1_4_ & 0xff) / 255.0;
    color.fields.b = (float)(value.fields._2_4_ & 0xff) / 255.0;
    fVar9 = (float)(value.fields._3_4_ & 0xff) / 255.0;
    if ((uVar1 & 1) == 0) {
      color.fields.g = fVar8;
      color.fields.a = fVar9;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGB(color,(MethodInfo *)0x0);
    }
    else {
      color_00.fields.g = fVar8;
      color_00.fields.r = color.fields.r;
      color_00.fields.a = fVar9;
      color_00.fields.b = color.fields.b;
      pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_00,(MethodInfo *)0x0);
    }
    value_00 = System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
    uVar6 = (uint8_t)pSVar4;
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_GisketchUIColorPicker + 0xb8) + 8)
    ;
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_03b6b552;
    method_00 = MethodInfo_Void_set_Item;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this,(Il2CppObject *)id,(Il2CppObject *)value_00,(MethodInfo_3104DF0 *)MethodInfo_Void_set_Item);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar5 = (UnityEngine_Transform_o *)0x0;
    uVar6 = '\0';
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)source;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (source == (UnityEngine_GameObject_o *)0x0) goto label_03b6b552;
      uVar6 = '\0';
      pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)source;
      pUVar5 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_03b6b552;
      pUVar5 = UnityEngine_Transform__get_root(pUVar5,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057a9de4 == '\0') {
      il2cpp_runtime_helper_023445d0(&"-swatch");
      g_data_057a9de4 = '\x01';
    }
    pSVar4 = System_String__Concat_3ae5ba0(id,"-swatch",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetSwatch(pUVar5,pSVar4,value_00,method_00);
    if (g_data_057a9de5 == '\0') {
      il2cpp_runtime_helper_023445d0(&"-value");
      g_data_057a9de5 = '\x01';
    }
    pSVar4 = System_String__Concat_3ae5ba0(id,"-value",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetText(pUVar5,pSVar4,value_00,method_00);
    pSVar2 = local_78.fields.Save;
    if (local_78.fields.Save != (System_Action_GisketchActionContext__o *)0x0) {
      __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
      uVar6 = '\0';
      pGVar7 = __this_01;
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
      if (__this_01 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
label_03b6b552:
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057a9df8 == '\0') {
          il2cpp_runtime_helper_023445d0();
          g_data_057a9df8 = '\x01';
        }
        color_01.fields.r = (float)*(byte *)&pGVar7->klass / 255.0;
        fVar8 = (float)*(byte *)((long)&pGVar7->klass + 1) / 255.0;
        color_01.fields.b = (float)*(byte *)((long)&pGVar7->klass + 2) / 255.0;
        fVar9 = (float)*(byte *)((long)&pGVar7->klass + 3) / 255.0;
        if (uVar6 == '\0') {
          color_02.fields.g = fVar8;
          color_02.fields.r = color_01.fields.r;
          color_02.fields.a = fVar9;
          color_02.fields.b = color_01.fields.b;
          pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGB(color_02,(MethodInfo *)0x0);
        }
        else {
          color_01.fields.g = fVar8;
          color_01.fields.a = fVar9;
          pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_01,(MethodInfo *)0x0);
        }
        System_String__Concat_3ae5ba0("#",pSVar4,(MethodInfo *)0x0);
        return;
      }
      (__this_01->fields).id = "save";
      il2cpp_runtime_helper_022b4080(&(__this_01->fields).id);
      (__this_01->fields).value = value_00;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields).value,value_00);
      local_98.fields._stringLength = 0;
      local_98.fields._firstChar = 0;
      local_98.fields._6_2_ = 0;
      uStack_80 = 0;
      local_98.klass = (System_String_c *)0x0;
      local_98.monitor = (void *)0x0;
      __this_00.fields.ElementId._4_4_ = in_stack_ffffffffffffff3c;
      __this_00.fields.ElementId._0_4_ = in_stack_ffffffffffffff38;
      __this_00.fields.GameObject._0_4_ = in_stack_ffffffffffffff40;
      __this_00.fields.GameObject._4_4_ = in_stack_ffffffffffffff44;
      __this_00.fields.Node._0_4_ = in_stack_ffffffffffffff48;
      __this_00.fields.Node._4_4_ = in_stack_ffffffffffffff4c;
      __this_00.fields.InputSource = in_stack_ffffffffffffff50;
      __this_00.fields._28_4_ = in_stack_ffffffffffffff54;
      Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                (__this_00,&local_98,(UnityEngine_GameObject_o *)id,
                 (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)source,(MethodInfo *)__this_01);
      local_48 = local_98.fields;
      uStack_40 = uStack_80;
      local_58 = local_98.klass;
      pvStack_50 = local_98.monitor;
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,(pSVar2->fields).method);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Preview
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Preview (System_String_o* id, Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value, UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x3b6b600

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Preview
               (System_String_o *id,Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value,
               UnityEngine_GameObject_o *source,MethodInfo *method)

{
  System_String_c *pSVar1;
  byte bVar2;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this_00;
  undefined8 uVar3;
  System_Action_GisketchActionContext__o *pSVar4;
  bool_conflict bVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar11;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar12;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar13;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar14;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar15;
  MethodInfo *pMVar16;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  undefined8 *puVar17;
  uint uVar18;
  System_Action_GisketchActionContext__o *unaff_R12;
  byte bVar19;
  float fVar20;
  float fVar21;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  MethodInfo *in_stack_fffffffffffffe00;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o GStack_1d0;
  undefined8 *puStack_1b0;
  System_Action_GisketchActionContext__o *pSStack_1a8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_1a0;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_198;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_190;
  undefined8 *puStack_188;
  undefined4 in_stack_fffffffffffffe80;
  undefined4 in_stack_fffffffffffffe84;
  undefined4 in_stack_fffffffffffffe88;
  undefined4 in_stack_fffffffffffffe8c;
  undefined4 in_stack_fffffffffffffe90;
  undefined4 in_stack_fffffffffffffe94;
  undefined4 in_stack_fffffffffffffe98;
  undefined4 in_stack_fffffffffffffe9c;
  System_String_o SStack_160;
  undefined8 uStack_148;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o GStack_140;
  System_String_c *pSStack_120;
  void *pvStack_118;
  System_String_Fields SStack_110;
  undefined8 uStack_108;
  UnityEngine_GameObject_o *pUStack_f8;
  System_Action_GisketchActionContext__o *pSStack_f0;
  undefined4 in_stack_ffffffffffffff28;
  undefined4 in_stack_ffffffffffffff2c;
  undefined4 in_stack_ffffffffffffff30;
  undefined4 in_stack_ffffffffffffff34;
  undefined4 in_stack_ffffffffffffff38;
  undefined4 in_stack_ffffffffffffff3c;
  undefined4 in_stack_ffffffffffffff40;
  undefined4 in_stack_ffffffffffffff44;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o local_98;
  System_String_o local_78;
  undefined8 uStack_60;
  System_String_c *local_58;
  void *pvStack_50;
  System_String_Fields local_48;
  undefined8 uStack_40;
  
  pGVar9 = value.fields._0_8_;
  pGVar15 = pGVar9;
  if (g_data_057a9dd2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&"preview");
    g_data_057a9dd2 = '\x01';
  }
  local_98.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  local_98.fields.LivePreview = 0;
  local_98.fields.Disabled = 0;
  local_98.fields.Id = (System_String_o *)0x0;
  local_98.fields._8_8_ = 0;
  if (*(int *)((long)&(TypeInfo_GisketchUIColorPicker->fields).layout + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = ((TypeInfo_GisketchUIColorPicker->fields).choiceOptionRenderer)->klass;
  pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
  if (pSVar1 != (System_String_c *)0x0) {
    bVar5 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,(Il2CppObject *)id,
                       &local_98,MethodInfo_Boolean_TryGetValue);
    pSVar4 = local_98.fields.Save;
    if ((((char)bVar5 == '\0') || ((local_98.fields._24_8_ & 1) == 0)) ||
       (local_98.fields.Save == (System_Action_GisketchActionContext__o *)0x0)) {
      return;
    }
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    pGVar15 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    pGVar10 = pGVar6;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar6,(MethodInfo *)0x0);
    unaff_R12 = (System_Action_GisketchActionContext__o *)0x0;
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar6->fields).id = "preview";
      il2cpp_runtime_helper_022b4080();
      uVar3 = local_98.fields._8_8_;
      if (g_data_057a9df8 == '\0') {
        il2cpp_runtime_helper_023445d0();
        g_data_057a9df8 = '\x01';
      }
      color.fields.r = (float)(value.fields._0_4_ & 0xff) / 255.0;
      fVar20 = (float)(value.fields._1_4_ & 0xff) / 255.0;
      color.fields.b = (float)(value.fields._2_4_ & 0xff) / 255.0;
      fVar21 = (float)(value.fields._3_4_ & 0xff) / 255.0;
      if ((uVar3 & 1) == 0) {
        color.fields.g = fVar20;
        color.fields.a = fVar21;
        pSVar7 = UnityEngine_ColorUtility__ToHtmlStringRGB(color,(MethodInfo *)0x0);
      }
      else {
        color_00.fields.g = fVar20;
        color_00.fields.r = color.fields.r;
        color_00.fields.a = fVar21;
        color_00.fields.b = color.fields.b;
        pSVar7 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_00,(MethodInfo *)0x0);
      }
      pSVar7 = System_String__Concat_3ae5ba0("#",pSVar7,(MethodInfo *)0x0);
      (pGVar6->fields).value = pSVar7;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).value,pSVar7);
      local_78.fields._stringLength = 0;
      local_78.fields._firstChar = 0;
      local_78.fields._6_2_ = 0;
      uStack_60 = 0;
      local_78.klass = (System_String_c *)0x0;
      local_78.monitor = (void *)0x0;
      __this_00.fields.ElementId._4_4_ = in_stack_ffffffffffffff2c;
      __this_00.fields.ElementId._0_4_ = in_stack_ffffffffffffff28;
      __this_00.fields.GameObject._0_4_ = in_stack_ffffffffffffff30;
      __this_00.fields.GameObject._4_4_ = in_stack_ffffffffffffff34;
      __this_00.fields.Node._0_4_ = in_stack_ffffffffffffff38;
      __this_00.fields.Node._4_4_ = in_stack_ffffffffffffff3c;
      __this_00.fields.InputSource = in_stack_ffffffffffffff40;
      __this_00.fields._28_4_ = in_stack_ffffffffffffff44;
      Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                (__this_00,&local_78,(UnityEngine_GameObject_o *)id,
                 (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)source,(MethodInfo *)pGVar6);
      local_48 = local_78.fields;
      uStack_40 = uStack_60;
      local_58 = local_78.klass;
      pvStack_50 = local_78.monitor;
      (*(code *)(pSVar4->fields).invoke_impl)((pSVar4->fields).method_code,(pSVar4->fields).method);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUStack_f8 = source;
  pSStack_f0 = unaff_R12;
  if (g_data_057a9dd3 == '\0') {
    puStack_188 = (undefined8 *)0x3b6b889;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    puStack_188 = (undefined8 *)0x3b6b895;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    puStack_188 = (undefined8 *)0x3b6b8a1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    puStack_188 = (undefined8 *)0x3b6b8ad;
    il2cpp_runtime_helper_023445d0(&"cancel");
    g_data_057a9dd3 = '\x01';
  }
  GStack_140.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  GStack_140.fields.LivePreview = 0;
  GStack_140.fields.Disabled = 0;
  GStack_140.fields.Id = (System_String_o *)0x0;
  GStack_140.fields.EnableAlpha = 0;
  GStack_140.fields._12_4_ = 0;
  puVar17 = &TypeInfo_GisketchUIColorPicker;
  if (*(int *)((long)&(TypeInfo_GisketchUIColorPicker->fields).layout + 4) == 0) {
    puStack_188 = (undefined8 *)0x3b6b8d9;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = ((TypeInfo_GisketchUIColorPicker->fields).choiceOptionRenderer)->klass;
  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
  if (pSVar1 != (System_String_c *)0x0) {
    puStack_188 = (undefined8 *)0x3b6b906;
    bVar5 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,(Il2CppObject *)pGVar10
                       ,&GStack_140,MethodInfo_Boolean_TryGetValue);
    unaff_R12 = GStack_140.fields.Save;
    if ((((char)bVar5 == '\0') || ((GStack_140.fields._24_8_ & 1) == 0)) ||
       (GStack_140.fields.Save == (System_Action_GisketchActionContext__o *)0x0)) {
      return;
    }
    puStack_188 = (undefined8 *)0x3b6b936;
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    puStack_188 = (undefined8 *)0x3b6b943;
    pGVar6 = pGVar8;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar8,(MethodInfo *)0x0);
    puVar17 = (undefined8 *)0x0;
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar8->fields).id = "cancel";
      puStack_188 = (undefined8 *)0x3b6b966;
      il2cpp_runtime_helper_022b4080(&(pGVar8->fields).id);
      SStack_160.fields._stringLength = 0;
      SStack_160.fields._firstChar = 0;
      SStack_160.fields._6_2_ = 0;
      uStack_148 = 0;
      SStack_160.klass = (System_String_c *)0x0;
      SStack_160.monitor = (void *)0x0;
      puStack_188 = (undefined8 *)0x3b6b989;
      __this.fields.ElementId._4_4_ = in_stack_fffffffffffffe84;
      __this.fields.ElementId._0_4_ = in_stack_fffffffffffffe80;
      __this.fields.GameObject._0_4_ = in_stack_fffffffffffffe88;
      __this.fields.GameObject._4_4_ = in_stack_fffffffffffffe8c;
      __this.fields.Node._0_4_ = in_stack_fffffffffffffe90;
      __this.fields.Node._4_4_ = in_stack_fffffffffffffe94;
      __this.fields.InputSource = in_stack_fffffffffffffe98;
      __this.fields._28_4_ = in_stack_fffffffffffffe9c;
      Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                (__this,&SStack_160,(UnityEngine_GameObject_o *)pGVar10,pGVar15,(MethodInfo *)pGVar8);
      SStack_110 = SStack_160.fields;
      uStack_108 = uStack_148;
      pSStack_120 = SStack_160.klass;
      pvStack_118 = SStack_160.monitor;
      puStack_188 = (undefined8 *)0x3b6b9bf;
      (*(code *)(unaff_R12->fields).invoke_impl)((unaff_R12->fields).method_code,(unaff_R12->fields).method);
      return;
    }
  }
  puStack_188 = (undefined8 *)0x3b6b9d3;
  il2cpp_runtime_helper_022b2c90();
  puStack_188 = &TypeInfo_GisketchUIColorPicker;
  puStack_1b0 = puVar17;
  pSStack_1a8 = unaff_R12;
  pGStack_1a0 = pGVar9;
  pGStack_198 = pGVar15;
  pGStack_190 = pGVar10;
  if (g_data_057a9dd4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIColorPicker_Definition_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&"-hex-row");
    il2cpp_runtime_helper_023445d0(&"-hex-label");
    il2cpp_runtime_helper_023445d0(&"-title");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"-cancel");
    il2cpp_runtime_helper_023445d0(&"buttonPrimary");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-b-field");
    il2cpp_runtime_helper_023445d0(&"g");
    il2cpp_runtime_helper_023445d0(&"R");
    il2cpp_runtime_helper_023445d0(&"subtext");
    il2cpp_runtime_helper_023445d0(&"-save");
    il2cpp_runtime_helper_023445d0(&"-footer");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"G");
    il2cpp_runtime_helper_023445d0(&"Color Picker");
    il2cpp_runtime_helper_023445d0(&"b");
    il2cpp_runtime_helper_023445d0(&"HEX");
    il2cpp_runtime_helper_023445d0(&"-popover");
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Panel");
    il2cpp_runtime_helper_023445d0(&"r");
    il2cpp_runtime_helper_023445d0(&"B");
    il2cpp_runtime_helper_023445d0(&"GisketchUIColorPickerVisual");
    il2cpp_runtime_helper_023445d0(&"-rgb-row");
    il2cpp_runtime_helper_023445d0(&"-r-field");
    il2cpp_runtime_helper_023445d0(&"Save");
    il2cpp_runtime_helper_023445d0(&"-g-field");
    il2cpp_runtime_helper_023445d0(&"popover");
    il2cpp_runtime_helper_023445d0(&"buttonQuiet");
    g_data_057a9dd4 = '\x01';
    if (*(int *)((long)&(TypeInfo_GisketchUIColorPicker->fields).layout + 4) != 0) goto label_03b6ba15;
label_03b6bbe4:
    il2cpp_runtime_helper_02337ed0();
    pSVar1 = ((TypeInfo_GisketchUIColorPicker->fields).choiceOptionRenderer)->klass;
    pGVar15 = TypeInfo_GisketchUIColorPicker;
  }
  else {
    if (*(int *)((long)&(TypeInfo_GisketchUIColorPicker->fields).layout + 4) == 0) goto label_03b6bbe4;
label_03b6ba15:
    pSVar1 = ((TypeInfo_GisketchUIColorPicker->fields).choiceOptionRenderer)->klass;
    pGVar15 = TypeInfo_GisketchUIColorPicker;
  }
  TypeInfo_GisketchUIColorPicker = pGVar15;
  if (pSVar1 != (System_String_c *)0x0) {
    System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___get_Item
              (&GStack_1d0,(System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
               (Il2CppObject *)pGVar6,MethodInfo_GisketchUIColorPicker_Definition_get_Item);
    pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    pGVar15 = pGVar9;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar9,(MethodInfo *)0x0);
    if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar9->fields).type = "Panel";
      il2cpp_runtime_helper_022b4080(&pGVar9->fields);
      pSVar7 = System_String__Concat_3ae5ba0((System_String_o *)pGVar6,"-popover",(MethodInfo *)0x0);
      (pGVar9->fields).id = pSVar7;
      il2cpp_runtime_helper_022b4080(&(pGVar9->fields).id,pSVar7);
      (pGVar9->fields).style = "popover";
      il2cpp_runtime_helper_022b4080(&(pGVar9->fields).style);
      if (g_data_057a9d9a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
        il2cpp_runtime_helper_023445d0(&"point");
        g_data_057a9d9a = '\x01';
      }
      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
      pGVar15 = pGVar10;
      Gisketch_Aottg2UI_Data_GisketchLength___ctor
                ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar10,(MethodInfo *)0x0);
      if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        *(undefined4 *)&(pGVar10->fields).type = 0x43be0000;
        (pGVar10->fields).id = "point";
        il2cpp_runtime_helper_022b4080(&(pGVar10->fields).id);
        pMVar16 = (MethodInfo *)0x0;
        pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                            ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                             (System_String_o *)0x0,10.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar10,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                             0.0,0.0,1.0,in_stack_fffffffffffffe00);
        (pGVar9->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar11;
        il2cpp_runtime_helper_022b4080(&(pGVar9->fields).search,pGVar11);
        pGVar12 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition);
        pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
        pGVar15 = pGVar10;
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar10,(MethodInfo *)0x0);
        if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar10->fields).type = "Text";
          il2cpp_runtime_helper_022b4080(&pGVar10->fields);
          pSVar7 = System_String__Concat_3ae5ba0((System_String_o *)pGVar6,"-title",(MethodInfo *)0x0);
          (pGVar10->fields).id = pSVar7;
          il2cpp_runtime_helper_022b4080(&(pGVar10->fields).id,pSVar7);
          (pGVar10->fields).text = "Color Picker";
          il2cpp_runtime_helper_022b4080(&(pGVar10->fields).text);
          pGVar15 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar10->fields).style;
          (pGVar10->fields).style = "subtext";
          il2cpp_runtime_helper_022b4080();
          if (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
            if ((int)pGVar12->max_length == 0) goto label_03b6c634;
            pGVar12->m_Items[0] = pGVar10;
            il2cpp_runtime_helper_022b4080(pGVar12->m_Items,pGVar10);
            if (g_data_057a9de0 == '\0') {
              il2cpp_runtime_helper_023445d0(&"-preview");
              g_data_057a9de0 = '\x01';
            }
            pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                      System_String__Concat_3ae5ba0((System_String_o *)pGVar6,"-preview",(MethodInfo *)0x0);
            bVar19 = (byte)GStack_1d0.fields.EnableAlpha & 1;
            if (g_data_057a9dd0 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
              il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
              il2cpp_runtime_helper_023445d0(&"#FFFFFF");
              g_data_057a9dd0 = '\x01';
            }
            if (bVar19 == 0) {
              puVar17 = &"#FFFFFF";
            }
            else {
              puVar17 = &"#FFFFFFFF";
            }
            pSVar7 = (System_String_o *)*puVar17;
            if (*(int *)((long)&(TypeInfo_GisketchUIColorPicker->fields).layout + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                               ((System_String_o *)pGVar6,pSVar7,(uint)bVar19,pMVar16);
            if (g_data_057a9d9b == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
              il2cpp_runtime_helper_023445d0(&"percent");
              g_data_057a9d9b = '\x01';
            }
            pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
            pGVar15 = pGVar8;
            Gisketch_Aottg2UI_Data_GisketchLength___ctor
                      ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar8,(MethodInfo *)0x0);
            if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              *(undefined4 *)&(pGVar8->fields).type = 0x42c80000;
              (pGVar8->fields).id = "percent";
              il2cpp_runtime_helper_022b4080(&(pGVar8->fields).id);
              if (g_data_057a9d9a == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
                il2cpp_runtime_helper_023445d0(&"point");
                g_data_057a9d9a = '\x01';
              }
              pGVar13 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
              pGVar15 = pGVar13;
              Gisketch_Aottg2UI_Data_GisketchLength___ctor
                        ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar13,(MethodInfo *)0x0);
              if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                *(undefined4 *)&(pGVar13->fields).type = 0x42000000;
                (pGVar13->fields).id = "point";
                il2cpp_runtime_helper_022b4080(&(pGVar13->fields).id);
                pMVar16 = (MethodInfo *)0x0;
                pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                    ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                     (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar8,
                                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar13,
                                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,
                                     0.0,0.0,0.0,0.0,0.0,in_stack_fffffffffffffe00);
                pGVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchNode
                                   ((System_String_o *)pGVar10,pSVar7,pGVar11,pMVar16);
                pGVar15 = pGVar10;
                if ((uint)pGVar12->max_length < 2) goto label_03b6c634;
                pGVar12->m_Items[1] = pGVar8;
                il2cpp_runtime_helper_022b4080(pGVar12->m_Items + 1);
                pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
                pGVar15 = pGVar10;
                Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar10,(MethodInfo *)0x0);
                if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                  (pGVar10->fields).type = "GisketchUIColorPickerVisual";
                  il2cpp_runtime_helper_022b4080(&pGVar10->fields);
                  if (g_data_057a9de1 == '\0') {
                    il2cpp_runtime_helper_023445d0(&"-visual");
                    g_data_057a9de1 = '\x01';
                  }
                  pSVar7 = System_String__Concat_3ae5ba0
                                     ((System_String_o *)pGVar6,"-visual",(MethodInfo *)0x0);
                  (pGVar10->fields).id = pSVar7;
                  il2cpp_runtime_helper_022b4080(&(pGVar10->fields).id,pSVar7);
                  (pGVar10->fields).value = (System_String_o *)pGVar6;
                  il2cpp_runtime_helper_022b4080(&(pGVar10->fields).value);
                  if (g_data_057a9d9b == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
                    il2cpp_runtime_helper_023445d0(&"percent");
                    g_data_057a9d9b = '\x01';
                  }
                  pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength)
                  ;
                  pGVar15 = pGVar8;
                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                            ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar8,(MethodInfo *)0x0);
                  if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                    *(undefined4 *)&(pGVar8->fields).type = 0x42c80000;
                    (pGVar8->fields).id = "percent";
                    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).id);
                    pSVar7 = "Column";
                    bVar2 = bVar19 * '\x02' ^ 2;
                    if (bVar19 != 0) {
                      bVar2 = bVar19 * '\x02';
                    }
                    uVar18 = (uint)bVar2;
                    if (g_data_057a9d9a == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
                      il2cpp_runtime_helper_023445d0(&"point");
                      g_data_057a9d9a = '\x01';
                    }
                    pGVar13 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                              il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
                    pGVar15 = pGVar13;
                    Gisketch_Aottg2UI_Data_GisketchLength___ctor
                              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar13,(MethodInfo *)0x0);
                    if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                      *(undefined4 *)&(pGVar13->fields).type =
                           *(undefined4 *)(&g_data_00d1d590 + (ulong)bVar19 * 4);
                      (pGVar13->fields).id = "point";
                      il2cpp_runtime_helper_022b4080(&(pGVar13->fields).id);
                      pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                          (pSVar7,(System_String_o *)0x0,(System_String_o *)0x0,
                                           (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar8,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar13,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,
                                           0.0,0.0,0.0,0.0,0.0,0.0,in_stack_fffffffffffffe00);
                      pGVar15 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar10->fields).search;
                      (pGVar10->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar11;
                      il2cpp_runtime_helper_022b4080(pGVar15,pGVar11);
                      if ((uint)pGVar12->max_length <= uVar18) goto label_03b6c634;
                      pGVar12->m_Items[uVar18] = pGVar10;
                      il2cpp_runtime_helper_022b4080(pGVar12->m_Items + uVar18,pGVar10);
                      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                                System_String__Concat_3ae5ba0
                                          ((System_String_o *)pGVar6,"-rgb-row",(MethodInfo *)0x0);
                      pGVar14 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                                il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition,3);
                      pGVar15 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                                System_String__Concat_3ae5ba0
                                          ((System_String_o *)pGVar6,"-r-field",(MethodInfo *)0x0);
                      pMVar16 = extraout_RDX;
                      if (*(int *)((long)&(TypeInfo_GisketchUIColorPicker->fields).layout + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                        pMVar16 = extraout_RDX_00;
                      }
                      pGVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__RgbInput
                                         ((System_String_o *)pGVar6,"r",pMVar16);
                      pGVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Field
                                         ((System_String_o *)pGVar15,"R",pGVar8,
                                          (MethodInfo *)&"R");
                      if (pGVar14 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
                        if ((int)pGVar14->max_length == 0) goto label_03b6c634;
                        pGVar14->m_Items[0] = pGVar8;
                        il2cpp_runtime_helper_022b4080(pGVar14->m_Items,pGVar8);
                        pGVar15 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                                  System_String__Concat_3ae5ba0
                                            ((System_String_o *)pGVar6,"-g-field",(MethodInfo *)0x0);
                        pGVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__RgbInput
                                           ((System_String_o *)pGVar6,"g",method_00);
                        pGVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Field
                                           ((System_String_o *)pGVar15,"G",pGVar8,
                                            (MethodInfo *)&"G");
                        if ((uint)pGVar14->max_length < 2) goto label_03b6c634;
                        pGVar14->m_Items[1] = pGVar8;
                        il2cpp_runtime_helper_022b4080(pGVar14->m_Items + 1,pGVar8);
                        pGVar15 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                                  System_String__Concat_3ae5ba0
                                            ((System_String_o *)pGVar6,"-b-field",(MethodInfo *)0x0);
                        pGVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__RgbInput
                                           ((System_String_o *)pGVar6,"b",method_01);
                        pGVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Field
                                           ((System_String_o *)pGVar15,"B",pGVar8,
                                            (MethodInfo *)&"B");
                        if ((uint)pGVar14->max_length < 3) goto label_03b6c634;
                        pGVar14->m_Items[2] = pGVar8;
                        il2cpp_runtime_helper_022b4080(pGVar14->m_Items + 2,pGVar8);
                        pGVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Row
                                           ((System_String_o *)pGVar10,pGVar14,method_02);
                        pGVar15 = pGVar10;
                        if ((uint)pGVar12->max_length < 4) goto label_03b6c634;
                        pGVar12->m_Items[3] = pGVar8;
                        il2cpp_runtime_helper_022b4080(pGVar12->m_Items + 3,pGVar8);
                        pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                                  System_String__Concat_3ae5ba0
                                            ((System_String_o *)pGVar6,"-hex-row",(MethodInfo *)0x0);
                        pGVar14 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                                  il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition,2);
                        pGVar15 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                                  System_String__Concat_3ae5ba0
                                            ((System_String_o *)pGVar6,"-hex-label",(MethodInfo *)0x0);
                        pGVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Label
                                           ((System_String_o *)pGVar15,"HEX",42.0,method_03);
                        if (pGVar14 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
                          if ((int)pGVar14->max_length == 0) goto label_03b6c634;
                          pGVar14->m_Items[0] = pGVar8;
                          il2cpp_runtime_helper_022b4080(pGVar14->m_Items,pGVar8);
                          pGVar15 = pGVar6;
                          pGVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__HexInput
                                             ((System_String_o *)pGVar6,(uint)bVar19,method_04);
                          if ((uint)pGVar14->max_length < 2) goto label_03b6c634;
                          pGVar14->m_Items[1] = pGVar8;
                          il2cpp_runtime_helper_022b4080(pGVar14->m_Items + 1,pGVar8);
                          pGVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Row
                                             ((System_String_o *)pGVar10,pGVar14,method_05);
                          pGVar15 = pGVar10;
                          if ((uint)pGVar12->max_length < 5) goto label_03b6c634;
                          pGVar12->m_Items[4] = pGVar8;
                          il2cpp_runtime_helper_022b4080(pGVar12->m_Items + 4,pGVar8);
                          pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                                    System_String__Concat_3ae5ba0
                                              ((System_String_o *)pGVar6,"-footer",(MethodInfo *)0x0);
                          pGVar14 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                                    il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition,2);
                          pGVar15 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                                    System_String__Concat_3ae5ba0
                                              ((System_String_o *)pGVar6,"-cancel",(MethodInfo *)0x0);
                          pGVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Button
                                             ((System_String_o *)pGVar15,"Cancel","buttonQuiet",
                                              (MethodInfo *)&"buttonQuiet");
                          if (pGVar14 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
                            if ((int)pGVar14->max_length != 0) {
                              pGVar14->m_Items[0] = pGVar8;
                              il2cpp_runtime_helper_022b4080(pGVar14->m_Items,pGVar8);
                              pGVar15 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                                        System_String__Concat_3ae5ba0
                                                  ((System_String_o *)pGVar6,"-save",(MethodInfo *)0x0);
                              pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Button
                                                 ((System_String_o *)pGVar15,"Save","buttonPrimary",
                                                  (MethodInfo *)&"buttonPrimary");
                              if (1 < (uint)pGVar14->max_length) {
                                pGVar14->m_Items[1] = pGVar6;
                                il2cpp_runtime_helper_022b4080(pGVar14->m_Items + 1,pGVar6);
                                pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Row
                                                   ((System_String_o *)pGVar10,pGVar14,method_06);
                                pGVar15 = pGVar10;
                                if (5 < (uint)pGVar12->max_length) {
                                  pGVar12->m_Items[5] = pGVar6;
                                  il2cpp_runtime_helper_022b4080(pGVar12->m_Items + 5,pGVar6);
                                  (pGVar9->fields).deferredChildren = pGVar12;
                                  il2cpp_runtime_helper_022b4080(&(pGVar9->fields).deferredChildren,pGVar12);
                                  return;
                                }
                              }
                            }
                            goto label_03b6c634;
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
  il2cpp_runtime_helper_022b2c90();
label_03b6c634:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057a9de0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"-preview");
    g_data_057a9de0 = '\x01';
  }
  System_String__Concat_3ae5ba0((System_String_o *)pGVar15,"-preview",(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Cancel
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Cancel (System_String_o* id, UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x3b6b860

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Cancel
               (System_String_o *id,UnityEngine_GameObject_o *source,MethodInfo *method)

{
  System_String_c *pSVar1;
  byte bVar2;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this;
  bool_conflict bVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar11;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar12;
  MethodInfo *pMVar13;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  undefined8 *puVar14;
  uint uVar15;
  System_Action_GisketchActionContext__o *unaff_R12;
  byte bVar16;
  MethodInfo *in_stack_fffffffffffffed8;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o GStack_f8;
  undefined8 *puStack_d8;
  System_Action_GisketchActionContext__o *pSStack_d0;
  undefined4 in_stack_ffffffffffffff58;
  undefined4 in_stack_ffffffffffffff5c;
  undefined4 in_stack_ffffffffffffff60;
  undefined4 in_stack_ffffffffffffff64;
  undefined4 in_stack_ffffffffffffff68;
  undefined4 in_stack_ffffffffffffff6c;
  undefined4 in_stack_ffffffffffffff70;
  undefined4 in_stack_ffffffffffffff74;
  System_String_o local_88;
  undefined8 uStack_70;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o local_68;
  System_String_c *local_48;
  void *pvStack_40;
  System_String_Fields local_38;
  undefined8 uStack_30;
  
  if (g_data_057a9dd3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&"cancel");
    g_data_057a9dd3 = '\x01';
  }
  local_68.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  local_68.fields.LivePreview = 0;
  local_68.fields.Disabled = 0;
  local_68.fields.Id = (System_String_o *)0x0;
  local_68.fields.EnableAlpha = 0;
  local_68.fields._12_4_ = 0;
  puVar14 = &TypeInfo_GisketchUIColorPicker;
  if (*(int *)((long)&(TypeInfo_GisketchUIColorPicker->fields).layout + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = ((TypeInfo_GisketchUIColorPicker->fields).choiceOptionRenderer)->klass;
  pGVar12 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
  if (pSVar1 != (System_String_c *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,(Il2CppObject *)id,
                       &local_68,MethodInfo_Boolean_TryGetValue);
    unaff_R12 = local_68.fields.Save;
    if ((((char)bVar3 == '\0') || ((local_68.fields._24_8_ & 1) == 0)) ||
       (local_68.fields.Save == (System_Action_GisketchActionContext__o *)0x0)) {
      return;
    }
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    pGVar12 = pGVar4;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar4,(MethodInfo *)0x0);
    puVar14 = (undefined8 *)0x0;
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar4->fields).id = "cancel";
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).id);
      local_88.fields._stringLength = 0;
      local_88.fields._firstChar = 0;
      local_88.fields._6_2_ = 0;
      uStack_70 = 0;
      local_88.klass = (System_String_c *)0x0;
      local_88.monitor = (void *)0x0;
      __this.fields.ElementId._4_4_ = in_stack_ffffffffffffff5c;
      __this.fields.ElementId._0_4_ = in_stack_ffffffffffffff58;
      __this.fields.GameObject._0_4_ = in_stack_ffffffffffffff60;
      __this.fields.GameObject._4_4_ = in_stack_ffffffffffffff64;
      __this.fields.Node._0_4_ = in_stack_ffffffffffffff68;
      __this.fields.Node._4_4_ = in_stack_ffffffffffffff6c;
      __this.fields.InputSource = in_stack_ffffffffffffff70;
      __this.fields._28_4_ = in_stack_ffffffffffffff74;
      Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                (__this,&local_88,(UnityEngine_GameObject_o *)id,
                 (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)source,(MethodInfo *)pGVar4);
      local_38 = local_88.fields;
      uStack_30 = uStack_70;
      local_48 = local_88.klass;
      pvStack_40 = local_88.monitor;
      (*(code *)(unaff_R12->fields).invoke_impl)((unaff_R12->fields).method_code,(unaff_R12->fields).method);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  puStack_d8 = puVar14;
  pSStack_d0 = unaff_R12;
  if (g_data_057a9dd4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIColorPicker_Definition_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&"-hex-row");
    il2cpp_runtime_helper_023445d0(&"-hex-label");
    il2cpp_runtime_helper_023445d0(&"-title");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"-cancel");
    il2cpp_runtime_helper_023445d0(&"buttonPrimary");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-b-field");
    il2cpp_runtime_helper_023445d0(&"g");
    il2cpp_runtime_helper_023445d0(&"R");
    il2cpp_runtime_helper_023445d0(&"subtext");
    il2cpp_runtime_helper_023445d0(&"-save");
    il2cpp_runtime_helper_023445d0(&"-footer");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"G");
    il2cpp_runtime_helper_023445d0(&"Color Picker");
    il2cpp_runtime_helper_023445d0(&"b");
    il2cpp_runtime_helper_023445d0(&"HEX");
    il2cpp_runtime_helper_023445d0(&"-popover");
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Panel");
    il2cpp_runtime_helper_023445d0(&"r");
    il2cpp_runtime_helper_023445d0(&"B");
    il2cpp_runtime_helper_023445d0(&"GisketchUIColorPickerVisual");
    il2cpp_runtime_helper_023445d0(&"-rgb-row");
    il2cpp_runtime_helper_023445d0(&"-r-field");
    il2cpp_runtime_helper_023445d0(&"Save");
    il2cpp_runtime_helper_023445d0(&"-g-field");
    il2cpp_runtime_helper_023445d0(&"popover");
    il2cpp_runtime_helper_023445d0(&"buttonQuiet");
    g_data_057a9dd4 = '\x01';
    if (*(int *)((long)&(TypeInfo_GisketchUIColorPicker->fields).layout + 4) != 0) goto label_03b6ba15;
label_03b6bbe4:
    il2cpp_runtime_helper_02337ed0();
    pSVar1 = ((TypeInfo_GisketchUIColorPicker->fields).choiceOptionRenderer)->klass;
    pGVar4 = TypeInfo_GisketchUIColorPicker;
  }
  else {
    if (*(int *)((long)&(TypeInfo_GisketchUIColorPicker->fields).layout + 4) == 0) goto label_03b6bbe4;
label_03b6ba15:
    pSVar1 = ((TypeInfo_GisketchUIColorPicker->fields).choiceOptionRenderer)->klass;
    pGVar4 = TypeInfo_GisketchUIColorPicker;
  }
  TypeInfo_GisketchUIColorPicker = pGVar4;
  if (pSVar1 != (System_String_c *)0x0) {
    System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___get_Item
              (&GStack_f8,(System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
               (Il2CppObject *)pGVar12,MethodInfo_GisketchUIColorPicker_Definition_get_Item);
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    pGVar4 = __this_00;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_00->fields).type = "Panel";
      il2cpp_runtime_helper_022b4080(&__this_00->fields);
      pSVar5 = System_String__Concat_3ae5ba0((System_String_o *)pGVar12,"-popover",(MethodInfo *)0x0);
      (__this_00->fields).id = pSVar5;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).id,pSVar5);
      (__this_00->fields).style = "popover";
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).style);
      if (g_data_057a9d9a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
        il2cpp_runtime_helper_023445d0(&"point");
        g_data_057a9d9a = '\x01';
      }
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
      pGVar4 = pGVar6;
      Gisketch_Aottg2UI_Data_GisketchLength___ctor
                ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar6,(MethodInfo *)0x0);
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        *(undefined4 *)&(pGVar6->fields).type = 0x43be0000;
        (pGVar6->fields).id = "point";
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).id);
        pMVar13 = (MethodInfo *)0x0;
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                            (System_String_o *)0x0,10.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar6,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,1.0,in_stack_fffffffffffffed8);
        (__this_00->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar7;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).search,pGVar7);
        pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition);
        pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
        pGVar4 = pGVar6;
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar6,(MethodInfo *)0x0);
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar6->fields).type = "Text";
          il2cpp_runtime_helper_022b4080(&pGVar6->fields);
          pSVar5 = System_String__Concat_3ae5ba0((System_String_o *)pGVar12,"-title",(MethodInfo *)0x0);
          (pGVar6->fields).id = pSVar5;
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).id,pSVar5);
          (pGVar6->fields).text = "Color Picker";
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).text);
          pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar6->fields).style;
          (pGVar6->fields).style = "subtext";
          il2cpp_runtime_helper_022b4080();
          if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
            if ((int)pGVar8->max_length == 0) goto label_03b6c634;
            pGVar8->m_Items[0] = pGVar6;
            il2cpp_runtime_helper_022b4080(pGVar8->m_Items,pGVar6);
            if (g_data_057a9de0 == '\0') {
              il2cpp_runtime_helper_023445d0(&"-preview");
              g_data_057a9de0 = '\x01';
            }
            pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                     System_String__Concat_3ae5ba0((System_String_o *)pGVar12,"-preview",(MethodInfo *)0x0);
            bVar16 = (byte)GStack_f8.fields.EnableAlpha & 1;
            if (g_data_057a9dd0 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
              il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
              il2cpp_runtime_helper_023445d0(&"#FFFFFF");
              g_data_057a9dd0 = '\x01';
            }
            if (bVar16 == 0) {
              puVar14 = &"#FFFFFF";
            }
            else {
              puVar14 = &"#FFFFFFFF";
            }
            pSVar5 = (System_String_o *)*puVar14;
            if (*(int *)((long)&(TypeInfo_GisketchUIColorPicker->fields).layout + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                               ((System_String_o *)pGVar12,pSVar5,(uint)bVar16,pMVar13);
            if (g_data_057a9d9b == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
              il2cpp_runtime_helper_023445d0(&"percent");
              g_data_057a9d9b = '\x01';
            }
            pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
            pGVar4 = pGVar9;
            Gisketch_Aottg2UI_Data_GisketchLength___ctor
                      ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar9,(MethodInfo *)0x0);
            if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              *(undefined4 *)&(pGVar9->fields).type = 0x42c80000;
              (pGVar9->fields).id = "percent";
              il2cpp_runtime_helper_022b4080(&(pGVar9->fields).id);
              if (g_data_057a9d9a == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
                il2cpp_runtime_helper_023445d0(&"point");
                g_data_057a9d9a = '\x01';
              }
              pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
              pGVar4 = pGVar10;
              Gisketch_Aottg2UI_Data_GisketchLength___ctor
                        ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar10,(MethodInfo *)0x0);
              if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                *(undefined4 *)&(pGVar10->fields).type = 0x42000000;
                (pGVar10->fields).id = "point";
                il2cpp_runtime_helper_022b4080(&(pGVar10->fields).id);
                pMVar13 = (MethodInfo *)0x0;
                pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                   ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                    (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar9,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar10,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                    ,0.0,0.0,0.0,0.0,in_stack_fffffffffffffed8);
                pGVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchNode
                                   ((System_String_o *)pGVar6,pSVar5,pGVar7,pMVar13);
                pGVar4 = pGVar6;
                if ((uint)pGVar8->max_length < 2) goto label_03b6c634;
                pGVar8->m_Items[1] = pGVar9;
                il2cpp_runtime_helper_022b4080(pGVar8->m_Items + 1);
                pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
                pGVar4 = pGVar6;
                Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar6,(MethodInfo *)0x0);
                if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                  (pGVar6->fields).type = "GisketchUIColorPickerVisual";
                  il2cpp_runtime_helper_022b4080(&pGVar6->fields);
                  if (g_data_057a9de1 == '\0') {
                    il2cpp_runtime_helper_023445d0(&"-visual");
                    g_data_057a9de1 = '\x01';
                  }
                  pSVar5 = System_String__Concat_3ae5ba0
                                     ((System_String_o *)pGVar12,"-visual",(MethodInfo *)0x0);
                  (pGVar6->fields).id = pSVar5;
                  il2cpp_runtime_helper_022b4080(&(pGVar6->fields).id,pSVar5);
                  (pGVar6->fields).value = (System_String_o *)pGVar12;
                  il2cpp_runtime_helper_022b4080(&(pGVar6->fields).value);
                  if (g_data_057a9d9b == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
                    il2cpp_runtime_helper_023445d0(&"percent");
                    g_data_057a9d9b = '\x01';
                  }
                  pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength)
                  ;
                  pGVar4 = pGVar9;
                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                            ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar9,(MethodInfo *)0x0);
                  if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                    *(undefined4 *)&(pGVar9->fields).type = 0x42c80000;
                    (pGVar9->fields).id = "percent";
                    il2cpp_runtime_helper_022b4080(&(pGVar9->fields).id);
                    pSVar5 = "Column";
                    bVar2 = bVar16 * '\x02' ^ 2;
                    if (bVar16 != 0) {
                      bVar2 = bVar16 * '\x02';
                    }
                    uVar15 = (uint)bVar2;
                    if (g_data_057a9d9a == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
                      il2cpp_runtime_helper_023445d0(&"point");
                      g_data_057a9d9a = '\x01';
                    }
                    pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                              il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
                    pGVar4 = pGVar10;
                    Gisketch_Aottg2UI_Data_GisketchLength___ctor
                              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar10,(MethodInfo *)0x0);
                    if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                      *(undefined4 *)&(pGVar10->fields).type =
                           *(undefined4 *)(&g_data_00d1d590 + (ulong)bVar16 * 4);
                      (pGVar10->fields).id = "point";
                      il2cpp_runtime_helper_022b4080(&(pGVar10->fields).id);
                      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                         (pSVar5,(System_String_o *)0x0,(System_String_o *)0x0,
                                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar9,
                                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar10,
                                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,
                                          0.0,0.0,0.0,0.0,0.0,0.0,in_stack_fffffffffffffed8);
                      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar6->fields).search;
                      (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar7;
                      il2cpp_runtime_helper_022b4080(pGVar4,pGVar7);
                      if ((uint)pGVar8->max_length <= uVar15) goto label_03b6c634;
                      pGVar8->m_Items[uVar15] = pGVar6;
                      il2cpp_runtime_helper_022b4080(pGVar8->m_Items + uVar15,pGVar6);
                      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                               System_String__Concat_3ae5ba0
                                         ((System_String_o *)pGVar12,"-rgb-row",(MethodInfo *)0x0);
                      pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                                il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition,3);
                      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                               System_String__Concat_3ae5ba0
                                         ((System_String_o *)pGVar12,"-r-field",(MethodInfo *)0x0);
                      pMVar13 = extraout_RDX;
                      if (*(int *)((long)&(TypeInfo_GisketchUIColorPicker->fields).layout + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                        pMVar13 = extraout_RDX_00;
                      }
                      pGVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__RgbInput
                                         ((System_String_o *)pGVar12,"r",pMVar13);
                      pGVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Field
                                         ((System_String_o *)pGVar4,"R",pGVar9,
                                          (MethodInfo *)&"R");
                      if (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
                        if ((int)pGVar11->max_length == 0) goto label_03b6c634;
                        pGVar11->m_Items[0] = pGVar9;
                        il2cpp_runtime_helper_022b4080(pGVar11->m_Items,pGVar9);
                        pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                                 System_String__Concat_3ae5ba0
                                           ((System_String_o *)pGVar12,"-g-field",(MethodInfo *)0x0);
                        pGVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__RgbInput
                                           ((System_String_o *)pGVar12,"g",method_00);
                        pGVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Field
                                           ((System_String_o *)pGVar4,"G",pGVar9,
                                            (MethodInfo *)&"G");
                        if ((uint)pGVar11->max_length < 2) goto label_03b6c634;
                        pGVar11->m_Items[1] = pGVar9;
                        il2cpp_runtime_helper_022b4080(pGVar11->m_Items + 1,pGVar9);
                        pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                                 System_String__Concat_3ae5ba0
                                           ((System_String_o *)pGVar12,"-b-field",(MethodInfo *)0x0);
                        pGVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__RgbInput
                                           ((System_String_o *)pGVar12,"b",method_01);
                        pGVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Field
                                           ((System_String_o *)pGVar4,"B",pGVar9,
                                            (MethodInfo *)&"B");
                        if ((uint)pGVar11->max_length < 3) goto label_03b6c634;
                        pGVar11->m_Items[2] = pGVar9;
                        il2cpp_runtime_helper_022b4080(pGVar11->m_Items + 2,pGVar9);
                        pGVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Row
                                           ((System_String_o *)pGVar6,pGVar11,method_02);
                        pGVar4 = pGVar6;
                        if ((uint)pGVar8->max_length < 4) goto label_03b6c634;
                        pGVar8->m_Items[3] = pGVar9;
                        il2cpp_runtime_helper_022b4080(pGVar8->m_Items + 3,pGVar9);
                        pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                                 System_String__Concat_3ae5ba0
                                           ((System_String_o *)pGVar12,"-hex-row",(MethodInfo *)0x0);
                        pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                                  il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition,2);
                        pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                                 System_String__Concat_3ae5ba0
                                           ((System_String_o *)pGVar12,"-hex-label",(MethodInfo *)0x0);
                        pGVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Label
                                           ((System_String_o *)pGVar4,"HEX",42.0,method_03);
                        if (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
                          if ((int)pGVar11->max_length == 0) goto label_03b6c634;
                          pGVar11->m_Items[0] = pGVar9;
                          il2cpp_runtime_helper_022b4080(pGVar11->m_Items,pGVar9);
                          pGVar4 = pGVar12;
                          pGVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__HexInput
                                             ((System_String_o *)pGVar12,(uint)bVar16,method_04);
                          if ((uint)pGVar11->max_length < 2) goto label_03b6c634;
                          pGVar11->m_Items[1] = pGVar9;
                          il2cpp_runtime_helper_022b4080(pGVar11->m_Items + 1,pGVar9);
                          pGVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Row
                                             ((System_String_o *)pGVar6,pGVar11,method_05);
                          pGVar4 = pGVar6;
                          if ((uint)pGVar8->max_length < 5) goto label_03b6c634;
                          pGVar8->m_Items[4] = pGVar9;
                          il2cpp_runtime_helper_022b4080(pGVar8->m_Items + 4,pGVar9);
                          pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                                   System_String__Concat_3ae5ba0
                                             ((System_String_o *)pGVar12,"-footer",(MethodInfo *)0x0);
                          pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                                    il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition,2);
                          pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                                   System_String__Concat_3ae5ba0
                                             ((System_String_o *)pGVar12,"-cancel",(MethodInfo *)0x0);
                          pGVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Button
                                             ((System_String_o *)pGVar4,"Cancel","buttonQuiet",
                                              (MethodInfo *)&"buttonQuiet");
                          if (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
                            if ((int)pGVar11->max_length != 0) {
                              pGVar11->m_Items[0] = pGVar9;
                              il2cpp_runtime_helper_022b4080(pGVar11->m_Items,pGVar9);
                              pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                                       System_String__Concat_3ae5ba0
                                                 ((System_String_o *)pGVar12,"-save",(MethodInfo *)0x0);
                              pGVar12 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Button
                                                  ((System_String_o *)pGVar4,"Save","buttonPrimary",
                                                   (MethodInfo *)&"buttonPrimary");
                              if (1 < (uint)pGVar11->max_length) {
                                pGVar11->m_Items[1] = pGVar12;
                                il2cpp_runtime_helper_022b4080(pGVar11->m_Items + 1,pGVar12);
                                pGVar12 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Row
                                                    ((System_String_o *)pGVar6,pGVar11,method_06);
                                pGVar4 = pGVar6;
                                if (5 < (uint)pGVar8->max_length) {
                                  pGVar8->m_Items[5] = pGVar12;
                                  il2cpp_runtime_helper_022b4080(pGVar8->m_Items + 5,pGVar12);
                                  (__this_00->fields).deferredChildren = pGVar8;
                                  il2cpp_runtime_helper_022b4080(&(__this_00->fields).deferredChildren,pGVar8);
                                  return;
                                }
                              }
                            }
                            goto label_03b6c634;
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
  il2cpp_runtime_helper_022b2c90();
label_03b6c634:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057a9de0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"-preview");
    g_data_057a9de0 = '\x01';
  }
  System_String__Concat_3ae5ba0((System_String_o *)pGVar4,"-preview",(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$PopoverNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__PopoverNode (System_String_o* id, const MethodInfo* method);
// 0x3b6b9e0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__PopoverNode(System_String_o *id,MethodInfo *method)

{
  System_String_c *__this;
  byte bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar5;
  undefined8 *puVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar10;
  MethodInfo *pMVar11;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  uint uVar12;
  byte bVar13;
  MethodInfo *in_stack_ffffffffffffff80;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o local_50;
  
  if (g_data_057a9dd4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIColorPicker_Definition_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&"-hex-row");
    il2cpp_runtime_helper_023445d0(&"-hex-label");
    il2cpp_runtime_helper_023445d0(&"-title");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"-cancel");
    il2cpp_runtime_helper_023445d0(&"buttonPrimary");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-b-field");
    il2cpp_runtime_helper_023445d0(&"g");
    il2cpp_runtime_helper_023445d0(&"R");
    il2cpp_runtime_helper_023445d0(&"subtext");
    il2cpp_runtime_helper_023445d0(&"-save");
    il2cpp_runtime_helper_023445d0(&"-footer");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"G");
    il2cpp_runtime_helper_023445d0(&"Color Picker");
    il2cpp_runtime_helper_023445d0(&"b");
    il2cpp_runtime_helper_023445d0(&"HEX");
    il2cpp_runtime_helper_023445d0(&"-popover");
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Panel");
    il2cpp_runtime_helper_023445d0(&"r");
    il2cpp_runtime_helper_023445d0(&"B");
    il2cpp_runtime_helper_023445d0(&"GisketchUIColorPickerVisual");
    il2cpp_runtime_helper_023445d0(&"-rgb-row");
    il2cpp_runtime_helper_023445d0(&"-r-field");
    il2cpp_runtime_helper_023445d0(&"Save");
    il2cpp_runtime_helper_023445d0(&"-g-field");
    il2cpp_runtime_helper_023445d0(&"popover");
    il2cpp_runtime_helper_023445d0(&"buttonQuiet");
    g_data_057a9dd4 = '\x01';
    if (*(int *)((long)&(TypeInfo_GisketchUIColorPicker->fields).layout + 4) == 0) goto label_03b6bbe4;
label_03b6ba15:
    __this = ((TypeInfo_GisketchUIColorPicker->fields).choiceOptionRenderer)->klass;
    pGVar10 = TypeInfo_GisketchUIColorPicker;
  }
  else {
    if (*(int *)((long)&(TypeInfo_GisketchUIColorPicker->fields).layout + 4) != 0) goto label_03b6ba15;
label_03b6bbe4:
    il2cpp_runtime_helper_02337ed0();
    __this = ((TypeInfo_GisketchUIColorPicker->fields).choiceOptionRenderer)->klass;
    pGVar10 = TypeInfo_GisketchUIColorPicker;
  }
  TypeInfo_GisketchUIColorPicker = pGVar10;
  if (__this != (System_String_c *)0x0) {
    System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___get_Item
              (&local_50,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)id,
               MethodInfo_GisketchUIColorPicker_Definition_get_Item);
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    pGVar10 = __this_00;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_00->fields).type = "Panel";
      il2cpp_runtime_helper_022b4080(&__this_00->fields);
      pSVar2 = System_String__Concat_3ae5ba0(id,"-popover",(MethodInfo *)0x0);
      (__this_00->fields).id = pSVar2;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).id,pSVar2);
      (__this_00->fields).style = "popover";
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).style);
      if (g_data_057a9d9a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
        il2cpp_runtime_helper_023445d0(&"point");
        g_data_057a9d9a = '\x01';
      }
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
      pGVar10 = pGVar3;
      Gisketch_Aottg2UI_Data_GisketchLength___ctor
                ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar3,(MethodInfo *)0x0);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        *(undefined4 *)&(pGVar3->fields).type = 0x43be0000;
        (pGVar3->fields).id = "point";
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).id);
        pMVar11 = (MethodInfo *)0x0;
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                            (System_String_o *)0x0,10.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar3,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,1.0,in_stack_ffffffffffffff80);
        (__this_00->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).search,pGVar4);
        pGVar5 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition);
        pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
        pGVar10 = pGVar3;
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar3,(MethodInfo *)0x0);
        if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar3->fields).type = "Text";
          il2cpp_runtime_helper_022b4080(&pGVar3->fields);
          pSVar2 = System_String__Concat_3ae5ba0(id,"-title",(MethodInfo *)0x0);
          (pGVar3->fields).id = pSVar2;
          il2cpp_runtime_helper_022b4080(&(pGVar3->fields).id,pSVar2);
          (pGVar3->fields).text = "Color Picker";
          il2cpp_runtime_helper_022b4080(&(pGVar3->fields).text);
          pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar3->fields).style;
          (pGVar3->fields).style = "subtext";
          il2cpp_runtime_helper_022b4080();
          if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
            if ((int)pGVar5->max_length == 0) goto label_03b6c634;
            pGVar5->m_Items[0] = pGVar3;
            il2cpp_runtime_helper_022b4080(pGVar5->m_Items,pGVar3);
            if (g_data_057a9de0 == '\0') {
              il2cpp_runtime_helper_023445d0(&"-preview");
              g_data_057a9de0 = '\x01';
            }
            pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                     System_String__Concat_3ae5ba0(id,"-preview",(MethodInfo *)0x0);
            bVar13 = (byte)local_50.fields.EnableAlpha & 1;
            if (g_data_057a9dd0 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
              il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
              il2cpp_runtime_helper_023445d0(&"#FFFFFF");
              g_data_057a9dd0 = '\x01';
            }
            if (bVar13 == 0) {
              puVar6 = &"#FFFFFF";
            }
            else {
              puVar6 = &"#FFFFFFFF";
            }
            pSVar2 = (System_String_o *)*puVar6;
            if (*(int *)((long)&(TypeInfo_GisketchUIColorPicker->fields).layout + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar2 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value(id,pSVar2,(uint)bVar13,pMVar11);
            if (g_data_057a9d9b == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
              il2cpp_runtime_helper_023445d0(&"percent");
              g_data_057a9d9b = '\x01';
            }
            pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
            pGVar10 = pGVar7;
            Gisketch_Aottg2UI_Data_GisketchLength___ctor
                      ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar7,(MethodInfo *)0x0);
            if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              *(undefined4 *)&(pGVar7->fields).type = 0x42c80000;
              (pGVar7->fields).id = "percent";
              il2cpp_runtime_helper_022b4080(&(pGVar7->fields).id);
              if (g_data_057a9d9a == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
                il2cpp_runtime_helper_023445d0(&"point");
                g_data_057a9d9a = '\x01';
              }
              pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
              pGVar10 = pGVar8;
              Gisketch_Aottg2UI_Data_GisketchLength___ctor
                        ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar8,(MethodInfo *)0x0);
              if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                *(undefined4 *)&(pGVar8->fields).type = 0x42000000;
                (pGVar8->fields).id = "point";
                il2cpp_runtime_helper_022b4080(&(pGVar8->fields).id);
                pMVar11 = (MethodInfo *)0x0;
                pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                   ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                    (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar7,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar8,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                    ,0.0,0.0,0.0,0.0,in_stack_ffffffffffffff80);
                pGVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchNode
                                   ((System_String_o *)pGVar3,pSVar2,pGVar4,pMVar11);
                pGVar10 = pGVar3;
                if ((uint)pGVar5->max_length < 2) goto label_03b6c634;
                pGVar5->m_Items[1] = pGVar7;
                il2cpp_runtime_helper_022b4080(pGVar5->m_Items + 1);
                pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
                pGVar10 = pGVar3;
                Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar3,(MethodInfo *)0x0);
                if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                  (pGVar3->fields).type = "GisketchUIColorPickerVisual";
                  il2cpp_runtime_helper_022b4080(&pGVar3->fields);
                  if (g_data_057a9de1 == '\0') {
                    il2cpp_runtime_helper_023445d0(&"-visual");
                    g_data_057a9de1 = '\x01';
                  }
                  pSVar2 = System_String__Concat_3ae5ba0(id,"-visual",(MethodInfo *)0x0);
                  (pGVar3->fields).id = pSVar2;
                  il2cpp_runtime_helper_022b4080(&(pGVar3->fields).id,pSVar2);
                  (pGVar3->fields).value = id;
                  il2cpp_runtime_helper_022b4080(&(pGVar3->fields).value);
                  if (g_data_057a9d9b == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
                    il2cpp_runtime_helper_023445d0(&"percent");
                    g_data_057a9d9b = '\x01';
                  }
                  pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength)
                  ;
                  pGVar10 = pGVar7;
                  Gisketch_Aottg2UI_Data_GisketchLength___ctor
                            ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar7,(MethodInfo *)0x0);
                  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                    *(undefined4 *)&(pGVar7->fields).type = 0x42c80000;
                    (pGVar7->fields).id = "percent";
                    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).id);
                    pSVar2 = "Column";
                    bVar1 = bVar13 * '\x02' ^ 2;
                    if (bVar13 != 0) {
                      bVar1 = bVar13 * '\x02';
                    }
                    uVar12 = (uint)bVar1;
                    if (g_data_057a9d9a == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
                      il2cpp_runtime_helper_023445d0(&"point");
                      g_data_057a9d9a = '\x01';
                    }
                    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                             il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
                    pGVar10 = pGVar8;
                    Gisketch_Aottg2UI_Data_GisketchLength___ctor
                              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar8,(MethodInfo *)0x0);
                    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                      *(undefined4 *)&(pGVar8->fields).type =
                           *(undefined4 *)(&g_data_00d1d590 + (ulong)bVar13 * 4);
                      (pGVar8->fields).id = "point";
                      il2cpp_runtime_helper_022b4080(&(pGVar8->fields).id);
                      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                         (pSVar2,(System_String_o *)0x0,(System_String_o *)0x0,
                                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar7,
                                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar8,
                                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,
                                          0.0,0.0,0.0,0.0,0.0,0.0,in_stack_ffffffffffffff80);
                      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar3->fields).search;
                      (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
                      il2cpp_runtime_helper_022b4080(pGVar10,pGVar4);
                      if ((uint)pGVar5->max_length <= uVar12) goto label_03b6c634;
                      pGVar5->m_Items[uVar12] = pGVar3;
                      il2cpp_runtime_helper_022b4080(pGVar5->m_Items + uVar12,pGVar3);
                      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                               System_String__Concat_3ae5ba0(id,"-rgb-row",(MethodInfo *)0x0);
                      pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                               il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition,3);
                      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                                System_String__Concat_3ae5ba0(id,"-r-field",(MethodInfo *)0x0);
                      pMVar11 = extraout_RDX;
                      if (*(int *)((long)&(TypeInfo_GisketchUIColorPicker->fields).layout + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                        pMVar11 = extraout_RDX_00;
                      }
                      pGVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__RgbInput(id,"r",pMVar11)
                      ;
                      pGVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Field
                                         ((System_String_o *)pGVar10,"R",pGVar7,
                                          (MethodInfo *)&"R");
                      if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
                        if ((int)pGVar9->max_length == 0) goto label_03b6c634;
                        pGVar9->m_Items[0] = pGVar7;
                        il2cpp_runtime_helper_022b4080(pGVar9->m_Items,pGVar7);
                        pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                                  System_String__Concat_3ae5ba0(id,"-g-field",(MethodInfo *)0x0);
                        pGVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__RgbInput
                                           (id,"g",method_00);
                        pGVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Field
                                           ((System_String_o *)pGVar10,"G",pGVar7,
                                            (MethodInfo *)&"G");
                        if ((uint)pGVar9->max_length < 2) goto label_03b6c634;
                        pGVar9->m_Items[1] = pGVar7;
                        il2cpp_runtime_helper_022b4080(pGVar9->m_Items + 1,pGVar7);
                        pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                                  System_String__Concat_3ae5ba0(id,"-b-field",(MethodInfo *)0x0);
                        pGVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__RgbInput
                                           (id,"b",method_01);
                        pGVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Field
                                           ((System_String_o *)pGVar10,"B",pGVar7,
                                            (MethodInfo *)&"B");
                        if ((uint)pGVar9->max_length < 3) goto label_03b6c634;
                        pGVar9->m_Items[2] = pGVar7;
                        il2cpp_runtime_helper_022b4080(pGVar9->m_Items + 2,pGVar7);
                        pGVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Row
                                           ((System_String_o *)pGVar3,pGVar9,method_02);
                        pGVar10 = pGVar3;
                        if ((uint)pGVar5->max_length < 4) goto label_03b6c634;
                        pGVar5->m_Items[3] = pGVar7;
                        il2cpp_runtime_helper_022b4080(pGVar5->m_Items + 3,pGVar7);
                        pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                                 System_String__Concat_3ae5ba0(id,"-hex-row",(MethodInfo *)0x0);
                        pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                                 il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition,2);
                        pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                                  System_String__Concat_3ae5ba0(id,"-hex-label",(MethodInfo *)0x0);
                        pGVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Label
                                           ((System_String_o *)pGVar10,"HEX",42.0,method_03);
                        if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
                          if ((int)pGVar9->max_length == 0) goto label_03b6c634;
                          pGVar9->m_Items[0] = pGVar7;
                          il2cpp_runtime_helper_022b4080(pGVar9->m_Items,pGVar7);
                          pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)id;
                          pGVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__HexInput
                                             (id,(uint)bVar13,method_04);
                          if ((uint)pGVar9->max_length < 2) goto label_03b6c634;
                          pGVar9->m_Items[1] = pGVar7;
                          il2cpp_runtime_helper_022b4080(pGVar9->m_Items + 1,pGVar7);
                          pGVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Row
                                             ((System_String_o *)pGVar3,pGVar9,method_05);
                          pGVar10 = pGVar3;
                          if ((uint)pGVar5->max_length < 5) goto label_03b6c634;
                          pGVar5->m_Items[4] = pGVar7;
                          il2cpp_runtime_helper_022b4080(pGVar5->m_Items + 4,pGVar7);
                          pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                                   System_String__Concat_3ae5ba0(id,"-footer",(MethodInfo *)0x0);
                          pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                                   il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition,2);
                          pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                                    System_String__Concat_3ae5ba0(id,"-cancel",(MethodInfo *)0x0);
                          pGVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Button
                                             ((System_String_o *)pGVar10,"Cancel","buttonQuiet",
                                              (MethodInfo *)&"buttonQuiet");
                          if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
                            if ((int)pGVar9->max_length != 0) {
                              pGVar9->m_Items[0] = pGVar7;
                              il2cpp_runtime_helper_022b4080(pGVar9->m_Items,pGVar7);
                              pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                                        System_String__Concat_3ae5ba0(id,"-save",(MethodInfo *)0x0);
                              pGVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Button
                                                 ((System_String_o *)pGVar10,"Save","buttonPrimary",
                                                  (MethodInfo *)&"buttonPrimary");
                              if (1 < (uint)pGVar9->max_length) {
                                pGVar9->m_Items[1] = pGVar7;
                                il2cpp_runtime_helper_022b4080(pGVar9->m_Items + 1,pGVar7);
                                pGVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Row
                                                   ((System_String_o *)pGVar3,pGVar9,method_06);
                                pGVar10 = pGVar3;
                                if (5 < (uint)pGVar5->max_length) {
                                  pGVar5->m_Items[5] = pGVar7;
                                  il2cpp_runtime_helper_022b4080(pGVar5->m_Items + 5,pGVar7);
                                  (__this_00->fields).deferredChildren = pGVar5;
                                  il2cpp_runtime_helper_022b4080(&(__this_00->fields).deferredChildren,pGVar5);
                                  return __this_00;
                                }
                              }
                            }
                            goto label_03b6c634;
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
  il2cpp_runtime_helper_022b2c90();
label_03b6c634:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057a9de0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"-preview");
    g_data_057a9de0 = '\x01';
  }
  pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
            System_String__Concat_3ae5ba0((System_String_o *)pGVar10,"-preview",(MethodInfo *)0x0);
  return pGVar10;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Open
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* id, bool focusOnOpen, const MethodInfo* method);
// 0x3b6d4e0

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Open
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *id,
               bool_conflict focusOnOpen,MethodInfo *method)

{
  float *value;
  byte bVar1;
  int iVar2;
  UnityEngine_Object_o *x;
  long lVar3;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this;
  char cVar4;
  undefined8 uVar5;
  UnityEngine_MonoBehaviour_o *pUVar6;
  bool_conflict bVar7;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *root;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar9;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this_00;
  UnityEngine_Transform_o *pUVar10;
  Il2CppObject *pIVar11;
  UnityEngine_GameObject_o *pUVar12;
  Il2CppObject *pIVar13;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar14;
  UnityEngine_Events_UnityAction_o *pUVar15;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar16;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar17;
  MethodInfo *in_RCX;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar18;
  MethodInfo *pMVar19;
  MethodInfo *pMVar20;
  uint extraout_EDX;
  undefined8 extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  long extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  undefined4 in_register_00000034;
  MethodInfo_255A020 *pMVar21;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar22;
  MethodInfo *in_R8;
  long *unaff_R12;
  MethodInfo_255B7B0 **ppMVar23;
  Gisketch_Aottg2UI_GisketchUIRoot_o *unaff_R14;
  System_Delegate_o *pSVar24;
  System_Delegate_o *a;
  bool bVar25;
  undefined4 uVar26;
  UnityEngine_Color_o rgbColor;
  UnityEngine_Color_o rgbColor_00;
  undefined8 uStackY_16c;
  float fStackY_164;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields GStackY_160;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields GStackY_150;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGStackY_138;
  long *plStackY_130;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGStackY_128;
  long lStackY_120;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStackY_118;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGStackY_110;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o GStackY_108;
  undefined8 uStackY_e0;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStackY_d8;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStackY_d0;
  System_Delegate_o *pSStackY_c8;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGStackY_c0;
  undefined4 uStackY_b8;
  float fStackY_b4;
  float fStackY_b0;
  float fStackY_ac;
  bool_conflict *pbStackY_a8;
  float *pfStackY_a0;
  System_String_o *pSStackY_98;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGStackY_90;
  long *plStackY_88;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGStackY_80;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o local_58;
  
  pMVar21 = (MethodInfo_255A020 *)CONCAT44(in_register_00000034,focusOnOpen);
  if (g_data_057a9dd5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIColorPickerPopover_AddComponent_GisketchUIColo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"color-picker-");
    g_data_057a9dd5 = '\x01';
  }
  local_58.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  local_58.fields.LivePreview = 0;
  local_58.fields.Disabled = 0;
  local_58.fields.Id = (System_String_o *)0x0;
  local_58.fields.EnableAlpha = 0;
  local_58.fields._12_4_ = 0;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar18 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)**(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8) !=
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    in_RCX = MethodInfo_Boolean_TryGetValue;
    bVar7 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       **(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8),(Il2CppObject *)id,&local_58,
                       (MethodInfo_3128A90 *)MethodInfo_Boolean_TryGetValue);
    if ((char)bVar7 == '\0') {
      return;
    }
    if ((local_58.fields._24_8_ & 0x100) != 0) {
      return;
    }
    unaff_R12 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R14 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
    pMVar21 = (MethodInfo_255A020 *)0x0;
    pGVar18 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)context.fields.GameObject;
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) goto label_03b6d711;
      unaff_R14 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                  UnityEngine_GameObject__GetComponentInParent_object_(context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot)
      ;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar21 = (MethodInfo_255A020 *)0x0;
    pGVar18 = unaff_R14;
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return;
    }
    if (unaff_R14 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      unaff_R12 = (long *)(unaff_R14->fields)._Theme_k__BackingField;
      if ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)unaff_R12 ==
          (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        return;
      }
      pMVar19 = (MethodInfo *)id;
      pSVar8 = System_String__Concat_3ae5ba0("color-picker-",id,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      root = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__PopoverNode(id,pMVar19);
      in_R8 = (MethodInfo *)((ulong)(uint)focusOnOpen & 0xff);
      pGStackY_80 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x3b6d6a4;
      in_RCX = (MethodInfo *)context.fields.GameObject;
      pGVar9 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
               Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
                         ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)unaff_R12,pSVar8,root,
                          context.fields.GameObject,(bool_conflict)in_R8,0,8.0,1,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar21 = (MethodInfo_255A020 *)0x0;
      pGVar18 = pGVar9;
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pGVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return;
      }
      if ((pGVar9 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
         (pMVar21 = MethodInfo_GisketchUIColorPickerPopover_AddComponent_GisketchUIColo,
         __this_00 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)
                     UnityEngine_GameObject__AddComponent_object_
                               ((UnityEngine_GameObject_o *)pGVar9,MethodInfo_GisketchUIColorPickerPopover_AddComponent_GisketchUIColo), pGVar18 = pGVar9,
         __this_00 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)0x0)) {
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Setup
                  (__this_00,id,context.fields.GameObject,unaff_R14,in_R8);
        return;
      }
    }
  }
label_03b6d711:
  il2cpp_runtime_helper_022b2c90();
  plStackY_88 = &TypeInfo_GisketchUIColorPicker;
  pSStackY_98 = id;
  pGStackY_90 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)unaff_R12;
  pGStackY_80 = unaff_R14;
  if (g_data_057a9deb == '\0') {
    pSStackY_c8 = (System_Delegate_o *)0x3b6d753;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchUIColorPickerValue);
    pSStackY_c8 = (System_Delegate_o *)0x3b6d75f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Cancel);
    pSStackY_c8 = (System_Delegate_o *)0x3b6d76b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnVisualChanged);
    pSStackY_c8 = (System_Delegate_o *)0x3b6d777;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Save);
    pSStackY_c8 = (System_Delegate_o *)0x3b6d783;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIColorPickerVisual_Find_GisketchUIColorPickerVi);
    pSStackY_c8 = (System_Delegate_o *)0x3b6d78f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_Find_TMP_InputField);
    pSStackY_c8 = (System_Delegate_o *)0x3b6d79b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    pSStackY_c8 = (System_Delegate_o *)0x3b6d7a7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pSStackY_c8 = (System_Delegate_o *)0x3b6d7b3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pSStackY_c8 = (System_Delegate_o *)0x3b6d7bf;
    il2cpp_runtime_helper_023445d0(&"-cancel");
    pSStackY_c8 = (System_Delegate_o *)0x3b6d7cb;
    il2cpp_runtime_helper_023445d0(&"-save");
    pSStackY_c8 = (System_Delegate_o *)0x3b6d7d7;
    il2cpp_runtime_helper_023445d0(&"-g");
    pSStackY_c8 = (System_Delegate_o *)0x3b6d7e3;
    il2cpp_runtime_helper_023445d0(&"-r");
    pSStackY_c8 = (System_Delegate_o *)0x3b6d7ef;
    il2cpp_runtime_helper_023445d0(&"-b");
    g_data_057a9deb = '\x01';
  }
  (pGVar18->fields)._selectedScreenId = (System_String_o *)pMVar21;
  pSStackY_c8 = (System_Delegate_o *)0x3b6d806;
  il2cpp_runtime_helper_022b4080(&(pGVar18->fields)._selectedScreenId,pMVar21);
  (pGVar18->fields)._buildOnStart = (int)extraout_RDX;
  (pGVar18->fields)._previewInEditor = (int)((ulong)extraout_RDX >> 0x20);
  pSStackY_c8 = (System_Delegate_o *)0x3b6d816;
  il2cpp_runtime_helper_022b4080(&(pGVar18->fields)._buildOnStart,extraout_RDX);
  *(MethodInfo **)&(pGVar18->fields)._createEventSystem = in_RCX;
  pSStackY_c8 = (System_Delegate_o *)0x3b6d826;
  il2cpp_runtime_helper_022b4080(&(pGVar18->fields)._createEventSystem);
  pSStackY_c8 = (System_Delegate_o *)0x3b6d830;
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pGVar18,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    pSStackY_c8 = (System_Delegate_o *)0x3b6d8ea;
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9de1 == '\0') {
    pSStackY_c8 = (System_Delegate_o *)0x3b6d860;
    il2cpp_runtime_helper_023445d0(&"-visual");
    g_data_057a9de1 = '\x01';
  }
  pSStackY_c8 = (System_Delegate_o *)0x3b6d87b;
  pSVar8 = System_String__Concat_3ae5ba0((System_String_o *)pMVar21,"-visual",(MethodInfo *)0x0);
  pSStackY_c8 = (System_Delegate_o *)0x3b6d891;
  pIVar11 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar10,pSVar8,MethodInfo_GisketchUIColorPickerVisual_Find_GisketchUIColorPickerVi);
  pIVar13 = pIVar11 + 9;
  if (pIVar11 == (Il2CppObject *)0x0) {
    pIVar13 = (Il2CppObject *)&(pGVar18->fields)._themeJson;
  }
  bVar1 = *(byte *)&pIVar13->klass;
  *(byte *)&(pGVar18->fields)._themeJson = bVar1;
  pGStackY_c0 = pGVar18;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    pSStackY_c8 = (System_Delegate_o *)0x3b6d901;
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057a9dd0 == '\0') goto label_03b6d90a;
label_03b6d8c7:
    if (bVar1 != 0) goto label_03b6d8cc;
label_03b6d93a:
    iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
    pSVar8 = "#FFFFFF";
  }
  else {
    if (g_data_057a9dd0 != '\0') goto label_03b6d8c7;
label_03b6d90a:
    pSStackY_c8 = (System_Delegate_o *)0x3b6d916;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    pSStackY_c8 = (System_Delegate_o *)0x3b6d922;
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    pSStackY_c8 = (System_Delegate_o *)0x3b6d92e;
    il2cpp_runtime_helper_023445d0(&"#FFFFFF");
    g_data_057a9dd0 = '\x01';
    if (bVar1 == 0) goto label_03b6d93a;
label_03b6d8cc:
    iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
    pSVar8 = "#FFFFFFFF";
  }
  if (iVar2 == 0) {
    pSStackY_c8 = (System_Delegate_o *)0x3b6d956;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStackY_c8 = (System_Delegate_o *)0x3b6d965;
  pSVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                     ((System_String_o *)pMVar21,pSVar8,(uint)bVar1,(MethodInfo *)pGVar18);
  pGVar9 = pGStackY_c0;
  value = &(pGStackY_c0->fields)._motionScale;
  pSStackY_c8 = (System_Delegate_o *)0x3b6d97c;
  bVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                    (pSVar8,(uint)*(byte *)&(pGStackY_c0->fields)._themeJson,
                     (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)value,(MethodInfo *)pGVar18);
  if ((char)bVar7 == '\0') {
    fStackY_ac = 0.0;
    fStackY_b4 = 0.0;
    fStackY_b0 = 0.0;
    uStackY_b8 = 0xffffffff;
    pSStackY_c8 = (System_Delegate_o *)0x3b6d9b9;
    rgbColor.fields.b = 1.0;
    rgbColor.fields.a = 1.0;
    rgbColor.fields.r = 1.0;
    rgbColor.fields.g = 1.0;
    UnityEngine_Color__RGBToHSV(rgbColor,&fStackY_b4,&fStackY_b0,&fStackY_ac,(MethodInfo *)0x0);
    *(ulong *)value = CONCAT44(fStackY_b4,uStackY_b8);
    (pGVar9->fields)._actionHandler = (UnityEngine_MonoBehaviour_o *)CONCAT44(fStackY_ac,fStackY_b0);
  }
  pSStackY_c8 = (System_Delegate_o *)0x3b6d9d0;
  pfStackY_a0 = value;
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pGVar9,(MethodInfo *)0x0);
  pSStackY_c8 = (System_Delegate_o *)0x3b6d9e7;
  pSVar8 = System_String__Concat_3ae5ba0((System_String_o *)pMVar21,"-r",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    pSStackY_c8 = (System_Delegate_o *)0x3b6d9fc;
    il2cpp_runtime_helper_02337ed0();
  }
  ppMVar23 = &MethodInfo_TMP_InputField_Find_TMP_InputField;
  pSStackY_c8 = (System_Delegate_o *)0x3b6da12;
  pUVar12 = (UnityEngine_GameObject_o *)
            Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar10,pSVar8,MethodInfo_TMP_InputField_Find_TMP_InputField);
  (pGVar9->fields)._canvasObject = pUVar12;
  pSStackY_c8 = (System_Delegate_o *)0x3b6da22;
  il2cpp_runtime_helper_022b4080(&(pGVar9->fields)._canvasObject);
  pSStackY_c8 = (System_Delegate_o *)0x3b6da2c;
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pGVar9,(MethodInfo *)0x0);
  pSStackY_c8 = (System_Delegate_o *)0x3b6da43;
  pSVar8 = System_String__Concat_3ae5ba0((System_String_o *)pMVar21,"-g",(MethodInfo *)0x0);
  pSStackY_c8 = (System_Delegate_o *)0x3b6da52;
  pUVar12 = (UnityEngine_GameObject_o *)
            Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar10,pSVar8,MethodInfo_TMP_InputField_Find_TMP_InputField);
  (pGVar9->fields)._eventSystemObject = pUVar12;
  pSStackY_c8 = (System_Delegate_o *)0x3b6da62;
  il2cpp_runtime_helper_022b4080(&(pGVar9->fields)._eventSystemObject);
  pSStackY_c8 = (System_Delegate_o *)0x3b6da6c;
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pGVar9,(MethodInfo *)0x0);
  pSStackY_c8 = (System_Delegate_o *)0x3b6da83;
  pSVar8 = System_String__Concat_3ae5ba0((System_String_o *)pMVar21,"-b",(MethodInfo *)0x0);
  pSStackY_c8 = (System_Delegate_o *)0x3b6da92;
  pIVar13 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar10,pSVar8,MethodInfo_TMP_InputField_Find_TMP_InputField);
  (pGVar9->fields)._customActions = (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)pIVar13;
  pSStackY_c8 = (System_Delegate_o *)0x3b6daa2;
  il2cpp_runtime_helper_022b4080(&(pGVar9->fields)._customActions);
  pSStackY_c8 = (System_Delegate_o *)0x3b6daac;
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pGVar9,(MethodInfo *)0x0);
  if (g_data_057a9de2 == '\0') {
    pSStackY_c8 = (System_Delegate_o *)0x3b6dac4;
    il2cpp_runtime_helper_023445d0(&"-hex");
    g_data_057a9de2 = '\x01';
  }
  pSStackY_c8 = (System_Delegate_o *)0x3b6dadf;
  pSVar8 = System_String__Concat_3ae5ba0((System_String_o *)pMVar21,"-hex",(MethodInfo *)0x0);
  pSStackY_c8 = (System_Delegate_o *)0x3b6daee;
  pGVar14 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)
            Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar10,pSVar8,MethodInfo_TMP_InputField_Find_TMP_InputField);
  (pGVar9->fields)._codeActions = pGVar14;
  pSStackY_c8 = (System_Delegate_o *)0x3b6dafe;
  il2cpp_runtime_helper_022b4080(&(pGVar9->fields)._codeActions);
  pSStackY_c8 = (System_Delegate_o *)0x3b6db08;
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pGVar9,(MethodInfo *)0x0);
  if (g_data_057a9de1 == '\0') {
    pSStackY_c8 = (System_Delegate_o *)0x3b6db20;
    il2cpp_runtime_helper_023445d0(&"-visual");
    g_data_057a9de1 = '\x01';
  }
  pSStackY_c8 = (System_Delegate_o *)0x3b6db3b;
  pSVar8 = System_String__Concat_3ae5ba0((System_String_o *)pMVar21,"-visual",(MethodInfo *)0x0);
  pSStackY_c8 = (System_Delegate_o *)0x3b6db4a;
  pIVar13 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar10,pSVar8,MethodInfo_GisketchUIColorPickerVisual_Find_GisketchUIColorPickerVi);
  pGVar17 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)&(pGVar9->fields)._suppressNextBuildMotion
  ;
  *(Il2CppObject **)&(pGVar9->fields)._suppressNextBuildMotion = pIVar13;
  pSStackY_c8 = (System_Delegate_o *)0x3b6db5d;
  il2cpp_runtime_helper_022b4080(pGVar17,pIVar13);
  pSStackY_c8 = (System_Delegate_o *)0x3b6db69;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)pGVar9,
             (TMPro_TMP_InputField_o *)(pGVar9->fields)._canvasObject,method_00);
  pSStackY_c8 = (System_Delegate_o *)0x3b6db75;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)pGVar9,
             (TMPro_TMP_InputField_o *)(pGVar9->fields)._eventSystemObject,method_01);
  pSStackY_c8 = (System_Delegate_o *)0x3b6db81;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)pGVar9,
             (TMPro_TMP_InputField_o *)(pGVar9->fields)._customActions,method_02);
  pSStackY_c8 = (System_Delegate_o *)0x3b6db8d;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireHexInput
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)pGVar9,
             (TMPro_TMP_InputField_o *)(pGVar9->fields)._codeActions,method_03);
  pSStackY_c8 = (System_Delegate_o *)0x3b6dba1;
  pSVar8 = System_String__Concat_3ae5ba0((System_String_o *)pMVar21,"-cancel",(MethodInfo *)0x0);
  pSVar24 = (System_Delegate_o *)&TypeInfo_UnityAction;
  pSStackY_c8 = (System_Delegate_o *)0x3b6dbb3;
  pUVar15 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  pMVar19 = (MethodInfo *)0x0;
  pSStackY_c8 = (System_Delegate_o *)0x3b6dbce;
  UnityEngine_Events_UnityAction___ctor();
  pSStackY_c8 = (System_Delegate_o *)0x3b6dbdd;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)pGStackY_c0,pSVar8,pUVar15,pMVar19);
  pSStackY_c8 = (System_Delegate_o *)0x3b6dbf1;
  pSVar8 = System_String__Concat_3ae5ba0((System_String_o *)pMVar21,"-save",(MethodInfo *)0x0);
  pSStackY_c8 = (System_Delegate_o *)0x3b6dbfc;
  pUVar15 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  pMVar19 = (MethodInfo *)0x0;
  pSStackY_c8 = (System_Delegate_o *)0x3b6dc17;
  UnityEngine_Events_UnityAction___ctor();
  pGVar18 = pGStackY_c0;
  pSStackY_c8 = (System_Delegate_o *)0x3b6dc2a;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)pGStackY_c0,pSVar8,pUVar15,pMVar19);
  x = *(UnityEngine_Object_o **)&(pGVar18->fields)._suppressNextBuildMotion;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pSStackY_c8 = (System_Delegate_o *)0x3b6dc46;
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar9 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  pSStackY_c8 = (System_Delegate_o *)0x3b6dc52;
  bVar7 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    lVar3 = *(long *)&(pGVar18->fields)._suppressNextBuildMotion;
    pSStackY_c8 = (System_Delegate_o *)0x3b6dc6d;
    pGVar16 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchUIColorPickerValue);
    pMVar19 = (MethodInfo *)0x0;
    pSStackY_c8 = (System_Delegate_o *)0x3b6dc87;
    pGVar9 = pGVar18;
    pGVar22 = pGVar16;
    System_Action_GisketchUIColorPickerValue____ctor();
    if (lVar3 != 0) {
      pbStackY_a8 = (bool_conflict *)pGVar17;
      if (g_data_057a9dfd == '\0') {
        pSStackY_c8 = (System_Delegate_o *)0x3b6dcaa;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchUIColorPickerValue);
        g_data_057a9dfd = '\x01';
      }
      a = *(System_Delegate_o **)(lVar3 + 0x88);
      do {
        pSStackY_c8 = (System_Delegate_o *)0x3b6dcf6;
        pGVar17 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
                  System_Delegate__Combine(a,(System_Delegate_o *)pGVar16,(MethodInfo *)0x0);
        pGVar18 = TypeInfo_Action_GisketchUIColorPickerValue;
        pGVar9 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
        if (pGVar17 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
          pSStackY_c8 = (System_Delegate_o *)0x3b6dd18;
          pGVar9 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)il2cpp_runtime_helper_023051f0(pGVar17,TypeInfo_Action_GisketchUIColorPickerValue);
          ppMVar23 = (MethodInfo_255B7B0 **)pGVar18;
          if (pGVar9 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
            pSStackY_c8 = (System_Delegate_o *)0x3b6dd28;
            pGVar9 = pGVar18;
            pGVar22 = pGVar17;
            il2cpp_runtime_helper_022b2fd0();
            pSVar24 = a;
            break;
          }
        }
        pSStackY_c8 = (System_Delegate_o *)0x3b6dcde;
        pGVar22 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)(lVar3 + 0x88);
        pSVar24 = (System_Delegate_o *)
                  il2cpp_runtime_helper_02300640((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)(lVar3 + 0x88),pGVar9,a
                              );
        bVar25 = a != pSVar24;
        a = pSVar24;
      } while (bVar25);
      pGVar18 = pGStackY_c0;
      __this = *(Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o **)pbStackY_a8;
      if (__this != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
        uVar5 = *(undefined8 *)pfStackY_a0;
        pUVar6 = *(UnityEngine_MonoBehaviour_o **)(pfStackY_a0 + 2);
        (__this->fields)._value.fields.R = (char)uVar5;
        (__this->fields)._value.fields.G = (char)((ulong)uVar5 >> 8);
        (__this->fields)._value.fields.B = (char)((ulong)uVar5 >> 0x10);
        (__this->fields)._value.fields.A = (char)((ulong)uVar5 >> 0x18);
        (__this->fields)._value.fields.H = (float)(int)((ulong)uVar5 >> 0x20);
        *(UnityEngine_MonoBehaviour_o **)&(__this->fields)._value.fields.S = pUVar6;
        pSStackY_c8 = (System_Delegate_o *)0x3b6dd4d;
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this,(MethodInfo *)pGVar9);
        pSStackY_c8 = (System_Delegate_o *)0x3b6dd55;
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,(MethodInfo *)pGVar9);
        goto label_03b6dd55;
      }
    }
    pSStackY_c8 = (System_Delegate_o *)0x3b6dd71;
    il2cpp_runtime_helper_022b2c90();
    uStackY_e0 = 0;
    pGStackY_d8 = pGVar17;
    pGStackY_d0 = pGVar16;
    pSStackY_c8 = pSVar24;
    if (g_data_057a9dd6 == '\0') {
      pGStackY_110 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x3b6dda9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
      pGStackY_110 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x3b6ddb5;
      il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIColorPickerVisual_AddComponent_GisketchUIColor);
      pGStackY_110 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x3b6ddc1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
      g_data_057a9dd6 = '\x01';
    }
    GStackY_108.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
    GStackY_108.fields.LivePreview = 0;
    GStackY_108.fields.Disabled = 0;
    GStackY_108.fields.Id = (System_String_o *)0x0;
    GStackY_108.fields.EnableAlpha = 0;
    GStackY_108.fields._12_4_ = 0;
    if (pGVar9 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      pMVar21 = (MethodInfo_255A020 *)0x0;
      pGStackY_110 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x3b6dde8;
      bVar7 = System_String__IsNullOrEmpty
                        ((System_String_o *)(pGVar9->fields)._canvasObject,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
          pGStackY_110 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x3b6de09;
          il2cpp_runtime_helper_02337ed0();
        }
        pGVar17 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
                  **(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8);
        if (pGVar17 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
          pMVar21 = (MethodInfo_255A020 *)(pGVar9->fields)._canvasObject;
          pGStackY_110 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x3b6de32;
          pMVar19 = MethodInfo_Boolean_TryGetValue;
          bVar7 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar17,
                             (Il2CppObject *)pMVar21,&GStackY_108,(MethodInfo_3128A90 *)MethodInfo_Boolean_TryGetValue);
          if ((char)bVar7 == '\0') {
            return;
          }
          if (pGVar22 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
            pGStackY_110 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x3b6de4d;
            pMVar21 = MethodInfo_GisketchUIColorPickerVisual_AddComponent_GisketchUIColor;
            pGVar17 = pGVar22;
            pGVar16 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
                      UnityEngine_GameObject__AddComponent_object_
                                ((UnityEngine_GameObject_o *)pGVar22,MethodInfo_GisketchUIColorPickerVisual_AddComponent_GisketchUIColor);
            if ((extraout_RDX_00 != 0) &&
               (pGVar16 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0)) {
              pGStackY_110 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x3b6de71;
              Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Setup
                        (pGVar16,(System_String_o *)(pGVar9->fields)._canvasObject,
                         (uint)((byte)GStackY_108.fields.EnableAlpha & 1),
                         *(Gisketch_Aottg2UI_Styling_GisketchTheme_o **)(extraout_RDX_00 + 0x18),in_R8);
              return;
            }
          }
        }
        pGStackY_110 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x3b6de84;
        il2cpp_runtime_helper_022b2c90();
        plStackY_130 = &TypeInfo_GisketchUIColorPicker;
        cVar4 = (char)extraout_EDX;
        pMVar20 = pMVar19;
        pGStackY_138 = pGVar9;
        pGStackY_128 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)ppMVar23;
        lStackY_120 = extraout_RDX_00;
        pGStackY_118 = pGVar22;
        pGStackY_110 = pGVar18;
        if (g_data_057a9dff == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
          g_data_057a9dff = '\x01';
        }
        GStackY_150.R = '\0';
        GStackY_150.G = '\0';
        GStackY_150.B = '\0';
        GStackY_150.A = '\0';
        GStackY_150.H = 0.0;
        GStackY_150.S = 0.0;
        GStackY_150.V = 0.0;
        GStackY_160.R = '\0';
        GStackY_160.G = '\0';
        GStackY_160.B = '\0';
        GStackY_160.A = '\0';
        GStackY_160.H = 0.0;
        GStackY_160.S = 0.0;
        GStackY_160.V = 0.0;
        *(char *)&(pGVar17->fields)._EnableAlpha_k__BackingField = cVar4;
        if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057a9dd0 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
          il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
          il2cpp_runtime_helper_023445d0(&"#FFFFFF");
          g_data_057a9dd0 = '\x01';
        }
        if (cVar4 == '\0') {
          iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
          pSVar8 = "#FFFFFF";
        }
        else {
          iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
          pSVar8 = "#FFFFFFFF";
        }
        if (iVar2 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                           ((System_String_o *)pMVar21,pSVar8,extraout_EDX & 0xff,pMVar20);
        bVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                          (pSVar8,extraout_EDX & 0xff,
                           (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&GStackY_150,pMVar20);
        if ((char)bVar7 == '\0') {
          fStackY_164 = 0.0;
          uStackY_16c = 0;
          rgbColor_00.fields.b = 1.0;
          rgbColor_00.fields.a = 1.0;
          rgbColor_00.fields.r = 1.0;
          rgbColor_00.fields.g = 1.0;
          UnityEngine_Color__RGBToHSV
                    (rgbColor_00,(float *)&uStackY_16c,(float *)((long)&uStackY_16c + 4),&fStackY_164,
                     (MethodInfo *)0x0);
          uVar26._0_1_ = 0xff;
          uVar26._1_1_ = 0xff;
          uVar26._2_1_ = 0xff;
          uVar26._3_1_ = 0xff;
          GStackY_160.H = (float)uStackY_16c;
          GStackY_160.S = uStackY_16c._4_4_;
          GStackY_160.V = fStackY_164;
        }
        else {
          uVar26 = GStackY_150._0_4_;
          GStackY_160.H = GStackY_150.H;
          GStackY_160.S = GStackY_150.S;
          GStackY_160.V = GStackY_150.V;
        }
        GStackY_160.R = (uint8_t)uVar26;
        GStackY_160.G = SUB41(uVar26,1);
        GStackY_160.B = SUB41(uVar26,2);
        GStackY_160.A = SUB41(uVar26,3);
        (pGVar17->fields)._value.fields.R = (uint8_t)uVar26;
        (pGVar17->fields)._value.fields.G = SUB41(uVar26,1);
        (pGVar17->fields)._value.fields.B = SUB41(uVar26,2);
        (pGVar17->fields)._value.fields.A = SUB41(uVar26,3);
        (pGVar17->fields)._value.fields.H = GStackY_160.H;
        (pGVar17->fields)._value.fields.S = GStackY_160.S;
        (pGVar17->fields)._value.fields.V = GStackY_160.V;
        pGVar22 = pGVar17;
        pGVar16 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
                  UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pGVar17,(MethodInfo *)0x0);
        if ((pGVar16 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) &&
           (pIVar13 = UnityEngine_GameObject__AddComponent_object_
                                ((UnityEngine_GameObject_o *)pGVar16,MethodInfo_LayoutElement_AddComponent_LayoutElement), pGVar22 = pGVar16,
           pIVar13 != (Il2CppObject *)0x0)) {
          if (cVar4 == '\0') {
            uVar26 = 0x435c0000;
          }
          else {
            uVar26 = 0x43820000;
          }
          (*pIVar13->klass->vtable[0x26].methodPtr)(uVar26,pIVar13,pIVar13->klass->vtable[0x26].method);
          pMVar20 = extraout_RDX_01;
          if (pMVar19 == (MethodInfo *)0x0) {
            if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              pMVar20 = extraout_RDX_02;
            }
            pMVar19 = (MethodInfo *)**(undefined8 **)(TypeInfo_GisketchTheme + 0xb8);
          }
          Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Build
                    (pGVar17,(Gisketch_Aottg2UI_Styling_GisketchTheme_o *)pMVar19,pMVar20);
          Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(pGVar17,pMVar19);
          Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(pGVar17,pMVar19);
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057a9de2 == '\0') {
          il2cpp_runtime_helper_023445d0(&"-hex");
          g_data_057a9de2 = '\x01';
        }
        System_String__Concat_3ae5ba0((System_String_o *)pGVar22,"-hex",(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
label_03b6dd55:
  pSStackY_c8 = (System_Delegate_o *)0x3b6dd5d;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SyncFields
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)pGVar18,(MethodInfo *)pGVar9);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$BuildVisual
// il2cpp: bool Gisketch_Aottg2UI_Code_GisketchUIColorPicker__BuildVisual (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x3b6dd80

bool_conflict
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__BuildVisual
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  bool_conflict bVar4;
  bool_conflict extraout_EAX;
  ulong in_RAX;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar5;
  ulong extraout_RAX;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this;
  Il2CppObject *pIVar7;
  MethodInfo *pMVar8;
  uint extraout_EDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo_255A020 *id;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this_00;
  undefined4 uVar9;
  UnityEngine_Color_o rgbColor;
  undefined8 uStack_ac;
  float fStack_a4;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields GStack_a0;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields GStack_90;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_78;
  long *plStack_70;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o GStack_48;
  
  if (g_data_057a9dd6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIColorPickerVisual_AddComponent_GisketchUIColor);
    in_RAX = il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    g_data_057a9dd6 = '\x01';
  }
  GStack_48.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  GStack_48.fields.LivePreview = 0;
  GStack_48.fields.Disabled = 0;
  GStack_48.fields.Id = (System_String_o *)0x0;
  GStack_48.fields.EnableAlpha = 0;
  GStack_48.fields._12_4_ = 0;
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    id = (MethodInfo_255A020 *)0x0;
    uVar3 = System_String__IsNullOrEmpty((node->fields).value,(MethodInfo *)0x0);
    in_RAX = (ulong)uVar3;
    if ((char)uVar3 == '\0') {
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_00 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
                  **(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8);
      if (__this_00 == (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
label_03b6de7f:
        il2cpp_runtime_helper_022b2c90();
        plStack_70 = &TypeInfo_GisketchUIColorPicker;
        cVar2 = (char)extraout_EDX;
        pMVar8 = (MethodInfo *)view;
        pGStack_78 = node;
        if (g_data_057a9dff == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
          g_data_057a9dff = '\x01';
        }
        GStack_90.R = '\0';
        GStack_90.G = '\0';
        GStack_90.B = '\0';
        GStack_90.A = '\0';
        GStack_90.H = 0.0;
        GStack_90.S = 0.0;
        GStack_90.V = 0.0;
        GStack_a0.R = '\0';
        GStack_a0.G = '\0';
        GStack_a0.B = '\0';
        GStack_a0.A = '\0';
        GStack_a0.H = 0.0;
        GStack_a0.S = 0.0;
        GStack_a0.V = 0.0;
        *(char *)&(__this_00->fields)._EnableAlpha_k__BackingField = cVar2;
        if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057a9dd0 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
          il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
          il2cpp_runtime_helper_023445d0(&"#FFFFFF");
          g_data_057a9dd0 = '\x01';
        }
        if (cVar2 == '\0') {
          iVar1 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
          pSVar6 = "#FFFFFF";
        }
        else {
          iVar1 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
          pSVar6 = "#FFFFFFFF";
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                           ((System_String_o *)id,pSVar6,extraout_EDX & 0xff,pMVar8);
        bVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                          (pSVar6,extraout_EDX & 0xff,
                           (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&GStack_90,pMVar8);
        if ((char)bVar4 == '\0') {
          fStack_a4 = 0.0;
          uStack_ac = 0;
          rgbColor.fields.b = 1.0;
          rgbColor.fields.a = 1.0;
          rgbColor.fields.r = 1.0;
          rgbColor.fields.g = 1.0;
          UnityEngine_Color__RGBToHSV
                    (rgbColor,(float *)&uStack_ac,(float *)((long)&uStack_ac + 4),&fStack_a4,(MethodInfo *)0x0
                    );
          uVar9._0_1_ = 0xff;
          uVar9._1_1_ = 0xff;
          uVar9._2_1_ = 0xff;
          uVar9._3_1_ = 0xff;
          GStack_a0.H = (float)uStack_ac;
          GStack_a0.S = uStack_ac._4_4_;
          GStack_a0.V = fStack_a4;
        }
        else {
          uVar9 = GStack_90._0_4_;
          GStack_a0.H = GStack_90.H;
          GStack_a0.S = GStack_90.S;
          GStack_a0.V = GStack_90.V;
        }
        GStack_a0.R = (uint8_t)uVar9;
        GStack_a0.G = SUB41(uVar9,1);
        GStack_a0.B = SUB41(uVar9,2);
        GStack_a0.A = SUB41(uVar9,3);
        (__this_00->fields)._value.fields.R = (uint8_t)uVar9;
        (__this_00->fields)._value.fields.G = SUB41(uVar9,1);
        (__this_00->fields)._value.fields.B = SUB41(uVar9,2);
        (__this_00->fields)._value.fields.A = SUB41(uVar9,3);
        (__this_00->fields)._value.fields.H = GStack_a0.H;
        (__this_00->fields)._value.fields.S = GStack_a0.S;
        (__this_00->fields)._value.fields.V = GStack_a0.V;
        pGVar5 = __this_00;
        __this = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
                 UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0)
        ;
        if ((__this != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) &&
           (pIVar7 = UnityEngine_GameObject__AddComponent_object_
                               ((UnityEngine_GameObject_o *)__this,MethodInfo_LayoutElement_AddComponent_LayoutElement), pGVar5 = __this,
           pIVar7 != (Il2CppObject *)0x0)) {
          if (cVar2 == '\0') {
            uVar9 = 0x435c0000;
          }
          else {
            uVar9 = 0x43820000;
          }
          (*pIVar7->klass->vtable[0x26].methodPtr)(uVar9,pIVar7,pIVar7->klass->vtable[0x26].method);
          pMVar8 = extraout_RDX;
          if ((MethodInfo *)view == (MethodInfo *)0x0) {
            if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              pMVar8 = extraout_RDX_00;
            }
            view = (Gisketch_Aottg2UI_Building_GisketchView_o *)**(undefined8 **)(TypeInfo_GisketchTheme + 0xb8);
          }
          Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Build
                    (__this_00,(Gisketch_Aottg2UI_Styling_GisketchTheme_o *)view,pMVar8);
          Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this_00,(MethodInfo *)view);
          Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this_00,(MethodInfo *)view);
          return extraout_EAX;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057a9de2 == '\0') {
          il2cpp_runtime_helper_023445d0(&"-hex");
          g_data_057a9de2 = '\x01';
        }
        pSVar6 = System_String__Concat_3ae5ba0((System_String_o *)pGVar5,"-hex",(MethodInfo *)0x0);
        return (bool_conflict)pSVar6;
      }
      id = (MethodInfo_255A020 *)(node->fields).value;
      view = (Gisketch_Aottg2UI_Building_GisketchView_o *)MethodInfo_Boolean_TryGetValue;
      uVar3 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)id
                         ,&GStack_48,(MethodInfo_3128A90 *)MethodInfo_Boolean_TryGetValue);
      in_RAX = (ulong)uVar3;
      if ((char)uVar3 != '\0') {
        if (((go == (UnityEngine_GameObject_o *)0x0) ||
            (id = MethodInfo_GisketchUIColorPickerVisual_AddComponent_GisketchUIColor,
            pGVar5 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
                     UnityEngine_GameObject__AddComponent_object_(go,MethodInfo_GisketchUIColorPickerVisual_AddComponent_GisketchUIColor),
            __this_00 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)go,
            context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0)) ||
           (pGVar5 == (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0)) goto label_03b6de7f;
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Setup
                  (pGVar5,(node->fields).value,(uint)((byte)GStack_48.fields.EnableAlpha & 1),
                   (context->fields).Theme,method);
        in_RAX = extraout_RAX;
      }
    }
  }
  return (bool_conflict)CONCAT71((int7)(in_RAX >> 8),1);
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$RgbInput
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__RgbInput (System_String_o* id, System_String_o* suffix, const MethodInfo* method);
// 0x3b6c7b0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__RgbInput
          (System_String_o *id,System_String_o *suffix,MethodInfo *method)

{
  Il2CppClass **value;
  byte bVar1;
  int iVar2;
  UnityEngine_Object_o *x;
  void *pvVar3;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this;
  char cVar4;
  bool_conflict bVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar11;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar12;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar13;
  undefined8 *puVar14;
  undefined4 extraout_var;
  Il2CppRGCTXData IVar15;
  undefined4 extraout_var_00;
  Il2CppRGCTXData IVar16;
  undefined4 extraout_var_01;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *extraout_RAX;
  UnityEngine_Transform_o *pUVar17;
  Il2CppObject *pIVar18;
  Il2CppClass *pIVar19;
  Il2CppObject *pIVar20;
  UnityEngine_Events_UnityAction_o *pUVar21;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar22;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar23;
  Il2CppRGCTXData IVar24;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *extraout_RAX_00;
  undefined8 uVar25;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined8 extraout_RAX_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *extraout_RAX_02;
  Il2CppRGCTXData in_RCX;
  MethodInfo *pMVar26;
  Il2CppRGCTXData method_00;
  uint extraout_EDX;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  Il2CppRGCTXData extraout_RDX_02;
  Il2CppType **extraout_RDX_03;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  long lVar27;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  ulong uVar28;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar29;
  ulong uVar30;
  Il2CppClass *str0;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar31;
  MethodInfo *in_R8;
  long *__this_01;
  MethodInfo_255B7B0 **ppMVar32;
  System_Delegate_o *pSVar33;
  System_Delegate_o *a;
  bool bVar34;
  undefined4 uVar35;
  UnityEngine_Color_o rgbColor;
  UnityEngine_Color_o rgbColor_00;
  undefined1 auVar36 [16];
  undefined8 uStackY_44c;
  float fStackY_444;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields GStackY_440;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields GStackY_430;
  Il2CppRGCTXData IStackY_418;
  long *plStackY_410;
  Il2CppRGCTXData IStackY_408;
  long lStackY_400;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStackY_3f8;
  Il2CppRGCTXData IStackY_3f0;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o GStackY_3e8;
  undefined8 uStackY_3c0;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStackY_3b8;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStackY_3b0;
  System_Delegate_o *pSStackY_3a8;
  Il2CppRGCTXData IStackY_3a0;
  undefined4 uStackY_398;
  float fStackY_394;
  float fStackY_390;
  float fStackY_38c;
  void **ppvStackY_388;
  Il2CppClass **ppIStackY_380;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStackY_378;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStackY_370;
  long *plStackY_368;
  Il2CppRGCTXData IStackY_360;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o GStack_338;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_310;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_308;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_300;
  Il2CppRGCTXData IStack_2f8;
  System_String_o *pSStack_2f0;
  ulong uStack_2e8;
  Il2CppRGCTXData in_stack_fffffffffffffd30;
  MethodInfo *in_stack_fffffffffffffd68;
  MethodInfo *in_stack_fffffffffffffde0;
  System_Enum_o SStack_210;
  undefined4 uStack_200;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_1f8;
  System_String_o *pSStack_1f0;
  MethodInfo *in_stack_fffffffffffffe68;
  MethodInfo *in_stack_fffffffffffffee0;
  MethodInfo *in_stack_ffffffffffffff48;
  MethodInfo *in_stack_ffffffffffffffc0;
  System_Enum_o local_30;
  undefined4 local_20;
  
  if (g_data_057a9dd7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgInputType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"InputField");
    il2cpp_runtime_helper_023445d0(&"-");
    il2cpp_runtime_helper_023445d0(&"inputField");
    il2cpp_runtime_helper_023445d0(&"0");
    g_data_057a9dd7 = '\x01';
  }
  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  text = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
  pGVar13 = pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar6,(MethodInfo *)0x0);
  if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar6->fields).type = "InputField";
    il2cpp_runtime_helper_022b4080(&pGVar6->fields);
    in_RCX.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    pSVar7 = System_String__Concat_3af7150(id,"-",suffix,(MethodInfo *)0x0);
    (pGVar6->fields).id = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).id,pSVar7);
    (pGVar6->fields).placeholder = "0";
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).placeholder);
    local_30.klass = TypeInfo_AottgInputType;
    local_30.monitor = (void *)0xffffffffffffffff;
    local_20 = 1;
    pSVar7 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
    (pGVar6->fields).inputType = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).inputType,pSVar7);
    (pGVar6->fields).style = "inputField";
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).style);
    (pGVar6->fields).max.fields.value = 4.2039e-45;
    if (g_data_057a9d9b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"percent");
      g_data_057a9d9b = '\x01';
    }
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    text = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
    pGVar13 = pGVar8;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar8,(MethodInfo *)0x0);
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined4 *)&(pGVar8->fields).type = 0x42c80000;
      (pGVar8->fields).id = (System_String_o *)"percent";
      il2cpp_runtime_helper_022b4080(&(pGVar8->fields).id);
      pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar8,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,1.0,in_stack_ffffffffffffffc0);
      (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar9;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar9);
      return pGVar6;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9dd9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"-label");
    il2cpp_runtime_helper_023445d0(&"Panel");
    g_data_057a9dd9 = '\x01';
  }
  pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar29 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
  pGVar6 = pGVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar8,(MethodInfo *)0x0);
  if (pGVar8 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
label_03b6cca2:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    (pGVar8->fields).type = "Panel";
    il2cpp_runtime_helper_022b4080(&pGVar8->fields);
    (pGVar8->fields).id = (System_String_o *)pGVar13;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).id,pGVar13);
    (pGVar8->fields).style = "clear";
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).style);
    if (g_data_057a9d9b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"percent");
      g_data_057a9d9b = '\x01';
    }
    pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    pGVar29 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
    pGVar6 = pGVar10;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar10,(MethodInfo *)0x0);
    if (pGVar10 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_03b6cca2;
    *(undefined4 *)&(pGVar10->fields).type = 0x42c80000;
    (pGVar10->fields).id = (System_String_o *)"percent";
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).id);
    in_RCX.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    in_R8 = (MethodInfo *)0x0;
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                        (System_String_o *)0x0,6.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar10,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,in_stack_ffffffffffffff48);
    (pGVar8->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar9;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).search,pGVar9);
    pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition,2);
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
             System_String__Concat_3ae5ba0((System_String_o *)pGVar13,"-label",(MethodInfo *)0x0);
    pMVar26 = extraout_RDX_00;
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar26 = extraout_RDX_01;
    }
    pGVar12 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
              Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Label
                        ((System_String_o *)pGVar6,(System_String_o *)text,18.0,pMVar26);
    pGVar29 = text;
    if (pGVar11 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) goto label_03b6cca2;
    if ((int)pGVar11->max_length != 0) {
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)pGVar11->m_Items;
      pGVar11->m_Items[0] = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)pGVar12;
      il2cpp_runtime_helper_022b4080();
      pGVar29 = pGVar12;
      if (1 < (uint)pGVar11->max_length) {
        pGVar11->m_Items[1] = extraout_RDX;
        il2cpp_runtime_helper_022b4080(pGVar11->m_Items + 1,extraout_RDX);
        (pGVar8->fields).deferredChildren = pGVar11;
        il2cpp_runtime_helper_022b4080(&(pGVar8->fields).deferredChildren,pGVar11);
        return pGVar8;
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057a9ddb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"Panel");
    g_data_057a9ddb = '\x01';
  }
  pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pSVar7 = (System_String_o *)0x0;
  pGVar13 = pGVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar10,(MethodInfo *)0x0);
  if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar10->fields).type = "Panel";
    il2cpp_runtime_helper_022b4080(&pGVar10->fields);
    (pGVar10->fields).id = (System_String_o *)pGVar6;
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).id,pGVar6);
    (pGVar10->fields).style = "clear";
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).style);
    if (g_data_057a9d9b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"percent");
      g_data_057a9d9b = '\x01';
    }
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    pSVar7 = (System_String_o *)0x0;
    pGVar13 = pGVar6;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar6,(MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined4 *)&(pGVar6->fields).type = 0x42c80000;
      (pGVar6->fields).id = (System_String_o *)"percent";
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).id);
      pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                          (System_String_o *)0x0,8.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar6,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,in_stack_fffffffffffffee0);
      (pGVar10->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar9;
      il2cpp_runtime_helper_022b4080(&(pGVar10->fields).search,pGVar9);
      (pGVar10->fields).deferredChildren = pGVar29;
      il2cpp_runtime_helper_022b4080(&(pGVar10->fields).deferredChildren,pGVar29);
      return pGVar10;
    }
  }
  uVar35 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9dda == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"text");
    g_data_057a9dda = '\x01';
  }
  pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  uVar30 = 0;
  pGVar6 = pGVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar10,(MethodInfo *)0x0);
  if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar10->fields).type = "Text";
    il2cpp_runtime_helper_022b4080(&pGVar10->fields);
    (pGVar10->fields).id = (System_String_o *)pGVar13;
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).id,pGVar13);
    (pGVar10->fields).text = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).text,pSVar7);
    (pGVar10->fields).style = "text";
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields).style);
    if (g_data_057a9d9a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"point");
      g_data_057a9d9a = '\x01';
    }
    pGVar13 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    uVar30 = 0;
    pGVar6 = pGVar13;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar13,(MethodInfo *)0x0);
    pSVar7 = (System_String_o *)0x0;
    if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined4 *)&(pGVar13->fields).type = uVar35;
      (pGVar13->fields).id = "point";
      il2cpp_runtime_helper_022b4080(&(pGVar13->fields).id);
      pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar13,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,in_stack_fffffffffffffe68);
      (pGVar10->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar9;
      il2cpp_runtime_helper_022b4080(&(pGVar10->fields).search,pGVar9);
      return pGVar10;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar28 = uVar30 & 0xffffffff;
  pGStack_1f8 = pGVar10;
  pSStack_1f0 = pSVar7;
  if (g_data_057a9dd8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgInputType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"InputField");
    il2cpp_runtime_helper_023445d0(&"inputField");
    il2cpp_runtime_helper_023445d0(&"#RRGGBBAA");
    il2cpp_runtime_helper_023445d0(&"#RRGGBB");
    g_data_057a9dd8 = '\x01';
  }
  pGVar13 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pSVar7 = (System_String_o *)0x0;
  __this_01 = (long *)pGVar13;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar13,(MethodInfo *)0x0);
  if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar13->fields).type = "InputField";
    il2cpp_runtime_helper_022b4080(&pGVar13->fields);
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057a9de2 == '\0') {
      il2cpp_runtime_helper_023445d0(&"-hex");
      g_data_057a9de2 = '\x01';
    }
    pSVar7 = System_String__Concat_3ae5ba0((System_String_o *)pGVar6,"-hex",(MethodInfo *)0x0);
    (pGVar13->fields).id = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pGVar13->fields).id,pSVar7);
    if ((char)uVar28 == '\0') {
      puVar14 = &"#RRGGBB";
    }
    else {
      puVar14 = &"#RRGGBBAA";
    }
    (pGVar13->fields).placeholder = (System_String_o *)*puVar14;
    il2cpp_runtime_helper_022b4080(&(pGVar13->fields).placeholder);
    SStack_210.klass = TypeInfo_AottgInputType;
    SStack_210.monitor = (void *)0xffffffffffffffff;
    uStack_200 = 0;
    pSVar7 = System_Enum__ToString(&SStack_210,(MethodInfo *)0x0);
    (pGVar13->fields).inputType = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pGVar13->fields).inputType,pSVar7);
    (pGVar13->fields).style = "inputField";
    il2cpp_runtime_helper_022b4080(&(pGVar13->fields).style);
    (pGVar13->fields).max.fields.value = (float)(((uint)uVar30 & 0xff) * 2 + 7);
    if (g_data_057a9d9b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"percent");
      g_data_057a9d9b = '\x01';
    }
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    pSVar7 = (System_String_o *)0x0;
    __this_01 = (long *)pGVar6;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar6,(MethodInfo *)0x0);
    uVar28 = 0;
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined4 *)&(pGVar6->fields).type = 0x42c80000;
      (pGVar6->fields).id = (System_String_o *)"percent";
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).id);
      pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar6,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,in_stack_fffffffffffffde0);
      (pGVar13->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar9;
      il2cpp_runtime_helper_022b4080(&(pGVar13->fields).search,pGVar9);
      return pGVar13;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ddc == '\0') {
    uStack_2e8 = 0x3b6d349;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    uStack_2e8 = 0x3b6d355;
    il2cpp_runtime_helper_023445d0(&"Column");
    uStack_2e8 = 0x3b6d361;
    il2cpp_runtime_helper_023445d0(&"Button");
    g_data_057a9ddc = '\x01';
  }
  uStack_2e8 = 0x3b6d377;
  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pIVar19 = (Il2CppClass *)0x0;
  uStack_2e8 = 0x3b6d384;
  pGVar13 = pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar6,(MethodInfo *)0x0);
  IVar15 = extraout_RDX_02;
  if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar6->fields).type = "Button";
    uStack_2e8 = 0x3b6d3a4;
    il2cpp_runtime_helper_022b4080(&pGVar6->fields);
    (pGVar6->fields).id = (System_String_o *)__this_01;
    uStack_2e8 = 0x3b6d3b4;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).id,__this_01);
    (pGVar6->fields).text = pSVar7;
    uStack_2e8 = 0x3b6d3c4;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).text,pSVar7);
    (pGVar6->fields).style = (System_String_o *)extraout_RDX_02;
    uStack_2e8 = 0x3b6d3d4;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).style);
    if (g_data_057a9d9b == '\0') {
      uStack_2e8 = 0x3b6d3e9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      uStack_2e8 = 0x3b6d3f5;
      il2cpp_runtime_helper_023445d0(&"percent");
      g_data_057a9d9b = '\x01';
    }
    uStack_2e8 = 0x3b6d40b;
    pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    pIVar19 = (Il2CppClass *)0x0;
    uStack_2e8 = 0x3b6d418;
    pGVar13 = pGVar10;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar10,(MethodInfo *)0x0);
    IVar15.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined4 *)&(pGVar10->fields).type = 0x42c80000;
      (pGVar10->fields).id = (System_String_o *)"percent";
      uStack_2e8 = 0x3b6d443;
      il2cpp_runtime_helper_022b4080(&(pGVar10->fields).id);
      uStack_2e8 = 0x3b6d4ab;
      pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar10,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,in_stack_fffffffffffffd68);
      (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar9;
      uStack_2e8 = 0x3b6d4c4;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar9);
      return pGVar6;
    }
  }
  uStack_2e8 = 0x3b6d4d8;
  il2cpp_runtime_helper_022b2c90();
  str0 = pIVar19;
  pGStack_310 = pGVar6;
  pGStack_308 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_01;
  pGStack_300 = pGVar8;
  IStack_2f8 = IVar15;
  pSStack_2f0 = pSVar7;
  uStack_2e8 = uVar28;
  if (g_data_057a9dd5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIColorPickerPopover_AddComponent_GisketchUIColo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"color-picker-");
    g_data_057a9dd5 = '\x01';
  }
  GStack_338.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  GStack_338.fields.LivePreview = 0;
  GStack_338.fields.Disabled = 0;
  GStack_338.fields.Id = (System_String_o *)0x0;
  GStack_338.fields.EnableAlpha = 0;
  GStack_338.fields._12_4_ = 0;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  IVar24.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
  if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)**(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8) !=
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    in_RCX = MethodInfo_Boolean_TryGetValue;
    bVar5 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       **(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8),(Il2CppObject *)pGVar13,&GStack_338,
                       (MethodInfo_3128A90 *)MethodInfo_Boolean_TryGetValue.method);
    if ((char)bVar5 == '\0') {
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var,bVar5);
    }
    if ((GStack_338.fields._24_8_ & 0x100) != 0) {
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var,bVar5);
    }
    __this_01 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    IVar15.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    str0 = (Il2CppClass *)0x0;
    IVar24 = in_stack_fffffffffffffd30;
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)in_stack_fffffffffffffd30.method,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      if (in_stack_fffffffffffffd30.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03b6d711;
      IVar15.rgctxDataDummy =
           UnityEngine_GameObject__GetComponentInParent_object_
                     (in_stack_fffffffffffffd30.rgctxDataDummy,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    str0 = (Il2CppClass *)0x0;
    IVar24 = IVar15;
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)IVar15.method,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var_00,bVar5);
    }
    if (IVar15.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
      __this_01 = (long *)((Il2CppRGCTXData *)&(IVar15.klass)->_1)[0x11].method;
      if ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_01 ==
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var_00,bVar5);
      }
      pGVar6 = pGVar13;
      pSVar7 = System_String__Concat_3ae5ba0("color-picker-",(System_String_o *)pGVar13,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__PopoverNode
                         ((System_String_o *)pGVar13,(MethodInfo *)pGVar6);
      in_R8 = (MethodInfo *)((ulong)pIVar19 & 0xff);
      IStackY_360 = (Il2CppRGCTXData)0x3b6d6a4;
      in_RCX = in_stack_fffffffffffffd30;
      IVar16.rgctxDataDummy =
           Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
                     ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_01,pSVar7,pGVar6,
                      in_stack_fffffffffffffd30.rgctxDataDummy,(bool_conflict)in_R8,0,8.0,1,(MethodInfo *)0x0)
      ;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      str0 = (Il2CppClass *)0x0;
      IVar24.method = IVar16.method;
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)IVar16.method,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var_01,bVar5);
      }
      if ((IVar16.rgctxDataDummy != (Il2CppRGCTXData *)0x0) &&
         (str0 = (Il2CppClass *)MethodInfo_GisketchUIColorPickerPopover_AddComponent_GisketchUIColo,
         __this_00 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)
                     UnityEngine_GameObject__AddComponent_object_
                               ((UnityEngine_GameObject_o *)IVar16.method,(MethodInfo_255A020 *)MethodInfo_GisketchUIColorPickerPopover_AddComponent_GisketchUIColo),
         IVar24 = IVar16, __this_00 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)0x0)) {
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Setup
                  (__this_00,(System_String_o *)pGVar13,
                   (UnityEngine_GameObject_o *)in_stack_fffffffffffffd30.method,
                   (Gisketch_Aottg2UI_GisketchUIRoot_o *)IVar15.method,in_R8);
        return extraout_RAX;
      }
    }
  }
label_03b6d711:
  il2cpp_runtime_helper_022b2c90();
  plStackY_368 = &TypeInfo_GisketchUIColorPicker;
  pGStackY_378 = pGVar13;
  pGStackY_370 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_01;
  IStackY_360 = IVar15;
  if (g_data_057a9deb == '\0') {
    pSStackY_3a8 = (System_Delegate_o *)0x3b6d753;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchUIColorPickerValue);
    pSStackY_3a8 = (System_Delegate_o *)0x3b6d75f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Cancel);
    pSStackY_3a8 = (System_Delegate_o *)0x3b6d76b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnVisualChanged);
    pSStackY_3a8 = (System_Delegate_o *)0x3b6d777;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Save);
    pSStackY_3a8 = (System_Delegate_o *)0x3b6d783;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIColorPickerVisual_Find_GisketchUIColorPickerVi);
    pSStackY_3a8 = (System_Delegate_o *)0x3b6d78f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_Find_TMP_InputField);
    pSStackY_3a8 = (System_Delegate_o *)0x3b6d79b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    pSStackY_3a8 = (System_Delegate_o *)0x3b6d7a7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pSStackY_3a8 = (System_Delegate_o *)0x3b6d7b3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pSStackY_3a8 = (System_Delegate_o *)0x3b6d7bf;
    il2cpp_runtime_helper_023445d0(&"-cancel");
    pSStackY_3a8 = (System_Delegate_o *)0x3b6d7cb;
    il2cpp_runtime_helper_023445d0(&"-save");
    pSStackY_3a8 = (System_Delegate_o *)0x3b6d7d7;
    il2cpp_runtime_helper_023445d0(&"-g");
    pSStackY_3a8 = (System_Delegate_o *)0x3b6d7e3;
    il2cpp_runtime_helper_023445d0(&"-r");
    pSStackY_3a8 = (System_Delegate_o *)0x3b6d7ef;
    il2cpp_runtime_helper_023445d0(&"-b");
    g_data_057a9deb = '\x01';
  }
  (IVar24.method)->klass = str0;
  pSStackY_3a8 = (System_Delegate_o *)0x3b6d806;
  il2cpp_runtime_helper_022b4080(&(IVar24.method)->klass,str0);
  (IVar24.method)->parameters = extraout_RDX_03;
  pSStackY_3a8 = (System_Delegate_o *)0x3b6d816;
  il2cpp_runtime_helper_022b4080(&(IVar24.method)->parameters,extraout_RDX_03);
  (IVar24.method)->field7_0x38 = (_union_13)in_RCX;
  pSStackY_3a8 = (System_Delegate_o *)0x3b6d826;
  il2cpp_runtime_helper_022b4080(&(IVar24.method)->field7_0x38);
  pSStackY_3a8 = (System_Delegate_o *)0x3b6d830;
  pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar24.method,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    pSStackY_3a8 = (System_Delegate_o *)0x3b6d8ea;
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9de1 == '\0') {
    pSStackY_3a8 = (System_Delegate_o *)0x3b6d860;
    il2cpp_runtime_helper_023445d0(&"-visual");
    g_data_057a9de1 = '\x01';
  }
  pSStackY_3a8 = (System_Delegate_o *)0x3b6d87b;
  pSVar7 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-visual",(MethodInfo *)0x0);
  pSStackY_3a8 = (System_Delegate_o *)0x3b6d891;
  pIVar18 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar17,pSVar7,MethodInfo_GisketchUIColorPickerVisual_Find_GisketchUIColorPickerVi);
  pIVar20 = pIVar18 + 9;
  if (pIVar18 == (Il2CppObject *)0x0) {
    pIVar20 = (Il2CppObject *)&(IVar24.method)->return_type;
  }
  bVar1 = *(byte *)&pIVar20->klass;
  *(byte *)&(IVar24.method)->return_type = bVar1;
  IStackY_3a0 = IVar24;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    pSStackY_3a8 = (System_Delegate_o *)0x3b6d901;
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057a9dd0 == '\0') goto label_03b6d90a;
label_03b6d8c7:
    if (bVar1 != 0) goto label_03b6d8cc;
label_03b6d93a:
    iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
    pSVar7 = "#FFFFFF";
  }
  else {
    if (g_data_057a9dd0 != '\0') goto label_03b6d8c7;
label_03b6d90a:
    pSStackY_3a8 = (System_Delegate_o *)0x3b6d916;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    pSStackY_3a8 = (System_Delegate_o *)0x3b6d922;
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    pSStackY_3a8 = (System_Delegate_o *)0x3b6d92e;
    il2cpp_runtime_helper_023445d0(&"#FFFFFF");
    g_data_057a9dd0 = '\x01';
    if (bVar1 == 0) goto label_03b6d93a;
label_03b6d8cc:
    iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
    pSVar7 = "#FFFFFFFF";
  }
  if (iVar2 == 0) {
    pSStackY_3a8 = (System_Delegate_o *)0x3b6d956;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStackY_3a8 = (System_Delegate_o *)0x3b6d965;
  pSVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                     ((System_String_o *)str0,pSVar7,(uint)bVar1,IVar24.method);
  IVar15 = IStackY_3a0;
  value = &((IStackY_3a0.klass)->_1).element_class;
  pSStackY_3a8 = (System_Delegate_o *)0x3b6d97c;
  bVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                    (pSVar7,(uint)*(byte *)&(IStackY_3a0.method)->return_type,
                     (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)value,IVar24.method);
  if ((char)bVar5 == '\0') {
    fStackY_38c = 0.0;
    fStackY_394 = 0.0;
    fStackY_390 = 0.0;
    uStackY_398 = 0xffffffff;
    pSStackY_3a8 = (System_Delegate_o *)0x3b6d9b9;
    rgbColor.fields.b = 1.0;
    rgbColor.fields.a = 1.0;
    rgbColor.fields.r = 1.0;
    rgbColor.fields.g = 1.0;
    UnityEngine_Color__RGBToHSV(rgbColor,&fStackY_394,&fStackY_390,&fStackY_38c,(MethodInfo *)0x0);
    *value = (Il2CppClass *)CONCAT44(fStackY_394,uStackY_398);
    ((IVar15.klass)->_1).castClass = (Il2CppClass *)CONCAT44(fStackY_38c,fStackY_390);
  }
  pSStackY_3a8 = (System_Delegate_o *)0x3b6d9d0;
  ppIStackY_380 = value;
  pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar15.method,(MethodInfo *)0x0);
  pSStackY_3a8 = (System_Delegate_o *)0x3b6d9e7;
  pSVar7 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-r",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    pSStackY_3a8 = (System_Delegate_o *)0x3b6d9fc;
    il2cpp_runtime_helper_02337ed0();
  }
  ppMVar32 = &MethodInfo_TMP_InputField_Find_TMP_InputField;
  pSStackY_3a8 = (System_Delegate_o *)0x3b6da12;
  pIVar19 = (Il2CppClass *)
            Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar17,pSVar7,MethodInfo_TMP_InputField_Find_TMP_InputField);
  ((IVar15.klass)->_1).declaringType = pIVar19;
  pSStackY_3a8 = (System_Delegate_o *)0x3b6da22;
  il2cpp_runtime_helper_022b4080(&(IVar15.method)->slot);
  pSStackY_3a8 = (System_Delegate_o *)0x3b6da2c;
  pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar15.method,(MethodInfo *)0x0);
  pSStackY_3a8 = (System_Delegate_o *)0x3b6da43;
  pSVar7 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-g",(MethodInfo *)0x0);
  pSStackY_3a8 = (System_Delegate_o *)0x3b6da52;
  pIVar19 = (Il2CppClass *)
            Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar17,pSVar7,MethodInfo_TMP_InputField_Find_TMP_InputField);
  ((IVar15.klass)->_1).parent = pIVar19;
  pSStackY_3a8 = (System_Delegate_o *)0x3b6da62;
  il2cpp_runtime_helper_022b4080(&((IVar15.klass)->_1).parent);
  pSStackY_3a8 = (System_Delegate_o *)0x3b6da6c;
  pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar15.method,(MethodInfo *)0x0);
  pSStackY_3a8 = (System_Delegate_o *)0x3b6da83;
  pSVar7 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-b",(MethodInfo *)0x0);
  pSStackY_3a8 = (System_Delegate_o *)0x3b6da92;
  pIVar20 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar17,pSVar7,MethodInfo_TMP_InputField_Find_TMP_InputField);
  ((IVar15.klass)->_1).generic_class = pIVar20;
  pSStackY_3a8 = (System_Delegate_o *)0x3b6daa2;
  il2cpp_runtime_helper_022b4080(&((IVar15.klass)->_1).generic_class);
  pSStackY_3a8 = (System_Delegate_o *)0x3b6daac;
  pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar15.method,(MethodInfo *)0x0);
  if (g_data_057a9de2 == '\0') {
    pSStackY_3a8 = (System_Delegate_o *)0x3b6dac4;
    il2cpp_runtime_helper_023445d0(&"-hex");
    g_data_057a9de2 = '\x01';
  }
  pSStackY_3a8 = (System_Delegate_o *)0x3b6dadf;
  pSVar7 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-hex",(MethodInfo *)0x0);
  pSStackY_3a8 = (System_Delegate_o *)0x3b6daee;
  pIVar20 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar17,pSVar7,MethodInfo_TMP_InputField_Find_TMP_InputField);
  ((IVar15.klass)->_1).typeMetadataHandle = pIVar20;
  pSStackY_3a8 = (System_Delegate_o *)0x3b6dafe;
  il2cpp_runtime_helper_022b4080(&((IVar15.klass)->_1).typeMetadataHandle);
  pSStackY_3a8 = (System_Delegate_o *)0x3b6db08;
  pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar15.method,(MethodInfo *)0x0);
  if (g_data_057a9de1 == '\0') {
    pSStackY_3a8 = (System_Delegate_o *)0x3b6db20;
    il2cpp_runtime_helper_023445d0(&"-visual");
    g_data_057a9de1 = '\x01';
  }
  pSStackY_3a8 = (System_Delegate_o *)0x3b6db3b;
  pSVar7 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-visual",(MethodInfo *)0x0);
  pSStackY_3a8 = (System_Delegate_o *)0x3b6db4a;
  pIVar20 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar17,pSVar7,MethodInfo_GisketchUIColorPickerVisual_Find_GisketchUIColorPickerVi);
  pGVar23 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)&((IVar15.klass)->_1).interopData;
  ((IVar15.klass)->_1).interopData = pIVar20;
  pSStackY_3a8 = (System_Delegate_o *)0x3b6db5d;
  il2cpp_runtime_helper_022b4080(pGVar23,pIVar20);
  pSStackY_3a8 = (System_Delegate_o *)0x3b6db69;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IVar15.method,
             (TMPro_TMP_InputField_o *)((IVar15.klass)->_1).declaringType,method_01);
  pSStackY_3a8 = (System_Delegate_o *)0x3b6db75;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IVar15.method,
             (TMPro_TMP_InputField_o *)((IVar15.klass)->_1).parent,method_02);
  pSStackY_3a8 = (System_Delegate_o *)0x3b6db81;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IVar15.method,
             ((IVar15.klass)->_1).generic_class,method_03);
  pSStackY_3a8 = (System_Delegate_o *)0x3b6db8d;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireHexInput
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IVar15.method,
             ((IVar15.klass)->_1).typeMetadataHandle,method_04);
  pSStackY_3a8 = (System_Delegate_o *)0x3b6dba1;
  pSVar7 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-cancel",(MethodInfo *)0x0);
  pSVar33 = (System_Delegate_o *)&TypeInfo_UnityAction;
  pSStackY_3a8 = (System_Delegate_o *)0x3b6dbb3;
  pUVar21 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  pMVar26 = (MethodInfo *)0x0;
  pSStackY_3a8 = (System_Delegate_o *)0x3b6dbce;
  UnityEngine_Events_UnityAction___ctor();
  pSStackY_3a8 = (System_Delegate_o *)0x3b6dbdd;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IStackY_3a0.method,pSVar7,pUVar21,
             pMVar26);
  pSStackY_3a8 = (System_Delegate_o *)0x3b6dbf1;
  pSVar7 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-save",(MethodInfo *)0x0);
  pSStackY_3a8 = (System_Delegate_o *)0x3b6dbfc;
  pUVar21 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  pMVar26 = (MethodInfo *)0x0;
  pSStackY_3a8 = (System_Delegate_o *)0x3b6dc17;
  UnityEngine_Events_UnityAction___ctor();
  IVar15 = IStackY_3a0;
  pSStackY_3a8 = (System_Delegate_o *)0x3b6dc2a;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IStackY_3a0.method,pSVar7,pUVar21,
             pMVar26);
  x = ((IVar15.klass)->_1).interopData;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pSStackY_3a8 = (System_Delegate_o *)0x3b6dc46;
    il2cpp_runtime_helper_02337ed0();
  }
  IVar24.rgctxDataDummy = (void *)0x0;
  pSStackY_3a8 = (System_Delegate_o *)0x3b6dc52;
  bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_03b6dd55:
    pSStackY_3a8 = (System_Delegate_o *)0x3b6dd5d;
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SyncFields
              ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IVar15.method,IVar24.method);
    return extraout_RAX_00;
  }
  pvVar3 = ((IVar15.klass)->_1).interopData;
  pSStackY_3a8 = (System_Delegate_o *)0x3b6dc6d;
  pGVar22 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
            il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchUIColorPickerValue.rgctxDataDummy);
  IVar16.rgctxDataDummy = (void *)0x0;
  pSStackY_3a8 = (System_Delegate_o *)0x3b6dc87;
  IVar24 = IVar15;
  pGVar31 = pGVar22;
  System_Action_GisketchUIColorPickerValue____ctor();
  if (pvVar3 != (void *)0x0) {
    ppvStackY_388 = (void **)pGVar23;
    if (g_data_057a9dfd == '\0') {
      pSStackY_3a8 = (System_Delegate_o *)0x3b6dcaa;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchUIColorPickerValue);
      g_data_057a9dfd = '\x01';
    }
    a = *(System_Delegate_o **)((long)pvVar3 + 0x88);
    do {
      pSStackY_3a8 = (System_Delegate_o *)0x3b6dcf6;
      pGVar23 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
                System_Delegate__Combine(a,(System_Delegate_o *)pGVar22,(MethodInfo *)0x0);
      IVar15 = TypeInfo_Action_GisketchUIColorPickerValue;
      IVar24.rgctxDataDummy = (void *)0x0;
      if (pGVar23 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
        pSStackY_3a8 = (System_Delegate_o *)0x3b6dd18;
        IVar24.rgctxDataDummy = (void *)il2cpp_runtime_helper_023051f0(pGVar23,TypeInfo_Action_GisketchUIColorPickerValue.rgctxDataDummy);
        ppMVar32 = (MethodInfo_255B7B0 **)IVar15;
        if (IVar24.rgctxDataDummy == (void *)0x0) {
          pSStackY_3a8 = (System_Delegate_o *)0x3b6dd28;
          IVar24 = IVar15;
          pGVar31 = pGVar23;
          il2cpp_runtime_helper_022b2fd0();
          pSVar33 = a;
          break;
        }
      }
      pSStackY_3a8 = (System_Delegate_o *)0x3b6dcde;
      pGVar31 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)((long)pvVar3 + 0x88);
      pSVar33 = (System_Delegate_o *)
                il2cpp_runtime_helper_02300640((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)((long)pvVar3 + 0x88),
                             IVar24.rgctxDataDummy,a);
      bVar34 = a != pSVar33;
      a = pSVar33;
    } while (bVar34);
    IVar15 = IStackY_3a0;
    __this = *ppvStackY_388;
    if (__this != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
      pIVar19 = ppIStackY_380[1];
      *(Il2CppClass **)&(__this->fields)._value.fields = *ppIStackY_380;
      *(Il2CppClass **)&(__this->fields)._value.fields.S = pIVar19;
      pSStackY_3a8 = (System_Delegate_o *)0x3b6dd4d;
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this,IVar24.method);
      pSStackY_3a8 = (System_Delegate_o *)0x3b6dd55;
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,IVar24.method);
      goto label_03b6dd55;
    }
  }
  pSStackY_3a8 = (System_Delegate_o *)0x3b6dd71;
  auVar36 = il2cpp_runtime_helper_022b2c90();
  lVar27 = auVar36._8_8_;
  uVar25 = auVar36._0_8_;
  uStackY_3c0 = 0;
  pGStackY_3b8 = pGVar23;
  pGStackY_3b0 = pGVar22;
  pSStackY_3a8 = pSVar33;
  if (g_data_057a9dd6 == '\0') {
    IStackY_3f0 = (Il2CppRGCTXData)0x3b6dda9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    IStackY_3f0 = (Il2CppRGCTXData)0x3b6ddb5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIColorPickerVisual_AddComponent_GisketchUIColor);
    IStackY_3f0 = (Il2CppRGCTXData)0x3b6ddc1;
    uVar25 = il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    g_data_057a9dd6 = '\x01';
  }
  GStackY_3e8.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  GStackY_3e8.fields.LivePreview = 0;
  GStackY_3e8.fields.Disabled = 0;
  GStackY_3e8.fields.Id = (System_String_o *)0x0;
  GStackY_3e8.fields.EnableAlpha = 0;
  GStackY_3e8.fields._12_4_ = 0;
  if (IVar24.rgctxDataDummy != (void *)0x0) {
    pIVar19 = (Il2CppClass *)0x0;
    IStackY_3f0 = (Il2CppRGCTXData)0x3b6dde8;
    bVar5 = System_String__IsNullOrEmpty
                      ((System_String_o *)((IVar24.klass)->_1).declaringType,(MethodInfo *)0x0);
    uVar25 = CONCAT44(extraout_var_02,bVar5);
    if ((char)bVar5 == '\0') {
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        IStackY_3f0 = (Il2CppRGCTXData)0x3b6de09;
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar23 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)**(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8)
      ;
      if (pGVar23 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
        pIVar19 = ((IVar24.klass)->_1).declaringType;
        IStackY_3f0 = (Il2CppRGCTXData)0x3b6de32;
        IVar16 = MethodInfo_Boolean_TryGetValue;
        bVar5 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar23,
                           (Il2CppObject *)pIVar19,&GStackY_3e8,(MethodInfo_3128A90 *)MethodInfo_Boolean_TryGetValue.method);
        uVar25 = CONCAT44(extraout_var_03,bVar5);
        if ((char)bVar5 == '\0') goto label_03b6de71;
        if (pGVar31 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
          IStackY_3f0 = (Il2CppRGCTXData)0x3b6de4d;
          pIVar19 = (Il2CppClass *)MethodInfo_GisketchUIColorPickerVisual_AddComponent_GisketchUIColor;
          pGVar23 = pGVar31;
          pGVar22 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
                    UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)pGVar31,(MethodInfo_255A020 *)MethodInfo_GisketchUIColorPickerVisual_AddComponent_GisketchUIColor);
          if ((lVar27 != 0) && (pGVar22 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0)) {
            IStackY_3f0 = (Il2CppRGCTXData)0x3b6de71;
            Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Setup
                      (pGVar22,(System_String_o *)((IVar24.klass)->_1).declaringType,
                       (uint)((byte)GStackY_3e8.fields.EnableAlpha & 1),
                       *(Gisketch_Aottg2UI_Styling_GisketchTheme_o **)(lVar27 + 0x18),in_R8);
            uVar25 = extraout_RAX_01;
            goto label_03b6de71;
          }
        }
      }
      IStackY_3f0 = (Il2CppRGCTXData)0x3b6de84;
      il2cpp_runtime_helper_022b2c90();
      plStackY_410 = &TypeInfo_GisketchUIColorPicker;
      cVar4 = (char)extraout_EDX;
      method_00 = IVar16;
      IStackY_418 = IVar24;
      IStackY_408 = (Il2CppRGCTXData)ppMVar32;
      lStackY_400 = lVar27;
      pGStackY_3f8 = pGVar31;
      IStackY_3f0 = IVar15;
      if (g_data_057a9dff == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
        g_data_057a9dff = '\x01';
      }
      GStackY_430.R = '\0';
      GStackY_430.G = '\0';
      GStackY_430.B = '\0';
      GStackY_430.A = '\0';
      GStackY_430.H = 0.0;
      GStackY_430.S = 0.0;
      GStackY_430.V = 0.0;
      GStackY_440.R = '\0';
      GStackY_440.G = '\0';
      GStackY_440.B = '\0';
      GStackY_440.A = '\0';
      GStackY_440.H = 0.0;
      GStackY_440.S = 0.0;
      GStackY_440.V = 0.0;
      *(char *)&(pGVar23->fields)._EnableAlpha_k__BackingField = cVar4;
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057a9dd0 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
        il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
        il2cpp_runtime_helper_023445d0(&"#FFFFFF");
        g_data_057a9dd0 = '\x01';
      }
      if (cVar4 == '\0') {
        iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
        pSVar7 = "#FFFFFF";
      }
      else {
        iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
        pSVar7 = "#FFFFFFFF";
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                         ((System_String_o *)pIVar19,pSVar7,extraout_EDX & 0xff,method_00.method);
      bVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                        (pSVar7,extraout_EDX & 0xff,
                         (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&GStackY_430,method_00.method)
      ;
      if ((char)bVar5 == '\0') {
        fStackY_444 = 0.0;
        uStackY_44c = 0;
        rgbColor_00.fields.b = 1.0;
        rgbColor_00.fields.a = 1.0;
        rgbColor_00.fields.r = 1.0;
        rgbColor_00.fields.g = 1.0;
        UnityEngine_Color__RGBToHSV
                  (rgbColor_00,(float *)&uStackY_44c,(float *)((long)&uStackY_44c + 4),&fStackY_444,
                   (MethodInfo *)0x0);
        uVar35._0_1_ = 0xff;
        uVar35._1_1_ = 0xff;
        uVar35._2_1_ = 0xff;
        uVar35._3_1_ = 0xff;
        GStackY_440.H = (float)uStackY_44c;
        GStackY_440.S = uStackY_44c._4_4_;
        GStackY_440.V = fStackY_444;
      }
      else {
        uVar35 = GStackY_430._0_4_;
        GStackY_440.H = GStackY_430.H;
        GStackY_440.S = GStackY_430.S;
        GStackY_440.V = GStackY_430.V;
      }
      GStackY_440.R = (uint8_t)uVar35;
      GStackY_440.G = SUB41(uVar35,1);
      GStackY_440.B = SUB41(uVar35,2);
      GStackY_440.A = SUB41(uVar35,3);
      (pGVar23->fields)._value.fields.R = (uint8_t)uVar35;
      (pGVar23->fields)._value.fields.G = SUB41(uVar35,1);
      (pGVar23->fields)._value.fields.B = SUB41(uVar35,2);
      (pGVar23->fields)._value.fields.A = SUB41(uVar35,3);
      (pGVar23->fields)._value.fields.H = GStackY_440.H;
      (pGVar23->fields)._value.fields.S = GStackY_440.S;
      (pGVar23->fields)._value.fields.V = GStackY_440.V;
      pGVar31 = pGVar23;
      pGVar22 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pGVar23,(MethodInfo *)0x0);
      if ((pGVar22 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) &&
         (pIVar20 = UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)pGVar22,MethodInfo_LayoutElement_AddComponent_LayoutElement), pGVar31 = pGVar22,
         pIVar20 != (Il2CppObject *)0x0)) {
        if (cVar4 == '\0') {
          uVar35 = 0x435c0000;
        }
        else {
          uVar35 = 0x43820000;
        }
        (*pIVar20->klass->vtable[0x26].methodPtr)(uVar35,pIVar20,pIVar20->klass->vtable[0x26].method);
        pMVar26 = extraout_RDX_04;
        if (IVar16.rgctxDataDummy == (void *)0x0) {
          if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            pMVar26 = extraout_RDX_05;
          }
          IVar16 = (Il2CppRGCTXData)(*(Il2CppRGCTXData **)(TypeInfo_GisketchTheme + 0xb8))->method;
        }
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Build
                  (pGVar23,(Gisketch_Aottg2UI_Styling_GisketchTheme_o *)IVar16.method,pMVar26);
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(pGVar23,IVar16.method);
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(pGVar23,IVar16.method);
        return extraout_RAX_02;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9de2 == '\0') {
        il2cpp_runtime_helper_023445d0(&"-hex");
        g_data_057a9de2 = '\x01';
      }
      pGVar13 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                System_String__Concat_3ae5ba0((System_String_o *)pGVar31,"-hex",(MethodInfo *)0x0);
      return pGVar13;
    }
  }
label_03b6de71:
  return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT71((int7)((ulong)uVar25 >> 8),1);
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$HexInput
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__HexInput (System_String_o* id, bool alpha, const MethodInfo* method);
// 0x3b6d070

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__HexInput
          (System_String_o *id,bool_conflict alpha,MethodInfo *method)

{
  Il2CppClass **value;
  byte bVar1;
  int iVar2;
  UnityEngine_Object_o *x;
  void *pvVar3;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this;
  char cVar4;
  bool_conflict bVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  System_String_o *pSVar7;
  undefined8 *puVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  undefined4 extraout_var;
  Il2CppRGCTXData IVar11;
  undefined4 extraout_var_00;
  Il2CppRGCTXData IVar12;
  undefined4 extraout_var_01;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *extraout_RAX;
  UnityEngine_Transform_o *pUVar13;
  Il2CppObject *pIVar14;
  Il2CppClass *pIVar15;
  Il2CppObject *pIVar16;
  UnityEngine_Events_UnityAction_o *pUVar17;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar18;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar19;
  Il2CppRGCTXData IVar20;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *extraout_RAX_00;
  undefined8 uVar21;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined8 extraout_RAX_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *extraout_RAX_02;
  Il2CppRGCTXData in_RCX;
  MethodInfo *pMVar22;
  Il2CppRGCTXData method_00;
  uint extraout_EDX;
  Il2CppRGCTXData extraout_RDX;
  Il2CppType **extraout_RDX_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  long lVar23;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  Il2CppClass *str0;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar24;
  MethodInfo *in_R8;
  long *__this_02;
  MethodInfo_255B7B0 **ppMVar25;
  System_Delegate_o *pSVar26;
  System_Delegate_o *a;
  bool bVar27;
  undefined4 uVar28;
  UnityEngine_Color_o rgbColor;
  UnityEngine_Color_o rgbColor_00;
  undefined1 auVar29 [16];
  undefined8 uStackY_26c;
  float fStackY_264;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields GStackY_260;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields GStackY_250;
  Il2CppRGCTXData IStackY_238;
  long *plStackY_230;
  Il2CppRGCTXData IStackY_228;
  long lStackY_220;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStackY_218;
  Il2CppRGCTXData IStackY_210;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o GStackY_208;
  undefined8 uStackY_1e0;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStackY_1d8;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStackY_1d0;
  System_Delegate_o *pSStackY_1c8;
  Il2CppRGCTXData IStackY_1c0;
  undefined4 uStackY_1b8;
  float fStackY_1b4;
  float fStackY_1b0;
  float fStackY_1ac;
  void **ppvStackY_1a8;
  Il2CppClass **ppIStackY_1a0;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStackY_198;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStackY_190;
  long *plStackY_188;
  Il2CppRGCTXData IStackY_180;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o GStack_158;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_130;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_128;
  Il2CppRGCTXData in_stack_ffffffffffffff10;
  MethodInfo *in_stack_ffffffffffffff48;
  MethodInfo *in_stack_ffffffffffffffc0;
  System_Enum_o local_30;
  undefined4 local_20;
  
  if (g_data_057a9dd8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgInputType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"InputField");
    il2cpp_runtime_helper_023445d0(&"inputField");
    il2cpp_runtime_helper_023445d0(&"#RRGGBBAA");
    il2cpp_runtime_helper_023445d0(&"#RRGGBB");
    g_data_057a9dd8 = '\x01';
  }
  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pSVar7 = (System_String_o *)0x0;
  __this_02 = (long *)pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar6,(MethodInfo *)0x0);
  if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar6->fields).type = "InputField";
    il2cpp_runtime_helper_022b4080(&pGVar6->fields);
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057a9de2 == '\0') {
      il2cpp_runtime_helper_023445d0(&"-hex");
      g_data_057a9de2 = '\x01';
    }
    pSVar7 = System_String__Concat_3ae5ba0(id,"-hex",(MethodInfo *)0x0);
    (pGVar6->fields).id = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).id,pSVar7);
    if ((char)alpha == '\0') {
      puVar8 = &"#RRGGBB";
    }
    else {
      puVar8 = &"#RRGGBBAA";
    }
    (pGVar6->fields).placeholder = (System_String_o *)*puVar8;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).placeholder);
    local_30.klass = TypeInfo_AottgInputType;
    local_30.monitor = (void *)0xffffffffffffffff;
    local_20 = 0;
    pSVar7 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
    (pGVar6->fields).inputType = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).inputType,pSVar7);
    (pGVar6->fields).style = "inputField";
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).style);
    (pGVar6->fields).max.fields.value = (float)((alpha & 0xffU) * 2 + 7);
    if (g_data_057a9d9b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"percent");
      g_data_057a9d9b = '\x01';
    }
    pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    pSVar7 = (System_String_o *)0x0;
    __this_02 = (long *)pGVar9;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar9,(MethodInfo *)0x0);
    if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined4 *)&(pGVar9->fields).type = 0x42c80000;
      (pGVar9->fields).id = (System_String_o *)"percent";
      il2cpp_runtime_helper_022b4080(&(pGVar9->fields).id);
      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                           (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar9,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                           0.0,1.0,in_stack_ffffffffffffffc0);
      (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar10;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar10);
      return pGVar6;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ddc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Button");
    g_data_057a9ddc = '\x01';
  }
  pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pIVar15 = (Il2CppClass *)0x0;
  pGVar6 = pGVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar9,(MethodInfo *)0x0);
  IVar11 = extraout_RDX;
  if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar9->fields).type = "Button";
    il2cpp_runtime_helper_022b4080(&pGVar9->fields);
    (pGVar9->fields).id = (System_String_o *)__this_02;
    il2cpp_runtime_helper_022b4080(&(pGVar9->fields).id,__this_02);
    (pGVar9->fields).text = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pGVar9->fields).text,pSVar7);
    (pGVar9->fields).style = (System_String_o *)extraout_RDX;
    il2cpp_runtime_helper_022b4080(&(pGVar9->fields).style);
    if (g_data_057a9d9b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"percent");
      g_data_057a9d9b = '\x01';
    }
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    pIVar15 = (Il2CppClass *)0x0;
    pGVar6 = __this_00;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)__this_00,(MethodInfo *)0x0);
    IVar11.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined4 *)&(__this_00->fields).type = 0x42c80000;
      (__this_00->fields).id = (System_String_o *)"percent";
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).id);
      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                           (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)__this_00,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                           0.0,1.0,in_stack_ffffffffffffff48);
      (pGVar9->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar10;
      il2cpp_runtime_helper_022b4080(&(pGVar9->fields).search,pGVar10);
      return pGVar9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  str0 = pIVar15;
  pGStack_130 = pGVar9;
  pGStack_128 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_02;
  if (g_data_057a9dd5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIColorPickerPopover_AddComponent_GisketchUIColo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"color-picker-");
    g_data_057a9dd5 = '\x01';
  }
  GStack_158.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  GStack_158.fields.LivePreview = 0;
  GStack_158.fields.Disabled = 0;
  GStack_158.fields.Id = (System_String_o *)0x0;
  GStack_158.fields.EnableAlpha = 0;
  GStack_158.fields._12_4_ = 0;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  IVar20.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
  if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)**(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8) !=
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    in_RCX = MethodInfo_Boolean_TryGetValue;
    bVar5 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       **(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8),(Il2CppObject *)pGVar6,&GStack_158,
                       (MethodInfo_3128A90 *)MethodInfo_Boolean_TryGetValue.method);
    if ((char)bVar5 == '\0') {
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var,bVar5);
    }
    if ((GStack_158.fields._24_8_ & 0x100) != 0) {
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var,bVar5);
    }
    __this_02 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    IVar11.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    str0 = (Il2CppClass *)0x0;
    IVar20 = in_stack_ffffffffffffff10;
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)in_stack_ffffffffffffff10.method,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      if (in_stack_ffffffffffffff10.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03b6d711;
      IVar11.rgctxDataDummy =
           UnityEngine_GameObject__GetComponentInParent_object_
                     (in_stack_ffffffffffffff10.rgctxDataDummy,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    str0 = (Il2CppClass *)0x0;
    IVar20 = IVar11;
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)IVar11.method,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var_00,bVar5);
    }
    if (IVar11.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
      __this_02 = (long *)((Il2CppRGCTXData *)&(IVar11.klass)->_1)[0x11].method;
      if ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_02 ==
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var_00,bVar5);
      }
      pGVar9 = pGVar6;
      pSVar7 = System_String__Concat_3ae5ba0("color-picker-",(System_String_o *)pGVar6,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__PopoverNode
                         ((System_String_o *)pGVar6,(MethodInfo *)pGVar9);
      in_R8 = (MethodInfo *)((ulong)pIVar15 & 0xff);
      IStackY_180 = (Il2CppRGCTXData)0x3b6d6a4;
      in_RCX = in_stack_ffffffffffffff10;
      IVar12.rgctxDataDummy =
           Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
                     ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_02,pSVar7,pGVar9,
                      in_stack_ffffffffffffff10.rgctxDataDummy,(bool_conflict)in_R8,0,8.0,1,(MethodInfo *)0x0)
      ;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      str0 = (Il2CppClass *)0x0;
      IVar20.method = IVar12.method;
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)IVar12.method,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var_01,bVar5);
      }
      if ((IVar12.rgctxDataDummy != (Il2CppRGCTXData *)0x0) &&
         (str0 = (Il2CppClass *)MethodInfo_GisketchUIColorPickerPopover_AddComponent_GisketchUIColo,
         __this_01 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)
                     UnityEngine_GameObject__AddComponent_object_
                               ((UnityEngine_GameObject_o *)IVar12.method,(MethodInfo_255A020 *)MethodInfo_GisketchUIColorPickerPopover_AddComponent_GisketchUIColo),
         IVar20 = IVar12, __this_01 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)0x0)) {
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Setup
                  (__this_01,(System_String_o *)pGVar6,
                   (UnityEngine_GameObject_o *)in_stack_ffffffffffffff10.method,
                   (Gisketch_Aottg2UI_GisketchUIRoot_o *)IVar11.method,in_R8);
        return extraout_RAX;
      }
    }
  }
label_03b6d711:
  il2cpp_runtime_helper_022b2c90();
  plStackY_188 = &TypeInfo_GisketchUIColorPicker;
  pGStackY_198 = pGVar6;
  pGStackY_190 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_02;
  IStackY_180 = IVar11;
  if (g_data_057a9deb == '\0') {
    pSStackY_1c8 = (System_Delegate_o *)0x3b6d753;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchUIColorPickerValue);
    pSStackY_1c8 = (System_Delegate_o *)0x3b6d75f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Cancel);
    pSStackY_1c8 = (System_Delegate_o *)0x3b6d76b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnVisualChanged);
    pSStackY_1c8 = (System_Delegate_o *)0x3b6d777;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Save);
    pSStackY_1c8 = (System_Delegate_o *)0x3b6d783;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIColorPickerVisual_Find_GisketchUIColorPickerVi);
    pSStackY_1c8 = (System_Delegate_o *)0x3b6d78f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_Find_TMP_InputField);
    pSStackY_1c8 = (System_Delegate_o *)0x3b6d79b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    pSStackY_1c8 = (System_Delegate_o *)0x3b6d7a7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pSStackY_1c8 = (System_Delegate_o *)0x3b6d7b3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pSStackY_1c8 = (System_Delegate_o *)0x3b6d7bf;
    il2cpp_runtime_helper_023445d0(&"-cancel");
    pSStackY_1c8 = (System_Delegate_o *)0x3b6d7cb;
    il2cpp_runtime_helper_023445d0(&"-save");
    pSStackY_1c8 = (System_Delegate_o *)0x3b6d7d7;
    il2cpp_runtime_helper_023445d0(&"-g");
    pSStackY_1c8 = (System_Delegate_o *)0x3b6d7e3;
    il2cpp_runtime_helper_023445d0(&"-r");
    pSStackY_1c8 = (System_Delegate_o *)0x3b6d7ef;
    il2cpp_runtime_helper_023445d0(&"-b");
    g_data_057a9deb = '\x01';
  }
  (IVar20.method)->klass = str0;
  pSStackY_1c8 = (System_Delegate_o *)0x3b6d806;
  il2cpp_runtime_helper_022b4080(&(IVar20.method)->klass,str0);
  (IVar20.method)->parameters = extraout_RDX_00;
  pSStackY_1c8 = (System_Delegate_o *)0x3b6d816;
  il2cpp_runtime_helper_022b4080(&(IVar20.method)->parameters,extraout_RDX_00);
  (IVar20.method)->field7_0x38 = (_union_13)in_RCX;
  pSStackY_1c8 = (System_Delegate_o *)0x3b6d826;
  il2cpp_runtime_helper_022b4080(&(IVar20.method)->field7_0x38);
  pSStackY_1c8 = (System_Delegate_o *)0x3b6d830;
  pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar20.method,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    pSStackY_1c8 = (System_Delegate_o *)0x3b6d8ea;
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9de1 == '\0') {
    pSStackY_1c8 = (System_Delegate_o *)0x3b6d860;
    il2cpp_runtime_helper_023445d0(&"-visual");
    g_data_057a9de1 = '\x01';
  }
  pSStackY_1c8 = (System_Delegate_o *)0x3b6d87b;
  pSVar7 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-visual",(MethodInfo *)0x0);
  pSStackY_1c8 = (System_Delegate_o *)0x3b6d891;
  pIVar14 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar13,pSVar7,MethodInfo_GisketchUIColorPickerVisual_Find_GisketchUIColorPickerVi);
  pIVar16 = pIVar14 + 9;
  if (pIVar14 == (Il2CppObject *)0x0) {
    pIVar16 = (Il2CppObject *)&(IVar20.method)->return_type;
  }
  bVar1 = *(byte *)&pIVar16->klass;
  *(byte *)&(IVar20.method)->return_type = bVar1;
  IStackY_1c0 = IVar20;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    pSStackY_1c8 = (System_Delegate_o *)0x3b6d901;
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057a9dd0 == '\0') goto label_03b6d90a;
label_03b6d8c7:
    if (bVar1 != 0) goto label_03b6d8cc;
label_03b6d93a:
    iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
    pSVar7 = "#FFFFFF";
  }
  else {
    if (g_data_057a9dd0 != '\0') goto label_03b6d8c7;
label_03b6d90a:
    pSStackY_1c8 = (System_Delegate_o *)0x3b6d916;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    pSStackY_1c8 = (System_Delegate_o *)0x3b6d922;
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    pSStackY_1c8 = (System_Delegate_o *)0x3b6d92e;
    il2cpp_runtime_helper_023445d0(&"#FFFFFF");
    g_data_057a9dd0 = '\x01';
    if (bVar1 == 0) goto label_03b6d93a;
label_03b6d8cc:
    iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
    pSVar7 = "#FFFFFFFF";
  }
  if (iVar2 == 0) {
    pSStackY_1c8 = (System_Delegate_o *)0x3b6d956;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStackY_1c8 = (System_Delegate_o *)0x3b6d965;
  pSVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                     ((System_String_o *)str0,pSVar7,(uint)bVar1,IVar20.method);
  IVar11 = IStackY_1c0;
  value = &((IStackY_1c0.klass)->_1).element_class;
  pSStackY_1c8 = (System_Delegate_o *)0x3b6d97c;
  bVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                    (pSVar7,(uint)*(byte *)&(IStackY_1c0.method)->return_type,
                     (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)value,IVar20.method);
  if ((char)bVar5 == '\0') {
    fStackY_1ac = 0.0;
    fStackY_1b4 = 0.0;
    fStackY_1b0 = 0.0;
    uStackY_1b8 = 0xffffffff;
    pSStackY_1c8 = (System_Delegate_o *)0x3b6d9b9;
    rgbColor.fields.b = 1.0;
    rgbColor.fields.a = 1.0;
    rgbColor.fields.r = 1.0;
    rgbColor.fields.g = 1.0;
    UnityEngine_Color__RGBToHSV(rgbColor,&fStackY_1b4,&fStackY_1b0,&fStackY_1ac,(MethodInfo *)0x0);
    *value = (Il2CppClass *)CONCAT44(fStackY_1b4,uStackY_1b8);
    ((IVar11.klass)->_1).castClass = (Il2CppClass *)CONCAT44(fStackY_1ac,fStackY_1b0);
  }
  pSStackY_1c8 = (System_Delegate_o *)0x3b6d9d0;
  ppIStackY_1a0 = value;
  pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar11.method,(MethodInfo *)0x0);
  pSStackY_1c8 = (System_Delegate_o *)0x3b6d9e7;
  pSVar7 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-r",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    pSStackY_1c8 = (System_Delegate_o *)0x3b6d9fc;
    il2cpp_runtime_helper_02337ed0();
  }
  ppMVar25 = &MethodInfo_TMP_InputField_Find_TMP_InputField;
  pSStackY_1c8 = (System_Delegate_o *)0x3b6da12;
  pIVar15 = (Il2CppClass *)
            Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar13,pSVar7,MethodInfo_TMP_InputField_Find_TMP_InputField);
  ((IVar11.klass)->_1).declaringType = pIVar15;
  pSStackY_1c8 = (System_Delegate_o *)0x3b6da22;
  il2cpp_runtime_helper_022b4080(&(IVar11.method)->slot);
  pSStackY_1c8 = (System_Delegate_o *)0x3b6da2c;
  pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar11.method,(MethodInfo *)0x0);
  pSStackY_1c8 = (System_Delegate_o *)0x3b6da43;
  pSVar7 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-g",(MethodInfo *)0x0);
  pSStackY_1c8 = (System_Delegate_o *)0x3b6da52;
  pIVar15 = (Il2CppClass *)
            Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar13,pSVar7,MethodInfo_TMP_InputField_Find_TMP_InputField);
  ((IVar11.klass)->_1).parent = pIVar15;
  pSStackY_1c8 = (System_Delegate_o *)0x3b6da62;
  il2cpp_runtime_helper_022b4080(&((IVar11.klass)->_1).parent);
  pSStackY_1c8 = (System_Delegate_o *)0x3b6da6c;
  pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar11.method,(MethodInfo *)0x0);
  pSStackY_1c8 = (System_Delegate_o *)0x3b6da83;
  pSVar7 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-b",(MethodInfo *)0x0);
  pSStackY_1c8 = (System_Delegate_o *)0x3b6da92;
  pIVar16 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar13,pSVar7,MethodInfo_TMP_InputField_Find_TMP_InputField);
  ((IVar11.klass)->_1).generic_class = pIVar16;
  pSStackY_1c8 = (System_Delegate_o *)0x3b6daa2;
  il2cpp_runtime_helper_022b4080(&((IVar11.klass)->_1).generic_class);
  pSStackY_1c8 = (System_Delegate_o *)0x3b6daac;
  pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar11.method,(MethodInfo *)0x0);
  if (g_data_057a9de2 == '\0') {
    pSStackY_1c8 = (System_Delegate_o *)0x3b6dac4;
    il2cpp_runtime_helper_023445d0(&"-hex");
    g_data_057a9de2 = '\x01';
  }
  pSStackY_1c8 = (System_Delegate_o *)0x3b6dadf;
  pSVar7 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-hex",(MethodInfo *)0x0);
  pSStackY_1c8 = (System_Delegate_o *)0x3b6daee;
  pIVar16 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar13,pSVar7,MethodInfo_TMP_InputField_Find_TMP_InputField);
  ((IVar11.klass)->_1).typeMetadataHandle = pIVar16;
  pSStackY_1c8 = (System_Delegate_o *)0x3b6dafe;
  il2cpp_runtime_helper_022b4080(&((IVar11.klass)->_1).typeMetadataHandle);
  pSStackY_1c8 = (System_Delegate_o *)0x3b6db08;
  pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar11.method,(MethodInfo *)0x0);
  if (g_data_057a9de1 == '\0') {
    pSStackY_1c8 = (System_Delegate_o *)0x3b6db20;
    il2cpp_runtime_helper_023445d0(&"-visual");
    g_data_057a9de1 = '\x01';
  }
  pSStackY_1c8 = (System_Delegate_o *)0x3b6db3b;
  pSVar7 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-visual",(MethodInfo *)0x0);
  pSStackY_1c8 = (System_Delegate_o *)0x3b6db4a;
  pIVar16 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar13,pSVar7,MethodInfo_GisketchUIColorPickerVisual_Find_GisketchUIColorPickerVi);
  pGVar19 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)&((IVar11.klass)->_1).interopData;
  ((IVar11.klass)->_1).interopData = pIVar16;
  pSStackY_1c8 = (System_Delegate_o *)0x3b6db5d;
  il2cpp_runtime_helper_022b4080(pGVar19,pIVar16);
  pSStackY_1c8 = (System_Delegate_o *)0x3b6db69;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IVar11.method,
             (TMPro_TMP_InputField_o *)((IVar11.klass)->_1).declaringType,method_01);
  pSStackY_1c8 = (System_Delegate_o *)0x3b6db75;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IVar11.method,
             (TMPro_TMP_InputField_o *)((IVar11.klass)->_1).parent,method_02);
  pSStackY_1c8 = (System_Delegate_o *)0x3b6db81;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IVar11.method,
             ((IVar11.klass)->_1).generic_class,method_03);
  pSStackY_1c8 = (System_Delegate_o *)0x3b6db8d;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireHexInput
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IVar11.method,
             ((IVar11.klass)->_1).typeMetadataHandle,method_04);
  pSStackY_1c8 = (System_Delegate_o *)0x3b6dba1;
  pSVar7 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-cancel",(MethodInfo *)0x0);
  pSVar26 = (System_Delegate_o *)&TypeInfo_UnityAction;
  pSStackY_1c8 = (System_Delegate_o *)0x3b6dbb3;
  pUVar17 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  pMVar22 = (MethodInfo *)0x0;
  pSStackY_1c8 = (System_Delegate_o *)0x3b6dbce;
  UnityEngine_Events_UnityAction___ctor();
  pSStackY_1c8 = (System_Delegate_o *)0x3b6dbdd;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IStackY_1c0.method,pSVar7,pUVar17,
             pMVar22);
  pSStackY_1c8 = (System_Delegate_o *)0x3b6dbf1;
  pSVar7 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-save",(MethodInfo *)0x0);
  pSStackY_1c8 = (System_Delegate_o *)0x3b6dbfc;
  pUVar17 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  pMVar22 = (MethodInfo *)0x0;
  pSStackY_1c8 = (System_Delegate_o *)0x3b6dc17;
  UnityEngine_Events_UnityAction___ctor();
  IVar11 = IStackY_1c0;
  pSStackY_1c8 = (System_Delegate_o *)0x3b6dc2a;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IStackY_1c0.method,pSVar7,pUVar17,
             pMVar22);
  x = ((IVar11.klass)->_1).interopData;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pSStackY_1c8 = (System_Delegate_o *)0x3b6dc46;
    il2cpp_runtime_helper_02337ed0();
  }
  IVar20.rgctxDataDummy = (void *)0x0;
  pSStackY_1c8 = (System_Delegate_o *)0x3b6dc52;
  bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_03b6dd55:
    pSStackY_1c8 = (System_Delegate_o *)0x3b6dd5d;
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SyncFields
              ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IVar11.method,IVar20.method);
    return extraout_RAX_00;
  }
  pvVar3 = ((IVar11.klass)->_1).interopData;
  pSStackY_1c8 = (System_Delegate_o *)0x3b6dc6d;
  pGVar18 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
            il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchUIColorPickerValue.rgctxDataDummy);
  IVar12.rgctxDataDummy = (void *)0x0;
  pSStackY_1c8 = (System_Delegate_o *)0x3b6dc87;
  IVar20 = IVar11;
  pGVar24 = pGVar18;
  System_Action_GisketchUIColorPickerValue____ctor();
  if (pvVar3 != (void *)0x0) {
    ppvStackY_1a8 = (void **)pGVar19;
    if (g_data_057a9dfd == '\0') {
      pSStackY_1c8 = (System_Delegate_o *)0x3b6dcaa;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchUIColorPickerValue);
      g_data_057a9dfd = '\x01';
    }
    a = *(System_Delegate_o **)((long)pvVar3 + 0x88);
    do {
      pSStackY_1c8 = (System_Delegate_o *)0x3b6dcf6;
      pGVar19 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
                System_Delegate__Combine(a,(System_Delegate_o *)pGVar18,(MethodInfo *)0x0);
      IVar11 = TypeInfo_Action_GisketchUIColorPickerValue;
      IVar20.rgctxDataDummy = (void *)0x0;
      if (pGVar19 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
        pSStackY_1c8 = (System_Delegate_o *)0x3b6dd18;
        IVar20.rgctxDataDummy = (void *)il2cpp_runtime_helper_023051f0(pGVar19,TypeInfo_Action_GisketchUIColorPickerValue.rgctxDataDummy);
        ppMVar25 = (MethodInfo_255B7B0 **)IVar11;
        if (IVar20.rgctxDataDummy == (void *)0x0) {
          pSStackY_1c8 = (System_Delegate_o *)0x3b6dd28;
          IVar20 = IVar11;
          pGVar24 = pGVar19;
          il2cpp_runtime_helper_022b2fd0();
          pSVar26 = a;
          break;
        }
      }
      pSStackY_1c8 = (System_Delegate_o *)0x3b6dcde;
      pGVar24 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)((long)pvVar3 + 0x88);
      pSVar26 = (System_Delegate_o *)
                il2cpp_runtime_helper_02300640((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)((long)pvVar3 + 0x88),
                             IVar20.rgctxDataDummy,a);
      bVar27 = a != pSVar26;
      a = pSVar26;
    } while (bVar27);
    IVar11 = IStackY_1c0;
    __this = *ppvStackY_1a8;
    if (__this != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
      pIVar15 = ppIStackY_1a0[1];
      *(Il2CppClass **)&(__this->fields)._value.fields = *ppIStackY_1a0;
      *(Il2CppClass **)&(__this->fields)._value.fields.S = pIVar15;
      pSStackY_1c8 = (System_Delegate_o *)0x3b6dd4d;
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this,IVar20.method);
      pSStackY_1c8 = (System_Delegate_o *)0x3b6dd55;
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,IVar20.method);
      goto label_03b6dd55;
    }
  }
  pSStackY_1c8 = (System_Delegate_o *)0x3b6dd71;
  auVar29 = il2cpp_runtime_helper_022b2c90();
  lVar23 = auVar29._8_8_;
  uVar21 = auVar29._0_8_;
  uStackY_1e0 = 0;
  pGStackY_1d8 = pGVar19;
  pGStackY_1d0 = pGVar18;
  pSStackY_1c8 = pSVar26;
  if (g_data_057a9dd6 == '\0') {
    IStackY_210 = (Il2CppRGCTXData)0x3b6dda9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    IStackY_210 = (Il2CppRGCTXData)0x3b6ddb5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIColorPickerVisual_AddComponent_GisketchUIColor);
    IStackY_210 = (Il2CppRGCTXData)0x3b6ddc1;
    uVar21 = il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    g_data_057a9dd6 = '\x01';
  }
  GStackY_208.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  GStackY_208.fields.LivePreview = 0;
  GStackY_208.fields.Disabled = 0;
  GStackY_208.fields.Id = (System_String_o *)0x0;
  GStackY_208.fields.EnableAlpha = 0;
  GStackY_208.fields._12_4_ = 0;
  if (IVar20.rgctxDataDummy != (void *)0x0) {
    pIVar15 = (Il2CppClass *)0x0;
    IStackY_210 = (Il2CppRGCTXData)0x3b6dde8;
    bVar5 = System_String__IsNullOrEmpty
                      ((System_String_o *)((IVar20.klass)->_1).declaringType,(MethodInfo *)0x0);
    uVar21 = CONCAT44(extraout_var_02,bVar5);
    if ((char)bVar5 == '\0') {
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        IStackY_210 = (Il2CppRGCTXData)0x3b6de09;
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar19 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)**(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8)
      ;
      if (pGVar19 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
        pIVar15 = ((IVar20.klass)->_1).declaringType;
        IStackY_210 = (Il2CppRGCTXData)0x3b6de32;
        IVar12 = MethodInfo_Boolean_TryGetValue;
        bVar5 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar19,
                           (Il2CppObject *)pIVar15,&GStackY_208,(MethodInfo_3128A90 *)MethodInfo_Boolean_TryGetValue.method);
        uVar21 = CONCAT44(extraout_var_03,bVar5);
        if ((char)bVar5 == '\0') goto label_03b6de71;
        if (pGVar24 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
          IStackY_210 = (Il2CppRGCTXData)0x3b6de4d;
          pIVar15 = (Il2CppClass *)MethodInfo_GisketchUIColorPickerVisual_AddComponent_GisketchUIColor;
          pGVar19 = pGVar24;
          pGVar18 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
                    UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)pGVar24,(MethodInfo_255A020 *)MethodInfo_GisketchUIColorPickerVisual_AddComponent_GisketchUIColor);
          if ((lVar23 != 0) && (pGVar18 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0)) {
            IStackY_210 = (Il2CppRGCTXData)0x3b6de71;
            Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Setup
                      (pGVar18,(System_String_o *)((IVar20.klass)->_1).declaringType,
                       (uint)((byte)GStackY_208.fields.EnableAlpha & 1),
                       *(Gisketch_Aottg2UI_Styling_GisketchTheme_o **)(lVar23 + 0x18),in_R8);
            uVar21 = extraout_RAX_01;
            goto label_03b6de71;
          }
        }
      }
      IStackY_210 = (Il2CppRGCTXData)0x3b6de84;
      il2cpp_runtime_helper_022b2c90();
      plStackY_230 = &TypeInfo_GisketchUIColorPicker;
      cVar4 = (char)extraout_EDX;
      method_00 = IVar12;
      IStackY_238 = IVar20;
      IStackY_228 = (Il2CppRGCTXData)ppMVar25;
      lStackY_220 = lVar23;
      pGStackY_218 = pGVar24;
      IStackY_210 = IVar11;
      if (g_data_057a9dff == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
        g_data_057a9dff = '\x01';
      }
      GStackY_250.R = '\0';
      GStackY_250.G = '\0';
      GStackY_250.B = '\0';
      GStackY_250.A = '\0';
      GStackY_250.H = 0.0;
      GStackY_250.S = 0.0;
      GStackY_250.V = 0.0;
      GStackY_260.R = '\0';
      GStackY_260.G = '\0';
      GStackY_260.B = '\0';
      GStackY_260.A = '\0';
      GStackY_260.H = 0.0;
      GStackY_260.S = 0.0;
      GStackY_260.V = 0.0;
      *(char *)&(pGVar19->fields)._EnableAlpha_k__BackingField = cVar4;
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057a9dd0 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
        il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
        il2cpp_runtime_helper_023445d0(&"#FFFFFF");
        g_data_057a9dd0 = '\x01';
      }
      if (cVar4 == '\0') {
        iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
        pSVar7 = "#FFFFFF";
      }
      else {
        iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
        pSVar7 = "#FFFFFFFF";
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                         ((System_String_o *)pIVar15,pSVar7,extraout_EDX & 0xff,method_00.method);
      bVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                        (pSVar7,extraout_EDX & 0xff,
                         (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&GStackY_250,method_00.method)
      ;
      if ((char)bVar5 == '\0') {
        fStackY_264 = 0.0;
        uStackY_26c = 0;
        rgbColor_00.fields.b = 1.0;
        rgbColor_00.fields.a = 1.0;
        rgbColor_00.fields.r = 1.0;
        rgbColor_00.fields.g = 1.0;
        UnityEngine_Color__RGBToHSV
                  (rgbColor_00,(float *)&uStackY_26c,(float *)((long)&uStackY_26c + 4),&fStackY_264,
                   (MethodInfo *)0x0);
        uVar28._0_1_ = 0xff;
        uVar28._1_1_ = 0xff;
        uVar28._2_1_ = 0xff;
        uVar28._3_1_ = 0xff;
        GStackY_260.H = (float)uStackY_26c;
        GStackY_260.S = uStackY_26c._4_4_;
        GStackY_260.V = fStackY_264;
      }
      else {
        uVar28 = GStackY_250._0_4_;
        GStackY_260.H = GStackY_250.H;
        GStackY_260.S = GStackY_250.S;
        GStackY_260.V = GStackY_250.V;
      }
      GStackY_260.R = (uint8_t)uVar28;
      GStackY_260.G = SUB41(uVar28,1);
      GStackY_260.B = SUB41(uVar28,2);
      GStackY_260.A = SUB41(uVar28,3);
      (pGVar19->fields)._value.fields.R = (uint8_t)uVar28;
      (pGVar19->fields)._value.fields.G = SUB41(uVar28,1);
      (pGVar19->fields)._value.fields.B = SUB41(uVar28,2);
      (pGVar19->fields)._value.fields.A = SUB41(uVar28,3);
      (pGVar19->fields)._value.fields.H = GStackY_260.H;
      (pGVar19->fields)._value.fields.S = GStackY_260.S;
      (pGVar19->fields)._value.fields.V = GStackY_260.V;
      pGVar24 = pGVar19;
      pGVar18 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pGVar19,(MethodInfo *)0x0);
      if ((pGVar18 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) &&
         (pIVar16 = UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)pGVar18,MethodInfo_LayoutElement_AddComponent_LayoutElement), pGVar24 = pGVar18,
         pIVar16 != (Il2CppObject *)0x0)) {
        if (cVar4 == '\0') {
          uVar28 = 0x435c0000;
        }
        else {
          uVar28 = 0x43820000;
        }
        (*pIVar16->klass->vtable[0x26].methodPtr)(uVar28,pIVar16,pIVar16->klass->vtable[0x26].method);
        pMVar22 = extraout_RDX_01;
        if (IVar12.rgctxDataDummy == (void *)0x0) {
          if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            pMVar22 = extraout_RDX_02;
          }
          IVar12 = (Il2CppRGCTXData)(*(Il2CppRGCTXData **)(TypeInfo_GisketchTheme + 0xb8))->method;
        }
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Build
                  (pGVar19,(Gisketch_Aottg2UI_Styling_GisketchTheme_o *)IVar12.method,pMVar22);
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(pGVar19,IVar12.method);
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(pGVar19,IVar12.method);
        return extraout_RAX_02;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9de2 == '\0') {
        il2cpp_runtime_helper_023445d0(&"-hex");
        g_data_057a9de2 = '\x01';
      }
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
               System_String__Concat_3ae5ba0((System_String_o *)pGVar24,"-hex",(MethodInfo *)0x0);
      return pGVar6;
    }
  }
label_03b6de71:
  return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT71((int7)((ulong)uVar21 >> 8),1);
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Field
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Field (System_String_o* id, System_String_o* label, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* input, const MethodInfo* method);
// 0x3b6ca00

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Field
          (System_String_o *id,System_String_o *label,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *input,
          MethodInfo *method)

{
  Il2CppClass **value;
  byte bVar1;
  int iVar2;
  UnityEngine_Object_o *x;
  void *pvVar3;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this;
  char cVar4;
  bool_conflict bVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar11;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar12;
  System_String_o *pSVar13;
  undefined8 *puVar14;
  undefined4 extraout_var;
  Il2CppRGCTXData IVar15;
  undefined4 extraout_var_00;
  Il2CppRGCTXData IVar16;
  undefined4 extraout_var_01;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *extraout_RAX;
  UnityEngine_Transform_o *pUVar17;
  Il2CppObject *pIVar18;
  Il2CppClass *pIVar19;
  Il2CppObject *pIVar20;
  UnityEngine_Events_UnityAction_o *pUVar21;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar22;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar23;
  Il2CppRGCTXData IVar24;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *extraout_RAX_00;
  undefined8 uVar25;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined8 extraout_RAX_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *extraout_RAX_02;
  MethodInfo *pMVar26;
  Il2CppRGCTXData method_00;
  uint extraout_EDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  Il2CppRGCTXData extraout_RDX_01;
  Il2CppType **extraout_RDX_02;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  long lVar27;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  ulong uVar28;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar29;
  ulong uVar30;
  Il2CppClass *str0;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar31;
  MethodInfo *in_R8;
  long *__this_01;
  MethodInfo_255B7B0 **ppMVar32;
  System_Delegate_o *pSVar33;
  System_Delegate_o *a;
  bool bVar34;
  undefined4 uVar35;
  UnityEngine_Color_o rgbColor;
  UnityEngine_Color_o rgbColor_00;
  undefined1 auVar36 [16];
  undefined8 uStackY_3c4;
  float fStackY_3bc;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields GStackY_3b8;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields GStackY_3a8;
  Il2CppRGCTXData IStackY_390;
  long *plStackY_388;
  Il2CppRGCTXData IStackY_380;
  long lStackY_378;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStackY_370;
  Il2CppRGCTXData IStackY_368;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o GStackY_360;
  undefined8 uStackY_338;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStackY_330;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStackY_328;
  System_Delegate_o *pSStackY_320;
  Il2CppRGCTXData IStackY_318;
  undefined4 uStackY_310;
  float fStackY_30c;
  float fStackY_308;
  float fStackY_304;
  void **ppvStackY_300;
  Il2CppClass **ppIStackY_2f8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStackY_2f0;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStackY_2e8;
  long *plStackY_2e0;
  Il2CppRGCTXData IStackY_2d8;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o GStack_2b0;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_288;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_280;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_278;
  Il2CppRGCTXData IStack_270;
  System_String_o *pSStack_268;
  ulong uStack_260;
  Il2CppRGCTXData in_stack_fffffffffffffdb8;
  MethodInfo *in_stack_fffffffffffffdf0;
  MethodInfo *in_stack_fffffffffffffe68;
  System_Enum_o SStack_188;
  undefined4 uStack_178;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_170;
  System_String_o *pSStack_168;
  MethodInfo *in_stack_fffffffffffffef0;
  MethodInfo *in_stack_ffffffffffffff68;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (g_data_057a9dd9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"-label");
    il2cpp_runtime_helper_023445d0(&"Panel");
    g_data_057a9dd9 = '\x01';
  }
  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar29 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
  pGVar10 = pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar6,(MethodInfo *)0x0);
  if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
label_03b6cca2:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    (pGVar6->fields).type = "Panel";
    il2cpp_runtime_helper_022b4080(&pGVar6->fields);
    (pGVar6->fields).id = id;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).id,id);
    (pGVar6->fields).style = "clear";
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).style);
    if (g_data_057a9d9b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"percent");
      g_data_057a9d9b = '\x01';
    }
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    pGVar29 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
    pGVar10 = pGVar7;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar7,(MethodInfo *)0x0);
    if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_03b6cca2;
    *(undefined4 *)&(pGVar7->fields).type = 0x42c80000;
    (pGVar7->fields).id = (System_String_o *)"percent";
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).id);
    method = (MethodInfo *)0x0;
    in_R8 = (MethodInfo *)0x0;
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                        (System_String_o *)0x0,6.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar7,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,in_stack_ffffffffffffffd0);
    (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar8);
    pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition,2);
    pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
              System_String__Concat_3ae5ba0(id,"-label",(MethodInfo *)0x0);
    pMVar26 = extraout_RDX;
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar26 = extraout_RDX_00;
    }
    pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
              Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Label
                        ((System_String_o *)pGVar10,label,18.0,pMVar26);
    pGVar29 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)label;
    if (pGVar9 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) goto label_03b6cca2;
    if ((int)pGVar9->max_length != 0) {
      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)pGVar9->m_Items;
      pGVar9->m_Items[0] = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)pGVar11;
      il2cpp_runtime_helper_022b4080();
      pGVar29 = pGVar11;
      if (1 < (uint)pGVar9->max_length) {
        pGVar9->m_Items[1] = input;
        il2cpp_runtime_helper_022b4080(pGVar9->m_Items + 1,input);
        (pGVar6->fields).deferredChildren = pGVar9;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).deferredChildren,pGVar9);
        return pGVar6;
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057a9ddb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"Panel");
    g_data_057a9ddb = '\x01';
  }
  pGVar12 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pSVar13 = (System_String_o *)0x0;
  pGVar7 = pGVar12;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar12,(MethodInfo *)0x0);
  if (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar12->fields).type = "Panel";
    il2cpp_runtime_helper_022b4080(&pGVar12->fields);
    (pGVar12->fields).id = (System_String_o *)pGVar10;
    il2cpp_runtime_helper_022b4080(&(pGVar12->fields).id,pGVar10);
    (pGVar12->fields).style = "clear";
    il2cpp_runtime_helper_022b4080(&(pGVar12->fields).style);
    if (g_data_057a9d9b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"percent");
      g_data_057a9d9b = '\x01';
    }
    pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    pSVar13 = (System_String_o *)0x0;
    pGVar7 = pGVar10;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar10,(MethodInfo *)0x0);
    if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined4 *)&(pGVar10->fields).type = 0x42c80000;
      (pGVar10->fields).id = (System_String_o *)"percent";
      il2cpp_runtime_helper_022b4080(&(pGVar10->fields).id);
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                          (System_String_o *)0x0,8.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar10,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,in_stack_ffffffffffffff68);
      (pGVar12->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
      il2cpp_runtime_helper_022b4080(&(pGVar12->fields).search,pGVar8);
      (pGVar12->fields).deferredChildren = pGVar29;
      il2cpp_runtime_helper_022b4080(&(pGVar12->fields).deferredChildren,pGVar29);
      return pGVar12;
    }
  }
  uVar35 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9dda == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"text");
    g_data_057a9dda = '\x01';
  }
  pGVar12 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  uVar30 = 0;
  pGVar10 = pGVar12;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar12,(MethodInfo *)0x0);
  if (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar12->fields).type = "Text";
    il2cpp_runtime_helper_022b4080(&pGVar12->fields);
    (pGVar12->fields).id = (System_String_o *)pGVar7;
    il2cpp_runtime_helper_022b4080(&(pGVar12->fields).id,pGVar7);
    (pGVar12->fields).text = pSVar13;
    il2cpp_runtime_helper_022b4080(&(pGVar12->fields).text,pSVar13);
    (pGVar12->fields).style = "text";
    il2cpp_runtime_helper_022b4080(&(pGVar12->fields).style);
    if (g_data_057a9d9a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"point");
      g_data_057a9d9a = '\x01';
    }
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    uVar30 = 0;
    pGVar10 = pGVar7;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar7,(MethodInfo *)0x0);
    pSVar13 = (System_String_o *)0x0;
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined4 *)&(pGVar7->fields).type = uVar35;
      (pGVar7->fields).id = "point";
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).id);
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar7,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,in_stack_fffffffffffffef0);
      (pGVar12->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
      il2cpp_runtime_helper_022b4080(&(pGVar12->fields).search,pGVar8);
      return pGVar12;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar28 = uVar30 & 0xffffffff;
  pGStack_170 = pGVar12;
  pSStack_168 = pSVar13;
  if (g_data_057a9dd8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgInputType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"InputField");
    il2cpp_runtime_helper_023445d0(&"inputField");
    il2cpp_runtime_helper_023445d0(&"#RRGGBBAA");
    il2cpp_runtime_helper_023445d0(&"#RRGGBB");
    g_data_057a9dd8 = '\x01';
  }
  pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pSVar13 = (System_String_o *)0x0;
  __this_01 = (long *)pGVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar7,(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar7->fields).type = "InputField";
    il2cpp_runtime_helper_022b4080(&pGVar7->fields);
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057a9de2 == '\0') {
      il2cpp_runtime_helper_023445d0(&"-hex");
      g_data_057a9de2 = '\x01';
    }
    pSVar13 = System_String__Concat_3ae5ba0((System_String_o *)pGVar10,"-hex",(MethodInfo *)0x0);
    (pGVar7->fields).id = pSVar13;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).id,pSVar13);
    if ((char)uVar28 == '\0') {
      puVar14 = &"#RRGGBB";
    }
    else {
      puVar14 = &"#RRGGBBAA";
    }
    (pGVar7->fields).placeholder = (System_String_o *)*puVar14;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).placeholder);
    SStack_188.klass = TypeInfo_AottgInputType;
    SStack_188.monitor = (void *)0xffffffffffffffff;
    uStack_178 = 0;
    pSVar13 = System_Enum__ToString(&SStack_188,(MethodInfo *)0x0);
    (pGVar7->fields).inputType = pSVar13;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).inputType,pSVar13);
    (pGVar7->fields).style = "inputField";
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).style);
    (pGVar7->fields).max.fields.value = (float)(((uint)uVar30 & 0xff) * 2 + 7);
    if (g_data_057a9d9b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"percent");
      g_data_057a9d9b = '\x01';
    }
    pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    pSVar13 = (System_String_o *)0x0;
    __this_01 = (long *)pGVar10;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar10,(MethodInfo *)0x0);
    uVar28 = 0;
    if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined4 *)&(pGVar10->fields).type = 0x42c80000;
      (pGVar10->fields).id = (System_String_o *)"percent";
      il2cpp_runtime_helper_022b4080(&(pGVar10->fields).id);
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar10,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,in_stack_fffffffffffffe68);
      (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar8);
      return pGVar7;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ddc == '\0') {
    uStack_260 = 0x3b6d349;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    uStack_260 = 0x3b6d355;
    il2cpp_runtime_helper_023445d0(&"Column");
    uStack_260 = 0x3b6d361;
    il2cpp_runtime_helper_023445d0(&"Button");
    g_data_057a9ddc = '\x01';
  }
  uStack_260 = 0x3b6d377;
  pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pIVar19 = (Il2CppClass *)0x0;
  uStack_260 = 0x3b6d384;
  pGVar10 = pGVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar7,(MethodInfo *)0x0);
  IVar15 = extraout_RDX_01;
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar7->fields).type = "Button";
    uStack_260 = 0x3b6d3a4;
    il2cpp_runtime_helper_022b4080(&pGVar7->fields);
    (pGVar7->fields).id = (System_String_o *)__this_01;
    uStack_260 = 0x3b6d3b4;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).id,__this_01);
    (pGVar7->fields).text = pSVar13;
    uStack_260 = 0x3b6d3c4;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).text,pSVar13);
    (pGVar7->fields).style = (System_String_o *)extraout_RDX_01;
    uStack_260 = 0x3b6d3d4;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).style);
    if (g_data_057a9d9b == '\0') {
      uStack_260 = 0x3b6d3e9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      uStack_260 = 0x3b6d3f5;
      il2cpp_runtime_helper_023445d0(&"percent");
      g_data_057a9d9b = '\x01';
    }
    uStack_260 = 0x3b6d40b;
    pGVar12 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    pIVar19 = (Il2CppClass *)0x0;
    uStack_260 = 0x3b6d418;
    pGVar10 = pGVar12;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar12,(MethodInfo *)0x0);
    IVar15.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    if (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined4 *)&(pGVar12->fields).type = 0x42c80000;
      (pGVar12->fields).id = (System_String_o *)"percent";
      uStack_260 = 0x3b6d443;
      il2cpp_runtime_helper_022b4080(&(pGVar12->fields).id);
      uStack_260 = 0x3b6d4ab;
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar12,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,in_stack_fffffffffffffdf0);
      (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
      uStack_260 = 0x3b6d4c4;
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar8);
      return pGVar7;
    }
  }
  uStack_260 = 0x3b6d4d8;
  il2cpp_runtime_helper_022b2c90();
  str0 = pIVar19;
  pGStack_288 = pGVar7;
  pGStack_280 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_01;
  pGStack_278 = pGVar6;
  IStack_270 = IVar15;
  pSStack_268 = pSVar13;
  uStack_260 = uVar28;
  if (g_data_057a9dd5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIColorPickerPopover_AddComponent_GisketchUIColo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"color-picker-");
    g_data_057a9dd5 = '\x01';
  }
  GStack_2b0.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  GStack_2b0.fields.LivePreview = 0;
  GStack_2b0.fields.Disabled = 0;
  GStack_2b0.fields.Id = (System_String_o *)0x0;
  GStack_2b0.fields.EnableAlpha = 0;
  GStack_2b0.fields._12_4_ = 0;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  IVar24.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
  if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)**(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8) !=
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    method = MethodInfo_Boolean_TryGetValue.method;
    bVar5 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       **(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8),(Il2CppObject *)pGVar10,&GStack_2b0,
                       (MethodInfo_3128A90 *)MethodInfo_Boolean_TryGetValue.method);
    if ((char)bVar5 == '\0') {
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var,bVar5);
    }
    if ((GStack_2b0.fields._24_8_ & 0x100) != 0) {
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var,bVar5);
    }
    __this_01 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    IVar15.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    str0 = (Il2CppClass *)0x0;
    IVar24 = in_stack_fffffffffffffdb8;
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)in_stack_fffffffffffffdb8.method,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      if (in_stack_fffffffffffffdb8.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03b6d711;
      IVar15.rgctxDataDummy =
           UnityEngine_GameObject__GetComponentInParent_object_
                     (in_stack_fffffffffffffdb8.rgctxDataDummy,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    str0 = (Il2CppClass *)0x0;
    IVar24 = IVar15;
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)IVar15.method,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var_00,bVar5);
    }
    if (IVar15.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
      __this_01 = (long *)((Il2CppRGCTXData *)&(IVar15.klass)->_1)[0x11].method;
      if ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_01 ==
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var_00,bVar5);
      }
      pGVar6 = pGVar10;
      pSVar13 = System_String__Concat_3ae5ba0("color-picker-",(System_String_o *)pGVar10,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__PopoverNode
                         ((System_String_o *)pGVar10,(MethodInfo *)pGVar6);
      in_R8 = (MethodInfo *)((ulong)pIVar19 & 0xff);
      IStackY_2d8 = (Il2CppRGCTXData)0x3b6d6a4;
      method = in_stack_fffffffffffffdb8.method;
      IVar16.rgctxDataDummy =
           Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
                     ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_01,pSVar13,pGVar6,
                      in_stack_fffffffffffffdb8.rgctxDataDummy,(bool_conflict)in_R8,0,8.0,1,(MethodInfo *)0x0)
      ;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      str0 = (Il2CppClass *)0x0;
      IVar24.method = IVar16.method;
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)IVar16.method,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var_01,bVar5);
      }
      if ((IVar16.rgctxDataDummy != (Il2CppRGCTXData *)0x0) &&
         (str0 = (Il2CppClass *)MethodInfo_GisketchUIColorPickerPopover_AddComponent_GisketchUIColo,
         __this_00 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)
                     UnityEngine_GameObject__AddComponent_object_
                               ((UnityEngine_GameObject_o *)IVar16.method,(MethodInfo_255A020 *)MethodInfo_GisketchUIColorPickerPopover_AddComponent_GisketchUIColo),
         IVar24 = IVar16, __this_00 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)0x0)) {
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Setup
                  (__this_00,(System_String_o *)pGVar10,
                   (UnityEngine_GameObject_o *)in_stack_fffffffffffffdb8.method,
                   (Gisketch_Aottg2UI_GisketchUIRoot_o *)IVar15.method,in_R8);
        return extraout_RAX;
      }
    }
  }
label_03b6d711:
  il2cpp_runtime_helper_022b2c90();
  plStackY_2e0 = &TypeInfo_GisketchUIColorPicker;
  pGStackY_2f0 = pGVar10;
  pGStackY_2e8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_01;
  IStackY_2d8 = IVar15;
  if (g_data_057a9deb == '\0') {
    pSStackY_320 = (System_Delegate_o *)0x3b6d753;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchUIColorPickerValue);
    pSStackY_320 = (System_Delegate_o *)0x3b6d75f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Cancel);
    pSStackY_320 = (System_Delegate_o *)0x3b6d76b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnVisualChanged);
    pSStackY_320 = (System_Delegate_o *)0x3b6d777;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Save);
    pSStackY_320 = (System_Delegate_o *)0x3b6d783;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIColorPickerVisual_Find_GisketchUIColorPickerVi);
    pSStackY_320 = (System_Delegate_o *)0x3b6d78f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_Find_TMP_InputField);
    pSStackY_320 = (System_Delegate_o *)0x3b6d79b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    pSStackY_320 = (System_Delegate_o *)0x3b6d7a7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pSStackY_320 = (System_Delegate_o *)0x3b6d7b3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pSStackY_320 = (System_Delegate_o *)0x3b6d7bf;
    il2cpp_runtime_helper_023445d0(&"-cancel");
    pSStackY_320 = (System_Delegate_o *)0x3b6d7cb;
    il2cpp_runtime_helper_023445d0(&"-save");
    pSStackY_320 = (System_Delegate_o *)0x3b6d7d7;
    il2cpp_runtime_helper_023445d0(&"-g");
    pSStackY_320 = (System_Delegate_o *)0x3b6d7e3;
    il2cpp_runtime_helper_023445d0(&"-r");
    pSStackY_320 = (System_Delegate_o *)0x3b6d7ef;
    il2cpp_runtime_helper_023445d0(&"-b");
    g_data_057a9deb = '\x01';
  }
  (IVar24.method)->klass = str0;
  pSStackY_320 = (System_Delegate_o *)0x3b6d806;
  il2cpp_runtime_helper_022b4080(&(IVar24.method)->klass,str0);
  (IVar24.method)->parameters = extraout_RDX_02;
  pSStackY_320 = (System_Delegate_o *)0x3b6d816;
  il2cpp_runtime_helper_022b4080(&(IVar24.method)->parameters,extraout_RDX_02);
  (IVar24.method)->field7_0x38 = (_union_13)method;
  pSStackY_320 = (System_Delegate_o *)0x3b6d826;
  il2cpp_runtime_helper_022b4080(&(IVar24.method)->field7_0x38);
  pSStackY_320 = (System_Delegate_o *)0x3b6d830;
  pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar24.method,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    pSStackY_320 = (System_Delegate_o *)0x3b6d8ea;
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9de1 == '\0') {
    pSStackY_320 = (System_Delegate_o *)0x3b6d860;
    il2cpp_runtime_helper_023445d0(&"-visual");
    g_data_057a9de1 = '\x01';
  }
  pSStackY_320 = (System_Delegate_o *)0x3b6d87b;
  pSVar13 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-visual",(MethodInfo *)0x0);
  pSStackY_320 = (System_Delegate_o *)0x3b6d891;
  pIVar18 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar17,pSVar13,MethodInfo_GisketchUIColorPickerVisual_Find_GisketchUIColorPickerVi);
  pIVar20 = pIVar18 + 9;
  if (pIVar18 == (Il2CppObject *)0x0) {
    pIVar20 = (Il2CppObject *)&(IVar24.method)->return_type;
  }
  bVar1 = *(byte *)&pIVar20->klass;
  *(byte *)&(IVar24.method)->return_type = bVar1;
  IStackY_318 = IVar24;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    pSStackY_320 = (System_Delegate_o *)0x3b6d901;
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057a9dd0 == '\0') goto label_03b6d90a;
label_03b6d8c7:
    if (bVar1 != 0) goto label_03b6d8cc;
label_03b6d93a:
    iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
    pSVar13 = "#FFFFFF";
  }
  else {
    if (g_data_057a9dd0 != '\0') goto label_03b6d8c7;
label_03b6d90a:
    pSStackY_320 = (System_Delegate_o *)0x3b6d916;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    pSStackY_320 = (System_Delegate_o *)0x3b6d922;
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    pSStackY_320 = (System_Delegate_o *)0x3b6d92e;
    il2cpp_runtime_helper_023445d0(&"#FFFFFF");
    g_data_057a9dd0 = '\x01';
    if (bVar1 == 0) goto label_03b6d93a;
label_03b6d8cc:
    iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
    pSVar13 = "#FFFFFFFF";
  }
  if (iVar2 == 0) {
    pSStackY_320 = (System_Delegate_o *)0x3b6d956;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStackY_320 = (System_Delegate_o *)0x3b6d965;
  pSVar13 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                      ((System_String_o *)str0,pSVar13,(uint)bVar1,IVar24.method);
  IVar15 = IStackY_318;
  value = &((IStackY_318.klass)->_1).element_class;
  pSStackY_320 = (System_Delegate_o *)0x3b6d97c;
  bVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                    (pSVar13,(uint)*(byte *)&(IStackY_318.method)->return_type,
                     (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)value,IVar24.method);
  if ((char)bVar5 == '\0') {
    fStackY_304 = 0.0;
    fStackY_30c = 0.0;
    fStackY_308 = 0.0;
    uStackY_310 = 0xffffffff;
    pSStackY_320 = (System_Delegate_o *)0x3b6d9b9;
    rgbColor.fields.b = 1.0;
    rgbColor.fields.a = 1.0;
    rgbColor.fields.r = 1.0;
    rgbColor.fields.g = 1.0;
    UnityEngine_Color__RGBToHSV(rgbColor,&fStackY_30c,&fStackY_308,&fStackY_304,(MethodInfo *)0x0);
    *value = (Il2CppClass *)CONCAT44(fStackY_30c,uStackY_310);
    ((IVar15.klass)->_1).castClass = (Il2CppClass *)CONCAT44(fStackY_304,fStackY_308);
  }
  pSStackY_320 = (System_Delegate_o *)0x3b6d9d0;
  ppIStackY_2f8 = value;
  pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar15.method,(MethodInfo *)0x0);
  pSStackY_320 = (System_Delegate_o *)0x3b6d9e7;
  pSVar13 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-r",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    pSStackY_320 = (System_Delegate_o *)0x3b6d9fc;
    il2cpp_runtime_helper_02337ed0();
  }
  ppMVar32 = &MethodInfo_TMP_InputField_Find_TMP_InputField;
  pSStackY_320 = (System_Delegate_o *)0x3b6da12;
  pIVar19 = (Il2CppClass *)
            Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar17,pSVar13,MethodInfo_TMP_InputField_Find_TMP_InputField);
  ((IVar15.klass)->_1).declaringType = pIVar19;
  pSStackY_320 = (System_Delegate_o *)0x3b6da22;
  il2cpp_runtime_helper_022b4080(&(IVar15.method)->slot);
  pSStackY_320 = (System_Delegate_o *)0x3b6da2c;
  pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar15.method,(MethodInfo *)0x0);
  pSStackY_320 = (System_Delegate_o *)0x3b6da43;
  pSVar13 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-g",(MethodInfo *)0x0);
  pSStackY_320 = (System_Delegate_o *)0x3b6da52;
  pIVar19 = (Il2CppClass *)
            Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar17,pSVar13,MethodInfo_TMP_InputField_Find_TMP_InputField);
  ((IVar15.klass)->_1).parent = pIVar19;
  pSStackY_320 = (System_Delegate_o *)0x3b6da62;
  il2cpp_runtime_helper_022b4080(&((IVar15.klass)->_1).parent);
  pSStackY_320 = (System_Delegate_o *)0x3b6da6c;
  pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar15.method,(MethodInfo *)0x0);
  pSStackY_320 = (System_Delegate_o *)0x3b6da83;
  pSVar13 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-b",(MethodInfo *)0x0);
  pSStackY_320 = (System_Delegate_o *)0x3b6da92;
  pIVar20 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar17,pSVar13,MethodInfo_TMP_InputField_Find_TMP_InputField);
  ((IVar15.klass)->_1).generic_class = pIVar20;
  pSStackY_320 = (System_Delegate_o *)0x3b6daa2;
  il2cpp_runtime_helper_022b4080(&((IVar15.klass)->_1).generic_class);
  pSStackY_320 = (System_Delegate_o *)0x3b6daac;
  pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar15.method,(MethodInfo *)0x0);
  if (g_data_057a9de2 == '\0') {
    pSStackY_320 = (System_Delegate_o *)0x3b6dac4;
    il2cpp_runtime_helper_023445d0(&"-hex");
    g_data_057a9de2 = '\x01';
  }
  pSStackY_320 = (System_Delegate_o *)0x3b6dadf;
  pSVar13 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-hex",(MethodInfo *)0x0);
  pSStackY_320 = (System_Delegate_o *)0x3b6daee;
  pIVar20 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar17,pSVar13,MethodInfo_TMP_InputField_Find_TMP_InputField);
  ((IVar15.klass)->_1).typeMetadataHandle = pIVar20;
  pSStackY_320 = (System_Delegate_o *)0x3b6dafe;
  il2cpp_runtime_helper_022b4080(&((IVar15.klass)->_1).typeMetadataHandle);
  pSStackY_320 = (System_Delegate_o *)0x3b6db08;
  pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar15.method,(MethodInfo *)0x0);
  if (g_data_057a9de1 == '\0') {
    pSStackY_320 = (System_Delegate_o *)0x3b6db20;
    il2cpp_runtime_helper_023445d0(&"-visual");
    g_data_057a9de1 = '\x01';
  }
  pSStackY_320 = (System_Delegate_o *)0x3b6db3b;
  pSVar13 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-visual",(MethodInfo *)0x0);
  pSStackY_320 = (System_Delegate_o *)0x3b6db4a;
  pIVar20 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar17,pSVar13,MethodInfo_GisketchUIColorPickerVisual_Find_GisketchUIColorPickerVi);
  pGVar23 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)&((IVar15.klass)->_1).interopData;
  ((IVar15.klass)->_1).interopData = pIVar20;
  pSStackY_320 = (System_Delegate_o *)0x3b6db5d;
  il2cpp_runtime_helper_022b4080(pGVar23,pIVar20);
  pSStackY_320 = (System_Delegate_o *)0x3b6db69;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IVar15.method,
             (TMPro_TMP_InputField_o *)((IVar15.klass)->_1).declaringType,method_01);
  pSStackY_320 = (System_Delegate_o *)0x3b6db75;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IVar15.method,
             (TMPro_TMP_InputField_o *)((IVar15.klass)->_1).parent,method_02);
  pSStackY_320 = (System_Delegate_o *)0x3b6db81;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IVar15.method,
             ((IVar15.klass)->_1).generic_class,method_03);
  pSStackY_320 = (System_Delegate_o *)0x3b6db8d;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireHexInput
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IVar15.method,
             ((IVar15.klass)->_1).typeMetadataHandle,method_04);
  pSStackY_320 = (System_Delegate_o *)0x3b6dba1;
  pSVar13 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-cancel",(MethodInfo *)0x0);
  pSVar33 = (System_Delegate_o *)&TypeInfo_UnityAction;
  pSStackY_320 = (System_Delegate_o *)0x3b6dbb3;
  pUVar21 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  pMVar26 = (MethodInfo *)0x0;
  pSStackY_320 = (System_Delegate_o *)0x3b6dbce;
  UnityEngine_Events_UnityAction___ctor();
  pSStackY_320 = (System_Delegate_o *)0x3b6dbdd;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IStackY_318.method,pSVar13,pUVar21,
             pMVar26);
  pSStackY_320 = (System_Delegate_o *)0x3b6dbf1;
  pSVar13 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-save",(MethodInfo *)0x0);
  pSStackY_320 = (System_Delegate_o *)0x3b6dbfc;
  pUVar21 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  pMVar26 = (MethodInfo *)0x0;
  pSStackY_320 = (System_Delegate_o *)0x3b6dc17;
  UnityEngine_Events_UnityAction___ctor();
  IVar15 = IStackY_318;
  pSStackY_320 = (System_Delegate_o *)0x3b6dc2a;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IStackY_318.method,pSVar13,pUVar21,
             pMVar26);
  x = ((IVar15.klass)->_1).interopData;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pSStackY_320 = (System_Delegate_o *)0x3b6dc46;
    il2cpp_runtime_helper_02337ed0();
  }
  IVar24.rgctxDataDummy = (void *)0x0;
  pSStackY_320 = (System_Delegate_o *)0x3b6dc52;
  bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_03b6dd55:
    pSStackY_320 = (System_Delegate_o *)0x3b6dd5d;
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SyncFields
              ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IVar15.method,IVar24.method);
    return extraout_RAX_00;
  }
  pvVar3 = ((IVar15.klass)->_1).interopData;
  pSStackY_320 = (System_Delegate_o *)0x3b6dc6d;
  pGVar22 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
            il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchUIColorPickerValue.rgctxDataDummy);
  IVar16.rgctxDataDummy = (void *)0x0;
  pSStackY_320 = (System_Delegate_o *)0x3b6dc87;
  IVar24 = IVar15;
  pGVar31 = pGVar22;
  System_Action_GisketchUIColorPickerValue____ctor();
  if (pvVar3 != (void *)0x0) {
    ppvStackY_300 = (void **)pGVar23;
    if (g_data_057a9dfd == '\0') {
      pSStackY_320 = (System_Delegate_o *)0x3b6dcaa;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchUIColorPickerValue);
      g_data_057a9dfd = '\x01';
    }
    a = *(System_Delegate_o **)((long)pvVar3 + 0x88);
    do {
      pSStackY_320 = (System_Delegate_o *)0x3b6dcf6;
      pGVar23 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
                System_Delegate__Combine(a,(System_Delegate_o *)pGVar22,(MethodInfo *)0x0);
      IVar15 = TypeInfo_Action_GisketchUIColorPickerValue;
      IVar24.rgctxDataDummy = (void *)0x0;
      if (pGVar23 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
        pSStackY_320 = (System_Delegate_o *)0x3b6dd18;
        IVar24.rgctxDataDummy = (void *)il2cpp_runtime_helper_023051f0(pGVar23,TypeInfo_Action_GisketchUIColorPickerValue.rgctxDataDummy);
        ppMVar32 = (MethodInfo_255B7B0 **)IVar15;
        if (IVar24.rgctxDataDummy == (void *)0x0) {
          pSStackY_320 = (System_Delegate_o *)0x3b6dd28;
          IVar24 = IVar15;
          pGVar31 = pGVar23;
          il2cpp_runtime_helper_022b2fd0();
          pSVar33 = a;
          break;
        }
      }
      pSStackY_320 = (System_Delegate_o *)0x3b6dcde;
      pGVar31 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)((long)pvVar3 + 0x88);
      pSVar33 = (System_Delegate_o *)
                il2cpp_runtime_helper_02300640((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)((long)pvVar3 + 0x88),
                             IVar24.rgctxDataDummy,a);
      bVar34 = a != pSVar33;
      a = pSVar33;
    } while (bVar34);
    IVar15 = IStackY_318;
    __this = *ppvStackY_300;
    if (__this != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
      pIVar19 = ppIStackY_2f8[1];
      *(Il2CppClass **)&(__this->fields)._value.fields = *ppIStackY_2f8;
      *(Il2CppClass **)&(__this->fields)._value.fields.S = pIVar19;
      pSStackY_320 = (System_Delegate_o *)0x3b6dd4d;
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this,IVar24.method);
      pSStackY_320 = (System_Delegate_o *)0x3b6dd55;
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,IVar24.method);
      goto label_03b6dd55;
    }
  }
  pSStackY_320 = (System_Delegate_o *)0x3b6dd71;
  auVar36 = il2cpp_runtime_helper_022b2c90();
  lVar27 = auVar36._8_8_;
  uVar25 = auVar36._0_8_;
  uStackY_338 = 0;
  pGStackY_330 = pGVar23;
  pGStackY_328 = pGVar22;
  pSStackY_320 = pSVar33;
  if (g_data_057a9dd6 == '\0') {
    IStackY_368 = (Il2CppRGCTXData)0x3b6dda9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    IStackY_368 = (Il2CppRGCTXData)0x3b6ddb5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIColorPickerVisual_AddComponent_GisketchUIColor);
    IStackY_368 = (Il2CppRGCTXData)0x3b6ddc1;
    uVar25 = il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    g_data_057a9dd6 = '\x01';
  }
  GStackY_360.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  GStackY_360.fields.LivePreview = 0;
  GStackY_360.fields.Disabled = 0;
  GStackY_360.fields.Id = (System_String_o *)0x0;
  GStackY_360.fields.EnableAlpha = 0;
  GStackY_360.fields._12_4_ = 0;
  if (IVar24.rgctxDataDummy != (void *)0x0) {
    pIVar19 = (Il2CppClass *)0x0;
    IStackY_368 = (Il2CppRGCTXData)0x3b6dde8;
    bVar5 = System_String__IsNullOrEmpty
                      ((System_String_o *)((IVar24.klass)->_1).declaringType,(MethodInfo *)0x0);
    uVar25 = CONCAT44(extraout_var_02,bVar5);
    if ((char)bVar5 == '\0') {
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        IStackY_368 = (Il2CppRGCTXData)0x3b6de09;
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar23 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)**(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8)
      ;
      if (pGVar23 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
        pIVar19 = ((IVar24.klass)->_1).declaringType;
        IStackY_368 = (Il2CppRGCTXData)0x3b6de32;
        IVar16 = MethodInfo_Boolean_TryGetValue;
        bVar5 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar23,
                           (Il2CppObject *)pIVar19,&GStackY_360,(MethodInfo_3128A90 *)MethodInfo_Boolean_TryGetValue.method);
        uVar25 = CONCAT44(extraout_var_03,bVar5);
        if ((char)bVar5 == '\0') goto label_03b6de71;
        if (pGVar31 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
          IStackY_368 = (Il2CppRGCTXData)0x3b6de4d;
          pIVar19 = (Il2CppClass *)MethodInfo_GisketchUIColorPickerVisual_AddComponent_GisketchUIColor;
          pGVar23 = pGVar31;
          pGVar22 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
                    UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)pGVar31,(MethodInfo_255A020 *)MethodInfo_GisketchUIColorPickerVisual_AddComponent_GisketchUIColor);
          if ((lVar27 != 0) && (pGVar22 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0)) {
            IStackY_368 = (Il2CppRGCTXData)0x3b6de71;
            Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Setup
                      (pGVar22,(System_String_o *)((IVar24.klass)->_1).declaringType,
                       (uint)((byte)GStackY_360.fields.EnableAlpha & 1),
                       *(Gisketch_Aottg2UI_Styling_GisketchTheme_o **)(lVar27 + 0x18),in_R8);
            uVar25 = extraout_RAX_01;
            goto label_03b6de71;
          }
        }
      }
      IStackY_368 = (Il2CppRGCTXData)0x3b6de84;
      il2cpp_runtime_helper_022b2c90();
      plStackY_388 = &TypeInfo_GisketchUIColorPicker;
      cVar4 = (char)extraout_EDX;
      method_00 = IVar16;
      IStackY_390 = IVar24;
      IStackY_380 = (Il2CppRGCTXData)ppMVar32;
      lStackY_378 = lVar27;
      pGStackY_370 = pGVar31;
      IStackY_368 = IVar15;
      if (g_data_057a9dff == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
        g_data_057a9dff = '\x01';
      }
      GStackY_3a8.R = '\0';
      GStackY_3a8.G = '\0';
      GStackY_3a8.B = '\0';
      GStackY_3a8.A = '\0';
      GStackY_3a8.H = 0.0;
      GStackY_3a8.S = 0.0;
      GStackY_3a8.V = 0.0;
      GStackY_3b8.R = '\0';
      GStackY_3b8.G = '\0';
      GStackY_3b8.B = '\0';
      GStackY_3b8.A = '\0';
      GStackY_3b8.H = 0.0;
      GStackY_3b8.S = 0.0;
      GStackY_3b8.V = 0.0;
      *(char *)&(pGVar23->fields)._EnableAlpha_k__BackingField = cVar4;
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057a9dd0 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
        il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
        il2cpp_runtime_helper_023445d0(&"#FFFFFF");
        g_data_057a9dd0 = '\x01';
      }
      if (cVar4 == '\0') {
        iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
        pSVar13 = "#FFFFFF";
      }
      else {
        iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
        pSVar13 = "#FFFFFFFF";
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar13 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                          ((System_String_o *)pIVar19,pSVar13,extraout_EDX & 0xff,method_00.method);
      bVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                        (pSVar13,extraout_EDX & 0xff,
                         (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&GStackY_3a8,method_00.method)
      ;
      if ((char)bVar5 == '\0') {
        fStackY_3bc = 0.0;
        uStackY_3c4 = 0;
        rgbColor_00.fields.b = 1.0;
        rgbColor_00.fields.a = 1.0;
        rgbColor_00.fields.r = 1.0;
        rgbColor_00.fields.g = 1.0;
        UnityEngine_Color__RGBToHSV
                  (rgbColor_00,(float *)&uStackY_3c4,(float *)((long)&uStackY_3c4 + 4),&fStackY_3bc,
                   (MethodInfo *)0x0);
        uVar35._0_1_ = 0xff;
        uVar35._1_1_ = 0xff;
        uVar35._2_1_ = 0xff;
        uVar35._3_1_ = 0xff;
        GStackY_3b8.H = (float)uStackY_3c4;
        GStackY_3b8.S = uStackY_3c4._4_4_;
        GStackY_3b8.V = fStackY_3bc;
      }
      else {
        uVar35 = GStackY_3a8._0_4_;
        GStackY_3b8.H = GStackY_3a8.H;
        GStackY_3b8.S = GStackY_3a8.S;
        GStackY_3b8.V = GStackY_3a8.V;
      }
      GStackY_3b8.R = (uint8_t)uVar35;
      GStackY_3b8.G = SUB41(uVar35,1);
      GStackY_3b8.B = SUB41(uVar35,2);
      GStackY_3b8.A = SUB41(uVar35,3);
      (pGVar23->fields)._value.fields.R = (uint8_t)uVar35;
      (pGVar23->fields)._value.fields.G = SUB41(uVar35,1);
      (pGVar23->fields)._value.fields.B = SUB41(uVar35,2);
      (pGVar23->fields)._value.fields.A = SUB41(uVar35,3);
      (pGVar23->fields)._value.fields.H = GStackY_3b8.H;
      (pGVar23->fields)._value.fields.S = GStackY_3b8.S;
      (pGVar23->fields)._value.fields.V = GStackY_3b8.V;
      pGVar31 = pGVar23;
      pGVar22 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pGVar23,(MethodInfo *)0x0);
      if ((pGVar22 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) &&
         (pIVar20 = UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)pGVar22,MethodInfo_LayoutElement_AddComponent_LayoutElement), pGVar31 = pGVar22,
         pIVar20 != (Il2CppObject *)0x0)) {
        if (cVar4 == '\0') {
          uVar35 = 0x435c0000;
        }
        else {
          uVar35 = 0x43820000;
        }
        (*pIVar20->klass->vtable[0x26].methodPtr)(uVar35,pIVar20,pIVar20->klass->vtable[0x26].method);
        pMVar26 = extraout_RDX_03;
        if (IVar16.rgctxDataDummy == (void *)0x0) {
          if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            pMVar26 = extraout_RDX_04;
          }
          IVar16 = (Il2CppRGCTXData)(*(Il2CppRGCTXData **)(TypeInfo_GisketchTheme + 0xb8))->method;
        }
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Build
                  (pGVar23,(Gisketch_Aottg2UI_Styling_GisketchTheme_o *)IVar16.method,pMVar26);
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(pGVar23,IVar16.method);
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(pGVar23,IVar16.method);
        return extraout_RAX_02;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9de2 == '\0') {
        il2cpp_runtime_helper_023445d0(&"-hex");
        g_data_057a9de2 = '\x01';
      }
      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                System_String__Concat_3ae5ba0((System_String_o *)pGVar31,"-hex",(MethodInfo *)0x0);
      return pGVar10;
    }
  }
label_03b6de71:
  return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT71((int7)((ulong)uVar25 >> 8),1);
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Label
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Label (System_String_o* id, System_String_o* text, float width, const MethodInfo* method);
// 0x3b6cea0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Label
          (System_String_o *id,System_String_o *text,float width,MethodInfo *method)

{
  Il2CppClass **value;
  byte bVar1;
  int iVar2;
  UnityEngine_Object_o *x;
  void *pvVar3;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this;
  char cVar4;
  bool_conflict bVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  System_String_o *pSVar9;
  undefined8 *puVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar11;
  undefined4 extraout_var;
  Il2CppRGCTXData IVar12;
  undefined4 extraout_var_00;
  Il2CppRGCTXData IVar13;
  undefined4 extraout_var_01;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *extraout_RAX;
  UnityEngine_Transform_o *pUVar14;
  Il2CppObject *pIVar15;
  Il2CppClass *pIVar16;
  Il2CppObject *pIVar17;
  UnityEngine_Events_UnityAction_o *pUVar18;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar19;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar20;
  Il2CppRGCTXData IVar21;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *extraout_RAX_00;
  undefined8 uVar22;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined8 extraout_RAX_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *extraout_RAX_02;
  Il2CppRGCTXData in_RCX;
  MethodInfo *pMVar23;
  Il2CppRGCTXData method_00;
  uint extraout_EDX;
  Il2CppRGCTXData extraout_RDX;
  Il2CppType **extraout_RDX_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  long lVar24;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  uint uVar25;
  Il2CppClass *str0;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar26;
  MethodInfo *in_R8;
  long *__this_01;
  MethodInfo_255B7B0 **ppMVar27;
  System_Delegate_o *pSVar28;
  System_Delegate_o *a;
  bool bVar29;
  undefined4 uVar30;
  UnityEngine_Color_o rgbColor;
  UnityEngine_Color_o rgbColor_00;
  undefined1 auVar31 [16];
  undefined8 uStackY_2e4;
  float fStackY_2dc;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields GStackY_2d8;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields GStackY_2c8;
  Il2CppRGCTXData IStackY_2b0;
  long *plStackY_2a8;
  Il2CppRGCTXData IStackY_2a0;
  long lStackY_298;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStackY_290;
  Il2CppRGCTXData IStackY_288;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o GStackY_280;
  undefined8 uStackY_258;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStackY_250;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStackY_248;
  System_Delegate_o *pSStackY_240;
  Il2CppRGCTXData IStackY_238;
  undefined4 uStackY_230;
  float fStackY_22c;
  float fStackY_228;
  float fStackY_224;
  void **ppvStackY_220;
  Il2CppClass **ppIStackY_218;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStackY_210;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStackY_208;
  long *plStackY_200;
  Il2CppRGCTXData IStackY_1f8;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o GStack_1d0;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_1a8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_1a0;
  Il2CppRGCTXData in_stack_fffffffffffffe98;
  MethodInfo *in_stack_fffffffffffffed0;
  MethodInfo *in_stack_ffffffffffffff48;
  System_Enum_o SStack_a8;
  undefined4 uStack_98;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_90;
  System_String_o *pSStack_88;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (g_data_057a9dda == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"text");
    g_data_057a9dda = '\x01';
  }
  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  uVar25 = 0;
  pGVar11 = pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar6,(MethodInfo *)0x0);
  if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar6->fields).type = "Text";
    il2cpp_runtime_helper_022b4080(&pGVar6->fields);
    (pGVar6->fields).id = id;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).id,id);
    (pGVar6->fields).text = text;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).text,text);
    (pGVar6->fields).style = "text";
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).style);
    if (g_data_057a9d9a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"point");
      g_data_057a9d9a = '\x01';
    }
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    uVar25 = 0;
    pGVar11 = pGVar7;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar7,(MethodInfo *)0x0);
    text = (System_String_o *)0x0;
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(float *)&(pGVar7->fields).type = width;
      (pGVar7->fields).id = "point";
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).id);
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar7,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,in_stack_ffffffffffffffd0);
      (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar8);
      return pGVar6;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGStack_90 = pGVar6;
  pSStack_88 = text;
  if (g_data_057a9dd8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgInputType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"InputField");
    il2cpp_runtime_helper_023445d0(&"inputField");
    il2cpp_runtime_helper_023445d0(&"#RRGGBBAA");
    il2cpp_runtime_helper_023445d0(&"#RRGGBB");
    g_data_057a9dd8 = '\x01';
  }
  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pSVar9 = (System_String_o *)0x0;
  __this_01 = (long *)pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar6,(MethodInfo *)0x0);
  if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar6->fields).type = "InputField";
    il2cpp_runtime_helper_022b4080(&pGVar6->fields);
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057a9de2 == '\0') {
      il2cpp_runtime_helper_023445d0(&"-hex");
      g_data_057a9de2 = '\x01';
    }
    pSVar9 = System_String__Concat_3ae5ba0((System_String_o *)pGVar11,"-hex",(MethodInfo *)0x0);
    (pGVar6->fields).id = pSVar9;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).id,pSVar9);
    if ((char)uVar25 == '\0') {
      puVar10 = &"#RRGGBB";
    }
    else {
      puVar10 = &"#RRGGBBAA";
    }
    (pGVar6->fields).placeholder = (System_String_o *)*puVar10;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).placeholder);
    SStack_a8.klass = TypeInfo_AottgInputType;
    SStack_a8.monitor = (void *)0xffffffffffffffff;
    uStack_98 = 0;
    pSVar9 = System_Enum__ToString(&SStack_a8,(MethodInfo *)0x0);
    (pGVar6->fields).inputType = pSVar9;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).inputType,pSVar9);
    (pGVar6->fields).style = "inputField";
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).style);
    (pGVar6->fields).max.fields.value = (float)((uVar25 & 0xff) * 2 + 7);
    if (g_data_057a9d9b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"percent");
      g_data_057a9d9b = '\x01';
    }
    pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    pSVar9 = (System_String_o *)0x0;
    __this_01 = (long *)pGVar11;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar11,(MethodInfo *)0x0);
    if (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined4 *)&(pGVar11->fields).type = 0x42c80000;
      (pGVar11->fields).id = (System_String_o *)"percent";
      il2cpp_runtime_helper_022b4080(&(pGVar11->fields).id);
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar11,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,in_stack_ffffffffffffff48);
      (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar8);
      return pGVar6;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ddc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Button");
    g_data_057a9ddc = '\x01';
  }
  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pIVar16 = (Il2CppClass *)0x0;
  pGVar11 = pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar6,(MethodInfo *)0x0);
  IVar12 = extraout_RDX;
  if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar6->fields).type = "Button";
    il2cpp_runtime_helper_022b4080(&pGVar6->fields);
    (pGVar6->fields).id = (System_String_o *)__this_01;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).id,__this_01);
    (pGVar6->fields).text = pSVar9;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).text,pSVar9);
    (pGVar6->fields).style = (System_String_o *)extraout_RDX;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).style);
    if (g_data_057a9d9b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"percent");
      g_data_057a9d9b = '\x01';
    }
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    pIVar16 = (Il2CppClass *)0x0;
    pGVar11 = pGVar7;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar7,(MethodInfo *)0x0);
    IVar12.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined4 *)&(pGVar7->fields).type = 0x42c80000;
      (pGVar7->fields).id = (System_String_o *)"percent";
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).id);
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar7,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,in_stack_fffffffffffffed0);
      (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar8);
      return pGVar6;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  str0 = pIVar16;
  pGStack_1a8 = pGVar6;
  pGStack_1a0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_01;
  if (g_data_057a9dd5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIColorPickerPopover_AddComponent_GisketchUIColo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"color-picker-");
    g_data_057a9dd5 = '\x01';
  }
  GStack_1d0.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  GStack_1d0.fields.LivePreview = 0;
  GStack_1d0.fields.Disabled = 0;
  GStack_1d0.fields.Id = (System_String_o *)0x0;
  GStack_1d0.fields.EnableAlpha = 0;
  GStack_1d0.fields._12_4_ = 0;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  IVar21.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
  if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)**(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8) !=
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    in_RCX = MethodInfo_Boolean_TryGetValue;
    bVar5 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       **(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8),(Il2CppObject *)pGVar11,&GStack_1d0,
                       (MethodInfo_3128A90 *)MethodInfo_Boolean_TryGetValue.method);
    if ((char)bVar5 == '\0') {
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var,bVar5);
    }
    if ((GStack_1d0.fields._24_8_ & 0x100) != 0) {
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var,bVar5);
    }
    __this_01 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    IVar12.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    str0 = (Il2CppClass *)0x0;
    IVar21 = in_stack_fffffffffffffe98;
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)in_stack_fffffffffffffe98.method,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      if (in_stack_fffffffffffffe98.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03b6d711;
      IVar12.rgctxDataDummy =
           UnityEngine_GameObject__GetComponentInParent_object_
                     (in_stack_fffffffffffffe98.rgctxDataDummy,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    str0 = (Il2CppClass *)0x0;
    IVar21 = IVar12;
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)IVar12.method,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var_00,bVar5);
    }
    if (IVar12.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
      __this_01 = (long *)((Il2CppRGCTXData *)&(IVar12.klass)->_1)[0x11].method;
      if ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_01 ==
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var_00,bVar5);
      }
      pGVar6 = pGVar11;
      pSVar9 = System_String__Concat_3ae5ba0("color-picker-",(System_String_o *)pGVar11,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__PopoverNode
                         ((System_String_o *)pGVar11,(MethodInfo *)pGVar6);
      in_R8 = (MethodInfo *)((ulong)pIVar16 & 0xff);
      IStackY_1f8 = (Il2CppRGCTXData)0x3b6d6a4;
      in_RCX = in_stack_fffffffffffffe98;
      IVar13.rgctxDataDummy =
           Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
                     ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_01,pSVar9,pGVar6,
                      in_stack_fffffffffffffe98.rgctxDataDummy,(bool_conflict)in_R8,0,8.0,1,(MethodInfo *)0x0)
      ;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      str0 = (Il2CppClass *)0x0;
      IVar21.method = IVar13.method;
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)IVar13.method,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var_01,bVar5);
      }
      if ((IVar13.rgctxDataDummy != (Il2CppRGCTXData *)0x0) &&
         (str0 = (Il2CppClass *)MethodInfo_GisketchUIColorPickerPopover_AddComponent_GisketchUIColo,
         __this_00 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)
                     UnityEngine_GameObject__AddComponent_object_
                               ((UnityEngine_GameObject_o *)IVar13.method,(MethodInfo_255A020 *)MethodInfo_GisketchUIColorPickerPopover_AddComponent_GisketchUIColo),
         IVar21 = IVar13, __this_00 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)0x0)) {
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Setup
                  (__this_00,(System_String_o *)pGVar11,
                   (UnityEngine_GameObject_o *)in_stack_fffffffffffffe98.method,
                   (Gisketch_Aottg2UI_GisketchUIRoot_o *)IVar12.method,in_R8);
        return extraout_RAX;
      }
    }
  }
label_03b6d711:
  il2cpp_runtime_helper_022b2c90();
  plStackY_200 = &TypeInfo_GisketchUIColorPicker;
  pGStackY_210 = pGVar11;
  pGStackY_208 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_01;
  IStackY_1f8 = IVar12;
  if (g_data_057a9deb == '\0') {
    pSStackY_240 = (System_Delegate_o *)0x3b6d753;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchUIColorPickerValue);
    pSStackY_240 = (System_Delegate_o *)0x3b6d75f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Cancel);
    pSStackY_240 = (System_Delegate_o *)0x3b6d76b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnVisualChanged);
    pSStackY_240 = (System_Delegate_o *)0x3b6d777;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Save);
    pSStackY_240 = (System_Delegate_o *)0x3b6d783;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIColorPickerVisual_Find_GisketchUIColorPickerVi);
    pSStackY_240 = (System_Delegate_o *)0x3b6d78f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_Find_TMP_InputField);
    pSStackY_240 = (System_Delegate_o *)0x3b6d79b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    pSStackY_240 = (System_Delegate_o *)0x3b6d7a7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pSStackY_240 = (System_Delegate_o *)0x3b6d7b3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pSStackY_240 = (System_Delegate_o *)0x3b6d7bf;
    il2cpp_runtime_helper_023445d0(&"-cancel");
    pSStackY_240 = (System_Delegate_o *)0x3b6d7cb;
    il2cpp_runtime_helper_023445d0(&"-save");
    pSStackY_240 = (System_Delegate_o *)0x3b6d7d7;
    il2cpp_runtime_helper_023445d0(&"-g");
    pSStackY_240 = (System_Delegate_o *)0x3b6d7e3;
    il2cpp_runtime_helper_023445d0(&"-r");
    pSStackY_240 = (System_Delegate_o *)0x3b6d7ef;
    il2cpp_runtime_helper_023445d0(&"-b");
    g_data_057a9deb = '\x01';
  }
  (IVar21.method)->klass = str0;
  pSStackY_240 = (System_Delegate_o *)0x3b6d806;
  il2cpp_runtime_helper_022b4080(&(IVar21.method)->klass,str0);
  (IVar21.method)->parameters = extraout_RDX_00;
  pSStackY_240 = (System_Delegate_o *)0x3b6d816;
  il2cpp_runtime_helper_022b4080(&(IVar21.method)->parameters,extraout_RDX_00);
  (IVar21.method)->field7_0x38 = (_union_13)in_RCX;
  pSStackY_240 = (System_Delegate_o *)0x3b6d826;
  il2cpp_runtime_helper_022b4080(&(IVar21.method)->field7_0x38);
  pSStackY_240 = (System_Delegate_o *)0x3b6d830;
  pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar21.method,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    pSStackY_240 = (System_Delegate_o *)0x3b6d8ea;
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9de1 == '\0') {
    pSStackY_240 = (System_Delegate_o *)0x3b6d860;
    il2cpp_runtime_helper_023445d0(&"-visual");
    g_data_057a9de1 = '\x01';
  }
  pSStackY_240 = (System_Delegate_o *)0x3b6d87b;
  pSVar9 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-visual",(MethodInfo *)0x0);
  pSStackY_240 = (System_Delegate_o *)0x3b6d891;
  pIVar15 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar14,pSVar9,MethodInfo_GisketchUIColorPickerVisual_Find_GisketchUIColorPickerVi);
  pIVar17 = pIVar15 + 9;
  if (pIVar15 == (Il2CppObject *)0x0) {
    pIVar17 = (Il2CppObject *)&(IVar21.method)->return_type;
  }
  bVar1 = *(byte *)&pIVar17->klass;
  *(byte *)&(IVar21.method)->return_type = bVar1;
  IStackY_238 = IVar21;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    pSStackY_240 = (System_Delegate_o *)0x3b6d901;
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057a9dd0 == '\0') goto label_03b6d90a;
label_03b6d8c7:
    if (bVar1 != 0) goto label_03b6d8cc;
label_03b6d93a:
    iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
    pSVar9 = "#FFFFFF";
  }
  else {
    if (g_data_057a9dd0 != '\0') goto label_03b6d8c7;
label_03b6d90a:
    pSStackY_240 = (System_Delegate_o *)0x3b6d916;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    pSStackY_240 = (System_Delegate_o *)0x3b6d922;
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    pSStackY_240 = (System_Delegate_o *)0x3b6d92e;
    il2cpp_runtime_helper_023445d0(&"#FFFFFF");
    g_data_057a9dd0 = '\x01';
    if (bVar1 == 0) goto label_03b6d93a;
label_03b6d8cc:
    iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
    pSVar9 = "#FFFFFFFF";
  }
  if (iVar2 == 0) {
    pSStackY_240 = (System_Delegate_o *)0x3b6d956;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStackY_240 = (System_Delegate_o *)0x3b6d965;
  pSVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                     ((System_String_o *)str0,pSVar9,(uint)bVar1,IVar21.method);
  IVar12 = IStackY_238;
  value = &((IStackY_238.klass)->_1).element_class;
  pSStackY_240 = (System_Delegate_o *)0x3b6d97c;
  bVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                    (pSVar9,(uint)*(byte *)&(IStackY_238.method)->return_type,
                     (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)value,IVar21.method);
  if ((char)bVar5 == '\0') {
    fStackY_224 = 0.0;
    fStackY_22c = 0.0;
    fStackY_228 = 0.0;
    uStackY_230 = 0xffffffff;
    pSStackY_240 = (System_Delegate_o *)0x3b6d9b9;
    rgbColor.fields.b = 1.0;
    rgbColor.fields.a = 1.0;
    rgbColor.fields.r = 1.0;
    rgbColor.fields.g = 1.0;
    UnityEngine_Color__RGBToHSV(rgbColor,&fStackY_22c,&fStackY_228,&fStackY_224,(MethodInfo *)0x0);
    *value = (Il2CppClass *)CONCAT44(fStackY_22c,uStackY_230);
    ((IVar12.klass)->_1).castClass = (Il2CppClass *)CONCAT44(fStackY_224,fStackY_228);
  }
  pSStackY_240 = (System_Delegate_o *)0x3b6d9d0;
  ppIStackY_218 = value;
  pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar12.method,(MethodInfo *)0x0);
  pSStackY_240 = (System_Delegate_o *)0x3b6d9e7;
  pSVar9 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-r",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    pSStackY_240 = (System_Delegate_o *)0x3b6d9fc;
    il2cpp_runtime_helper_02337ed0();
  }
  ppMVar27 = &MethodInfo_TMP_InputField_Find_TMP_InputField;
  pSStackY_240 = (System_Delegate_o *)0x3b6da12;
  pIVar16 = (Il2CppClass *)
            Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar14,pSVar9,MethodInfo_TMP_InputField_Find_TMP_InputField);
  ((IVar12.klass)->_1).declaringType = pIVar16;
  pSStackY_240 = (System_Delegate_o *)0x3b6da22;
  il2cpp_runtime_helper_022b4080(&(IVar12.method)->slot);
  pSStackY_240 = (System_Delegate_o *)0x3b6da2c;
  pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar12.method,(MethodInfo *)0x0);
  pSStackY_240 = (System_Delegate_o *)0x3b6da43;
  pSVar9 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-g",(MethodInfo *)0x0);
  pSStackY_240 = (System_Delegate_o *)0x3b6da52;
  pIVar16 = (Il2CppClass *)
            Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar14,pSVar9,MethodInfo_TMP_InputField_Find_TMP_InputField);
  ((IVar12.klass)->_1).parent = pIVar16;
  pSStackY_240 = (System_Delegate_o *)0x3b6da62;
  il2cpp_runtime_helper_022b4080(&((IVar12.klass)->_1).parent);
  pSStackY_240 = (System_Delegate_o *)0x3b6da6c;
  pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar12.method,(MethodInfo *)0x0);
  pSStackY_240 = (System_Delegate_o *)0x3b6da83;
  pSVar9 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-b",(MethodInfo *)0x0);
  pSStackY_240 = (System_Delegate_o *)0x3b6da92;
  pIVar17 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar14,pSVar9,MethodInfo_TMP_InputField_Find_TMP_InputField);
  ((IVar12.klass)->_1).generic_class = pIVar17;
  pSStackY_240 = (System_Delegate_o *)0x3b6daa2;
  il2cpp_runtime_helper_022b4080(&((IVar12.klass)->_1).generic_class);
  pSStackY_240 = (System_Delegate_o *)0x3b6daac;
  pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar12.method,(MethodInfo *)0x0);
  if (g_data_057a9de2 == '\0') {
    pSStackY_240 = (System_Delegate_o *)0x3b6dac4;
    il2cpp_runtime_helper_023445d0(&"-hex");
    g_data_057a9de2 = '\x01';
  }
  pSStackY_240 = (System_Delegate_o *)0x3b6dadf;
  pSVar9 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-hex",(MethodInfo *)0x0);
  pSStackY_240 = (System_Delegate_o *)0x3b6daee;
  pIVar17 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar14,pSVar9,MethodInfo_TMP_InputField_Find_TMP_InputField);
  ((IVar12.klass)->_1).typeMetadataHandle = pIVar17;
  pSStackY_240 = (System_Delegate_o *)0x3b6dafe;
  il2cpp_runtime_helper_022b4080(&((IVar12.klass)->_1).typeMetadataHandle);
  pSStackY_240 = (System_Delegate_o *)0x3b6db08;
  pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar12.method,(MethodInfo *)0x0);
  if (g_data_057a9de1 == '\0') {
    pSStackY_240 = (System_Delegate_o *)0x3b6db20;
    il2cpp_runtime_helper_023445d0(&"-visual");
    g_data_057a9de1 = '\x01';
  }
  pSStackY_240 = (System_Delegate_o *)0x3b6db3b;
  pSVar9 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-visual",(MethodInfo *)0x0);
  pSStackY_240 = (System_Delegate_o *)0x3b6db4a;
  pIVar17 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar14,pSVar9,MethodInfo_GisketchUIColorPickerVisual_Find_GisketchUIColorPickerVi);
  pGVar20 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)&((IVar12.klass)->_1).interopData;
  ((IVar12.klass)->_1).interopData = pIVar17;
  pSStackY_240 = (System_Delegate_o *)0x3b6db5d;
  il2cpp_runtime_helper_022b4080(pGVar20,pIVar17);
  pSStackY_240 = (System_Delegate_o *)0x3b6db69;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IVar12.method,
             (TMPro_TMP_InputField_o *)((IVar12.klass)->_1).declaringType,method_01);
  pSStackY_240 = (System_Delegate_o *)0x3b6db75;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IVar12.method,
             (TMPro_TMP_InputField_o *)((IVar12.klass)->_1).parent,method_02);
  pSStackY_240 = (System_Delegate_o *)0x3b6db81;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IVar12.method,
             ((IVar12.klass)->_1).generic_class,method_03);
  pSStackY_240 = (System_Delegate_o *)0x3b6db8d;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireHexInput
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IVar12.method,
             ((IVar12.klass)->_1).typeMetadataHandle,method_04);
  pSStackY_240 = (System_Delegate_o *)0x3b6dba1;
  pSVar9 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-cancel",(MethodInfo *)0x0);
  pSVar28 = (System_Delegate_o *)&TypeInfo_UnityAction;
  pSStackY_240 = (System_Delegate_o *)0x3b6dbb3;
  pUVar18 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  pMVar23 = (MethodInfo *)0x0;
  pSStackY_240 = (System_Delegate_o *)0x3b6dbce;
  UnityEngine_Events_UnityAction___ctor();
  pSStackY_240 = (System_Delegate_o *)0x3b6dbdd;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IStackY_238.method,pSVar9,pUVar18,
             pMVar23);
  pSStackY_240 = (System_Delegate_o *)0x3b6dbf1;
  pSVar9 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-save",(MethodInfo *)0x0);
  pSStackY_240 = (System_Delegate_o *)0x3b6dbfc;
  pUVar18 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  pMVar23 = (MethodInfo *)0x0;
  pSStackY_240 = (System_Delegate_o *)0x3b6dc17;
  UnityEngine_Events_UnityAction___ctor();
  IVar12 = IStackY_238;
  pSStackY_240 = (System_Delegate_o *)0x3b6dc2a;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IStackY_238.method,pSVar9,pUVar18,
             pMVar23);
  x = ((IVar12.klass)->_1).interopData;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pSStackY_240 = (System_Delegate_o *)0x3b6dc46;
    il2cpp_runtime_helper_02337ed0();
  }
  IVar21.rgctxDataDummy = (void *)0x0;
  pSStackY_240 = (System_Delegate_o *)0x3b6dc52;
  bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_03b6dd55:
    pSStackY_240 = (System_Delegate_o *)0x3b6dd5d;
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SyncFields
              ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IVar12.method,IVar21.method);
    return extraout_RAX_00;
  }
  pvVar3 = ((IVar12.klass)->_1).interopData;
  pSStackY_240 = (System_Delegate_o *)0x3b6dc6d;
  pGVar19 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
            il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchUIColorPickerValue.rgctxDataDummy);
  IVar13.rgctxDataDummy = (void *)0x0;
  pSStackY_240 = (System_Delegate_o *)0x3b6dc87;
  IVar21 = IVar12;
  pGVar26 = pGVar19;
  System_Action_GisketchUIColorPickerValue____ctor();
  if (pvVar3 != (void *)0x0) {
    ppvStackY_220 = (void **)pGVar20;
    if (g_data_057a9dfd == '\0') {
      pSStackY_240 = (System_Delegate_o *)0x3b6dcaa;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchUIColorPickerValue);
      g_data_057a9dfd = '\x01';
    }
    a = *(System_Delegate_o **)((long)pvVar3 + 0x88);
    do {
      pSStackY_240 = (System_Delegate_o *)0x3b6dcf6;
      pGVar20 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
                System_Delegate__Combine(a,(System_Delegate_o *)pGVar19,(MethodInfo *)0x0);
      IVar12 = TypeInfo_Action_GisketchUIColorPickerValue;
      IVar21.rgctxDataDummy = (void *)0x0;
      if (pGVar20 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
        pSStackY_240 = (System_Delegate_o *)0x3b6dd18;
        IVar21.rgctxDataDummy = (void *)il2cpp_runtime_helper_023051f0(pGVar20,TypeInfo_Action_GisketchUIColorPickerValue.rgctxDataDummy);
        ppMVar27 = (MethodInfo_255B7B0 **)IVar12;
        if (IVar21.rgctxDataDummy == (void *)0x0) {
          pSStackY_240 = (System_Delegate_o *)0x3b6dd28;
          IVar21 = IVar12;
          pGVar26 = pGVar20;
          il2cpp_runtime_helper_022b2fd0();
          pSVar28 = a;
          break;
        }
      }
      pSStackY_240 = (System_Delegate_o *)0x3b6dcde;
      pGVar26 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)((long)pvVar3 + 0x88);
      pSVar28 = (System_Delegate_o *)
                il2cpp_runtime_helper_02300640((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)((long)pvVar3 + 0x88),
                             IVar21.rgctxDataDummy,a);
      bVar29 = a != pSVar28;
      a = pSVar28;
    } while (bVar29);
    IVar12 = IStackY_238;
    __this = *ppvStackY_220;
    if (__this != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
      pIVar16 = ppIStackY_218[1];
      *(Il2CppClass **)&(__this->fields)._value.fields = *ppIStackY_218;
      *(Il2CppClass **)&(__this->fields)._value.fields.S = pIVar16;
      pSStackY_240 = (System_Delegate_o *)0x3b6dd4d;
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this,IVar21.method);
      pSStackY_240 = (System_Delegate_o *)0x3b6dd55;
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,IVar21.method);
      goto label_03b6dd55;
    }
  }
  pSStackY_240 = (System_Delegate_o *)0x3b6dd71;
  auVar31 = il2cpp_runtime_helper_022b2c90();
  lVar24 = auVar31._8_8_;
  uVar22 = auVar31._0_8_;
  uStackY_258 = 0;
  pGStackY_250 = pGVar20;
  pGStackY_248 = pGVar19;
  pSStackY_240 = pSVar28;
  if (g_data_057a9dd6 == '\0') {
    IStackY_288 = (Il2CppRGCTXData)0x3b6dda9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    IStackY_288 = (Il2CppRGCTXData)0x3b6ddb5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIColorPickerVisual_AddComponent_GisketchUIColor);
    IStackY_288 = (Il2CppRGCTXData)0x3b6ddc1;
    uVar22 = il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    g_data_057a9dd6 = '\x01';
  }
  GStackY_280.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  GStackY_280.fields.LivePreview = 0;
  GStackY_280.fields.Disabled = 0;
  GStackY_280.fields.Id = (System_String_o *)0x0;
  GStackY_280.fields.EnableAlpha = 0;
  GStackY_280.fields._12_4_ = 0;
  if (IVar21.rgctxDataDummy != (void *)0x0) {
    pIVar16 = (Il2CppClass *)0x0;
    IStackY_288 = (Il2CppRGCTXData)0x3b6dde8;
    bVar5 = System_String__IsNullOrEmpty
                      ((System_String_o *)((IVar21.klass)->_1).declaringType,(MethodInfo *)0x0);
    uVar22 = CONCAT44(extraout_var_02,bVar5);
    if ((char)bVar5 == '\0') {
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        IStackY_288 = (Il2CppRGCTXData)0x3b6de09;
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar20 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)**(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8)
      ;
      if (pGVar20 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
        pIVar16 = ((IVar21.klass)->_1).declaringType;
        IStackY_288 = (Il2CppRGCTXData)0x3b6de32;
        IVar13 = MethodInfo_Boolean_TryGetValue;
        bVar5 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar20,
                           (Il2CppObject *)pIVar16,&GStackY_280,(MethodInfo_3128A90 *)MethodInfo_Boolean_TryGetValue.method);
        uVar22 = CONCAT44(extraout_var_03,bVar5);
        if ((char)bVar5 == '\0') goto label_03b6de71;
        if (pGVar26 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
          IStackY_288 = (Il2CppRGCTXData)0x3b6de4d;
          pIVar16 = (Il2CppClass *)MethodInfo_GisketchUIColorPickerVisual_AddComponent_GisketchUIColor;
          pGVar20 = pGVar26;
          pGVar19 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
                    UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)pGVar26,(MethodInfo_255A020 *)MethodInfo_GisketchUIColorPickerVisual_AddComponent_GisketchUIColor);
          if ((lVar24 != 0) && (pGVar19 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0)) {
            IStackY_288 = (Il2CppRGCTXData)0x3b6de71;
            Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Setup
                      (pGVar19,(System_String_o *)((IVar21.klass)->_1).declaringType,
                       (uint)((byte)GStackY_280.fields.EnableAlpha & 1),
                       *(Gisketch_Aottg2UI_Styling_GisketchTheme_o **)(lVar24 + 0x18),in_R8);
            uVar22 = extraout_RAX_01;
            goto label_03b6de71;
          }
        }
      }
      IStackY_288 = (Il2CppRGCTXData)0x3b6de84;
      il2cpp_runtime_helper_022b2c90();
      plStackY_2a8 = &TypeInfo_GisketchUIColorPicker;
      cVar4 = (char)extraout_EDX;
      method_00 = IVar13;
      IStackY_2b0 = IVar21;
      IStackY_2a0 = (Il2CppRGCTXData)ppMVar27;
      lStackY_298 = lVar24;
      pGStackY_290 = pGVar26;
      IStackY_288 = IVar12;
      if (g_data_057a9dff == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
        g_data_057a9dff = '\x01';
      }
      GStackY_2c8.R = '\0';
      GStackY_2c8.G = '\0';
      GStackY_2c8.B = '\0';
      GStackY_2c8.A = '\0';
      GStackY_2c8.H = 0.0;
      GStackY_2c8.S = 0.0;
      GStackY_2c8.V = 0.0;
      GStackY_2d8.R = '\0';
      GStackY_2d8.G = '\0';
      GStackY_2d8.B = '\0';
      GStackY_2d8.A = '\0';
      GStackY_2d8.H = 0.0;
      GStackY_2d8.S = 0.0;
      GStackY_2d8.V = 0.0;
      *(char *)&(pGVar20->fields)._EnableAlpha_k__BackingField = cVar4;
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057a9dd0 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
        il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
        il2cpp_runtime_helper_023445d0(&"#FFFFFF");
        g_data_057a9dd0 = '\x01';
      }
      if (cVar4 == '\0') {
        iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
        pSVar9 = "#FFFFFF";
      }
      else {
        iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
        pSVar9 = "#FFFFFFFF";
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                         ((System_String_o *)pIVar16,pSVar9,extraout_EDX & 0xff,method_00.method);
      bVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                        (pSVar9,extraout_EDX & 0xff,
                         (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&GStackY_2c8,method_00.method)
      ;
      if ((char)bVar5 == '\0') {
        fStackY_2dc = 0.0;
        uStackY_2e4 = 0;
        rgbColor_00.fields.b = 1.0;
        rgbColor_00.fields.a = 1.0;
        rgbColor_00.fields.r = 1.0;
        rgbColor_00.fields.g = 1.0;
        UnityEngine_Color__RGBToHSV
                  (rgbColor_00,(float *)&uStackY_2e4,(float *)((long)&uStackY_2e4 + 4),&fStackY_2dc,
                   (MethodInfo *)0x0);
        uVar30._0_1_ = 0xff;
        uVar30._1_1_ = 0xff;
        uVar30._2_1_ = 0xff;
        uVar30._3_1_ = 0xff;
        GStackY_2d8.H = (float)uStackY_2e4;
        GStackY_2d8.S = uStackY_2e4._4_4_;
        GStackY_2d8.V = fStackY_2dc;
      }
      else {
        uVar30 = GStackY_2c8._0_4_;
        GStackY_2d8.H = GStackY_2c8.H;
        GStackY_2d8.S = GStackY_2c8.S;
        GStackY_2d8.V = GStackY_2c8.V;
      }
      GStackY_2d8.R = (uint8_t)uVar30;
      GStackY_2d8.G = SUB41(uVar30,1);
      GStackY_2d8.B = SUB41(uVar30,2);
      GStackY_2d8.A = SUB41(uVar30,3);
      (pGVar20->fields)._value.fields.R = (uint8_t)uVar30;
      (pGVar20->fields)._value.fields.G = SUB41(uVar30,1);
      (pGVar20->fields)._value.fields.B = SUB41(uVar30,2);
      (pGVar20->fields)._value.fields.A = SUB41(uVar30,3);
      (pGVar20->fields)._value.fields.H = GStackY_2d8.H;
      (pGVar20->fields)._value.fields.S = GStackY_2d8.S;
      (pGVar20->fields)._value.fields.V = GStackY_2d8.V;
      pGVar26 = pGVar20;
      pGVar19 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pGVar20,(MethodInfo *)0x0);
      if ((pGVar19 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) &&
         (pIVar17 = UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)pGVar19,MethodInfo_LayoutElement_AddComponent_LayoutElement), pGVar26 = pGVar19,
         pIVar17 != (Il2CppObject *)0x0)) {
        if (cVar4 == '\0') {
          uVar30 = 0x435c0000;
        }
        else {
          uVar30 = 0x43820000;
        }
        (*pIVar17->klass->vtable[0x26].methodPtr)(uVar30,pIVar17,pIVar17->klass->vtable[0x26].method);
        pMVar23 = extraout_RDX_01;
        if (IVar13.rgctxDataDummy == (void *)0x0) {
          if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            pMVar23 = extraout_RDX_02;
          }
          IVar13 = (Il2CppRGCTXData)(*(Il2CppRGCTXData **)(TypeInfo_GisketchTheme + 0xb8))->method;
        }
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Build
                  (pGVar20,(Gisketch_Aottg2UI_Styling_GisketchTheme_o *)IVar13.method,pMVar23);
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(pGVar20,IVar13.method);
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(pGVar20,IVar13.method);
        return extraout_RAX_02;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9de2 == '\0') {
        il2cpp_runtime_helper_023445d0(&"-hex");
        g_data_057a9de2 = '\x01';
      }
      pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                System_String__Concat_3ae5ba0((System_String_o *)pGVar26,"-hex",(MethodInfo *)0x0);
      return pGVar11;
    }
  }
label_03b6de71:
  return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT71((int7)((ulong)uVar22 >> 8),1);
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Row
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Row (System_String_o* id, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* children, const MethodInfo* method);
// 0x3b6ccb0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Row
          (System_String_o *id,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *children,
          MethodInfo *method)

{
  Il2CppClass **value;
  byte bVar1;
  int iVar2;
  UnityEngine_Object_o *x;
  void *pvVar3;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this;
  char cVar4;
  bool_conflict bVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar9;
  System_String_o *pSVar10;
  undefined8 *puVar11;
  undefined4 extraout_var;
  Il2CppRGCTXData IVar12;
  undefined4 extraout_var_00;
  Il2CppRGCTXData IVar13;
  undefined4 extraout_var_01;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *extraout_RAX;
  UnityEngine_Transform_o *pUVar14;
  Il2CppObject *pIVar15;
  Il2CppClass *pIVar16;
  Il2CppObject *pIVar17;
  UnityEngine_Events_UnityAction_o *pUVar18;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar19;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar20;
  Il2CppRGCTXData IVar21;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *extraout_RAX_00;
  undefined8 uVar22;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined8 extraout_RAX_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *extraout_RAX_02;
  Il2CppRGCTXData in_RCX;
  MethodInfo *pMVar23;
  Il2CppRGCTXData method_00;
  uint extraout_EDX;
  Il2CppRGCTXData extraout_RDX;
  Il2CppType **extraout_RDX_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  long lVar24;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  uint uVar25;
  Il2CppClass *str0;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar26;
  MethodInfo *in_R8;
  long *__this_01;
  MethodInfo_255B7B0 **ppMVar27;
  System_Delegate_o *pSVar28;
  System_Delegate_o *a;
  bool bVar29;
  undefined4 uVar30;
  UnityEngine_Color_o rgbColor;
  UnityEngine_Color_o rgbColor_00;
  undefined1 auVar31 [16];
  undefined8 uStackY_34c;
  float fStackY_344;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields GStackY_340;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields GStackY_330;
  Il2CppRGCTXData IStackY_318;
  long *plStackY_310;
  Il2CppRGCTXData IStackY_308;
  long lStackY_300;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStackY_2f8;
  Il2CppRGCTXData IStackY_2f0;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o GStackY_2e8;
  undefined8 uStackY_2c0;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStackY_2b8;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStackY_2b0;
  System_Delegate_o *pSStackY_2a8;
  Il2CppRGCTXData IStackY_2a0;
  undefined4 uStackY_298;
  float fStackY_294;
  float fStackY_290;
  float fStackY_28c;
  void **ppvStackY_288;
  Il2CppClass **ppIStackY_280;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStackY_278;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStackY_270;
  long *plStackY_268;
  Il2CppRGCTXData IStackY_260;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o GStack_238;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_210;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_208;
  Il2CppRGCTXData in_stack_fffffffffffffe30;
  MethodInfo *in_stack_fffffffffffffe68;
  MethodInfo *in_stack_fffffffffffffee0;
  System_Enum_o SStack_110;
  undefined4 uStack_100;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_f8;
  System_String_o *pSStack_f0;
  MethodInfo *in_stack_ffffffffffffff68;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  if (g_data_057a9ddb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"Panel");
    g_data_057a9ddb = '\x01';
  }
  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pSVar10 = (System_String_o *)0x0;
  pGVar9 = pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar6,(MethodInfo *)0x0);
  if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar6->fields).type = "Panel";
    il2cpp_runtime_helper_022b4080(&pGVar6->fields);
    (pGVar6->fields).id = id;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).id,id);
    (pGVar6->fields).style = "clear";
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).style);
    if (g_data_057a9d9b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"percent");
      g_data_057a9d9b = '\x01';
    }
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    pSVar10 = (System_String_o *)0x0;
    pGVar9 = pGVar7;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar7,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined4 *)&(pGVar7->fields).type = 0x42c80000;
      (pGVar7->fields).id = (System_String_o *)"percent";
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).id);
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                          (System_String_o *)0x0,8.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar7,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,in_stack_ffffffffffffffe0);
      (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar8);
      (pGVar6->fields).deferredChildren = children;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).deferredChildren,children);
      return pGVar6;
    }
  }
  uVar30 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9dda == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"text");
    g_data_057a9dda = '\x01';
  }
  pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  uVar25 = 0;
  pGVar6 = pGVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar7,(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar7->fields).type = "Text";
    il2cpp_runtime_helper_022b4080(&pGVar7->fields);
    (pGVar7->fields).id = (System_String_o *)pGVar9;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).id,pGVar9);
    (pGVar7->fields).text = pSVar10;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).text,pSVar10);
    (pGVar7->fields).style = "text";
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).style);
    if (g_data_057a9d9a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"point");
      g_data_057a9d9a = '\x01';
    }
    pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    uVar25 = 0;
    pGVar6 = pGVar9;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar9,(MethodInfo *)0x0);
    pSVar10 = (System_String_o *)0x0;
    if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined4 *)&(pGVar9->fields).type = uVar30;
      (pGVar9->fields).id = "point";
      il2cpp_runtime_helper_022b4080(&(pGVar9->fields).id);
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar9,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,in_stack_ffffffffffffff68);
      (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar8);
      return pGVar7;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGStack_f8 = pGVar7;
  pSStack_f0 = pSVar10;
  if (g_data_057a9dd8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgInputType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"InputField");
    il2cpp_runtime_helper_023445d0(&"inputField");
    il2cpp_runtime_helper_023445d0(&"#RRGGBBAA");
    il2cpp_runtime_helper_023445d0(&"#RRGGBB");
    g_data_057a9dd8 = '\x01';
  }
  pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pSVar10 = (System_String_o *)0x0;
  __this_01 = (long *)pGVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar9,(MethodInfo *)0x0);
  if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar9->fields).type = "InputField";
    il2cpp_runtime_helper_022b4080(&pGVar9->fields);
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057a9de2 == '\0') {
      il2cpp_runtime_helper_023445d0(&"-hex");
      g_data_057a9de2 = '\x01';
    }
    pSVar10 = System_String__Concat_3ae5ba0((System_String_o *)pGVar6,"-hex",(MethodInfo *)0x0);
    (pGVar9->fields).id = pSVar10;
    il2cpp_runtime_helper_022b4080(&(pGVar9->fields).id,pSVar10);
    if ((char)uVar25 == '\0') {
      puVar11 = &"#RRGGBB";
    }
    else {
      puVar11 = &"#RRGGBBAA";
    }
    (pGVar9->fields).placeholder = (System_String_o *)*puVar11;
    il2cpp_runtime_helper_022b4080(&(pGVar9->fields).placeholder);
    SStack_110.klass = TypeInfo_AottgInputType;
    SStack_110.monitor = (void *)0xffffffffffffffff;
    uStack_100 = 0;
    pSVar10 = System_Enum__ToString(&SStack_110,(MethodInfo *)0x0);
    (pGVar9->fields).inputType = pSVar10;
    il2cpp_runtime_helper_022b4080(&(pGVar9->fields).inputType,pSVar10);
    (pGVar9->fields).style = "inputField";
    il2cpp_runtime_helper_022b4080(&(pGVar9->fields).style);
    (pGVar9->fields).max.fields.value = (float)((uVar25 & 0xff) * 2 + 7);
    if (g_data_057a9d9b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"percent");
      g_data_057a9d9b = '\x01';
    }
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    pSVar10 = (System_String_o *)0x0;
    __this_01 = (long *)pGVar6;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar6,(MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined4 *)&(pGVar6->fields).type = 0x42c80000;
      (pGVar6->fields).id = (System_String_o *)"percent";
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).id);
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar6,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,in_stack_fffffffffffffee0);
      (pGVar9->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
      il2cpp_runtime_helper_022b4080(&(pGVar9->fields).search,pGVar8);
      return pGVar9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ddc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Button");
    g_data_057a9ddc = '\x01';
  }
  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pIVar16 = (Il2CppClass *)0x0;
  pGVar9 = pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar6,(MethodInfo *)0x0);
  IVar12 = extraout_RDX;
  if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar6->fields).type = "Button";
    il2cpp_runtime_helper_022b4080(&pGVar6->fields);
    (pGVar6->fields).id = (System_String_o *)__this_01;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).id,__this_01);
    (pGVar6->fields).text = pSVar10;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).text,pSVar10);
    (pGVar6->fields).style = (System_String_o *)extraout_RDX;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).style);
    if (g_data_057a9d9b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"percent");
      g_data_057a9d9b = '\x01';
    }
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    pIVar16 = (Il2CppClass *)0x0;
    pGVar9 = pGVar7;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar7,(MethodInfo *)0x0);
    IVar12.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined4 *)&(pGVar7->fields).type = 0x42c80000;
      (pGVar7->fields).id = (System_String_o *)"percent";
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).id);
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar7,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,in_stack_fffffffffffffe68);
      (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar8);
      return pGVar6;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  str0 = pIVar16;
  pGStack_210 = pGVar6;
  pGStack_208 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_01;
  if (g_data_057a9dd5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIColorPickerPopover_AddComponent_GisketchUIColo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"color-picker-");
    g_data_057a9dd5 = '\x01';
  }
  GStack_238.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  GStack_238.fields.LivePreview = 0;
  GStack_238.fields.Disabled = 0;
  GStack_238.fields.Id = (System_String_o *)0x0;
  GStack_238.fields.EnableAlpha = 0;
  GStack_238.fields._12_4_ = 0;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  IVar21.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
  if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)**(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8) !=
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    in_RCX = MethodInfo_Boolean_TryGetValue;
    bVar5 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       **(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8),(Il2CppObject *)pGVar9,&GStack_238,
                       (MethodInfo_3128A90 *)MethodInfo_Boolean_TryGetValue.method);
    if ((char)bVar5 == '\0') {
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var,bVar5);
    }
    if ((GStack_238.fields._24_8_ & 0x100) != 0) {
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var,bVar5);
    }
    __this_01 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    IVar12.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
    str0 = (Il2CppClass *)0x0;
    IVar21 = in_stack_fffffffffffffe30;
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)in_stack_fffffffffffffe30.method,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      if (in_stack_fffffffffffffe30.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03b6d711;
      IVar12.rgctxDataDummy =
           UnityEngine_GameObject__GetComponentInParent_object_
                     (in_stack_fffffffffffffe30.rgctxDataDummy,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    str0 = (Il2CppClass *)0x0;
    IVar21 = IVar12;
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)IVar12.method,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var_00,bVar5);
    }
    if (IVar12.rgctxDataDummy != (Il2CppRGCTXData *)0x0) {
      __this_01 = (long *)((Il2CppRGCTXData *)&(IVar12.klass)->_1)[0x11].method;
      if ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_01 ==
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var_00,bVar5);
      }
      pGVar6 = pGVar9;
      pSVar10 = System_String__Concat_3ae5ba0("color-picker-",(System_String_o *)pGVar9,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__PopoverNode
                         ((System_String_o *)pGVar9,(MethodInfo *)pGVar6);
      in_R8 = (MethodInfo *)((ulong)pIVar16 & 0xff);
      IStackY_260 = (Il2CppRGCTXData)0x3b6d6a4;
      in_RCX = in_stack_fffffffffffffe30;
      IVar13.rgctxDataDummy =
           Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
                     ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_01,pSVar10,pGVar6,
                      in_stack_fffffffffffffe30.rgctxDataDummy,(bool_conflict)in_R8,0,8.0,1,(MethodInfo *)0x0)
      ;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      str0 = (Il2CppClass *)0x0;
      IVar21.method = IVar13.method;
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)IVar13.method,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var_01,bVar5);
      }
      if ((IVar13.rgctxDataDummy != (Il2CppRGCTXData *)0x0) &&
         (str0 = (Il2CppClass *)MethodInfo_GisketchUIColorPickerPopover_AddComponent_GisketchUIColo,
         __this_00 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)
                     UnityEngine_GameObject__AddComponent_object_
                               ((UnityEngine_GameObject_o *)IVar13.method,(MethodInfo_255A020 *)MethodInfo_GisketchUIColorPickerPopover_AddComponent_GisketchUIColo),
         IVar21 = IVar13, __this_00 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)0x0)) {
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Setup
                  (__this_00,(System_String_o *)pGVar9,
                   (UnityEngine_GameObject_o *)in_stack_fffffffffffffe30.method,
                   (Gisketch_Aottg2UI_GisketchUIRoot_o *)IVar12.method,in_R8);
        return extraout_RAX;
      }
    }
  }
label_03b6d711:
  il2cpp_runtime_helper_022b2c90();
  plStackY_268 = &TypeInfo_GisketchUIColorPicker;
  pGStackY_278 = pGVar9;
  pGStackY_270 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_01;
  IStackY_260 = IVar12;
  if (g_data_057a9deb == '\0') {
    pSStackY_2a8 = (System_Delegate_o *)0x3b6d753;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchUIColorPickerValue);
    pSStackY_2a8 = (System_Delegate_o *)0x3b6d75f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Cancel);
    pSStackY_2a8 = (System_Delegate_o *)0x3b6d76b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnVisualChanged);
    pSStackY_2a8 = (System_Delegate_o *)0x3b6d777;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Save);
    pSStackY_2a8 = (System_Delegate_o *)0x3b6d783;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIColorPickerVisual_Find_GisketchUIColorPickerVi);
    pSStackY_2a8 = (System_Delegate_o *)0x3b6d78f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_Find_TMP_InputField);
    pSStackY_2a8 = (System_Delegate_o *)0x3b6d79b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    pSStackY_2a8 = (System_Delegate_o *)0x3b6d7a7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pSStackY_2a8 = (System_Delegate_o *)0x3b6d7b3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pSStackY_2a8 = (System_Delegate_o *)0x3b6d7bf;
    il2cpp_runtime_helper_023445d0(&"-cancel");
    pSStackY_2a8 = (System_Delegate_o *)0x3b6d7cb;
    il2cpp_runtime_helper_023445d0(&"-save");
    pSStackY_2a8 = (System_Delegate_o *)0x3b6d7d7;
    il2cpp_runtime_helper_023445d0(&"-g");
    pSStackY_2a8 = (System_Delegate_o *)0x3b6d7e3;
    il2cpp_runtime_helper_023445d0(&"-r");
    pSStackY_2a8 = (System_Delegate_o *)0x3b6d7ef;
    il2cpp_runtime_helper_023445d0(&"-b");
    g_data_057a9deb = '\x01';
  }
  (IVar21.method)->klass = str0;
  pSStackY_2a8 = (System_Delegate_o *)0x3b6d806;
  il2cpp_runtime_helper_022b4080(&(IVar21.method)->klass,str0);
  (IVar21.method)->parameters = extraout_RDX_00;
  pSStackY_2a8 = (System_Delegate_o *)0x3b6d816;
  il2cpp_runtime_helper_022b4080(&(IVar21.method)->parameters,extraout_RDX_00);
  (IVar21.method)->field7_0x38 = (_union_13)in_RCX;
  pSStackY_2a8 = (System_Delegate_o *)0x3b6d826;
  il2cpp_runtime_helper_022b4080(&(IVar21.method)->field7_0x38);
  pSStackY_2a8 = (System_Delegate_o *)0x3b6d830;
  pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar21.method,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    pSStackY_2a8 = (System_Delegate_o *)0x3b6d8ea;
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9de1 == '\0') {
    pSStackY_2a8 = (System_Delegate_o *)0x3b6d860;
    il2cpp_runtime_helper_023445d0(&"-visual");
    g_data_057a9de1 = '\x01';
  }
  pSStackY_2a8 = (System_Delegate_o *)0x3b6d87b;
  pSVar10 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-visual",(MethodInfo *)0x0);
  pSStackY_2a8 = (System_Delegate_o *)0x3b6d891;
  pIVar15 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar14,pSVar10,MethodInfo_GisketchUIColorPickerVisual_Find_GisketchUIColorPickerVi);
  pIVar17 = pIVar15 + 9;
  if (pIVar15 == (Il2CppObject *)0x0) {
    pIVar17 = (Il2CppObject *)&(IVar21.method)->return_type;
  }
  bVar1 = *(byte *)&pIVar17->klass;
  *(byte *)&(IVar21.method)->return_type = bVar1;
  IStackY_2a0 = IVar21;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    pSStackY_2a8 = (System_Delegate_o *)0x3b6d901;
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057a9dd0 == '\0') goto label_03b6d90a;
label_03b6d8c7:
    if (bVar1 != 0) goto label_03b6d8cc;
label_03b6d93a:
    iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
    pSVar10 = "#FFFFFF";
  }
  else {
    if (g_data_057a9dd0 != '\0') goto label_03b6d8c7;
label_03b6d90a:
    pSStackY_2a8 = (System_Delegate_o *)0x3b6d916;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    pSStackY_2a8 = (System_Delegate_o *)0x3b6d922;
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    pSStackY_2a8 = (System_Delegate_o *)0x3b6d92e;
    il2cpp_runtime_helper_023445d0(&"#FFFFFF");
    g_data_057a9dd0 = '\x01';
    if (bVar1 == 0) goto label_03b6d93a;
label_03b6d8cc:
    iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
    pSVar10 = "#FFFFFFFF";
  }
  if (iVar2 == 0) {
    pSStackY_2a8 = (System_Delegate_o *)0x3b6d956;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStackY_2a8 = (System_Delegate_o *)0x3b6d965;
  pSVar10 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                      ((System_String_o *)str0,pSVar10,(uint)bVar1,IVar21.method);
  IVar12 = IStackY_2a0;
  value = &((IStackY_2a0.klass)->_1).element_class;
  pSStackY_2a8 = (System_Delegate_o *)0x3b6d97c;
  bVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                    (pSVar10,(uint)*(byte *)&(IStackY_2a0.method)->return_type,
                     (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)value,IVar21.method);
  if ((char)bVar5 == '\0') {
    fStackY_28c = 0.0;
    fStackY_294 = 0.0;
    fStackY_290 = 0.0;
    uStackY_298 = 0xffffffff;
    pSStackY_2a8 = (System_Delegate_o *)0x3b6d9b9;
    rgbColor.fields.b = 1.0;
    rgbColor.fields.a = 1.0;
    rgbColor.fields.r = 1.0;
    rgbColor.fields.g = 1.0;
    UnityEngine_Color__RGBToHSV(rgbColor,&fStackY_294,&fStackY_290,&fStackY_28c,(MethodInfo *)0x0);
    *value = (Il2CppClass *)CONCAT44(fStackY_294,uStackY_298);
    ((IVar12.klass)->_1).castClass = (Il2CppClass *)CONCAT44(fStackY_28c,fStackY_290);
  }
  pSStackY_2a8 = (System_Delegate_o *)0x3b6d9d0;
  ppIStackY_280 = value;
  pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar12.method,(MethodInfo *)0x0);
  pSStackY_2a8 = (System_Delegate_o *)0x3b6d9e7;
  pSVar10 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-r",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    pSStackY_2a8 = (System_Delegate_o *)0x3b6d9fc;
    il2cpp_runtime_helper_02337ed0();
  }
  ppMVar27 = &MethodInfo_TMP_InputField_Find_TMP_InputField;
  pSStackY_2a8 = (System_Delegate_o *)0x3b6da12;
  pIVar16 = (Il2CppClass *)
            Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar14,pSVar10,MethodInfo_TMP_InputField_Find_TMP_InputField);
  ((IVar12.klass)->_1).declaringType = pIVar16;
  pSStackY_2a8 = (System_Delegate_o *)0x3b6da22;
  il2cpp_runtime_helper_022b4080(&(IVar12.method)->slot);
  pSStackY_2a8 = (System_Delegate_o *)0x3b6da2c;
  pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar12.method,(MethodInfo *)0x0);
  pSStackY_2a8 = (System_Delegate_o *)0x3b6da43;
  pSVar10 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-g",(MethodInfo *)0x0);
  pSStackY_2a8 = (System_Delegate_o *)0x3b6da52;
  pIVar16 = (Il2CppClass *)
            Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar14,pSVar10,MethodInfo_TMP_InputField_Find_TMP_InputField);
  ((IVar12.klass)->_1).parent = pIVar16;
  pSStackY_2a8 = (System_Delegate_o *)0x3b6da62;
  il2cpp_runtime_helper_022b4080(&((IVar12.klass)->_1).parent);
  pSStackY_2a8 = (System_Delegate_o *)0x3b6da6c;
  pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar12.method,(MethodInfo *)0x0);
  pSStackY_2a8 = (System_Delegate_o *)0x3b6da83;
  pSVar10 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-b",(MethodInfo *)0x0);
  pSStackY_2a8 = (System_Delegate_o *)0x3b6da92;
  pIVar17 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar14,pSVar10,MethodInfo_TMP_InputField_Find_TMP_InputField);
  ((IVar12.klass)->_1).generic_class = pIVar17;
  pSStackY_2a8 = (System_Delegate_o *)0x3b6daa2;
  il2cpp_runtime_helper_022b4080(&((IVar12.klass)->_1).generic_class);
  pSStackY_2a8 = (System_Delegate_o *)0x3b6daac;
  pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar12.method,(MethodInfo *)0x0);
  if (g_data_057a9de2 == '\0') {
    pSStackY_2a8 = (System_Delegate_o *)0x3b6dac4;
    il2cpp_runtime_helper_023445d0(&"-hex");
    g_data_057a9de2 = '\x01';
  }
  pSStackY_2a8 = (System_Delegate_o *)0x3b6dadf;
  pSVar10 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-hex",(MethodInfo *)0x0);
  pSStackY_2a8 = (System_Delegate_o *)0x3b6daee;
  pIVar17 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar14,pSVar10,MethodInfo_TMP_InputField_Find_TMP_InputField);
  ((IVar12.klass)->_1).typeMetadataHandle = pIVar17;
  pSStackY_2a8 = (System_Delegate_o *)0x3b6dafe;
  il2cpp_runtime_helper_022b4080(&((IVar12.klass)->_1).typeMetadataHandle);
  pSStackY_2a8 = (System_Delegate_o *)0x3b6db08;
  pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar12.method,(MethodInfo *)0x0);
  if (g_data_057a9de1 == '\0') {
    pSStackY_2a8 = (System_Delegate_o *)0x3b6db20;
    il2cpp_runtime_helper_023445d0(&"-visual");
    g_data_057a9de1 = '\x01';
  }
  pSStackY_2a8 = (System_Delegate_o *)0x3b6db3b;
  pSVar10 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-visual",(MethodInfo *)0x0);
  pSStackY_2a8 = (System_Delegate_o *)0x3b6db4a;
  pIVar17 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar14,pSVar10,MethodInfo_GisketchUIColorPickerVisual_Find_GisketchUIColorPickerVi);
  pGVar20 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)&((IVar12.klass)->_1).interopData;
  ((IVar12.klass)->_1).interopData = pIVar17;
  pSStackY_2a8 = (System_Delegate_o *)0x3b6db5d;
  il2cpp_runtime_helper_022b4080(pGVar20,pIVar17);
  pSStackY_2a8 = (System_Delegate_o *)0x3b6db69;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IVar12.method,
             (TMPro_TMP_InputField_o *)((IVar12.klass)->_1).declaringType,method_01);
  pSStackY_2a8 = (System_Delegate_o *)0x3b6db75;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IVar12.method,
             (TMPro_TMP_InputField_o *)((IVar12.klass)->_1).parent,method_02);
  pSStackY_2a8 = (System_Delegate_o *)0x3b6db81;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IVar12.method,
             ((IVar12.klass)->_1).generic_class,method_03);
  pSStackY_2a8 = (System_Delegate_o *)0x3b6db8d;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireHexInput
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IVar12.method,
             ((IVar12.klass)->_1).typeMetadataHandle,method_04);
  pSStackY_2a8 = (System_Delegate_o *)0x3b6dba1;
  pSVar10 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-cancel",(MethodInfo *)0x0);
  pSVar28 = (System_Delegate_o *)&TypeInfo_UnityAction;
  pSStackY_2a8 = (System_Delegate_o *)0x3b6dbb3;
  pUVar18 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  pMVar23 = (MethodInfo *)0x0;
  pSStackY_2a8 = (System_Delegate_o *)0x3b6dbce;
  UnityEngine_Events_UnityAction___ctor();
  pSStackY_2a8 = (System_Delegate_o *)0x3b6dbdd;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IStackY_2a0.method,pSVar10,pUVar18,
             pMVar23);
  pSStackY_2a8 = (System_Delegate_o *)0x3b6dbf1;
  pSVar10 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-save",(MethodInfo *)0x0);
  pSStackY_2a8 = (System_Delegate_o *)0x3b6dbfc;
  pUVar18 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  pMVar23 = (MethodInfo *)0x0;
  pSStackY_2a8 = (System_Delegate_o *)0x3b6dc17;
  UnityEngine_Events_UnityAction___ctor();
  IVar12 = IStackY_2a0;
  pSStackY_2a8 = (System_Delegate_o *)0x3b6dc2a;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IStackY_2a0.method,pSVar10,pUVar18,
             pMVar23);
  x = ((IVar12.klass)->_1).interopData;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pSStackY_2a8 = (System_Delegate_o *)0x3b6dc46;
    il2cpp_runtime_helper_02337ed0();
  }
  IVar21.rgctxDataDummy = (void *)0x0;
  pSStackY_2a8 = (System_Delegate_o *)0x3b6dc52;
  bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_03b6dd55:
    pSStackY_2a8 = (System_Delegate_o *)0x3b6dd5d;
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SyncFields
              ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IVar12.method,IVar21.method);
    return extraout_RAX_00;
  }
  pvVar3 = ((IVar12.klass)->_1).interopData;
  pSStackY_2a8 = (System_Delegate_o *)0x3b6dc6d;
  pGVar19 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
            il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchUIColorPickerValue.rgctxDataDummy);
  IVar13.rgctxDataDummy = (void *)0x0;
  pSStackY_2a8 = (System_Delegate_o *)0x3b6dc87;
  IVar21 = IVar12;
  pGVar26 = pGVar19;
  System_Action_GisketchUIColorPickerValue____ctor();
  if (pvVar3 != (void *)0x0) {
    ppvStackY_288 = (void **)pGVar20;
    if (g_data_057a9dfd == '\0') {
      pSStackY_2a8 = (System_Delegate_o *)0x3b6dcaa;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchUIColorPickerValue);
      g_data_057a9dfd = '\x01';
    }
    a = *(System_Delegate_o **)((long)pvVar3 + 0x88);
    do {
      pSStackY_2a8 = (System_Delegate_o *)0x3b6dcf6;
      pGVar20 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
                System_Delegate__Combine(a,(System_Delegate_o *)pGVar19,(MethodInfo *)0x0);
      IVar12 = TypeInfo_Action_GisketchUIColorPickerValue;
      IVar21.rgctxDataDummy = (void *)0x0;
      if (pGVar20 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
        pSStackY_2a8 = (System_Delegate_o *)0x3b6dd18;
        IVar21.rgctxDataDummy = (void *)il2cpp_runtime_helper_023051f0(pGVar20,TypeInfo_Action_GisketchUIColorPickerValue.rgctxDataDummy);
        ppMVar27 = (MethodInfo_255B7B0 **)IVar12;
        if (IVar21.rgctxDataDummy == (void *)0x0) {
          pSStackY_2a8 = (System_Delegate_o *)0x3b6dd28;
          IVar21 = IVar12;
          pGVar26 = pGVar20;
          il2cpp_runtime_helper_022b2fd0();
          pSVar28 = a;
          break;
        }
      }
      pSStackY_2a8 = (System_Delegate_o *)0x3b6dcde;
      pGVar26 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)((long)pvVar3 + 0x88);
      pSVar28 = (System_Delegate_o *)
                il2cpp_runtime_helper_02300640((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)((long)pvVar3 + 0x88),
                             IVar21.rgctxDataDummy,a);
      bVar29 = a != pSVar28;
      a = pSVar28;
    } while (bVar29);
    IVar12 = IStackY_2a0;
    __this = *ppvStackY_288;
    if (__this != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
      pIVar16 = ppIStackY_280[1];
      *(Il2CppClass **)&(__this->fields)._value.fields = *ppIStackY_280;
      *(Il2CppClass **)&(__this->fields)._value.fields.S = pIVar16;
      pSStackY_2a8 = (System_Delegate_o *)0x3b6dd4d;
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this,IVar21.method);
      pSStackY_2a8 = (System_Delegate_o *)0x3b6dd55;
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,IVar21.method);
      goto label_03b6dd55;
    }
  }
  pSStackY_2a8 = (System_Delegate_o *)0x3b6dd71;
  auVar31 = il2cpp_runtime_helper_022b2c90();
  lVar24 = auVar31._8_8_;
  uVar22 = auVar31._0_8_;
  uStackY_2c0 = 0;
  pGStackY_2b8 = pGVar20;
  pGStackY_2b0 = pGVar19;
  pSStackY_2a8 = pSVar28;
  if (g_data_057a9dd6 == '\0') {
    IStackY_2f0 = (Il2CppRGCTXData)0x3b6dda9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    IStackY_2f0 = (Il2CppRGCTXData)0x3b6ddb5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIColorPickerVisual_AddComponent_GisketchUIColor);
    IStackY_2f0 = (Il2CppRGCTXData)0x3b6ddc1;
    uVar22 = il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    g_data_057a9dd6 = '\x01';
  }
  GStackY_2e8.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  GStackY_2e8.fields.LivePreview = 0;
  GStackY_2e8.fields.Disabled = 0;
  GStackY_2e8.fields.Id = (System_String_o *)0x0;
  GStackY_2e8.fields.EnableAlpha = 0;
  GStackY_2e8.fields._12_4_ = 0;
  if (IVar21.rgctxDataDummy != (void *)0x0) {
    pIVar16 = (Il2CppClass *)0x0;
    IStackY_2f0 = (Il2CppRGCTXData)0x3b6dde8;
    bVar5 = System_String__IsNullOrEmpty
                      ((System_String_o *)((IVar21.klass)->_1).declaringType,(MethodInfo *)0x0);
    uVar22 = CONCAT44(extraout_var_02,bVar5);
    if ((char)bVar5 == '\0') {
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        IStackY_2f0 = (Il2CppRGCTXData)0x3b6de09;
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar20 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)**(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8)
      ;
      if (pGVar20 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
        pIVar16 = ((IVar21.klass)->_1).declaringType;
        IStackY_2f0 = (Il2CppRGCTXData)0x3b6de32;
        IVar13 = MethodInfo_Boolean_TryGetValue;
        bVar5 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar20,
                           (Il2CppObject *)pIVar16,&GStackY_2e8,(MethodInfo_3128A90 *)MethodInfo_Boolean_TryGetValue.method);
        uVar22 = CONCAT44(extraout_var_03,bVar5);
        if ((char)bVar5 == '\0') goto label_03b6de71;
        if (pGVar26 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
          IStackY_2f0 = (Il2CppRGCTXData)0x3b6de4d;
          pIVar16 = (Il2CppClass *)MethodInfo_GisketchUIColorPickerVisual_AddComponent_GisketchUIColor;
          pGVar20 = pGVar26;
          pGVar19 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
                    UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)pGVar26,(MethodInfo_255A020 *)MethodInfo_GisketchUIColorPickerVisual_AddComponent_GisketchUIColor);
          if ((lVar24 != 0) && (pGVar19 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0)) {
            IStackY_2f0 = (Il2CppRGCTXData)0x3b6de71;
            Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Setup
                      (pGVar19,(System_String_o *)((IVar21.klass)->_1).declaringType,
                       (uint)((byte)GStackY_2e8.fields.EnableAlpha & 1),
                       *(Gisketch_Aottg2UI_Styling_GisketchTheme_o **)(lVar24 + 0x18),in_R8);
            uVar22 = extraout_RAX_01;
            goto label_03b6de71;
          }
        }
      }
      IStackY_2f0 = (Il2CppRGCTXData)0x3b6de84;
      il2cpp_runtime_helper_022b2c90();
      plStackY_310 = &TypeInfo_GisketchUIColorPicker;
      cVar4 = (char)extraout_EDX;
      method_00 = IVar13;
      IStackY_318 = IVar21;
      IStackY_308 = (Il2CppRGCTXData)ppMVar27;
      lStackY_300 = lVar24;
      pGStackY_2f8 = pGVar26;
      IStackY_2f0 = IVar12;
      if (g_data_057a9dff == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
        g_data_057a9dff = '\x01';
      }
      GStackY_330.R = '\0';
      GStackY_330.G = '\0';
      GStackY_330.B = '\0';
      GStackY_330.A = '\0';
      GStackY_330.H = 0.0;
      GStackY_330.S = 0.0;
      GStackY_330.V = 0.0;
      GStackY_340.R = '\0';
      GStackY_340.G = '\0';
      GStackY_340.B = '\0';
      GStackY_340.A = '\0';
      GStackY_340.H = 0.0;
      GStackY_340.S = 0.0;
      GStackY_340.V = 0.0;
      *(char *)&(pGVar20->fields)._EnableAlpha_k__BackingField = cVar4;
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057a9dd0 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
        il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
        il2cpp_runtime_helper_023445d0(&"#FFFFFF");
        g_data_057a9dd0 = '\x01';
      }
      if (cVar4 == '\0') {
        iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
        pSVar10 = "#FFFFFF";
      }
      else {
        iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
        pSVar10 = "#FFFFFFFF";
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar10 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                          ((System_String_o *)pIVar16,pSVar10,extraout_EDX & 0xff,method_00.method);
      bVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                        (pSVar10,extraout_EDX & 0xff,
                         (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&GStackY_330,method_00.method)
      ;
      if ((char)bVar5 == '\0') {
        fStackY_344 = 0.0;
        uStackY_34c = 0;
        rgbColor_00.fields.b = 1.0;
        rgbColor_00.fields.a = 1.0;
        rgbColor_00.fields.r = 1.0;
        rgbColor_00.fields.g = 1.0;
        UnityEngine_Color__RGBToHSV
                  (rgbColor_00,(float *)&uStackY_34c,(float *)((long)&uStackY_34c + 4),&fStackY_344,
                   (MethodInfo *)0x0);
        uVar30._0_1_ = 0xff;
        uVar30._1_1_ = 0xff;
        uVar30._2_1_ = 0xff;
        uVar30._3_1_ = 0xff;
        GStackY_340.H = (float)uStackY_34c;
        GStackY_340.S = uStackY_34c._4_4_;
        GStackY_340.V = fStackY_344;
      }
      else {
        uVar30 = GStackY_330._0_4_;
        GStackY_340.H = GStackY_330.H;
        GStackY_340.S = GStackY_330.S;
        GStackY_340.V = GStackY_330.V;
      }
      GStackY_340.R = (uint8_t)uVar30;
      GStackY_340.G = SUB41(uVar30,1);
      GStackY_340.B = SUB41(uVar30,2);
      GStackY_340.A = SUB41(uVar30,3);
      (pGVar20->fields)._value.fields.R = (uint8_t)uVar30;
      (pGVar20->fields)._value.fields.G = SUB41(uVar30,1);
      (pGVar20->fields)._value.fields.B = SUB41(uVar30,2);
      (pGVar20->fields)._value.fields.A = SUB41(uVar30,3);
      (pGVar20->fields)._value.fields.H = GStackY_340.H;
      (pGVar20->fields)._value.fields.S = GStackY_340.S;
      (pGVar20->fields)._value.fields.V = GStackY_340.V;
      pGVar26 = pGVar20;
      pGVar19 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pGVar20,(MethodInfo *)0x0);
      if ((pGVar19 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) &&
         (pIVar17 = UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)pGVar19,MethodInfo_LayoutElement_AddComponent_LayoutElement), pGVar26 = pGVar19,
         pIVar17 != (Il2CppObject *)0x0)) {
        if (cVar4 == '\0') {
          uVar30 = 0x435c0000;
        }
        else {
          uVar30 = 0x43820000;
        }
        (*pIVar17->klass->vtable[0x26].methodPtr)(uVar30,pIVar17,pIVar17->klass->vtable[0x26].method);
        pMVar23 = extraout_RDX_01;
        if (IVar13.rgctxDataDummy == (void *)0x0) {
          if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            pMVar23 = extraout_RDX_02;
          }
          IVar13 = (Il2CppRGCTXData)(*(Il2CppRGCTXData **)(TypeInfo_GisketchTheme + 0xb8))->method;
        }
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Build
                  (pGVar20,(Gisketch_Aottg2UI_Styling_GisketchTheme_o *)IVar13.method,pMVar23);
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(pGVar20,IVar13.method);
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(pGVar20,IVar13.method);
        return extraout_RAX_02;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9de2 == '\0') {
        il2cpp_runtime_helper_023445d0(&"-hex");
        g_data_057a9de2 = '\x01';
      }
      pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
               System_String__Concat_3ae5ba0((System_String_o *)pGVar26,"-hex",(MethodInfo *)0x0);
      return pGVar9;
    }
  }
label_03b6de71:
  return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT71((int7)((ulong)uVar22 >> 8),1);
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Button
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Button (System_String_o* id, System_String_o* text, System_String_o* style, const MethodInfo* method);
// 0x3b6d320

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Button
          (System_String_o *id,System_String_o *text,System_String_o *style,MethodInfo *method)

{
  Il2CppClass **value;
  byte bVar1;
  int iVar2;
  UnityEngine_Object_o *x;
  void *pvVar3;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this;
  char cVar4;
  bool_conflict bVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  System_String_o *pSVar8;
  Il2CppRGCTXData IVar9;
  undefined4 extraout_var_01;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *extraout_RAX;
  UnityEngine_Transform_o *pUVar10;
  Il2CppObject *pIVar11;
  Il2CppClass *pIVar12;
  Il2CppObject *pIVar13;
  UnityEngine_Events_UnityAction_o *pUVar14;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar15;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar16;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *extraout_RAX_00;
  undefined8 uVar17;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined8 extraout_RAX_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *extraout_RAX_02;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar18;
  Il2CppRGCTXData IVar19;
  MethodInfo *pMVar20;
  Il2CppRGCTXData method_00;
  Il2CppRGCTXData method_01;
  uint extraout_EDX;
  Il2CppType **extraout_RDX;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  long lVar21;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  Il2CppClass *str0;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar22;
  MethodInfo *in_R8;
  MethodInfo_255B7B0 **ppMVar23;
  System_Delegate_o *pSVar24;
  System_Delegate_o *a;
  bool bVar25;
  undefined4 uVar26;
  UnityEngine_Color_o rgbColor;
  UnityEngine_Color_o rgbColor_00;
  undefined1 auVar27 [16];
  undefined8 uStackY_1e4;
  float fStackY_1dc;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields GStackY_1d8;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields GStackY_1c8;
  Il2CppRGCTXData IStackY_1b0;
  long *plStackY_1a8;
  Il2CppRGCTXData IStackY_1a0;
  long lStackY_198;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStackY_190;
  Il2CppRGCTXData IStackY_188;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o GStackY_180;
  undefined8 uStackY_158;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStackY_150;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStackY_148;
  System_Delegate_o *pSStackY_140;
  Il2CppRGCTXData IStackY_138;
  undefined4 uStackY_130;
  float fStackY_12c;
  float fStackY_128;
  float fStackY_124;
  void **ppvStackY_120;
  Il2CppClass **ppIStackY_118;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStackY_110;
  MethodInfo *pMStackY_108;
  long *plStackY_100;
  Il2CppRGCTXData IStackY_f8;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o GStack_d0;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_a8;
  System_String_o *pSStack_a0;
  Il2CppRGCTXData in_stack_ffffffffffffff98;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (g_data_057a9ddc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Button");
    g_data_057a9ddc = '\x01';
  }
  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pIVar12 = (Il2CppClass *)0x0;
  pGVar18 = pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar6,(MethodInfo *)0x0);
  if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar6->fields).type = "Button";
    il2cpp_runtime_helper_022b4080(&pGVar6->fields);
    (pGVar6->fields).id = id;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).id,id);
    (pGVar6->fields).text = text;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).text,text);
    (pGVar6->fields).style = style;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).style);
    if (g_data_057a9d9b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"percent");
      g_data_057a9d9b = '\x01';
    }
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    pIVar12 = (Il2CppClass *)0x0;
    pGVar18 = __this_00;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)__this_00,(MethodInfo *)0x0);
    style = (System_String_o *)0x0;
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(undefined4 *)&(__this_00->fields).type = 0x42c80000;
      (__this_00->fields).id = "percent";
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).id);
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)__this_00,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,in_stack_ffffffffffffffd0);
      (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar7;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar7);
      return pGVar6;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  str0 = pIVar12;
  pGStack_a8 = pGVar6;
  pSStack_a0 = id;
  if (g_data_057a9dd5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIColorPickerPopover_AddComponent_GisketchUIColo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"color-picker-");
    g_data_057a9dd5 = '\x01';
  }
  GStack_d0.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  GStack_d0.fields.LivePreview = 0;
  GStack_d0.fields.Disabled = 0;
  GStack_d0.fields.Id = (System_String_o *)0x0;
  GStack_d0.fields.EnableAlpha = 0;
  GStack_d0.fields._12_4_ = 0;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  IVar19.rgctxDataDummy = (Il2CppRGCTXData *)0x0;
  if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)**(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8) !=
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    method = MethodInfo_Boolean_TryGetValue.method;
    bVar5 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       **(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8),(Il2CppObject *)pGVar18,&GStack_d0,
                       (MethodInfo_3128A90 *)MethodInfo_Boolean_TryGetValue.method);
    if ((char)bVar5 == '\0') {
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var,bVar5);
    }
    if ((GStack_d0.fields._24_8_ & 0x100) != 0) {
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var,bVar5);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    style = (System_String_o *)0x0;
    str0 = (Il2CppClass *)0x0;
    IVar19 = in_stack_ffffffffffffff98;
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)in_stack_ffffffffffffff98.method,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    id = (System_String_o *)&TypeInfo_Object;
    if ((char)bVar5 != '\0') {
      if (in_stack_ffffffffffffff98.rgctxDataDummy == (Il2CppRGCTXData *)0x0) goto label_03b6d711;
      style = (System_String_o *)
              UnityEngine_GameObject__GetComponentInParent_object_
                        ((UnityEngine_GameObject_o *)in_stack_ffffffffffffff98.method,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    str0 = (Il2CppClass *)0x0;
    IVar19 = (Il2CppRGCTXData)style;
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)style,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var_00,bVar5);
    }
    if ((Il2CppRGCTXData *)style != (Il2CppRGCTXData *)0x0) {
      id = (System_String_o *)((Il2CppRGCTXData *)&((Il2CppClass *)style)->_1)[0x11].method;
      if ((MethodInfo *)id == (MethodInfo *)0x0) {
        return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var_00,bVar5);
      }
      pGVar6 = pGVar18;
      pSVar8 = System_String__Concat_3ae5ba0("color-picker-",(System_String_o *)pGVar18,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__PopoverNode
                         ((System_String_o *)pGVar18,(MethodInfo *)pGVar6);
      in_R8 = (MethodInfo *)((ulong)pIVar12 & 0xff);
      IStackY_f8 = (Il2CppRGCTXData)0x3b6d6a4;
      method = in_stack_ffffffffffffff98.method;
      IVar9.rgctxDataDummy =
           Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
                     ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)id,pSVar8,pGVar6,
                      in_stack_ffffffffffffff98.rgctxDataDummy,(bool_conflict)in_R8,0,8.0,1,(MethodInfo *)0x0)
      ;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      str0 = (Il2CppClass *)0x0;
      IVar19.method = IVar9.method;
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)IVar9.method,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var_01,bVar5);
      }
      if ((IVar9.rgctxDataDummy != (Il2CppRGCTXData *)0x0) &&
         (str0 = (Il2CppClass *)MethodInfo_GisketchUIColorPickerPopover_AddComponent_GisketchUIColo,
         __this_01 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)
                     UnityEngine_GameObject__AddComponent_object_
                               ((UnityEngine_GameObject_o *)IVar9.method,(MethodInfo_255A020 *)MethodInfo_GisketchUIColorPickerPopover_AddComponent_GisketchUIColo),
         IVar19 = IVar9, __this_01 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)0x0)) {
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Setup
                  (__this_01,(System_String_o *)pGVar18,
                   (UnityEngine_GameObject_o *)in_stack_ffffffffffffff98.method,
                   (Gisketch_Aottg2UI_GisketchUIRoot_o *)style,in_R8);
        return extraout_RAX;
      }
    }
  }
label_03b6d711:
  il2cpp_runtime_helper_022b2c90();
  plStackY_100 = &TypeInfo_GisketchUIColorPicker;
  pGStackY_110 = pGVar18;
  pMStackY_108 = (MethodInfo *)id;
  IStackY_f8 = (Il2CppRGCTXData)style;
  if (g_data_057a9deb == '\0') {
    pSStackY_140 = (System_Delegate_o *)0x3b6d753;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchUIColorPickerValue);
    pSStackY_140 = (System_Delegate_o *)0x3b6d75f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Cancel);
    pSStackY_140 = (System_Delegate_o *)0x3b6d76b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnVisualChanged);
    pSStackY_140 = (System_Delegate_o *)0x3b6d777;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Save);
    pSStackY_140 = (System_Delegate_o *)0x3b6d783;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIColorPickerVisual_Find_GisketchUIColorPickerVi);
    pSStackY_140 = (System_Delegate_o *)0x3b6d78f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_Find_TMP_InputField);
    pSStackY_140 = (System_Delegate_o *)0x3b6d79b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    pSStackY_140 = (System_Delegate_o *)0x3b6d7a7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pSStackY_140 = (System_Delegate_o *)0x3b6d7b3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pSStackY_140 = (System_Delegate_o *)0x3b6d7bf;
    il2cpp_runtime_helper_023445d0(&"-cancel");
    pSStackY_140 = (System_Delegate_o *)0x3b6d7cb;
    il2cpp_runtime_helper_023445d0(&"-save");
    pSStackY_140 = (System_Delegate_o *)0x3b6d7d7;
    il2cpp_runtime_helper_023445d0(&"-g");
    pSStackY_140 = (System_Delegate_o *)0x3b6d7e3;
    il2cpp_runtime_helper_023445d0(&"-r");
    pSStackY_140 = (System_Delegate_o *)0x3b6d7ef;
    il2cpp_runtime_helper_023445d0(&"-b");
    g_data_057a9deb = '\x01';
  }
  (IVar19.method)->klass = str0;
  pSStackY_140 = (System_Delegate_o *)0x3b6d806;
  il2cpp_runtime_helper_022b4080(&(IVar19.method)->klass,str0);
  (IVar19.method)->parameters = extraout_RDX;
  pSStackY_140 = (System_Delegate_o *)0x3b6d816;
  il2cpp_runtime_helper_022b4080(&(IVar19.method)->parameters,extraout_RDX);
  (IVar19.method)->field7_0x38 = (_union_13)method;
  pSStackY_140 = (System_Delegate_o *)0x3b6d826;
  il2cpp_runtime_helper_022b4080(&(IVar19.method)->field7_0x38);
  pSStackY_140 = (System_Delegate_o *)0x3b6d830;
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar19.method,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    pSStackY_140 = (System_Delegate_o *)0x3b6d8ea;
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9de1 == '\0') {
    pSStackY_140 = (System_Delegate_o *)0x3b6d860;
    il2cpp_runtime_helper_023445d0(&"-visual");
    g_data_057a9de1 = '\x01';
  }
  pSStackY_140 = (System_Delegate_o *)0x3b6d87b;
  pSVar8 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-visual",(MethodInfo *)0x0);
  pSStackY_140 = (System_Delegate_o *)0x3b6d891;
  pIVar11 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar10,pSVar8,MethodInfo_GisketchUIColorPickerVisual_Find_GisketchUIColorPickerVi);
  pIVar13 = pIVar11 + 9;
  if (pIVar11 == (Il2CppObject *)0x0) {
    pIVar13 = (Il2CppObject *)&(IVar19.method)->return_type;
  }
  bVar1 = *(byte *)&pIVar13->klass;
  *(byte *)&(IVar19.method)->return_type = bVar1;
  IStackY_138 = IVar19;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    pSStackY_140 = (System_Delegate_o *)0x3b6d901;
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057a9dd0 == '\0') goto label_03b6d90a;
label_03b6d8c7:
    if (bVar1 != 0) goto label_03b6d8cc;
label_03b6d93a:
    iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
    pSVar8 = "#FFFFFF";
  }
  else {
    if (g_data_057a9dd0 != '\0') goto label_03b6d8c7;
label_03b6d90a:
    pSStackY_140 = (System_Delegate_o *)0x3b6d916;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    pSStackY_140 = (System_Delegate_o *)0x3b6d922;
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    pSStackY_140 = (System_Delegate_o *)0x3b6d92e;
    il2cpp_runtime_helper_023445d0(&"#FFFFFF");
    g_data_057a9dd0 = '\x01';
    if (bVar1 == 0) goto label_03b6d93a;
label_03b6d8cc:
    iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
    pSVar8 = "#FFFFFFFF";
  }
  if (iVar2 == 0) {
    pSStackY_140 = (System_Delegate_o *)0x3b6d956;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStackY_140 = (System_Delegate_o *)0x3b6d965;
  pSVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                     ((System_String_o *)str0,pSVar8,(uint)bVar1,IVar19.method);
  IVar9 = IStackY_138;
  value = &((IStackY_138.klass)->_1).element_class;
  pSStackY_140 = (System_Delegate_o *)0x3b6d97c;
  bVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                    (pSVar8,(uint)*(byte *)&(IStackY_138.method)->return_type,
                     (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)value,IVar19.method);
  if ((char)bVar5 == '\0') {
    fStackY_124 = 0.0;
    fStackY_12c = 0.0;
    fStackY_128 = 0.0;
    uStackY_130 = 0xffffffff;
    pSStackY_140 = (System_Delegate_o *)0x3b6d9b9;
    rgbColor.fields.b = 1.0;
    rgbColor.fields.a = 1.0;
    rgbColor.fields.r = 1.0;
    rgbColor.fields.g = 1.0;
    UnityEngine_Color__RGBToHSV(rgbColor,&fStackY_12c,&fStackY_128,&fStackY_124,(MethodInfo *)0x0);
    *value = (Il2CppClass *)CONCAT44(fStackY_12c,uStackY_130);
    ((IVar9.klass)->_1).castClass = (Il2CppClass *)CONCAT44(fStackY_124,fStackY_128);
  }
  pSStackY_140 = (System_Delegate_o *)0x3b6d9d0;
  ppIStackY_118 = value;
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar9.method,(MethodInfo *)0x0);
  pSStackY_140 = (System_Delegate_o *)0x3b6d9e7;
  pSVar8 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-r",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    pSStackY_140 = (System_Delegate_o *)0x3b6d9fc;
    il2cpp_runtime_helper_02337ed0();
  }
  ppMVar23 = &MethodInfo_TMP_InputField_Find_TMP_InputField;
  pSStackY_140 = (System_Delegate_o *)0x3b6da12;
  pIVar12 = (Il2CppClass *)
            Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar10,pSVar8,MethodInfo_TMP_InputField_Find_TMP_InputField);
  ((IVar9.klass)->_1).declaringType = pIVar12;
  pSStackY_140 = (System_Delegate_o *)0x3b6da22;
  il2cpp_runtime_helper_022b4080(&(IVar9.method)->slot);
  pSStackY_140 = (System_Delegate_o *)0x3b6da2c;
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar9.method,(MethodInfo *)0x0);
  pSStackY_140 = (System_Delegate_o *)0x3b6da43;
  pSVar8 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-g",(MethodInfo *)0x0);
  pSStackY_140 = (System_Delegate_o *)0x3b6da52;
  pIVar12 = (Il2CppClass *)
            Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar10,pSVar8,MethodInfo_TMP_InputField_Find_TMP_InputField);
  ((IVar9.klass)->_1).parent = pIVar12;
  pSStackY_140 = (System_Delegate_o *)0x3b6da62;
  il2cpp_runtime_helper_022b4080(&((IVar9.klass)->_1).parent);
  pSStackY_140 = (System_Delegate_o *)0x3b6da6c;
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar9.method,(MethodInfo *)0x0);
  pSStackY_140 = (System_Delegate_o *)0x3b6da83;
  pSVar8 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-b",(MethodInfo *)0x0);
  pSStackY_140 = (System_Delegate_o *)0x3b6da92;
  pIVar13 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar10,pSVar8,MethodInfo_TMP_InputField_Find_TMP_InputField);
  ((IVar9.klass)->_1).generic_class = pIVar13;
  pSStackY_140 = (System_Delegate_o *)0x3b6daa2;
  il2cpp_runtime_helper_022b4080(&((IVar9.klass)->_1).generic_class);
  pSStackY_140 = (System_Delegate_o *)0x3b6daac;
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar9.method,(MethodInfo *)0x0);
  if (g_data_057a9de2 == '\0') {
    pSStackY_140 = (System_Delegate_o *)0x3b6dac4;
    il2cpp_runtime_helper_023445d0(&"-hex");
    g_data_057a9de2 = '\x01';
  }
  pSStackY_140 = (System_Delegate_o *)0x3b6dadf;
  pSVar8 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-hex",(MethodInfo *)0x0);
  pSStackY_140 = (System_Delegate_o *)0x3b6daee;
  pIVar13 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar10,pSVar8,MethodInfo_TMP_InputField_Find_TMP_InputField);
  ((IVar9.klass)->_1).typeMetadataHandle = pIVar13;
  pSStackY_140 = (System_Delegate_o *)0x3b6dafe;
  il2cpp_runtime_helper_022b4080(&((IVar9.klass)->_1).typeMetadataHandle);
  pSStackY_140 = (System_Delegate_o *)0x3b6db08;
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)IVar9.method,(MethodInfo *)0x0);
  if (g_data_057a9de1 == '\0') {
    pSStackY_140 = (System_Delegate_o *)0x3b6db20;
    il2cpp_runtime_helper_023445d0(&"-visual");
    g_data_057a9de1 = '\x01';
  }
  pSStackY_140 = (System_Delegate_o *)0x3b6db3b;
  pSVar8 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-visual",(MethodInfo *)0x0);
  pSStackY_140 = (System_Delegate_o *)0x3b6db4a;
  pIVar13 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar10,pSVar8,MethodInfo_GisketchUIColorPickerVisual_Find_GisketchUIColorPickerVi);
  pGVar16 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)&((IVar9.klass)->_1).interopData;
  ((IVar9.klass)->_1).interopData = pIVar13;
  pSStackY_140 = (System_Delegate_o *)0x3b6db5d;
  il2cpp_runtime_helper_022b4080(pGVar16,pIVar13);
  pSStackY_140 = (System_Delegate_o *)0x3b6db69;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IVar9.method,
             (TMPro_TMP_InputField_o *)((IVar9.klass)->_1).declaringType,method_02);
  pSStackY_140 = (System_Delegate_o *)0x3b6db75;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IVar9.method,
             (TMPro_TMP_InputField_o *)((IVar9.klass)->_1).parent,method_03);
  pSStackY_140 = (System_Delegate_o *)0x3b6db81;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IVar9.method,
             ((IVar9.klass)->_1).generic_class,method_04);
  pSStackY_140 = (System_Delegate_o *)0x3b6db8d;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireHexInput
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IVar9.method,
             ((IVar9.klass)->_1).typeMetadataHandle,method_05);
  pSStackY_140 = (System_Delegate_o *)0x3b6dba1;
  pSVar8 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-cancel",(MethodInfo *)0x0);
  pSVar24 = (System_Delegate_o *)&TypeInfo_UnityAction;
  pSStackY_140 = (System_Delegate_o *)0x3b6dbb3;
  pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  pMVar20 = (MethodInfo *)0x0;
  pSStackY_140 = (System_Delegate_o *)0x3b6dbce;
  UnityEngine_Events_UnityAction___ctor();
  pSStackY_140 = (System_Delegate_o *)0x3b6dbdd;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IStackY_138.method,pSVar8,pUVar14,
             pMVar20);
  pSStackY_140 = (System_Delegate_o *)0x3b6dbf1;
  pSVar8 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-save",(MethodInfo *)0x0);
  pSStackY_140 = (System_Delegate_o *)0x3b6dbfc;
  pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  pMVar20 = (MethodInfo *)0x0;
  pSStackY_140 = (System_Delegate_o *)0x3b6dc17;
  UnityEngine_Events_UnityAction___ctor();
  IVar19 = IStackY_138;
  pSStackY_140 = (System_Delegate_o *)0x3b6dc2a;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton
            ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IStackY_138.method,pSVar8,pUVar14,
             pMVar20);
  x = ((IVar19.klass)->_1).interopData;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pSStackY_140 = (System_Delegate_o *)0x3b6dc46;
    il2cpp_runtime_helper_02337ed0();
  }
  IVar9.rgctxDataDummy = (void *)0x0;
  pSStackY_140 = (System_Delegate_o *)0x3b6dc52;
  bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_03b6dd55:
    pSStackY_140 = (System_Delegate_o *)0x3b6dd5d;
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SyncFields
              ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)IVar19.method,IVar9.method);
    return extraout_RAX_00;
  }
  pvVar3 = ((IVar19.klass)->_1).interopData;
  pSStackY_140 = (System_Delegate_o *)0x3b6dc6d;
  pGVar15 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
            il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchUIColorPickerValue.rgctxDataDummy);
  method_00.rgctxDataDummy = (void *)0x0;
  pSStackY_140 = (System_Delegate_o *)0x3b6dc87;
  IVar9 = IVar19;
  pGVar22 = pGVar15;
  System_Action_GisketchUIColorPickerValue____ctor();
  if (pvVar3 != (void *)0x0) {
    ppvStackY_120 = (void **)pGVar16;
    if (g_data_057a9dfd == '\0') {
      pSStackY_140 = (System_Delegate_o *)0x3b6dcaa;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchUIColorPickerValue);
      g_data_057a9dfd = '\x01';
    }
    a = *(System_Delegate_o **)((long)pvVar3 + 0x88);
    do {
      pSStackY_140 = (System_Delegate_o *)0x3b6dcf6;
      pGVar16 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
                System_Delegate__Combine(a,(System_Delegate_o *)pGVar15,(MethodInfo *)0x0);
      IVar19 = TypeInfo_Action_GisketchUIColorPickerValue;
      IVar9.rgctxDataDummy = (void *)0x0;
      if (pGVar16 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
        pSStackY_140 = (System_Delegate_o *)0x3b6dd18;
        IVar9.rgctxDataDummy = (void *)il2cpp_runtime_helper_023051f0(pGVar16,TypeInfo_Action_GisketchUIColorPickerValue.rgctxDataDummy);
        ppMVar23 = (MethodInfo_255B7B0 **)IVar19;
        if (IVar9.rgctxDataDummy == (void *)0x0) {
          pSStackY_140 = (System_Delegate_o *)0x3b6dd28;
          IVar9 = IVar19;
          pGVar22 = pGVar16;
          il2cpp_runtime_helper_022b2fd0();
          pSVar24 = a;
          break;
        }
      }
      pSStackY_140 = (System_Delegate_o *)0x3b6dcde;
      pGVar22 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)((long)pvVar3 + 0x88);
      pSVar24 = (System_Delegate_o *)
                il2cpp_runtime_helper_02300640((Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)((long)pvVar3 + 0x88),
                             IVar9.rgctxDataDummy,a);
      bVar25 = a != pSVar24;
      a = pSVar24;
    } while (bVar25);
    IVar19 = IStackY_138;
    __this = *ppvStackY_120;
    if (__this != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
      pIVar12 = ppIStackY_118[1];
      *(Il2CppClass **)&(__this->fields)._value.fields = *ppIStackY_118;
      *(Il2CppClass **)&(__this->fields)._value.fields.S = pIVar12;
      pSStackY_140 = (System_Delegate_o *)0x3b6dd4d;
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this,IVar9.method);
      pSStackY_140 = (System_Delegate_o *)0x3b6dd55;
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,IVar9.method);
      goto label_03b6dd55;
    }
  }
  pSStackY_140 = (System_Delegate_o *)0x3b6dd71;
  auVar27 = il2cpp_runtime_helper_022b2c90();
  lVar21 = auVar27._8_8_;
  uVar17 = auVar27._0_8_;
  uStackY_158 = 0;
  pGStackY_150 = pGVar16;
  pGStackY_148 = pGVar15;
  pSStackY_140 = pSVar24;
  if (g_data_057a9dd6 == '\0') {
    IStackY_188 = (Il2CppRGCTXData)0x3b6dda9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    IStackY_188 = (Il2CppRGCTXData)0x3b6ddb5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIColorPickerVisual_AddComponent_GisketchUIColor);
    IStackY_188 = (Il2CppRGCTXData)0x3b6ddc1;
    uVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    g_data_057a9dd6 = '\x01';
  }
  GStackY_180.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
  GStackY_180.fields.LivePreview = 0;
  GStackY_180.fields.Disabled = 0;
  GStackY_180.fields.Id = (System_String_o *)0x0;
  GStackY_180.fields.EnableAlpha = 0;
  GStackY_180.fields._12_4_ = 0;
  if (IVar9.rgctxDataDummy != (void *)0x0) {
    pIVar12 = (Il2CppClass *)0x0;
    IStackY_188 = (Il2CppRGCTXData)0x3b6dde8;
    bVar5 = System_String__IsNullOrEmpty
                      ((System_String_o *)((IVar9.klass)->_1).declaringType,(MethodInfo *)0x0);
    uVar17 = CONCAT44(extraout_var_02,bVar5);
    if ((char)bVar5 == '\0') {
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        IStackY_188 = (Il2CppRGCTXData)0x3b6de09;
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar16 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)**(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8)
      ;
      if (pGVar16 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
        pIVar12 = ((IVar9.klass)->_1).declaringType;
        IStackY_188 = (Il2CppRGCTXData)0x3b6de32;
        method_00 = MethodInfo_Boolean_TryGetValue;
        bVar5 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar16,
                           (Il2CppObject *)pIVar12,&GStackY_180,(MethodInfo_3128A90 *)MethodInfo_Boolean_TryGetValue.method);
        uVar17 = CONCAT44(extraout_var_03,bVar5);
        if ((char)bVar5 == '\0') goto label_03b6de71;
        if (pGVar22 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
          IStackY_188 = (Il2CppRGCTXData)0x3b6de4d;
          pIVar12 = (Il2CppClass *)MethodInfo_GisketchUIColorPickerVisual_AddComponent_GisketchUIColor;
          pGVar16 = pGVar22;
          pGVar15 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
                    UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)pGVar22,(MethodInfo_255A020 *)MethodInfo_GisketchUIColorPickerVisual_AddComponent_GisketchUIColor);
          if ((lVar21 != 0) && (pGVar15 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0)) {
            IStackY_188 = (Il2CppRGCTXData)0x3b6de71;
            Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Setup
                      (pGVar15,(System_String_o *)((IVar9.klass)->_1).declaringType,
                       (uint)((byte)GStackY_180.fields.EnableAlpha & 1),
                       *(Gisketch_Aottg2UI_Styling_GisketchTheme_o **)(lVar21 + 0x18),in_R8);
            uVar17 = extraout_RAX_01;
            goto label_03b6de71;
          }
        }
      }
      IStackY_188 = (Il2CppRGCTXData)0x3b6de84;
      il2cpp_runtime_helper_022b2c90();
      plStackY_1a8 = &TypeInfo_GisketchUIColorPicker;
      cVar4 = (char)extraout_EDX;
      method_01 = method_00;
      IStackY_1b0 = IVar9;
      IStackY_1a0 = (Il2CppRGCTXData)ppMVar23;
      lStackY_198 = lVar21;
      pGStackY_190 = pGVar22;
      IStackY_188 = IVar19;
      if (g_data_057a9dff == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
        g_data_057a9dff = '\x01';
      }
      GStackY_1c8.R = '\0';
      GStackY_1c8.G = '\0';
      GStackY_1c8.B = '\0';
      GStackY_1c8.A = '\0';
      GStackY_1c8.H = 0.0;
      GStackY_1c8.S = 0.0;
      GStackY_1c8.V = 0.0;
      GStackY_1d8.R = '\0';
      GStackY_1d8.G = '\0';
      GStackY_1d8.B = '\0';
      GStackY_1d8.A = '\0';
      GStackY_1d8.H = 0.0;
      GStackY_1d8.S = 0.0;
      GStackY_1d8.V = 0.0;
      *(char *)&(pGVar16->fields)._EnableAlpha_k__BackingField = cVar4;
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057a9dd0 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
        il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
        il2cpp_runtime_helper_023445d0(&"#FFFFFF");
        g_data_057a9dd0 = '\x01';
      }
      if (cVar4 == '\0') {
        iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
        pSVar8 = "#FFFFFF";
      }
      else {
        iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
        pSVar8 = "#FFFFFFFF";
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                         ((System_String_o *)pIVar12,pSVar8,extraout_EDX & 0xff,method_01.method);
      bVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                        (pSVar8,extraout_EDX & 0xff,
                         (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&GStackY_1c8,method_01.method)
      ;
      if ((char)bVar5 == '\0') {
        fStackY_1dc = 0.0;
        uStackY_1e4 = 0;
        rgbColor_00.fields.b = 1.0;
        rgbColor_00.fields.a = 1.0;
        rgbColor_00.fields.r = 1.0;
        rgbColor_00.fields.g = 1.0;
        UnityEngine_Color__RGBToHSV
                  (rgbColor_00,(float *)&uStackY_1e4,(float *)((long)&uStackY_1e4 + 4),&fStackY_1dc,
                   (MethodInfo *)0x0);
        uVar26._0_1_ = 0xff;
        uVar26._1_1_ = 0xff;
        uVar26._2_1_ = 0xff;
        uVar26._3_1_ = 0xff;
        GStackY_1d8.H = (float)uStackY_1e4;
        GStackY_1d8.S = uStackY_1e4._4_4_;
        GStackY_1d8.V = fStackY_1dc;
      }
      else {
        uVar26 = GStackY_1c8._0_4_;
        GStackY_1d8.H = GStackY_1c8.H;
        GStackY_1d8.S = GStackY_1c8.S;
        GStackY_1d8.V = GStackY_1c8.V;
      }
      GStackY_1d8.R = (uint8_t)uVar26;
      GStackY_1d8.G = SUB41(uVar26,1);
      GStackY_1d8.B = SUB41(uVar26,2);
      GStackY_1d8.A = SUB41(uVar26,3);
      (pGVar16->fields)._value.fields.R = (uint8_t)uVar26;
      (pGVar16->fields)._value.fields.G = SUB41(uVar26,1);
      (pGVar16->fields)._value.fields.B = SUB41(uVar26,2);
      (pGVar16->fields)._value.fields.A = SUB41(uVar26,3);
      (pGVar16->fields)._value.fields.H = GStackY_1d8.H;
      (pGVar16->fields)._value.fields.S = GStackY_1d8.S;
      (pGVar16->fields)._value.fields.V = GStackY_1d8.V;
      pGVar22 = pGVar16;
      pGVar15 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pGVar16,(MethodInfo *)0x0);
      if ((pGVar15 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) &&
         (pIVar13 = UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)pGVar15,MethodInfo_LayoutElement_AddComponent_LayoutElement), pGVar22 = pGVar15,
         pIVar13 != (Il2CppObject *)0x0)) {
        if (cVar4 == '\0') {
          uVar26 = 0x435c0000;
        }
        else {
          uVar26 = 0x43820000;
        }
        (*pIVar13->klass->vtable[0x26].methodPtr)(uVar26,pIVar13,pIVar13->klass->vtable[0x26].method);
        pMVar20 = extraout_RDX_00;
        if (method_00.rgctxDataDummy == (void *)0x0) {
          if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            pMVar20 = extraout_RDX_01;
          }
          method_00 = (Il2CppRGCTXData)(*(Il2CppRGCTXData **)(TypeInfo_GisketchTheme + 0xb8))->method;
        }
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Build
                  (pGVar16,(Gisketch_Aottg2UI_Styling_GisketchTheme_o *)method_00.method,pMVar20);
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(pGVar16,method_00.method);
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(pGVar16,method_00.method);
        return extraout_RAX_02;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9de2 == '\0') {
        il2cpp_runtime_helper_023445d0(&"-hex");
        g_data_057a9de2 = '\x01';
      }
      pGVar18 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                System_String__Concat_3ae5ba0((System_String_o *)pGVar22,"-hex",(MethodInfo *)0x0);
      return pGVar18;
    }
  }
label_03b6de71:
  return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT71((int7)((ulong)uVar17 >> 8),1);
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$SwatchNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchNode (System_String_o* id, System_String_o* value, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, const MethodInfo* method);
// 0x3b6c680

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchNode
          (System_String_o *id,System_String_o *value,
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  
  if (g_data_057a9ddd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"profileColorSwatch");
    il2cpp_runtime_helper_023445d0(&"ColorSwatch");
    g_data_057a9ddd = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar1 = __this;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "ColorSwatch";
    il2cpp_runtime_helper_022b4080(&__this->fields);
    (__this->fields).id = id;
    il2cpp_runtime_helper_022b4080(&(__this->fields).id,id);
    (__this->fields).style = "profileColorSwatch";
    il2cpp_runtime_helper_022b4080(&(__this->fields).style);
    (__this->fields).value = value;
    il2cpp_runtime_helper_022b4080(&(__this->fields).value,value);
    (__this->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)layout;
    il2cpp_runtime_helper_022b4080(&(__this->fields).search,layout);
    return __this;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9de1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"-visual");
    g_data_057a9de1 = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
           System_String__Concat_3ae5ba0((System_String_o *)pGVar1,"-visual",(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$SetSwatch
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetSwatch (UnityEngine_Transform_o* root, System_String_o* id, System_String_o* value, const MethodInfo* method);
// 0x3b6a9e0

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetSwatch
               (UnityEngine_Transform_o *root,System_String_o *id,System_String_o *value,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Color_Fields local_28;
  
  if (g_data_057a9dde == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_Find_Image);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9dde = '\x01';
  }
  local_28.r = 0.0;
  local_28.g = 0.0;
  local_28.b = 0.0;
  local_28.a = 0.0;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (UnityEngine_Object_o *)Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(root,id,MethodInfo_Image_Find_Image)
  ;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (value,(UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (x == (UnityEngine_Object_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057a9de5 == '\0') {
          il2cpp_runtime_helper_023445d0(&"-value");
          g_data_057a9de5 = '\x01';
        }
        System_String__Concat_3ae5ba0(value,"-value",(MethodInfo *)0x0);
        return;
      }
      (**(code **)&x->klass[1]._2.naturalAligment)
                (local_28.r,local_28._8_8_,x,x->klass[1].vtable._0_Equals.methodPtr);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$SetText
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetText (UnityEngine_Transform_o* root, System_String_o* id, System_String_o* value, const MethodInfo* method);
// 0x3b6ab10

void Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetText
               (UnityEngine_Transform_o *root,System_String_o *id,System_String_o *value,MethodInfo *method)

{
  byte bVar1;
  Il2CppRGCTXData *vtableDispatch;
  System_String_o *pSVar2;
  System_Action_GisketchActionContext__o *save;
  bool_conflict bVar3;
  bool_conflict bVar4;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *x;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  undefined8 *puVar6;
  System_String_o *pSVar7;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *pMVar8;
  System_String_o **ppSVar9;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_01;
  MethodInfo *in_stack_ffffffffffffff40;
  MethodInfo *in_stack_ffffffffffffff88;
  
  if (g_data_057a9ddf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_Find_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ddf = '\x01';
  }
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(root,id,MethodInfo_TextMeshProUGUI_Find_TextMeshProUGUI);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  __this_00 = x;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (x != (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)0x0) {
      vtableDispatch = x->klass[3].rgctx_data;
      (*(code *)vtableDispatch)(x,value,x->klass[3]._2.typeHierarchy,vtableDispatch);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9dce == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass16_0);
      il2cpp_runtime_helper_023445d0(&"-color-picker");
      il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
      il2cpp_runtime_helper_023445d0(&"Center");
      il2cpp_runtime_helper_023445d0(&"Row");
      il2cpp_runtime_helper_023445d0(&"#FFFFFF");
      il2cpp_runtime_helper_023445d0(&"row");
      g_data_057a9dce = '\x01';
    }
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass16_0);
    __this_01 = pGVar5;
    System_Object___ctor((Il2CppObject *)pGVar5,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      *(Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o **)&(pGVar5->fields).value = __this_00;
      il2cpp_runtime_helper_022b4080(&pGVar5->fields,__this_00);
      pSVar7 = (__this_00->fields)._id;
      pSVar2 = (__this_00->fields)._value;
      save = (__this_00->fields)._save;
      bVar4 = (__this_00->fields)._enableAlpha;
      bVar3 = (__this_00->fields)._livePreview;
      bVar1 = *(byte *)((long)&(__this_00->fields)._livePreview + 2);
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Register
                (pSVar7,pSVar2,save,(uint)(byte)bVar4,(uint)(byte)bVar3,(uint)bVar1,in_stack_ffffffffffffff40)
      ;
      pSVar7 = (__this_00->fields)._id;
      bVar1 = (byte)(__this_00->fields)._enableAlpha;
      if (bVar1 == 0) {
        puVar6 = &"#FFFFFF";
      }
      else {
        puVar6 = &"#FFFFFFFF";
      }
      pMVar8 = (MethodInfo *)&TypeInfo_GisketchUIColorPicker;
      pSVar2 = (System_String_o *)*puVar6;
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value(pSVar7,pSVar2,(uint)bVar1,pMVar8);
      ppSVar9 = &(pGVar5->fields).unit;
      (pGVar5->fields).unit = pSVar7;
      il2cpp_runtime_helper_022b4080(ppSVar9,pSVar7);
      if (*(char *)((long)&(__this_00->fields)._livePreview + 1) != '\0') {
        Gisketch_Aottg2UI_Code_GisketchUIColorPicker__BuildCompact(__this_00,__this,*ppSVar9,pMVar8);
        return;
      }
      build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      pSVar7 = System_String__Concat_3ae5ba0((__this_00->fields)._id,"-color-picker",(MethodInfo *)0x0);
      if (g_data_057a9d9b == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
        il2cpp_runtime_helper_023445d0(&"percent");
        g_data_057a9d9b = '\x01';
      }
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
      __this_01 = pGVar5;
      Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar5,(MethodInfo *)0x0);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
        (pGVar5->fields).value = 100.0;
        (pGVar5->fields).unit = "percent";
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).unit);
        pMVar8 = (MethodInfo *)0x0;
        layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                            (System_String_o *)0x0,10.0,pGVar5,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,1.0,in_stack_ffffffffffffff88);
        __this_01 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
        if (__this != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    (__this,"row",build,pSVar7,layout,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,pMVar8);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$Find<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_ (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo_255B7B0* method);
// 0x265b7b0

Il2CppObject *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo_255B7B0 *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  System_RuntimeTypeHandle_o SVar6;
  Unity_VisualScripting_IGraphData_c *pUVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  Il2CppMethodPointer pIVar9;
  Unity_VisualScripting_IGraphDebugData_c *pUVar10;
  MethodInfo *pMVar11;
  System_String_c *pSVar12;
  code *pcVar13;
  char cVar14;
  bool_conflict bVar15;
  System_Object_array *pSVar16;
  UnityEngine_Object_o *__this;
  Unity_VisualScripting_GraphPointer_o *pointer;
  Il2CppObject *pIVar17;
  System_Type_o *pSVar18;
  System_String_o *pSVar19;
  undefined8 uVar20;
  Unity_VisualScripting_GraphPointerException_o *pUVar21;
  Unity_VisualScripting_IGraphData_o *pUVar22;
  Il2CppMethodPointer *ppIVar23;
  void *pvVar24;
  System_Type_o *pSVar25;
  Unity_VisualScripting_IGraphDebugData_o *pUVar26;
  Il2CppObject *pIVar27;
  Unity_VisualScripting_GraphPointerException_o *pUVar28;
  long lVar29;
  void *pvVar30;
  long *plVar31;
  undefined8 *puVar32;
  Unity_VisualScripting_IGraphParent_o *pUVar33;
  void *extraout_RDX;
  undefined8 extraout_RDX_00;
  void *pvVar34;
  ulong unaff_RBX;
  Unity_VisualScripting_GraphPointer_o *pUVar35;
  System_String_o *pSVar36;
  System_String_o *pSVar37;
  void *pvVar38;
  Unity_VisualScripting_GraphPointerException_o *pUVar39;
  long lVar40;
  long lVar41;
  ulong uVar42;
  undefined1 auVar43 [16];
  undefined8 uStack_200;
  ulong auStack_1f8 [6];
  undefined8 uStack_1c8;
  ulong auStack_1c0 [6];
  undefined8 uStack_190;
  long alStack_188 [6];
  ulong auStack_158 [6];
  long alStack_128 [8];
  long alStack_e8 [6];
  undefined1 auStack_b8 [8];
  void *pvStack_b0;
  System_String_o *pSStack_a8;
  Unity_VisualScripting_GraphPointerException_o *pUStack_a0;
  Il2CppObject *pIStack_98;
  System_String_o *pSStack_90;
  Unity_VisualScripting_GraphPointerException_o *pUStack_88;
  long *plStack_80;
  Unity_VisualScripting_GraphPointer_o *pUStack_78;
  System_String_o *pSStack_70;
  Unity_VisualScripting_GraphPointer_o *pUStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  MethodInfo_255B7B0 *pMStack_50;
  System_String_o *pSStack_48;
  System_Object_array *pSStack_40;
  
  if (method->rgctx_data == (MethodInfo_255B7B0_RGCTXs *)0x0) {
    pSStack_40 = (System_Object_array *)0x265b7d7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    if (method->rgctx_data != (MethodInfo_255B7B0_RGCTXs *)0x0) goto label_0265b7e3;
    pSStack_40 = (System_Object_array *)0x265b8ef;
    il2cpp_runtime_helper_02300a20(method);
    iVar4 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
label_0265b7e3:
    iVar4 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar4 == 0) {
    pSStack_40 = (System_Object_array *)0x265b7fc;
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar35 = (Unity_VisualScripting_GraphPointer_o *)0x0;
  pSVar36 = (System_String_o *)0x0;
  pSStack_40 = (System_Object_array *)0x265b80a;
  pointer = (Unity_VisualScripting_GraphPointer_o *)root;
  bVar15 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    return (Il2CppObject *)(Unity_VisualScripting_GraphPointer_o *)0x0;
  }
  if (root == (UnityEngine_Transform_o *)0x0) {
label_0265b90c:
    pSStack_40 = (System_Object_array *)0x265b911;
    il2cpp_runtime_helper_022b2c90();
    pSVar16 = (System_Object_array *)root;
  }
  else {
    pSVar36 = (System_String_o *)0x1;
    pSStack_40 = (System_Object_array *)0x265b831;
    pointer = (Unity_VisualScripting_GraphPointer_o *)root;
    pSVar16 = UnityEngine_Component__GetComponentsInChildren_object_
                        ((UnityEngine_Component_o *)root,1,
                         (MethodInfo_24E85B0 *)
                         method->rgctx_data->_1_UnityEngine_Component_GetComponentsInChildren_T_);
    if (pSVar16 == (System_Object_array *)0x0) goto label_0265b90c;
    if ((int)pSVar16->max_length < 1) {
      return (Il2CppObject *)(Unity_VisualScripting_GraphPointer_o *)0x0;
    }
    unaff_RBX = 0;
    if ((pSVar16->max_length & 0xffffffff) != 0) {
      do {
        pUVar35 = (Unity_VisualScripting_GraphPointer_o *)pSVar16->m_Items[unaff_RBX];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pSStack_40 = (System_Object_array *)0x265b892;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar36 = (System_String_o *)0x0;
        pSStack_40 = (System_Object_array *)0x265b89e;
        pointer = pUVar35;
        bVar15 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar35,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar15 != '\0') {
          root = (UnityEngine_Transform_o *)pSVar16;
          if (pUVar35 == (Unity_VisualScripting_GraphPointer_o *)0x0) goto label_0265b90c;
          pSVar36 = (System_String_o *)0x0;
          pSStack_40 = (System_Object_array *)0x265b8b1;
          pointer = pUVar35;
          __this = (UnityEngine_Object_o *)
                   UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar35,(MethodInfo *)0x0)
          ;
          if (__this == (UnityEngine_Object_o *)0x0) goto label_0265b90c;
          pSStack_40 = (System_Object_array *)0x265b8c0;
          pointer = (Unity_VisualScripting_GraphPointer_o *)
                    UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
          pSStack_40 = (System_Object_array *)0x265b8cd;
          pSVar36 = id;
          bVar15 = System_String__op_Equality((System_String_o *)pointer,id,(MethodInfo *)0x0);
          if ((char)bVar15 != '\0') {
            return (Il2CppObject *)pUVar35;
          }
        }
        unaff_RBX = unaff_RBX + 1;
        uVar5 = (uint)pSVar16->max_length;
        if ((long)(int)uVar5 <= (long)unaff_RBX) {
          return (Il2CppObject *)(Unity_VisualScripting_GraphPointer_o *)0x0;
        }
      } while (unaff_RBX < uVar5);
    }
  }
  pSStack_40 = (System_Object_array *)0x265b916;
  uStack_60 = il2cpp_runtime_helper_022b2ca0();
  puVar32 = pSVar36[2].monitor;
  uStack_58 = unaff_RBX;
  pMStack_50 = method;
  pSStack_48 = id;
  pSStack_40 = pSVar16;
  if (puVar32 == (undefined8 *)0x0) {
    pUStack_68 = (Unity_VisualScripting_GraphPointer_o *)0x265b93f;
    il2cpp_runtime_helper_02300a20(pSVar36);
    puVar32 = pSVar36[2].monitor;
  }
  pUStack_68 = (Unity_VisualScripting_GraphPointer_o *)0x265b94b;
  pIVar17 = (Il2CppObject *)(**(code **)*puVar32)(pointer);
  if ((char)pIVar17 != '\0') {
    return pIVar17;
  }
  SVar6.fields.value =
       (System_RuntimeTypeHandle_Fields)
       ((System_RuntimeTypeHandle_Fields *)((long)pSVar36[2].monitor + 8))->value;
  pUStack_68 = (Unity_VisualScripting_GraphPointer_o *)0x265b976;
  il2cpp_runtime_helper_01f68090(g_data_057b9c50);
  pUStack_68 = (Unity_VisualScripting_GraphPointer_o *)0x265b980;
  pSVar18 = System_Type__GetTypeFromHandle(SVar6,(MethodInfo *)0x0);
  pUStack_68 = (Unity_VisualScripting_GraphPointer_o *)0x265b98f;
  pSVar19 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Graph pointer must be within a {0} for this operation.");
  pUStack_68 = (Unity_VisualScripting_GraphPointer_o *)0x265b99c;
  pSVar19 = System_String__Format(pSVar19,(Il2CppObject *)pSVar18,(MethodInfo *)0x0);
  pUStack_68 = (Unity_VisualScripting_GraphPointer_o *)0x265b9ab;
  uVar20 = il2cpp_runtime_helper_023445d0(&TypeInfo_GraphPointerException);
  pUStack_68 = (Unity_VisualScripting_GraphPointer_o *)0x265b9b3;
  pUVar21 = (Unity_VisualScripting_GraphPointerException_o *)il2cpp_runtime_helper_023052d0(uVar20);
  pIVar17 = (Il2CppObject *)0x0;
  pUStack_68 = (Unity_VisualScripting_GraphPointer_o *)0x265b9c6;
  Unity_VisualScripting_GraphPointerException___ctor(pUVar21,pSVar19,pointer,(MethodInfo *)0x0);
  pUStack_68 = (Unity_VisualScripting_GraphPointer_o *)0x265b9d1;
  pSVar37 = pSVar36;
  pUVar39 = pUVar21;
  il2cpp_runtime_helper_022b2b10();
  plStack_80 = &TypeInfo_Object;
  plVar31 = pIVar17[3].monitor;
  pvStack_b0 = extraout_RDX;
  pSStack_a8 = pSVar37;
  pSStack_90 = pSVar36;
  pUStack_88 = pUVar21;
  pUStack_78 = pointer;
  pSStack_70 = pSVar19;
  pUStack_68 = pUVar35;
  if (plVar31 == (long *)0x0) {
    alStack_e8[5] = 0x265ba14;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IGraphData);
    plVar31 = pIVar17[3].monitor;
    if (plVar31 == (long *)0x0) {
      alStack_e8[5] = 0x265ba26;
      il2cpp_runtime_helper_02300a20(pIVar17);
      plVar31 = pIVar17[3].monitor;
    }
  }
  uVar42 = (ulong)*(uint *)(*plVar31 + 0xfc);
  lVar29 = -(uVar42 + 0xf & 0xfffffffffffffff0);
  pIStack_98 = (Il2CppObject *)0x0;
  *(undefined8 *)(auStack_b8 + lVar29 + -8) = 0x265ba58;
  pUVar22 = Unity_VisualScripting_GraphPointer__get__data
                      ((Unity_VisualScripting_GraphPointer_o *)pUVar39,(MethodInfo *)0x0);
  if (pUVar22 == (Unity_VisualScripting_IGraphData_o *)0x0) {
    *(undefined8 *)(auStack_b8 + lVar29 + -8) = 0x265bb55;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar7 = pUVar22->klass;
    uVar1._0_1_ = (pUVar7->_2).rank;
    uVar1._1_1_ = (pUVar7->_2).minimumAlignment;
    pUStack_a0 = pUVar39;
    if ((ulong)uVar1 != 0) {
      pIVar8 = (pUVar7->_1).interfaceOffsets;
      lVar40 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar40) == TypeInfo_IGraphData) {
          ppIVar23 = &pUVar7->vtable[*(int *)((long)&pIVar8->offset + lVar40)].methodPtr;
          goto label_0265bac2;
        }
        lVar40 = lVar40 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar40);
    }
    *(undefined8 *)(auStack_b8 + lVar29 + -8) = 0x265baa9;
    ppIVar23 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pUVar22,TypeInfo_IGraphData,0);
label_0265bac2:
    pSVar19 = pSStack_a8;
    pIVar9 = *ppIVar23;
    *(undefined8 *)(auStack_b8 + lVar29 + -8) = 0x265bad6;
    cVar14 = (*pIVar9)(pUVar22,pSVar19,&pIStack_98);
    pIVar27 = pIStack_98;
    if (cVar14 != '\0') {
      lVar40 = *(long *)pIVar17[3].monitor;
      if ((*(byte *)(lVar40 + 0x135) & 1) == 0) {
        *(undefined8 *)(auStack_b8 + lVar29 + -8) = 0x265baf7;
        il2cpp_runtime_helper_023009c0(lVar40);
      }
      *(undefined8 *)(auStack_b8 + lVar29 + -8) = 0x265bb02;
      lVar40 = il2cpp_runtime_helper_023051f0(pIVar27);
      pIVar27 = pIStack_98;
      if (lVar40 != 0) {
        lVar40 = *(long *)pIVar17[3].monitor;
        if ((*(byte *)(lVar40 + 0x135) & 1) == 0) {
          *(undefined8 *)(auStack_b8 + lVar29 + -8) = 0x265bb24;
          lVar40 = il2cpp_runtime_helper_023009c0(lVar40);
        }
        *(undefined8 *)(auStack_b8 + lVar29 + -8) = 0x265bb32;
        pvVar24 = (void *)il2cpp_runtime_helper_022b2b80(pIVar27,lVar40,auStack_b8 + lVar29);
        pvVar30 = pvStack_b0;
        *(undefined8 *)(auStack_b8 + lVar29 + -8) = 0x265bb41;
        pIVar17 = memcpy(pvVar30,pvVar24,uVar42);
        return pIVar17;
      }
      *(undefined8 *)(auStack_b8 + lVar29 + -8) = 0x265bb78;
      il2cpp_runtime_helper_01f681a0(pIVar27);
      *(undefined8 *)(auStack_b8 + lVar29 + -8) = 0x265bb82;
      pSVar18 = System_Object__GetType(pIVar27,(MethodInfo *)0x0);
      SVar6.fields.value =
           (System_RuntimeTypeHandle_Fields)
           ((System_RuntimeTypeHandle_Fields *)((long)pIVar17[3].monitor + 8))->value;
      *(undefined8 *)(auStack_b8 + lVar29 + -8) = 0x265bba1;
      il2cpp_runtime_helper_01f68090(g_data_057b9c50);
      *(undefined8 *)(auStack_b8 + lVar29 + -8) = 0x265bbab;
      pSVar25 = System_Type__GetTypeFromHandle(SVar6,(MethodInfo *)0x0);
      *(undefined8 *)(auStack_b8 + lVar29 + -8) = 0x265bbba;
      pSVar36 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Graph element data type mismatch. Found {0}, expected {1}.");
      *(undefined8 *)(auStack_b8 + lVar29 + -8) = 0x265bbca;
      pSVar36 = System_String__Format_3af78e0
                          (pSVar36,(Il2CppObject *)pSVar18,(Il2CppObject *)pSVar25,(MethodInfo *)0x0);
      goto label_0265bbca;
    }
  }
  *(undefined8 *)(auStack_b8 + lVar29 + -8) = 0x265bb61;
  pSVar36 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Missing graph element data for {0}.");
  *(undefined8 *)(auStack_b8 + lVar29 + -8) = 0x265bb6e;
  pSVar36 = System_String__Format(pSVar36,(Il2CppObject *)pSVar19,(MethodInfo *)0x0);
label_0265bbca:
  *(undefined8 *)(auStack_b8 + lVar29 + -8) = 0x265bbd9;
  uVar20 = il2cpp_runtime_helper_023445d0(&TypeInfo_GraphPointerException);
  *(undefined8 *)(auStack_b8 + lVar29 + -8) = 0x265bbe1;
  pUVar21 = (Unity_VisualScripting_GraphPointerException_o *)il2cpp_runtime_helper_023052d0(uVar20);
  pUVar39 = pUStack_a0;
  *(undefined8 *)(auStack_b8 + lVar29 + -8) = 0x265bbf5;
  Unity_VisualScripting_GraphPointerException___ctor
            (pUVar21,pSVar36,(Unity_VisualScripting_GraphPointer_o *)pUVar39,(MethodInfo *)0x0);
  *(code **)(auStack_b8 + lVar29 + -8) = Unity_VisualScripting_GraphPointer__GetElementDebugData_object_;
  pIVar27 = pIVar17;
  pUVar39 = pUVar21;
  auVar43 = il2cpp_runtime_helper_022b2b10();
  lVar40 = auVar43._8_8_;
  *(System_String_o **)(auStack_b8 + lVar29 + -8) = pSVar19;
  *(System_String_o **)((long)alStack_e8 + lVar29 + 0x20) = pSVar36;
  *(Il2CppObject **)((long)alStack_e8 + lVar29 + 0x18) = pIVar17;
  *(Unity_VisualScripting_GraphPointerException_o **)((long)alStack_e8 + lVar29 + 0x10) = pUVar21;
  *(long *)((long)alStack_e8 + lVar29 + 8) = auVar43._0_8_;
  if (*(long *)(lVar40 + 0x38) == 0) {
    *(undefined8 *)((long)alStack_e8 + lVar29) = 0x265bc24;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IGraphDebugData);
    if (*(long *)(lVar40 + 0x38) == 0) {
      *(undefined8 *)((long)alStack_e8 + lVar29) = 0x265bc34;
      il2cpp_runtime_helper_02300a20(lVar40);
    }
  }
  *(undefined8 *)((long)alStack_e8 + lVar29) = 0x265bc3e;
  pUVar26 = Unity_VisualScripting_GraphPointer__get_debugData
                      ((Unity_VisualScripting_GraphPointer_o *)pUVar39,(MethodInfo *)0x0);
  if (pUVar26 == (Unity_VisualScripting_IGraphDebugData_o *)0x0) {
    *(undefined8 *)((long)alStack_e8 + lVar29) = 0x265bd28;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar10 = pUVar26->klass;
    uVar2._0_1_ = (pUVar10->_2).rank;
    uVar2._1_1_ = (pUVar10->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar8 = (pUVar10->_1).interfaceOffsets;
      lVar41 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar41) == TypeInfo_IGraphDebugData) {
          ppIVar23 = &pUVar10->vtable[*(int *)((long)&pIVar8->offset + lVar41)].methodPtr;
          goto label_0265bca1;
        }
        lVar41 = lVar41 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar41);
    }
    *(undefined8 *)((long)alStack_e8 + lVar29) = 0x265bc89;
    ppIVar23 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pUVar26,TypeInfo_IGraphDebugData,0);
label_0265bca1:
    pMVar11 = (MethodInfo *)ppIVar23[1];
    pIVar9 = *ppIVar23;
    *(undefined8 *)((long)alStack_e8 + lVar29) = 0x265bcad;
    pIVar27 = (Il2CppObject *)(*pIVar9)(pUVar26,pIVar27,pMVar11);
    lVar41 = **(long **)(lVar40 + 0x38);
    if ((*(byte *)(lVar41 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)alStack_e8 + lVar29) = 0x265bcc9;
      il2cpp_runtime_helper_023009c0(lVar41);
    }
    *(undefined8 *)((long)alStack_e8 + lVar29) = 0x265bcd4;
    lVar41 = il2cpp_runtime_helper_023051f0(pIVar27);
    if (lVar41 != 0) {
      lVar40 = **(long **)(lVar40 + 0x38);
      if ((*(byte *)(lVar40 + 0x135) & 1) == 0) {
        *(undefined8 *)((long)alStack_e8 + lVar29) = 0x265bcf2;
        lVar40 = il2cpp_runtime_helper_023009c0(lVar40);
      }
      if (pIVar27 != (Il2CppObject *)0x0) {
        *(undefined8 *)((long)alStack_e8 + lVar29) = 0x265bd05;
        pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_023051f0(pIVar27,lVar40);
        if (pIVar17 != (Il2CppObject *)0x0) {
          return pIVar17;
        }
        *(undefined8 *)((long)alStack_e8 + lVar29) = 0x265bd15;
        il2cpp_runtime_helper_022b2fd0(pIVar27,lVar40);
      }
      return (Il2CppObject *)0x0;
    }
  }
  *(undefined8 *)((long)alStack_e8 + lVar29) = 0x265bd30;
  il2cpp_runtime_helper_01f681a0(pIVar27);
  *(undefined8 *)((long)alStack_e8 + lVar29) = 0x265bd3a;
  pSVar18 = System_Object__GetType(pIVar27,(MethodInfo *)0x0);
  SVar6.fields.value =
       (System_RuntimeTypeHandle_Fields)
       ((System_RuntimeTypeHandle_Fields *)(*(long *)(lVar40 + 0x38) + 8))->value;
  *(undefined8 *)((long)alStack_e8 + lVar29) = 0x265bd59;
  il2cpp_runtime_helper_01f68090(g_data_057b9c50);
  *(undefined8 *)((long)alStack_e8 + lVar29) = 0x265bd63;
  pSVar25 = System_Type__GetTypeFromHandle(SVar6,(MethodInfo *)0x0);
  *(undefined8 *)((long)alStack_e8 + lVar29) = 0x265bd72;
  pSVar36 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Graph element runtime debug data type mismatch. Found {0}, expected {1}.");
  *(undefined8 *)((long)alStack_e8 + lVar29) = 0x265bd82;
  pSVar36 = System_String__Format_3af78e0
                      (pSVar36,(Il2CppObject *)pSVar18,(Il2CppObject *)pSVar25,(MethodInfo *)0x0);
  *(undefined8 *)((long)alStack_e8 + lVar29) = 0x265bd91;
  uVar20 = il2cpp_runtime_helper_023445d0(&TypeInfo_GraphPointerException);
  *(undefined8 *)((long)alStack_e8 + lVar29) = 0x265bd99;
  pUVar28 = (Unity_VisualScripting_GraphPointerException_o *)il2cpp_runtime_helper_023052d0(uVar20);
  pvVar30 = (void *)0x0;
  *(undefined8 *)((long)alStack_e8 + lVar29) = 0x265bdac;
  Unity_VisualScripting_GraphPointerException___ctor
            (pUVar28,pSVar36,(Unity_VisualScripting_GraphPointer_o *)pUVar39,(MethodInfo *)0x0);
  *(undefined8 *)((long)alStack_e8 + lVar29) = 0x265bdb7;
  lVar41 = lVar40;
  pUVar21 = pUVar28;
  il2cpp_runtime_helper_022b2b10();
  *(Unity_VisualScripting_GraphPointer_o ***)((long)alStack_e8 + lVar29) = &pUStack_68;
  *(System_String_o **)((long)alStack_128 + lVar29 + 0x38) = pSVar36;
  *(Unity_VisualScripting_GraphPointerException_o **)((long)alStack_128 + lVar29 + 0x30) = pUVar39;
  *(ulong *)((long)alStack_128 + lVar29 + 0x28) = uVar42;
  *(long *)((long)alStack_128 + lVar29 + 0x20) = lVar40;
  *(Unity_VisualScripting_GraphPointerException_o **)((long)alStack_128 + lVar29 + 0x18) = pUVar28;
  *(undefined8 *)((long)alStack_128 + lVar29) = extraout_RDX_00;
  *(long *)((long)alStack_128 + lVar29 + 8) = lVar41;
  plVar31 = *(long **)((long)pvVar30 + 0x38);
  if (plVar31 == (long *)0x0) {
    *(undefined8 *)((long)auStack_158 + lVar29 + 0x28) = 0x265bdf4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IGraphDebugData);
    plVar31 = *(long **)((long)pvVar30 + 0x38);
    if (plVar31 == (long *)0x0) {
      *(undefined8 *)((long)auStack_158 + lVar29 + 0x28) = 0x265be05;
      il2cpp_runtime_helper_02300a20(pvVar30);
      plVar31 = *(long **)((long)pvVar30 + 0x38);
    }
  }
  uVar42 = (ulong)*(uint *)(*plVar31 + 0xfc);
  lVar40 = (long)alStack_128 + (lVar29 - (uVar42 + 0xf & 0xfffffffffffffff0));
  *(Unity_VisualScripting_GraphPointerException_o **)((long)alStack_128 + lVar29 + 0x10) = pUVar21;
  *(undefined8 *)(lVar40 + -8) = 0x265be33;
  pSVar19 = (System_String_o *)
            Unity_VisualScripting_GraphPointer__get_debugData
                      ((Unity_VisualScripting_GraphPointer_o *)pUVar21,(MethodInfo *)0x0);
  if (pSVar19 == (System_String_o *)0x0) {
    *(undefined8 *)(lVar40 + -8) = 0x265bf22;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar12 = pSVar19->klass;
    uVar3._0_1_ = (pSVar12->_2).rank;
    uVar3._1_1_ = (pSVar12->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar8 = (pSVar12->_1).interfaceOffsets;
      lVar41 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar41) == TypeInfo_IGraphDebugData) {
          ppIVar23 = &(&(pSVar12->vtable)._0_Equals)[*(int *)((long)&pIVar8->offset + lVar41)].methodPtr;
          goto label_0265bea1;
        }
        lVar41 = lVar41 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar41);
    }
    *(undefined8 *)(lVar40 + -8) = 0x265be89;
    ppIVar23 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar19,TypeInfo_IGraphDebugData,0);
label_0265bea1:
    pMVar11 = (MethodInfo *)ppIVar23[1];
    uVar20 = *(undefined8 *)((long)alStack_128 + lVar29 + 8);
    pIVar9 = *ppIVar23;
    *(undefined8 *)(lVar40 + -8) = 0x265beae;
    pUVar21 = (Unity_VisualScripting_GraphPointerException_o *)(*pIVar9)(pSVar19,uVar20,pMVar11);
    lVar41 = **(long **)((long)pvVar30 + 0x38);
    if ((*(byte *)(lVar41 + 0x135) & 1) == 0) {
      *(undefined8 *)(lVar40 + -8) = 0x265bec9;
      il2cpp_runtime_helper_023009c0(lVar41);
    }
    *(undefined8 *)(lVar40 + -8) = 0x265bed4;
    lVar41 = il2cpp_runtime_helper_023051f0(pUVar21);
    pSVar36 = pSVar19;
    if (lVar41 != 0) {
      lVar41 = **(long **)((long)pvVar30 + 0x38);
      if ((*(byte *)(lVar41 + 0x135) & 1) == 0) {
        *(undefined8 *)(lVar40 + -8) = 0x265bef1;
        lVar41 = il2cpp_runtime_helper_023009c0(lVar41);
      }
      *(undefined8 *)(lVar40 + -8) = 0x265beff;
      pvVar24 = (void *)il2cpp_runtime_helper_022b2b80(pUVar21,lVar41,lVar40);
      pvVar30 = *(void **)((long)alStack_128 + lVar29);
      *(undefined8 *)(lVar40 + -8) = 0x265bf0e;
      pIVar17 = memcpy(pvVar30,pvVar24,uVar42);
      return pIVar17;
    }
  }
  *(undefined8 *)(lVar40 + -8) = 0x265bf2a;
  il2cpp_runtime_helper_01f681a0(pUVar21);
  *(undefined8 *)(lVar40 + -8) = 0x265bf34;
  pSVar18 = System_Object__GetType((Il2CppObject *)pUVar21,(MethodInfo *)0x0);
  SVar6.fields.value =
       (System_RuntimeTypeHandle_Fields)
       ((System_RuntimeTypeHandle_Fields *)(*(long *)((long)pvVar30 + 0x38) + 8))->value;
  *(undefined8 *)(lVar40 + -8) = 0x265bf52;
  il2cpp_runtime_helper_01f68090(g_data_057b9c50);
  *(undefined8 *)(lVar40 + -8) = 0x265bf5c;
  pSVar25 = System_Type__GetTypeFromHandle(SVar6,(MethodInfo *)0x0);
  *(undefined8 *)(lVar40 + -8) = 0x265bf6b;
  pSVar19 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Graph element runtime debug data type mismatch. Found {0}, expected {1}.");
  *(undefined8 *)(lVar40 + -8) = 0x265bf7b;
  pSVar19 = System_String__Format_3af78e0
                      (pSVar19,(Il2CppObject *)pSVar18,(Il2CppObject *)pSVar25,(MethodInfo *)0x0);
  *(undefined8 *)(lVar40 + -8) = 0x265bf8a;
  uVar20 = il2cpp_runtime_helper_023445d0(&TypeInfo_GraphPointerException);
  *(undefined8 *)(lVar40 + -8) = 0x265bf92;
  pUVar21 = (Unity_VisualScripting_GraphPointerException_o *)il2cpp_runtime_helper_023052d0(uVar20);
  pUVar35 = *(Unity_VisualScripting_GraphPointer_o **)((long)alStack_128 + lVar29 + 0x10);
  *(undefined8 *)(lVar40 + -8) = 0x265bfa6;
  Unity_VisualScripting_GraphPointerException___ctor(pUVar21,pSVar19,pUVar35,(MethodInfo *)0x0);
  *(undefined8 *)(lVar40 + -8) = 0x265bfb1;
  pvVar24 = pvVar30;
  pUVar39 = pUVar21;
  uVar20 = il2cpp_runtime_helper_022b2b10();
  *(System_String_o **)(lVar40 + -8) = pSVar36;
  *(System_String_o **)(lVar40 + -0x10) = pSVar19;
  *(ulong *)(lVar40 + -0x18) = uVar42;
  *(Unity_VisualScripting_GraphPointerException_o **)(lVar40 + -0x20) = pUVar21;
  *(undefined8 *)(lVar40 + -0x28) = uVar20;
  if (*(long *)((long)pvVar24 + 0x38) == 0) {
    *(undefined8 *)(lVar40 + -0x30) = 0x265bfdd;
    il2cpp_runtime_helper_02300a20(pvVar24);
  }
  *(undefined8 *)(lVar40 + -0x30) = 0x265bfe7;
  pIVar17 = (Il2CppObject *)
            Unity_VisualScripting_GraphPointer__get_data
                      ((Unity_VisualScripting_GraphPointer_o *)pUVar39,(MethodInfo *)0x0);
  lVar41 = **(long **)((long)pvVar24 + 0x38);
  if ((*(byte *)(lVar41 + 0x135) & 1) == 0) {
    *(undefined8 *)(lVar40 + -0x30) = 0x265c002;
    il2cpp_runtime_helper_023009c0(lVar41);
  }
  *(undefined8 *)(lVar40 + -0x30) = 0x265c00d;
  lVar41 = il2cpp_runtime_helper_023051f0(pIVar17);
  if (lVar41 != 0) {
    lVar29 = **(long **)((long)pvVar24 + 0x38);
    if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
      *(undefined8 *)(lVar40 + -0x30) = 0x265c02a;
      lVar29 = il2cpp_runtime_helper_023009c0(lVar29);
    }
    if (pIVar17 != (Il2CppObject *)0x0) {
      *(undefined8 *)(lVar40 + -0x30) = 0x265c03d;
      pIVar27 = (Il2CppObject *)il2cpp_runtime_helper_023051f0(pIVar17,lVar29);
      if (pIVar27 != (Il2CppObject *)0x0) {
        return pIVar27;
      }
      *(undefined8 *)(lVar40 + -0x30) = 0x265c04d;
      il2cpp_runtime_helper_022b2fd0(pIVar17,lVar29);
    }
    return (Il2CppObject *)0x0;
  }
  *(undefined8 *)(lVar40 + -0x30) = 0x265c063;
  il2cpp_runtime_helper_01f681a0(pIVar17);
  *(undefined8 *)(lVar40 + -0x30) = 0x265c06d;
  pSVar18 = System_Object__GetType(pIVar17,(MethodInfo *)0x0);
  SVar6.fields.value =
       (System_RuntimeTypeHandle_Fields)
       ((System_RuntimeTypeHandle_Fields *)(*(long *)((long)pvVar24 + 0x38) + 8))->value;
  *(undefined8 *)(lVar40 + -0x30) = 0x265c08b;
  il2cpp_runtime_helper_01f68090(g_data_057b9c50);
  *(undefined8 *)(lVar40 + -0x30) = 0x265c095;
  pSVar25 = System_Type__GetTypeFromHandle(SVar6,(MethodInfo *)0x0);
  *(undefined8 *)(lVar40 + -0x30) = 0x265c0a4;
  pSVar36 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Graph data type mismatch. Found {0}, expected {1}.");
  *(undefined8 *)(lVar40 + -0x30) = 0x265c0b4;
  pSVar36 = System_String__Format_3af78e0
                      (pSVar36,(Il2CppObject *)pSVar18,(Il2CppObject *)pSVar25,(MethodInfo *)0x0);
  *(undefined8 *)(lVar40 + -0x30) = 0x265c0c3;
  uVar20 = il2cpp_runtime_helper_023445d0(&TypeInfo_GraphPointerException);
  *(undefined8 *)(lVar40 + -0x30) = 0x265c0cb;
  pUVar28 = (Unity_VisualScripting_GraphPointerException_o *)il2cpp_runtime_helper_023052d0(uVar20);
  *(undefined8 *)(lVar40 + -0x30) = 0x265c0de;
  Unity_VisualScripting_GraphPointerException___ctor
            (pUVar28,pSVar36,(Unity_VisualScripting_GraphPointer_o *)pUVar39,(MethodInfo *)0x0);
  *(undefined8 *)(lVar40 + -0x30) = 0x265c0e9;
  pvVar38 = pvVar24;
  pUVar21 = pUVar28;
  auVar43 = il2cpp_runtime_helper_022b2b10();
  pvVar34 = auVar43._8_8_;
  *(long *)(lVar40 + -0x30) = (long)alStack_e8 + lVar29;
  *(void **)(lVar40 + -0x38) = pvVar24;
  *(Unity_VisualScripting_GraphPointerException_o **)(lVar40 + -0x40) = pUVar39;
  *(void **)(lVar40 + -0x48) = pvVar30;
  *(System_String_o **)(lVar40 + -0x50) = pSVar36;
  *(Unity_VisualScripting_GraphPointerException_o **)(lVar40 + -0x58) = pUVar28;
  *(long *)(lVar40 + -0x60) = auVar43._0_8_;
  plVar31 = *(long **)((long)pvVar34 + 0x38);
  if (plVar31 == (long *)0x0) {
    *(undefined8 *)(lVar40 + -0x68) = 0x265c118;
    il2cpp_runtime_helper_02300a20(pvVar34);
    plVar31 = *(long **)((long)pvVar34 + 0x38);
  }
  uVar42 = (ulong)*(uint *)(*plVar31 + 0xfc);
  lVar41 = (lVar40 + -0x60) - (uVar42 + 0xf & 0xfffffffffffffff0);
  *(Unity_VisualScripting_GraphPointerException_o **)(lVar40 + -0x60) = pUVar21;
  *(undefined8 *)(lVar41 + -8) = 0x265c146;
  pIVar17 = (Il2CppObject *)
            Unity_VisualScripting_GraphPointer__get_data
                      ((Unity_VisualScripting_GraphPointer_o *)pUVar21,(MethodInfo *)0x0);
  lVar29 = **(long **)((long)pvVar34 + 0x38);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    *(undefined8 *)(lVar41 + -8) = 0x265c161;
    il2cpp_runtime_helper_023009c0(lVar29);
  }
  *(undefined8 *)(lVar41 + -8) = 0x265c16c;
  lVar29 = il2cpp_runtime_helper_023051f0(pIVar17);
  if (lVar29 != 0) {
    lVar29 = **(long **)((long)pvVar34 + 0x38);
    if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
      *(undefined8 *)(lVar41 + -8) = 0x265c189;
      lVar29 = il2cpp_runtime_helper_023009c0(lVar29);
    }
    *(undefined8 *)(lVar41 + -8) = 0x265c197;
    pvVar30 = (void *)il2cpp_runtime_helper_022b2b80(pIVar17,lVar29,lVar41);
    *(undefined8 *)(lVar41 + -8) = 0x265c1a5;
    pIVar17 = memcpy(pvVar38,pvVar30,uVar42);
    return pIVar17;
  }
  *(undefined8 *)(lVar41 + -8) = 0x265c1bc;
  il2cpp_runtime_helper_01f681a0(pIVar17);
  *(undefined8 *)(lVar41 + -8) = 0x265c1c6;
  pSVar18 = System_Object__GetType(pIVar17,(MethodInfo *)0x0);
  SVar6.fields.value =
       (System_RuntimeTypeHandle_Fields)
       ((System_RuntimeTypeHandle_Fields *)(*(long *)((long)pvVar34 + 0x38) + 8))->value;
  *(undefined8 *)(lVar41 + -8) = 0x265c1e4;
  il2cpp_runtime_helper_01f68090(g_data_057b9c50);
  *(undefined8 *)(lVar41 + -8) = 0x265c1ee;
  pSVar25 = System_Type__GetTypeFromHandle(SVar6,(MethodInfo *)0x0);
  *(undefined8 *)(lVar41 + -8) = 0x265c1fd;
  pSVar36 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Graph data type mismatch. Found {0}, expected {1}.");
  *(undefined8 *)(lVar41 + -8) = 0x265c20d;
  pSVar36 = System_String__Format_3af78e0
                      (pSVar36,(Il2CppObject *)pSVar18,(Il2CppObject *)pSVar25,(MethodInfo *)0x0);
  *(undefined8 *)(lVar41 + -8) = 0x265c21c;
  uVar20 = il2cpp_runtime_helper_023445d0(&TypeInfo_GraphPointerException);
  *(undefined8 *)(lVar41 + -8) = 0x265c224;
  pUVar21 = (Unity_VisualScripting_GraphPointerException_o *)il2cpp_runtime_helper_023052d0(uVar20);
  pUVar35 = *(Unity_VisualScripting_GraphPointer_o **)(lVar40 + -0x60);
  *(undefined8 *)(lVar41 + -8) = 0x265c238;
  Unity_VisualScripting_GraphPointerException___ctor(pUVar21,pSVar36,pUVar35,(MethodInfo *)0x0);
  *(undefined8 *)(lVar41 + -8) = 0x265c243;
  pvVar30 = pvVar34;
  pUVar39 = pUVar21;
  auVar43 = il2cpp_runtime_helper_022b2b10();
  pvVar24 = auVar43._8_8_;
  *(long *)(lVar41 + -8) = lVar40 + -0x30;
  *(void **)(lVar41 + -0x10) = pvVar38;
  *(System_String_o **)(lVar41 + -0x18) = pSVar36;
  *(void **)(lVar41 + -0x20) = pvVar34;
  *(ulong *)(lVar41 + -0x28) = uVar42;
  *(Unity_VisualScripting_GraphPointerException_o **)(lVar41 + -0x30) = pUVar21;
  *(long *)(lVar41 + -0x38) = auVar43._0_8_;
  plVar31 = *(long **)((long)pvVar24 + 0x38);
  if (plVar31 == (long *)0x0) {
    *(undefined8 *)(lVar41 + -0x40) = 0x265c278;
    il2cpp_runtime_helper_02300a20(pvVar24);
    plVar31 = *(long **)((long)pvVar24 + 0x38);
  }
  uVar42 = (ulong)*(uint *)(*plVar31 + 0xfc);
  lVar40 = (lVar41 + -0x38) - (uVar42 + 0xf & 0xfffffffffffffff0);
  *(Unity_VisualScripting_GraphPointerException_o **)(lVar41 + -0x38) = pUVar39;
  *(undefined8 *)(lVar40 + -8) = 0x265c2a6;
  pIVar17 = (Il2CppObject *)
            Unity_VisualScripting_GraphPointer__get_debugData
                      ((Unity_VisualScripting_GraphPointer_o *)pUVar39,(MethodInfo *)0x0);
  lVar29 = **(long **)((long)pvVar24 + 0x38);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    *(undefined8 *)(lVar40 + -8) = 0x265c2c1;
    il2cpp_runtime_helper_023009c0(lVar29);
  }
  *(undefined8 *)(lVar40 + -8) = 0x265c2cc;
  lVar29 = il2cpp_runtime_helper_023051f0(pIVar17);
  if (lVar29 != 0) {
    lVar29 = **(long **)((long)pvVar24 + 0x38);
    if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
      *(undefined8 *)(lVar40 + -8) = 0x265c2e9;
      lVar29 = il2cpp_runtime_helper_023009c0(lVar29);
    }
    *(undefined8 *)(lVar40 + -8) = 0x265c2f7;
    pvVar24 = (void *)il2cpp_runtime_helper_022b2b80(pIVar17,lVar29,lVar40);
    *(undefined8 *)(lVar40 + -8) = 0x265c305;
    pIVar17 = memcpy(pvVar30,pvVar24,uVar42);
    return pIVar17;
  }
  *(undefined8 *)(lVar40 + -8) = 0x265c31c;
  il2cpp_runtime_helper_01f681a0(pIVar17);
  *(undefined8 *)(lVar40 + -8) = 0x265c326;
  pSVar18 = System_Object__GetType(pIVar17,(MethodInfo *)0x0);
  SVar6.fields.value =
       (System_RuntimeTypeHandle_Fields)
       ((System_RuntimeTypeHandle_Fields *)(*(long *)((long)pvVar24 + 0x38) + 8))->value;
  *(undefined8 *)(lVar40 + -8) = 0x265c344;
  il2cpp_runtime_helper_01f68090(g_data_057b9c50);
  *(undefined8 *)(lVar40 + -8) = 0x265c34e;
  pSVar25 = System_Type__GetTypeFromHandle(SVar6,(MethodInfo *)0x0);
  *(undefined8 *)(lVar40 + -8) = 0x265c35d;
  pSVar36 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Graph debug data type mismatch. Found {0}, expected {1}.");
  *(undefined8 *)(lVar40 + -8) = 0x265c36d;
  pSVar36 = System_String__Format_3af78e0
                      (pSVar36,(Il2CppObject *)pSVar18,(Il2CppObject *)pSVar25,(MethodInfo *)0x0);
  *(undefined8 *)(lVar40 + -8) = 0x265c37c;
  uVar20 = il2cpp_runtime_helper_023445d0(&TypeInfo_GraphPointerException);
  *(undefined8 *)(lVar40 + -8) = 0x265c384;
  pUVar21 = (Unity_VisualScripting_GraphPointerException_o *)il2cpp_runtime_helper_023052d0(uVar20);
  pUVar35 = *(Unity_VisualScripting_GraphPointer_o **)(lVar41 + -0x38);
  *(undefined8 *)(lVar40 + -8) = 0x265c398;
  Unity_VisualScripting_GraphPointerException___ctor(pUVar21,pSVar36,pUVar35,(MethodInfo *)0x0);
  *(undefined8 *)(lVar40 + -8) = 0x265c3a3;
  pvVar38 = pvVar24;
  pUVar39 = pUVar21;
  auVar43 = il2cpp_runtime_helper_022b2b10();
  lVar29 = auVar43._8_8_;
  *(long *)(lVar40 + -8) = lVar41 + -8;
  *(void **)(lVar40 + -0x10) = pvVar30;
  *(System_String_o **)(lVar40 + -0x18) = pSVar36;
  *(void **)(lVar40 + -0x20) = pvVar24;
  *(ulong *)(lVar40 + -0x28) = uVar42;
  *(Unity_VisualScripting_GraphPointerException_o **)(lVar40 + -0x30) = pUVar21;
  *(long *)(lVar40 + -0x38) = auVar43._0_8_;
  puVar32 = *(undefined8 **)(lVar29 + 0x38);
  if (puVar32 == (undefined8 *)0x0) {
    *(undefined8 *)(lVar40 + -0x40) = 0x265c3d8;
    il2cpp_runtime_helper_02300a20(lVar29);
    puVar32 = *(undefined8 **)(lVar29 + 0x38);
  }
  uVar5 = *(uint *)(puVar32[1] + 0xfc);
  lVar40 = (lVar40 + -0x38) - ((ulong)uVar5 + 0xf & 0xfffffffffffffff0);
  pcVar13 = *(code **)*puVar32;
  *(undefined8 *)(lVar40 + -8) = 0x265c401;
  (*pcVar13)(pUVar39);
  *(undefined8 *)(lVar40 + -8) = 0x265c40b;
  pUVar33 = Unity_VisualScripting_GraphPointer__get_parent
                      ((Unity_VisualScripting_GraphPointer_o *)pUVar39,(MethodInfo *)0x0);
  lVar29 = *(long *)(*(long *)(lVar29 + 0x38) + 8);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    *(undefined8 *)(lVar40 + -8) = 0x265c428;
    lVar29 = il2cpp_runtime_helper_023009c0(lVar29);
  }
  *(undefined8 *)(lVar40 + -8) = 0x265c436;
  pvVar30 = (void *)il2cpp_runtime_helper_022b2b80(pUVar33,lVar29,lVar40);
  *(undefined8 *)(lVar40 + -8) = 0x265c444;
  pIVar17 = memcpy(pvVar38,pvVar30,(ulong)uVar5);
  return pIVar17;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$PreviewId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__PreviewId (System_String_o* id, const MethodInfo* method);
// 0x3b6c640

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__PreviewId(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057a9de0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"-preview");
    g_data_057a9de0 = '\x01';
  }
  pSVar1 = System_String__Concat_3ae5ba0(id,"-preview",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$VisualId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__VisualId (System_String_o* id, const MethodInfo* method);
// 0x3b6c770

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__VisualId(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057a9de1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"-visual");
    g_data_057a9de1 = '\x01';
  }
  pSVar1 = System_String__Concat_3ae5ba0(id,"-visual",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$HexId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__HexId (System_String_o* id, const MethodInfo* method);
// 0x3b6e0b0

System_String_o * Gisketch_Aottg2UI_Code_GisketchUIColorPicker__HexId(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057a9de2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"-hex");
    g_data_057a9de2 = '\x01';
  }
  pSVar1 = System_String__Concat_3ae5ba0(id,"-hex",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$ButtonId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__ButtonId (System_String_o* id, const MethodInfo* method);
// 0x3b6e0f0

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__ButtonId(System_String_o *id,MethodInfo *method)

{
  int32_t destPos;
  bool bVar1;
  bool_conflict bVar2;
  System_String_o *dest;
  undefined8 uVar3;
  undefined4 extraout_var;
  undefined8 in_RCX;
  MethodInfo *method_00;
  MethodInfo *pMVar4;
  
  if (g_data_057a9de3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"-button");
    g_data_057a9de3 = '\x01';
  }
  pMVar4 = "-button";
  if ((id == (System_String_o *)0x0) || ((id->fields)._stringLength == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (("-button" == (MethodInfo *)0x0) || (*(int *)&"-button"->invoker_method == 0)) {
    method_00 = (MethodInfo *)CONCAT71((int7)((ulong)in_RCX >> 8),1);
  }
  else {
    method_00 = (MethodInfo *)0x0;
  }
  if (bVar1) {
    if ((char)method_00 == '\0') {
      return (System_String_o *)"-button";
    }
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if ((char)method_00 == '\0') {
    if ((id == (System_String_o *)0x0) || ("-button" == (MethodInfo *)0x0)) {
      uVar3 = il2cpp_runtime_helper_022b2c90(id,"-button",0);
      if ((MethodInfo *)id == pMVar4) {
        return (System_String_o *)CONCAT71((int7)((ulong)uVar3 >> 8),1);
      }
      if ((((MethodInfo *)id != (MethodInfo *)0x0) && (pMVar4 != (MethodInfo *)0x0)) &&
         (*(int *)&((MethodInfo *)id)->invoker_method == *(int *)&pMVar4->invoker_method)) {
        bVar2 = System_SpanHelpers__SequenceEqual
                          ((uint8_t *)((long)&((MethodInfo *)id)->invoker_method + 4),
                           (uint8_t *)((long)&pMVar4->invoker_method + 4),
                           (long)*(int *)&((MethodInfo *)id)->invoker_method * 2,(MethodInfo *)0x0);
        return (System_String_o *)CONCAT44(extraout_var,bVar2);
      }
      return (System_String_o *)0x0;
    }
    destPos = (id->fields)._stringLength;
    dest = il2cpp_runtime_helper_023020c0(*(int *)&"-button"->invoker_method + destPos,"-button");
    System_String__FillStringChecked(dest,0,id,method_00);
    System_String__FillStringChecked(dest,destPos,(System_String_o *)pMVar4,method_00);
    id = dest;
  }
  return id;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$SwatchId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchId (System_String_o* id, const MethodInfo* method);
// 0x3b6a9a0

System_String_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SwatchId(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057a9de4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"-swatch");
    g_data_057a9de4 = '\x01';
  }
  pSVar1 = System_String__Concat_3ae5ba0(id,"-swatch",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPicker$$TextId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchUIColorPicker__TextId (System_String_o* id, const MethodInfo* method);
// 0x3b6aad0

System_String_o * Gisketch_Aottg2UI_Code_GisketchUIColorPicker__TextId(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057a9de5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"-value");
    g_data_057a9de5 = '\x01';
  }
  pSVar1 = System_String__Concat_3ae5ba0(id,"-value",(MethodInfo *)0x0);
  return pSVar1;
}


