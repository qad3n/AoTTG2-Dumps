// Type: Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/GisketchUIColorPickerPopover.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$Setup
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Setup (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, System_String_o* id, UnityEngine_GameObject_o* source, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x3b6d720

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Setup
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,System_String_o *id,
               UnityEngine_GameObject_o *source,Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *value;
  byte bVar1;
  int iVar2;
  char cVar3;
  uint8_t uVar4;
  uint8_t uVar5;
  uint8_t uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool_conflict bVar10;
  UnityEngine_Transform_o *pUVar11;
  System_String_o *pSVar12;
  Il2CppObject *pIVar13;
  TMPro_TMP_InputField_o *pTVar14;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar15;
  UnityEngine_Events_UnityAction_o *pUVar16;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *b;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar17;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *method_00;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar18;
  Il2CppObject *pIVar19;
  MethodInfo *pMVar20;
  MethodInfo *pMVar21;
  uint extraout_EDX;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  long extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  System_Action_GisketchUIColorPickerValue__o **ppSVar22;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *pGVar23;
  MethodInfo_255B7B0 **ppMVar24;
  System_Action_GisketchUIColorPickerValue__o *pSVar25;
  System_Action_GisketchUIColorPickerValue__o *a;
  bool bVar26;
  undefined4 uVar27;
  UnityEngine_Color_o rgbColor;
  UnityEngine_Color_o rgbColor_00;
  undefined8 uStack_104;
  float fStack_fc;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields GStack_f8;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields GStack_e8;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *pGStack_d0;
  long *plStack_c8;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *pGStack_c0;
  long lStack_b8;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStack_b0;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *pGStack_a8;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Definition_o local_a0;
  undefined8 uStack_78;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStack_70;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStack_68;
  System_Action_GisketchUIColorPickerValue__o *pSStack_60;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *local_58;
  undefined4 local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o **local_40;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *local_38;
  
  if (g_data_057a9deb == '\0') {
    pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d753;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchUIColorPickerValue);
    pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d75f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Cancel);
    pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d76b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnVisualChanged);
    pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d777;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Save);
    pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d783;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIColorPickerVisual_Find_GisketchUIColorPickerVi);
    pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d78f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_Find_TMP_InputField);
    pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d79b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d7a7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d7b3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d7bf;
    il2cpp_runtime_helper_023445d0(&"-cancel");
    pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d7cb;
    il2cpp_runtime_helper_023445d0(&"-save");
    pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d7d7;
    il2cpp_runtime_helper_023445d0(&"-g");
    pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d7e3;
    il2cpp_runtime_helper_023445d0(&"-r");
    pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d7ef;
    il2cpp_runtime_helper_023445d0(&"-b");
    g_data_057a9deb = '\x01';
  }
  (__this->fields)._id = id;
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d806;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._id,id);
  (__this->fields)._source = source;
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d816;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._source,source);
  (__this->fields)._root = root;
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d826;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._root);
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d830;
  pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d8ea;
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9de1 == '\0') {
    pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d860;
    il2cpp_runtime_helper_023445d0(&"-visual");
    g_data_057a9de1 = '\x01';
  }
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d87b;
  pSVar12 = System_String__Concat_3ae5ba0(id,"-visual",(MethodInfo *)0x0);
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d891;
  pIVar13 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar11,pSVar12,MethodInfo_GisketchUIColorPickerVisual_Find_GisketchUIColorPickerVi);
  pIVar19 = pIVar13 + 9;
  if (pIVar13 == (Il2CppObject *)0x0) {
    pIVar19 = (Il2CppObject *)&(__this->fields)._enableAlpha;
  }
  bVar1 = *(byte *)&pIVar19->klass;
  *(byte *)&(__this->fields)._enableAlpha = bVar1;
  local_58 = __this;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d901;
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057a9dd0 == '\0') goto label_03b6d90a;
label_03b6d8c7:
    if (bVar1 != 0) goto label_03b6d8cc;
label_03b6d93a:
    iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
    pSVar12 = "#FFFFFF";
  }
  else {
    if (g_data_057a9dd0 != '\0') goto label_03b6d8c7;
label_03b6d90a:
    pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d916;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d922;
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d92e;
    il2cpp_runtime_helper_023445d0(&"#FFFFFF");
    g_data_057a9dd0 = '\x01';
    if (bVar1 == 0) goto label_03b6d93a;
label_03b6d8cc:
    iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
    pSVar12 = "#FFFFFFFF";
  }
  if (iVar2 == 0) {
    pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d956;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d965;
  pSVar12 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value(id,pSVar12,(uint)bVar1,(MethodInfo *)__this);
  pGVar23 = local_58;
  value = &(local_58->fields)._value;
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d97c;
  bVar10 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                     (pSVar12,(uint)(byte)(local_58->fields)._enableAlpha,value,(MethodInfo *)__this);
  if ((char)bVar10 == '\0') {
    fStack_44 = 0.0;
    fStack_4c = 0.0;
    fStack_48 = 0.0;
    local_50 = 0xffffffff;
    pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d9b9;
    rgbColor.fields.b = 1.0;
    rgbColor.fields.a = 1.0;
    rgbColor.fields.r = 1.0;
    rgbColor.fields.g = 1.0;
    UnityEngine_Color__RGBToHSV(rgbColor,&fStack_4c,&fStack_48,&fStack_44,(MethodInfo *)0x0);
    (value->fields).R = (char)local_50;
    (value->fields).G = (char)((uint)local_50 >> 8);
    (value->fields).B = (char)((uint)local_50 >> 0x10);
    (value->fields).A = (char)((uint)local_50 >> 0x18);
    (value->fields).H = fStack_4c;
    (pGVar23->fields)._value.fields.S = fStack_48;
    (pGVar23->fields)._value.fields.V = fStack_44;
  }
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d9d0;
  local_38 = value;
  pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pGVar23,(MethodInfo *)0x0);
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d9e7;
  pSVar12 = System_String__Concat_3ae5ba0(id,"-r",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6d9fc;
    il2cpp_runtime_helper_02337ed0();
  }
  ppMVar24 = &MethodInfo_TMP_InputField_Find_TMP_InputField;
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6da12;
  pTVar14 = (TMPro_TMP_InputField_o *)
            Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar11,pSVar12,MethodInfo_TMP_InputField_Find_TMP_InputField);
  (pGVar23->fields)._r = pTVar14;
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6da22;
  il2cpp_runtime_helper_022b4080(&(pGVar23->fields)._r);
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6da2c;
  pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pGVar23,(MethodInfo *)0x0);
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6da43;
  pSVar12 = System_String__Concat_3ae5ba0(id,"-g",(MethodInfo *)0x0);
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6da52;
  pTVar14 = (TMPro_TMP_InputField_o *)
            Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar11,pSVar12,MethodInfo_TMP_InputField_Find_TMP_InputField);
  (pGVar23->fields)._g = pTVar14;
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6da62;
  il2cpp_runtime_helper_022b4080(&(pGVar23->fields)._g);
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6da6c;
  pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pGVar23,(MethodInfo *)0x0);
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6da83;
  pSVar12 = System_String__Concat_3ae5ba0(id,"-b",(MethodInfo *)0x0);
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6da92;
  pTVar14 = (TMPro_TMP_InputField_o *)
            Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar11,pSVar12,MethodInfo_TMP_InputField_Find_TMP_InputField);
  (pGVar23->fields)._b = pTVar14;
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6daa2;
  il2cpp_runtime_helper_022b4080(&(pGVar23->fields)._b);
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6daac;
  pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pGVar23,(MethodInfo *)0x0);
  if (g_data_057a9de2 == '\0') {
    pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6dac4;
    il2cpp_runtime_helper_023445d0(&"-hex");
    g_data_057a9de2 = '\x01';
  }
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6dadf;
  pSVar12 = System_String__Concat_3ae5ba0(id,"-hex",(MethodInfo *)0x0);
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6daee;
  pTVar14 = (TMPro_TMP_InputField_o *)
            Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar11,pSVar12,MethodInfo_TMP_InputField_Find_TMP_InputField);
  (pGVar23->fields)._hex = pTVar14;
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6dafe;
  il2cpp_runtime_helper_022b4080(&(pGVar23->fields)._hex);
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6db08;
  pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pGVar23,(MethodInfo *)0x0);
  if (g_data_057a9de1 == '\0') {
    pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6db20;
    il2cpp_runtime_helper_023445d0(&"-visual");
    g_data_057a9de1 = '\x01';
  }
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6db3b;
  pSVar12 = System_String__Concat_3ae5ba0(id,"-visual",(MethodInfo *)0x0);
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6db4a;
  pGVar15 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
            Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(pUVar11,pSVar12,MethodInfo_GisketchUIColorPickerVisual_Find_GisketchUIColorPickerVi);
  pGVar17 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)&(pGVar23->fields)._visual;
  (pGVar23->fields)._visual = pGVar15;
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6db5d;
  il2cpp_runtime_helper_022b4080(pGVar17,pGVar15);
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6db69;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput(pGVar23,(pGVar23->fields)._r,method_01);
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6db75;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput(pGVar23,(pGVar23->fields)._g,method_02);
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6db81;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput(pGVar23,(pGVar23->fields)._b,method_03);
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6db8d;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireHexInput(pGVar23,(pGVar23->fields)._hex,method_04);
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6dba1;
  pSVar12 = System_String__Concat_3ae5ba0(id,"-cancel",(MethodInfo *)0x0);
  pSVar25 = (System_Action_GisketchUIColorPickerValue__o *)&TypeInfo_UnityAction;
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6dbb3;
  pUVar16 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  pMVar20 = (MethodInfo *)0x0;
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6dbce;
  UnityEngine_Events_UnityAction___ctor();
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6dbdd;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton(local_58,pSVar12,pUVar16,pMVar20);
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6dbf1;
  pSVar12 = System_String__Concat_3ae5ba0(id,"-save",(MethodInfo *)0x0);
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6dbfc;
  pUVar16 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  pMVar20 = (MethodInfo *)0x0;
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6dc17;
  UnityEngine_Events_UnityAction___ctor();
  pGVar23 = local_58;
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6dc2a;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton(local_58,pSVar12,pUVar16,pMVar20);
  pGVar15 = (pGVar23->fields)._visual;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6dc46;
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)0x0;
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6dc52;
  bVar10 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pGVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    pGVar15 = (pGVar23->fields)._visual;
    pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6dc6d;
    b = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchUIColorPickerValue);
    pMVar20 = (MethodInfo *)0x0;
    pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6dc87;
    method_00 = pGVar23;
    pGVar18 = b;
    System_Action_GisketchUIColorPickerValue____ctor();
    if (pGVar15 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
      local_40 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o **)pGVar17;
      if (g_data_057a9dfd == '\0') {
        pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6dcaa;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchUIColorPickerValue);
        g_data_057a9dfd = '\x01';
      }
      ppSVar22 = &(pGVar15->fields).Changed;
      a = (pGVar15->fields).Changed;
      do {
        pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6dcf6;
        pGVar17 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
                  System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)b,(MethodInfo *)0x0);
        pGVar23 = TypeInfo_Action_GisketchUIColorPickerValue;
        method_00 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)0x0;
        if (pGVar17 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
          pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6dd18;
          method_00 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)
                      il2cpp_runtime_helper_023051f0(pGVar17,TypeInfo_Action_GisketchUIColorPickerValue);
          ppMVar24 = (MethodInfo_255B7B0 **)pGVar23;
          if (method_00 == (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)0x0) {
            pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6dd28;
            method_00 = pGVar23;
            pGVar18 = pGVar17;
            il2cpp_runtime_helper_022b2fd0();
            pSVar25 = a;
            break;
          }
        }
        pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6dcde;
        pGVar18 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)ppSVar22;
        pSVar25 = (System_Action_GisketchUIColorPickerValue__o *)il2cpp_runtime_helper_02300640(ppSVar22,method_00,a);
        bVar26 = a != pSVar25;
        a = pSVar25;
      } while (bVar26);
      pGVar23 = local_58;
      pGVar15 = *local_40;
      if (pGVar15 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
        uVar4 = (local_38->fields).G;
        uVar5 = (local_38->fields).B;
        uVar6 = (local_38->fields).A;
        fVar7 = (local_38->fields).H;
        fVar8 = (local_38->fields).S;
        fVar9 = (local_38->fields).V;
        (pGVar15->fields)._value.fields.R = (local_38->fields).R;
        (pGVar15->fields)._value.fields.G = uVar4;
        (pGVar15->fields)._value.fields.B = uVar5;
        (pGVar15->fields)._value.fields.A = uVar6;
        (pGVar15->fields)._value.fields.H = fVar7;
        (pGVar15->fields)._value.fields.S = fVar8;
        (pGVar15->fields)._value.fields.V = fVar9;
        pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6dd4d;
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(pGVar15,(MethodInfo *)method_00);
        pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6dd55;
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(pGVar15,(MethodInfo *)method_00);
        goto label_03b6dd55;
      }
    }
    pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6dd71;
    il2cpp_runtime_helper_022b2c90();
    uStack_78 = 0;
    pGStack_70 = pGVar17;
    pGStack_68 = b;
    pSStack_60 = pSVar25;
    if (g_data_057a9dd6 == '\0') {
      pGStack_a8 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)0x3b6dda9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
      pGStack_a8 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)0x3b6ddb5;
      il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIColorPickerVisual_AddComponent_GisketchUIColor);
      pGStack_a8 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)0x3b6ddc1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
      g_data_057a9dd6 = '\x01';
    }
    local_a0.fields.Save = (System_Action_GisketchActionContext__o *)0x0;
    local_a0.fields.LivePreview = 0;
    local_a0.fields.Disabled = 0;
    local_a0.fields.Id = (System_String_o *)0x0;
    local_a0.fields.EnableAlpha = 0;
    local_a0.fields._12_4_ = 0;
    if (method_00 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)0x0) {
      pTVar14 = (TMPro_TMP_InputField_o *)0x0;
      pGStack_a8 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)0x3b6dde8;
      bVar10 = System_String__IsNullOrEmpty((System_String_o *)(method_00->fields)._r,(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
          pGStack_a8 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)0x3b6de09;
          il2cpp_runtime_helper_02337ed0();
        }
        pGVar17 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
                  **(undefined8 **)(TypeInfo_GisketchUIColorPicker + 0xb8);
        if (pGVar17 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
          pTVar14 = (method_00->fields)._r;
          pGStack_a8 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)0x3b6de32;
          pMVar20 = MethodInfo_Boolean_TryGetValue;
          bVar10 = System_Collections_Generic_Dictionary_object__GisketchUIColorPicker_Definition___TryGetValue
                             ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pGVar17,
                              (Il2CppObject *)pTVar14,&local_a0,(MethodInfo_3128A90 *)MethodInfo_Boolean_TryGetValue);
          if ((char)bVar10 == '\0') {
            return;
          }
          if (pGVar18 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
            pGStack_a8 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)0x3b6de4d;
            pTVar14 = MethodInfo_GisketchUIColorPickerVisual_AddComponent_GisketchUIColor;
            pGVar17 = pGVar18;
            pGVar15 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
                      UnityEngine_GameObject__AddComponent_object_
                                ((UnityEngine_GameObject_o *)pGVar18,(MethodInfo_255A020 *)MethodInfo_GisketchUIColorPickerVisual_AddComponent_GisketchUIColor);
            if ((extraout_RDX != 0) &&
               (pGVar15 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0)) {
              pGStack_a8 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)0x3b6de71;
              Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Setup
                        (pGVar15,(System_String_o *)(method_00->fields)._r,
                         (uint)((byte)local_a0.fields.EnableAlpha & 1),
                         *(Gisketch_Aottg2UI_Styling_GisketchTheme_o **)(extraout_RDX + 0x18),method);
              return;
            }
          }
        }
        pGStack_a8 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)0x3b6de84;
        il2cpp_runtime_helper_022b2c90();
        plStack_c8 = &TypeInfo_GisketchUIColorPicker;
        cVar3 = (char)extraout_EDX;
        pMVar21 = pMVar20;
        pGStack_d0 = method_00;
        pGStack_c0 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)ppMVar24;
        lStack_b8 = extraout_RDX;
        pGStack_b0 = pGVar18;
        pGStack_a8 = pGVar23;
        if (g_data_057a9dff == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
          g_data_057a9dff = '\x01';
        }
        GStack_e8.R = '\0';
        GStack_e8.G = '\0';
        GStack_e8.B = '\0';
        GStack_e8.A = '\0';
        GStack_e8.H = 0.0;
        GStack_e8.S = 0.0;
        GStack_e8.V = 0.0;
        GStack_f8.R = '\0';
        GStack_f8.G = '\0';
        GStack_f8.B = '\0';
        GStack_f8.A = '\0';
        GStack_f8.H = 0.0;
        GStack_f8.S = 0.0;
        GStack_f8.V = 0.0;
        *(char *)&(pGVar17->fields)._EnableAlpha_k__BackingField = cVar3;
        if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057a9dd0 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
          il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
          il2cpp_runtime_helper_023445d0(&"#FFFFFF");
          g_data_057a9dd0 = '\x01';
        }
        if (cVar3 == '\0') {
          iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
          pSVar12 = "#FFFFFF";
        }
        else {
          iVar2 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
          pSVar12 = "#FFFFFFFF";
        }
        if (iVar2 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar12 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                            ((System_String_o *)pTVar14,pSVar12,extraout_EDX & 0xff,pMVar21);
        bVar10 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                           (pSVar12,extraout_EDX & 0xff,
                            (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&GStack_e8,pMVar21);
        if ((char)bVar10 == '\0') {
          fStack_fc = 0.0;
          uStack_104 = 0;
          rgbColor_00.fields.b = 1.0;
          rgbColor_00.fields.a = 1.0;
          rgbColor_00.fields.r = 1.0;
          rgbColor_00.fields.g = 1.0;
          UnityEngine_Color__RGBToHSV
                    (rgbColor_00,(float *)&uStack_104,(float *)((long)&uStack_104 + 4),&fStack_fc,
                     (MethodInfo *)0x0);
          uVar27._0_1_ = 0xff;
          uVar27._1_1_ = 0xff;
          uVar27._2_1_ = 0xff;
          uVar27._3_1_ = 0xff;
          GStack_f8.H = (float)uStack_104;
          GStack_f8.S = uStack_104._4_4_;
          GStack_f8.V = fStack_fc;
        }
        else {
          uVar27 = GStack_e8._0_4_;
          GStack_f8.H = GStack_e8.H;
          GStack_f8.S = GStack_e8.S;
          GStack_f8.V = GStack_e8.V;
        }
        GStack_f8.R = (uint8_t)uVar27;
        GStack_f8.G = SUB41(uVar27,1);
        GStack_f8.B = SUB41(uVar27,2);
        GStack_f8.A = SUB41(uVar27,3);
        (pGVar17->fields)._value.fields.R = (uint8_t)uVar27;
        (pGVar17->fields)._value.fields.G = SUB41(uVar27,1);
        (pGVar17->fields)._value.fields.B = SUB41(uVar27,2);
        (pGVar17->fields)._value.fields.A = SUB41(uVar27,3);
        (pGVar17->fields)._value.fields.H = GStack_f8.H;
        (pGVar17->fields)._value.fields.S = GStack_f8.S;
        (pGVar17->fields)._value.fields.V = GStack_f8.V;
        pGVar15 = pGVar17;
        pGVar18 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
                  UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pGVar17,(MethodInfo *)0x0);
        if ((pGVar18 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) &&
           (pIVar19 = UnityEngine_GameObject__AddComponent_object_
                                ((UnityEngine_GameObject_o *)pGVar18,MethodInfo_LayoutElement_AddComponent_LayoutElement), pGVar15 = pGVar18,
           pIVar19 != (Il2CppObject *)0x0)) {
          if (cVar3 == '\0') {
            uVar27 = 0x435c0000;
          }
          else {
            uVar27 = 0x43820000;
          }
          (*pIVar19->klass->vtable[0x26].methodPtr)(uVar27,pIVar19,pIVar19->klass->vtable[0x26].method);
          pMVar21 = extraout_RDX_00;
          if (pMVar20 == (MethodInfo *)0x0) {
            if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              pMVar21 = extraout_RDX_01;
            }
            pMVar20 = (MethodInfo *)**(undefined8 **)(TypeInfo_GisketchTheme + 0xb8);
          }
          Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Build
                    (pGVar17,(Gisketch_Aottg2UI_Styling_GisketchTheme_o *)pMVar20,pMVar21);
          Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(pGVar17,pMVar20);
          Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(pGVar17,pMVar20);
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057a9de2 == '\0') {
          il2cpp_runtime_helper_023445d0(&"-hex");
          g_data_057a9de2 = '\x01';
        }
        System_String__Concat_3ae5ba0((System_String_o *)pGVar15,"-hex",(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
label_03b6dd55:
  pSStack_60 = (System_Action_GisketchUIColorPickerValue__o *)0x3b6dd5d;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SyncFields(pGVar23,(MethodInfo *)method_00);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnDestroy (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, const MethodInfo* method);
// 0x3b6f7b0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnDestroy
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar1;
  undefined8 uVar2;
  bool_conflict bVar3;
  System_Delegate_o *pSVar4;
  System_Action_GisketchUIColorPickerValue__o *pSVar5;
  System_Delegate_o *pSVar6;
  long lVar7;
  System_Delegate_o *pSVar8;
  System_Action_GisketchUIColorPickerValue__o *source;
  bool bVar9;
  
  if (g_data_057a9dec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchUIColorPickerValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnVisualChanged);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9dec = '\x01';
  }
  pGVar1 = (__this->fields)._visual;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pGVar1 = (__this->fields)._visual;
    pSVar4 = (System_Delegate_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchUIColorPickerValue);
    pSVar6 = pSVar4;
    System_Action_GisketchUIColorPickerValue____ctor();
    if (pGVar1 == (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9dfe == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchUIColorPickerValue);
        g_data_057a9dfe = '\x01';
      }
      pSVar4 = (System_Delegate_o *)pSVar6[1].fields.method_ptr;
      while( true ) {
        pSVar8 = System_Delegate__Remove(pSVar4,(System_Delegate_o *)__this,(MethodInfo *)0x0);
        uVar2 = TypeInfo_Action_GisketchUIColorPickerValue;
        lVar7 = 0;
        if ((pSVar8 != (System_Delegate_o *)0x0) &&
           (lVar7 = il2cpp_runtime_helper_023051f0(pSVar8,TypeInfo_Action_GisketchUIColorPickerValue), lVar7 == 0)) break;
        pSVar8 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(&pSVar6[1].fields,lVar7,pSVar4);
        bVar9 = pSVar4 == pSVar8;
        pSVar4 = pSVar8;
        if (bVar9) {
          return;
        }
      }
      il2cpp_runtime_helper_022b2fd0(pSVar8,uVar2);
      return;
    }
    if (g_data_057a9dfe == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchUIColorPickerValue);
      g_data_057a9dfe = '\x01';
    }
    source = (pGVar1->fields).Changed;
    do {
      pSVar6 = System_Delegate__Remove((System_Delegate_o *)source,pSVar4,(MethodInfo *)0x0);
      uVar2 = TypeInfo_Action_GisketchUIColorPickerValue;
      lVar7 = 0;
      if ((pSVar6 != (System_Delegate_o *)0x0) &&
         (lVar7 = il2cpp_runtime_helper_023051f0(pSVar6,TypeInfo_Action_GisketchUIColorPickerValue), lVar7 == 0)) {
        il2cpp_runtime_helper_022b2fd0(pSVar6,uVar2);
        return;
      }
      pSVar5 = (System_Action_GisketchUIColorPickerValue__o *)
               il2cpp_runtime_helper_02300640(&(pGVar1->fields).Changed,lVar7,source);
      bVar9 = source != pSVar5;
      source = pSVar5;
    } while (bVar9);
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$OnVisualChanged
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnVisualChanged (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value, const MethodInfo* method);
// 0x3b6f9b0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnVisualChanged
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,
               Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value,MethodInfo *method)

{
  System_String_o *id;
  UnityEngine_GameObject_o *source;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields value_00;
  MethodInfo *in_RCX;
  MethodInfo *pMVar1;
  MethodInfo *method_00;
  
  pMVar1 = value.fields._0_8_;
  method_00 = pMVar1;
  if (g_data_057a9ded == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    g_data_057a9ded = '\x01';
  }
  if ((char)(__this->fields)._syncing != '\0') {
    return;
  }
  *(MethodInfo **)&(__this->fields)._value.fields = pMVar1;
  (__this->fields)._value.fields.S = (float)(int)value.fields._8_8_;
  (__this->fields)._value.fields.V = (float)(int)((ulong)value.fields._8_8_ >> 0x20);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SyncFields(__this,method_00);
  id = (__this->fields)._id;
  source = (__this->fields)._source;
  value_00 = (__this->fields)._value.fields;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Preview
            (id,(Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o)value_00,source,in_RCX);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$OnRgbChanged
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnRgbChanged (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, System_String_o* __, const MethodInfo* method);
// 0x3b6fa60

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnRgbChanged
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,System_String_o *__,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value;
  bool_conflict bVar1;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  UnityEngine_Color_o rgbColor;
  byte local_1b;
  byte local_1a;
  byte local_19;
  byte local_18;
  byte bStack_17;
  byte bStack_16;
  byte bStack_15;
  float fStack_14;
  undefined8 uStack_10;
  
  local_19 = 0;
  local_1a = 0;
  local_1b = 0;
  if ((char)(__this->fields)._syncing == '\0') {
    bVar1 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__TryRgb
                      (__this,&local_19,&local_1a,&local_1b,in_R8);
    if ((char)bVar1 != '\0') {
      bStack_15 = (__this->fields)._value.fields.A;
      fStack_14 = 0.0;
      uStack_10 = 0;
      local_18 = local_19;
      bStack_17 = local_1a;
      bStack_16 = local_1b;
      rgbColor.fields.r = (float)local_19 / 255.0;
      rgbColor.fields.b = (float)local_1b / 255.0;
      rgbColor.fields.a = (float)bStack_15 / 255.0;
      method_00 = (MethodInfo *)0x0;
      rgbColor.fields.g = (float)local_1a / 255.0;
      UnityEngine_Color__RGBToHSV
                (rgbColor,&fStack_14,(float *)&uStack_10,(float *)((long)&uStack_10 + 4),(MethodInfo *)0x0);
      value.fields.G = bStack_17;
      value.fields.R = local_18;
      value.fields.B = bStack_16;
      value.fields.A = bStack_15;
      value.fields.H = fStack_14;
      value.fields.S = (float)(undefined4)uStack_10;
      value.fields.V = (float)uStack_10._4_4_;
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetValue(__this,value,1,method_00);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$OnHexChanged
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnHexChanged (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, System_String_o* text, const MethodInfo* method);
// 0x3b70030

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnHexChanged
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,System_String_o *text,
               MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  TMPro_TMP_InputField_o *pTVar3;
  UnityEngine_GameObject_o *source;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *pGVar4;
  UnityEngine_Object_c *source_00;
  int iVar5;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value;
  undefined8 uVar6;
  undefined8 uVar7;
  uint16_t uVar8;
  bool_conflict bVar9;
  System_String_o *pSVar10;
  System_Char_array *pSVar11;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  undefined8 *puVar12;
  uint uVar13;
  MethodInfo *in_RCX;
  long lVar15;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  ulong uVar16;
  uint length;
  int32_t index;
  System_String_o *pSVar17;
  ulong uVar18;
  UnityEngine_Object_o *x;
  ulong uVar19;
  uint uVar20;
  float fVar22;
  float fVar23;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value_00;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields GStack_a8;
  float fStack_98;
  float fStack_94;
  undefined8 uStack_90;
  ulong uStack_80;
  System_String_o *pSStack_78;
  ulong uStack_70;
  ulong uStack_68;
  System_Char_array *pSStack_60;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *pGStack_58;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields GStack_28;
  MethodInfo *pMVar14;
  ulong uVar21;
  
  if (g_data_057a9dee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9dee = '\x01';
  }
  GStack_28.R = '\0';
  GStack_28.G = '\0';
  GStack_28.B = '\0';
  GStack_28.A = '\0';
  GStack_28.H = 0.0;
  GStack_28.S = 0.0;
  GStack_28.V = 0.0;
  if ((char)(__this->fields)._syncing != '\0') {
    return;
  }
  pTVar3 = (__this->fields)._hex;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    return;
  }
  bVar1 = (byte)(__this->fields)._enableAlpha;
  uVar20 = (uint)bVar1;
  pSVar10 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FilterHexInput(text,(uint)bVar1,method_00);
  pTVar3 = (__this->fields)._hex;
  if (pTVar3 != (TMPro_TMP_InputField_o *)0x0) {
    pSVar17 = pSVar10;
    bVar9 = System_String__op_Inequality
                      (*(System_String_o **)&(pTVar3->fields).m_SelectionColor.fields.a,pSVar10,
                       (MethodInfo *)0x0);
    uVar20 = (uint)pSVar17;
    if ((char)bVar9 == '\0') {
label_03b700d8:
      bVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                        (pSVar10,(uint)(byte)(__this->fields)._enableAlpha,
                         (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&GStack_28,in_RCX);
      if ((char)bVar9 != '\0') {
        value.fields.S = GStack_28.S;
        value.fields.V = GStack_28.V;
        value.fields.R = GStack_28.R;
        value.fields.G = GStack_28.G;
        value.fields.B = GStack_28.B;
        value.fields.A = GStack_28.A;
        value.fields.H = GStack_28.H;
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetValue(__this,value,1,in_RCX);
      }
      return;
    }
    pTVar3 = (__this->fields)._hex;
    text = (System_String_o *)0x0;
    if (pTVar3 != (TMPro_TMP_InputField_o *)0x0) {
      TMPro_TMP_InputField__SetTextWithoutNotify(pTVar3,pSVar10,(MethodInfo *)0x0);
      goto label_03b700d8;
    }
  }
  pSStack_60 = (System_Char_array *)il2cpp_runtime_helper_022b2c90();
  pGStack_58 = __this;
  if (g_data_057a9dfa == '\0') {
    uStack_68 = 0x3b70145;
    il2cpp_runtime_helper_023445d0(&TypeInfo_char);
    uStack_68 = 0x3b70151;
    il2cpp_runtime_helper_023445d0(&"#");
    g_data_057a9dfa = '\x01';
  }
  uVar20 = (uVar20 & 0xff) * 2 + 6;
  uVar21 = (ulong)uVar20;
  uStack_68 = 0x3b70176;
  pSVar11 = (System_Char_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_char,uVar21);
  if ((text == (System_String_o *)0x0) &&
     (text = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8), text == (System_String_o *)0x0)) {
label_03b702af:
    uStack_68 = 0x3b702b4;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    iVar2 = (text->fields)._stringLength;
    pSStack_60 = pSVar11;
    if (pSVar11 != (System_Char_array *)0x0) {
      length = 0;
      if (0 < iVar2) {
        uVar19 = 1;
        length = 0;
        do {
          iVar2 = (int)uVar19;
          uStack_68 = 0x3b701de;
          uVar8 = System_String__get_Chars(text,iVar2 + -1,(MethodInfo *)0x0);
          uVar16 = CONCAT62(extraout_var,uVar8) & 0xffffffff;
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            uStack_68 = 0x3b701f5;
            il2cpp_runtime_helper_02337ed0();
          }
          uVar18 = (ulong)uVar8;
          uStack_68 = 0x3b701ff;
          uVar8 = System_Char__ToUpperInvariant(uVar8,(MethodInfo *)0x0);
          if (uVar8 != 0x23) {
            iVar5 = (int)CONCAT62(extraout_var_00,uVar8);
            uVar13 = iVar5 - 0x30;
            if (((ushort)uVar13 < 10) || (uVar13 = iVar5 - 0x41, (ushort)uVar13 < 6)) {
              pMVar14 = (MethodInfo *)(ulong)uVar13;
              if ((uint)pSStack_60->max_length <= length) {
                uStack_68 = 0x3b702ef;
                il2cpp_runtime_helper_022b2ca0();
                uStack_80 = uVar16;
                pSStack_78 = text;
                uStack_70 = uVar19;
                uStack_68 = uVar21;
                if (g_data_057a9def == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                  g_data_057a9def = '\x01';
                }
                GStack_a8.R = '\0';
                GStack_a8.G = '\0';
                GStack_a8.B = '\0';
                GStack_a8.A = '\0';
                GStack_a8.H = 0.0;
                GStack_a8.S = 0.0;
                GStack_a8.V = 0.0;
                x = *(UnityEngine_Object_o **)(uVar18 + 0x68);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar9 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if ((char)bVar9 == '\0') {
                  puVar12 = *(undefined8 **)(g_data_057b9c00 + 0xb8);
                }
                else {
                  if (*(long *)(uVar18 + 0x68) == 0) {
                    il2cpp_runtime_helper_022b2c90();
                    pMVar14 = extraout_RDX;
                    if (g_data_057a9df0 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
                      g_data_057a9df0 = '\x01';
                      pMVar14 = extraout_RDX_00;
                    }
                    pSVar10 = x[1].monitor;
                    source_00 = x[2].klass;
                    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      pMVar14 = extraout_RDX_01;
                    }
                    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Cancel
                              (pSVar10,(UnityEngine_GameObject_o *)source_00,pMVar14);
                    if ((x[2].monitor != (void *)0x0) &&
                       (pGVar4 = *(Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o **)
                                  ((long)x[2].monitor + 0x88),
                       pGVar4 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
                      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(pGVar4,1,(MethodInfo *)0x0);
                      return;
                    }
                    return;
                  }
                  puVar12 = (undefined8 *)(*(long *)(uVar18 + 0x68) + 0x220);
                }
                bVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                                  ((System_String_o *)*puVar12,(uint)*(byte *)(uVar18 + 0x28),
                                   (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&GStack_a8,pMVar14);
                uVar6 = GStack_a8._0_8_;
                if ((char)bVar9 != '\0') {
                  pSVar10 = *(System_String_o **)(uVar18 + 0x20);
                  source = *(UnityEngine_GameObject_o **)(uVar18 + 0x30);
                  fVar22 = GStack_a8.S;
                  fVar23 = GStack_a8.V;
                  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
                    fStack_98 = GStack_a8.S;
                    fStack_94 = GStack_a8.V;
                    uStack_90 = 0;
                    il2cpp_runtime_helper_02337ed0();
                    fVar22 = fStack_98;
                    fVar23 = fStack_94;
                  }
                  uVar7 = GStack_a8._0_8_;
                  value_00.fields.V = fVar23;
                  value_00.fields.S = fVar22;
                  GStack_a8.R = (uint8_t)uVar6;
                  GStack_a8.G = SUB81(uVar6,1);
                  GStack_a8.B = SUB81(uVar6,2);
                  GStack_a8.A = SUB81(uVar6,3);
                  GStack_a8.H = SUB84(uVar6,4);
                  value_00.fields.R = GStack_a8.R;
                  value_00.fields.G = GStack_a8.G;
                  value_00.fields.B = GStack_a8.B;
                  value_00.fields.A = GStack_a8.A;
                  value_00.fields.H = GStack_a8.H;
                  GStack_a8._0_8_ = uVar7;
                  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Commit(pSVar10,value_00,source,pMVar14);
                  if ((*(long *)(uVar18 + 0x38) != 0) &&
                     (pGVar4 = *(Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o **)
                                (*(long *)(uVar18 + 0x38) + 0x88),
                     pGVar4 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
                    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(pGVar4,1,(MethodInfo *)0x0);
                  }
                }
                return;
              }
              lVar15 = (long)(int)length;
              length = length + 1;
              pSStack_60->m_Items[lVar15] = uVar8;
            }
          }
        } while (((int)length < (int)uVar20) &&
                (uVar19 = (ulong)(iVar2 + 1), iVar2 < (text->fields)._stringLength));
      }
      goto label_03b702b6;
    }
    index = 0;
    length = 0;
    if (iVar2 < 1) goto label_03b702b6;
    do {
      uStack_68 = 0x3b70276;
      uVar8 = System_String__get_Chars(text,index,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        uStack_68 = 0x3b7028d;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_68 = 0x3b70297;
      uVar8 = System_Char__ToUpperInvariant(uVar8,(MethodInfo *)0x0);
      if ((uVar8 != 0x23) && (((ushort)(uVar8 - 0x30) < 10 || ((ushort)(uVar8 - 0x41) < 6))))
      goto label_03b702af;
      index = index + 1;
    } while (index < (text->fields)._stringLength);
  }
  length = 0;
label_03b702b6:
  uStack_68 = 0x3b702c8;
  pSVar10 = System_String__CreateString_3afdbe0((System_String_o *)0x0,pSStack_60,0,length,(MethodInfo *)0x0);
  System_String__Concat_3ae5ba0("#",pSVar10,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$Save
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Save (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, const MethodInfo* method);
// 0x3b702f0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Save
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  System_String_o *pSVar2;
  UnityEngine_GameObject_o *source;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar3;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  UnityEngine_UI_Selectable_o *pUVar4;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_01;
  undefined8 uVar5;
  undefined8 uVar6;
  bool_conflict bVar7;
  float *pfVar8;
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  TMPro_TMP_InputField_o *x;
  float fVar9;
  float fVar10;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields GStack_48;
  float fStack_38;
  float fStack_34;
  undefined8 uStack_30;
  
  if (g_data_057a9def == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9def = '\x01';
  }
  GStack_48.R = '\0';
  GStack_48.G = '\0';
  GStack_48.B = '\0';
  GStack_48.A = '\0';
  GStack_48.H = 0.0;
  GStack_48.S = 0.0;
  GStack_48.V = 0.0;
  x = (__this->fields)._hex;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    pfVar8 = *(float **)(g_data_057b9c00 + 0xb8);
  }
  else {
    pTVar1 = (__this->fields)._hex;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      method_00 = extraout_RDX;
      if (g_data_057a9df0 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
        g_data_057a9df0 = '\x01';
        method_00 = extraout_RDX_00;
      }
      pSVar2 = *(System_String_o **)&(x->fields).m_EnableCalled;
      pUVar4 = (x->fields).m_Navigation.fields.m_SelectOnUp;
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        method_00 = extraout_RDX_01;
      }
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Cancel
                (pSVar2,(UnityEngine_GameObject_o *)pUVar4,method_00);
      pUVar4 = (x->fields).m_Navigation.fields.m_SelectOnDown;
      if ((pUVar4 != (UnityEngine_UI_Selectable_o *)0x0) &&
         (__this_01 = *(Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o **)
                       &(pUVar4->fields).m_Colors.fields.m_SelectedColor.fields.g,
         __this_01 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(__this_01,1,(MethodInfo *)0x0);
        return;
      }
      return;
    }
    pfVar8 = &(pTVar1->fields).m_SelectionColor.fields.a;
  }
  bVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                    (*(System_String_o **)pfVar8,(uint)(byte)(__this->fields)._enableAlpha,
                     (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&GStack_48,in_RCX);
  uVar5 = GStack_48._0_8_;
  if ((char)bVar7 != '\0') {
    pSVar2 = (__this->fields)._id;
    source = (__this->fields)._source;
    fVar9 = GStack_48.S;
    fVar10 = GStack_48.V;
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      fStack_38 = GStack_48.S;
      fStack_34 = GStack_48.V;
      uStack_30 = 0;
      il2cpp_runtime_helper_02337ed0();
      fVar9 = fStack_38;
      fVar10 = fStack_34;
    }
    uVar6 = GStack_48._0_8_;
    value.fields.V = fVar10;
    value.fields.S = fVar9;
    GStack_48.R = (uint8_t)uVar5;
    GStack_48.G = SUB81(uVar5,1);
    GStack_48.B = SUB81(uVar5,2);
    GStack_48.A = SUB81(uVar5,3);
    GStack_48.H = SUB84(uVar5,4);
    value.fields.R = GStack_48.R;
    value.fields.G = GStack_48.G;
    value.fields.B = GStack_48.B;
    value.fields.A = GStack_48.A;
    value.fields.H = GStack_48.H;
    GStack_48._0_8_ = uVar6;
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Commit(pSVar2,value,source,in_RCX);
    pGVar3 = (__this->fields)._root;
    if ((pGVar3 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (__this_00 = (pGVar3->fields)._Theme_k__BackingField,
       __this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,1,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$Cancel
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Cancel (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, const MethodInfo* method);
// 0x3b70420

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Cancel
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,MethodInfo *method)

{
  System_String_o *id;
  UnityEngine_GameObject_o *source;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (g_data_057a9df0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    g_data_057a9df0 = '\x01';
    in_RDX = extraout_RDX;
  }
  id = (__this->fields)._id;
  source = (__this->fields)._source;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_RDX = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Cancel(id,source,in_RDX);
  pGVar1 = (__this->fields)._root;
  if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (__this_00 = (pGVar1->fields)._Theme_k__BackingField,
     __this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
              ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$SetValue
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetValue (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value, bool visual, const MethodInfo* method);
// 0x3b6ff30

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetValue
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,
               Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value,bool_conflict visual,
               MethodInfo *method)

{
  byte bVar1;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Texture2D_o *pUVar3;
  TMPro_TMP_InputField_o *__this_01;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *pGVar4;
  UnityEngine_Object_c *source;
  int iVar5;
  int iVar6;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value_00;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields value_01;
  uint8_t uVar7;
  uint8_t uVar8;
  uint8_t uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint16_t uVar13;
  bool_conflict bVar14;
  System_String_o *pSVar15;
  System_Char_array *pSVar16;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  undefined8 *puVar17;
  uint uVar18;
  long lVar19;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar20;
  ulong uVar21;
  uint length;
  int32_t index;
  MethodInfo *pMVar22;
  System_String_o *pSVar23;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this_02;
  ulong uVar24;
  UnityEngine_Object_o *x;
  ulong uVar25;
  uint uVar26;
  float fVar28;
  float fVar29;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value_02;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields GStack_e0;
  float fStack_d0;
  float fStack_cc;
  undefined8 uStack_c8;
  ulong uStack_b8;
  MethodInfo *pMStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  System_Char_array *pSStack_98;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGStack_90;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields local_60;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *pGStack_50;
  ulong uStack_48;
  ulong uVar27;
  
  pMVar22 = value.fields._0_8_;
  pMVar20 = pMVar22;
  if (g_data_057a9df1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9df1 = '\x01';
  }
  *(MethodInfo **)&(__this->fields)._value.fields = pMVar22;
  (__this->fields)._value.fields.S = (float)(int)value.fields._8_8_;
  (__this->fields)._value.fields.V = (float)(int)((ulong)value.fields._8_8_ >> 0x20);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SyncFields(__this,pMVar20);
  if ((char)visual == '\0') {
label_03b6ffd5:
    pSVar15 = (__this->fields)._id;
    pUVar2 = (__this->fields)._source;
    value_01 = (__this->fields)._value.fields;
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Preview
              (pSVar15,(Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o)value_01,pUVar2,method);
    return;
  }
  __this_02 = (__this->fields)._visual;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar20 = (MethodInfo *)0x0;
  bVar14 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') goto label_03b6ffd5;
  __this_00 = (__this->fields)._visual;
  if (__this_00 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
    uVar7 = (__this->fields)._value.fields.G;
    uVar8 = (__this->fields)._value.fields.B;
    uVar9 = (__this->fields)._value.fields.A;
    fVar28 = (__this->fields)._value.fields.H;
    fVar29 = (__this->fields)._value.fields.S;
    fVar10 = (__this->fields)._value.fields.V;
    (__this_00->fields)._value.fields.R = (__this->fields)._value.fields.R;
    (__this_00->fields)._value.fields.G = uVar7;
    (__this_00->fields)._value.fields.B = uVar8;
    (__this_00->fields)._value.fields.A = uVar9;
    (__this_00->fields)._value.fields.H = fVar28;
    (__this_00->fields)._value.fields.S = fVar29;
    (__this_00->fields)._value.fields.V = fVar10;
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this_00,pMVar20);
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this_00,pMVar20);
    goto label_03b6ffd5;
  }
  il2cpp_runtime_helper_022b2c90();
  pGStack_50 = __this;
  uStack_48 = (ulong)(uint)visual;
  if (g_data_057a9dee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9dee = '\x01';
  }
  local_60.R = '\0';
  local_60.G = '\0';
  local_60.B = '\0';
  local_60.A = '\0';
  local_60.H = 0.0;
  local_60.S = 0.0;
  local_60.V = 0.0;
  if ((__this_02->fields)._value.fields.R != '\0') {
    return;
  }
  pUVar3 = (__this_02->fields)._circleTexture;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar14 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 != '\0') {
    return;
  }
  bVar1 = *(byte *)&(__this_02->fields)._hue;
  uVar26 = (uint)bVar1;
  pSVar15 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FilterHexInput
                      ((System_String_o *)pMVar20,(uint)bVar1,method_00);
  pUVar3 = (__this_02->fields)._circleTexture;
  if (pUVar3 != (UnityEngine_Texture2D_o *)0x0) {
    pSVar23 = pSVar15;
    bVar14 = System_String__op_Inequality
                       ((System_String_o *)pUVar3[0x16].fields.m_CachedPtr,pSVar15,(MethodInfo *)0x0);
    uVar26 = (uint)pSVar23;
    if ((char)bVar14 == '\0') {
label_03b700d8:
      bVar14 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                         (pSVar15,(uint)*(byte *)&(__this_02->fields)._hue,
                          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&local_60,method);
      if ((char)bVar14 != '\0') {
        value_00.fields.S = local_60.S;
        value_00.fields.V = local_60.V;
        value_00.fields.R = local_60.R;
        value_00.fields.G = local_60.G;
        value_00.fields.B = local_60.B;
        value_00.fields.A = local_60.A;
        value_00.fields.H = local_60.H;
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetValue
                  ((Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *)__this_02,value_00,1,method);
      }
      return;
    }
    __this_01 = (TMPro_TMP_InputField_o *)(__this_02->fields)._circleTexture;
    pMVar20 = (MethodInfo *)0x0;
    if (__this_01 != (TMPro_TMP_InputField_o *)0x0) {
      TMPro_TMP_InputField__SetTextWithoutNotify(__this_01,pSVar15,(MethodInfo *)0x0);
      goto label_03b700d8;
    }
  }
  pSStack_98 = (System_Char_array *)il2cpp_runtime_helper_022b2c90();
  pGStack_90 = __this_02;
  if (g_data_057a9dfa == '\0') {
    uStack_a0 = 0x3b70145;
    il2cpp_runtime_helper_023445d0(&TypeInfo_char);
    uStack_a0 = 0x3b70151;
    il2cpp_runtime_helper_023445d0(&"#");
    g_data_057a9dfa = '\x01';
  }
  uVar26 = (uVar26 & 0xff) * 2 + 6;
  uVar27 = (ulong)uVar26;
  uStack_a0 = 0x3b70176;
  pSVar16 = (System_Char_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_char,uVar27);
  if ((pMVar20 == (MethodInfo *)0x0) &&
     (pMVar20 = (MethodInfo *)**(long **)(g_data_057b9c00 + 0xb8), pMVar20 == (MethodInfo *)0x0)) {
label_03b702af:
    uStack_a0 = 0x3b702b4;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSStack_98 = pSVar16;
    if (pSVar16 != (System_Char_array *)0x0) {
      length = 0;
      if (0 < *(int *)&pMVar20->invoker_method) {
        uVar25 = 1;
        length = 0;
        do {
          iVar5 = (int)uVar25;
          uStack_a0 = 0x3b701de;
          uVar13 = System_String__get_Chars((System_String_o *)pMVar20,iVar5 + -1,(MethodInfo *)0x0);
          uVar21 = CONCAT62(extraout_var,uVar13) & 0xffffffff;
          if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
            uStack_a0 = 0x3b701f5;
            il2cpp_runtime_helper_02337ed0();
          }
          uVar24 = (ulong)uVar13;
          uStack_a0 = 0x3b701ff;
          uVar13 = System_Char__ToUpperInvariant(uVar13,(MethodInfo *)0x0);
          if (uVar13 != 0x23) {
            iVar6 = (int)CONCAT62(extraout_var_00,uVar13);
            uVar18 = iVar6 - 0x30;
            if (((ushort)uVar18 < 10) || (uVar18 = iVar6 - 0x41, (ushort)uVar18 < 6)) {
              pMVar22 = (MethodInfo *)(ulong)uVar18;
              if ((uint)pSStack_98->max_length <= length) {
                uStack_a0 = 0x3b702ef;
                il2cpp_runtime_helper_022b2ca0();
                uStack_b8 = uVar21;
                pMStack_b0 = pMVar20;
                uStack_a8 = uVar25;
                uStack_a0 = uVar27;
                if (g_data_057a9def == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                  g_data_057a9def = '\x01';
                }
                GStack_e0.R = '\0';
                GStack_e0.G = '\0';
                GStack_e0.B = '\0';
                GStack_e0.A = '\0';
                GStack_e0.H = 0.0;
                GStack_e0.S = 0.0;
                GStack_e0.V = 0.0;
                x = *(UnityEngine_Object_o **)(uVar24 + 0x68);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar14 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if ((char)bVar14 == '\0') {
                  puVar17 = *(undefined8 **)(g_data_057b9c00 + 0xb8);
                }
                else {
                  if (*(long *)(uVar24 + 0x68) == 0) {
                    il2cpp_runtime_helper_022b2c90();
                    pMVar20 = extraout_RDX;
                    if (g_data_057a9df0 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
                      g_data_057a9df0 = '\x01';
                      pMVar20 = extraout_RDX_00;
                    }
                    pSVar15 = x[1].monitor;
                    source = x[2].klass;
                    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      pMVar20 = extraout_RDX_01;
                    }
                    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Cancel
                              (pSVar15,(UnityEngine_GameObject_o *)source,pMVar20);
                    if ((x[2].monitor != (void *)0x0) &&
                       (pGVar4 = *(Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o **)
                                  ((long)x[2].monitor + 0x88),
                       pGVar4 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
                      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(pGVar4,1,(MethodInfo *)0x0);
                      return;
                    }
                    return;
                  }
                  puVar17 = (undefined8 *)(*(long *)(uVar24 + 0x68) + 0x220);
                }
                bVar14 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                                   ((System_String_o *)*puVar17,(uint)*(byte *)(uVar24 + 0x28),
                                    (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&GStack_e0,pMVar22)
                ;
                uVar11 = GStack_e0._0_8_;
                if ((char)bVar14 != '\0') {
                  pSVar15 = *(System_String_o **)(uVar24 + 0x20);
                  pUVar2 = *(UnityEngine_GameObject_o **)(uVar24 + 0x30);
                  fVar28 = GStack_e0.S;
                  fVar29 = GStack_e0.V;
                  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
                    fStack_d0 = GStack_e0.S;
                    fStack_cc = GStack_e0.V;
                    uStack_c8 = 0;
                    il2cpp_runtime_helper_02337ed0();
                    fVar28 = fStack_d0;
                    fVar29 = fStack_cc;
                  }
                  uVar12 = GStack_e0._0_8_;
                  value_02.fields.V = fVar29;
                  value_02.fields.S = fVar28;
                  GStack_e0.R = (uint8_t)uVar11;
                  GStack_e0.G = SUB81(uVar11,1);
                  GStack_e0.B = SUB81(uVar11,2);
                  GStack_e0.A = SUB81(uVar11,3);
                  GStack_e0.H = SUB84(uVar11,4);
                  value_02.fields.R = GStack_e0.R;
                  value_02.fields.G = GStack_e0.G;
                  value_02.fields.B = GStack_e0.B;
                  value_02.fields.A = GStack_e0.A;
                  value_02.fields.H = GStack_e0.H;
                  GStack_e0._0_8_ = uVar12;
                  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Commit(pSVar15,value_02,pUVar2,pMVar22);
                  if ((*(long *)(uVar24 + 0x38) != 0) &&
                     (pGVar4 = *(Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o **)
                                (*(long *)(uVar24 + 0x38) + 0x88),
                     pGVar4 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
                    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(pGVar4,1,(MethodInfo *)0x0);
                  }
                }
                return;
              }
              lVar19 = (long)(int)length;
              length = length + 1;
              pSStack_98->m_Items[lVar19] = uVar13;
            }
          }
        } while (((int)length < (int)uVar26) &&
                (uVar25 = (ulong)(iVar5 + 1), iVar5 < *(int *)&pMVar20->invoker_method));
      }
      goto label_03b702b6;
    }
    index = 0;
    length = 0;
    if (*(int *)&pMVar20->invoker_method < 1) goto label_03b702b6;
    do {
      uStack_a0 = 0x3b70276;
      uVar13 = System_String__get_Chars((System_String_o *)pMVar20,index,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        uStack_a0 = 0x3b7028d;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_a0 = 0x3b70297;
      uVar13 = System_Char__ToUpperInvariant(uVar13,(MethodInfo *)0x0);
      if ((uVar13 != 0x23) && (((ushort)(uVar13 - 0x30) < 10 || ((ushort)(uVar13 - 0x41) < 6))))
      goto label_03b702af;
      index = index + 1;
    } while (index < *(int *)&pMVar20->invoker_method);
  }
  length = 0;
label_03b702b6:
  uStack_a0 = 0x3b702c8;
  pSVar15 = System_String__CreateString_3afdbe0((System_String_o *)0x0,pSStack_98,0,length,(MethodInfo *)0x0);
  System_String__Concat_3ae5ba0("#",pSVar15,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$SyncFields
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SyncFields (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, const MethodInfo* method);
// 0x3b6f550

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SyncFields
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  UnityEngine_Object_o *x;
  char cVar2;
  undefined8 uVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  UnityEngine_Transform_o *root;
  System_Delegate_o *pSVar6;
  System_Delegate_o *pSVar7;
  System_Delegate_o *pSVar8;
  long lVar9;
  System_Delegate_o *pSVar10;
  long lVar11;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Color_o color;
  
  if (g_data_057a9df2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_Find_Image);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9df2 = '\x01';
  }
  *(undefined1 *)&(__this->fields)._syncing = 1;
  pTVar1 = (__this->fields)._r;
  cVar2 = (char)__this;
  pSVar5 = System_Byte__ToString(cVar2 + '@',(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetText(pTVar1,pSVar5,method_00);
  pTVar1 = (__this->fields)._g;
  pSVar5 = System_Byte__ToString(cVar2 + 'A',(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetText(pTVar1,pSVar5,method_01);
  pTVar1 = (__this->fields)._b;
  pSVar5 = System_Byte__ToString(cVar2 + 'B',(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetText(pTVar1,pSVar5,method_02);
  pTVar1 = (__this->fields)._hex;
  bVar4 = (__this->fields)._enableAlpha;
  if (g_data_057a9df8 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a9df8 = '\x01';
  }
  fVar13 = (float)(__this->fields)._value.fields.R / 255.0;
  fVar15 = (float)(__this->fields)._value.fields.G / 255.0;
  fVar14 = (float)(__this->fields)._value.fields.B / 255.0;
  fVar16 = (float)(__this->fields)._value.fields.A / 255.0;
  if ((char)bVar4 == '\0') {
    color.fields.b = fVar14;
    color.fields.a = fVar16;
    color.fields.r = fVar13;
    color.fields.g = fVar15;
    pSVar5 = UnityEngine_ColorUtility__ToHtmlStringRGB(color,(MethodInfo *)0x0);
  }
  else {
    pSVar5 = UnityEngine_ColorUtility__ToHtmlStringRGBA
                       ((UnityEngine_Color_o)CONCAT88(CONCAT44(fVar16,fVar14),CONCAT44(fVar15,fVar13)),
                        (MethodInfo *)0x0);
  }
  pSVar5 = System_String__Concat_3ae5ba0("#",pSVar5,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetText(pTVar1,pSVar5,method_03);
  root = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pSVar5 = (__this->fields)._id;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9de0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"-preview");
    g_data_057a9de0 = '\x01';
  }
  pSVar5 = System_String__Concat_3ae5ba0(pSVar5,"-preview",(MethodInfo *)0x0);
  pSVar6 = (System_Delegate_o *)
           Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(root,pSVar5,MethodInfo_Image_Find_Image);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = pSVar6;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (pSVar6 == (System_Delegate_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9dec == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchUIColorPickerValue);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnVisualChanged);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9dec = '\x01';
      }
      x = *(UnityEngine_Object_o **)&(pSVar8->fields).method_is_virtual;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        lVar11 = *(long *)&(pSVar8->fields).method_is_virtual;
        pSVar7 = (System_Delegate_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchUIColorPickerValue);
        pSVar6 = pSVar7;
        System_Action_GisketchUIColorPickerValue____ctor();
        if (lVar11 == 0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057a9dfe == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchUIColorPickerValue);
            g_data_057a9dfe = '\x01';
          }
          pSVar7 = (System_Delegate_o *)pSVar6[1].fields.method_ptr;
          while( true ) {
            pSVar10 = System_Delegate__Remove(pSVar7,pSVar8,(MethodInfo *)0x0);
            uVar3 = TypeInfo_Action_GisketchUIColorPickerValue;
            lVar11 = 0;
            if ((pSVar10 != (System_Delegate_o *)0x0) &&
               (lVar11 = il2cpp_runtime_helper_023051f0(pSVar10,TypeInfo_Action_GisketchUIColorPickerValue), lVar11 == 0)) break;
            pSVar10 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(&pSVar6[1].fields,lVar11,pSVar7);
            bVar12 = pSVar7 == pSVar10;
            pSVar7 = pSVar10;
            if (bVar12) {
              return;
            }
          }
          il2cpp_runtime_helper_022b2fd0(pSVar10,uVar3);
          return;
        }
        if (g_data_057a9dfe == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchUIColorPickerValue);
          g_data_057a9dfe = '\x01';
        }
        pSVar6 = *(System_Delegate_o **)(lVar11 + 0x88);
        do {
          pSVar8 = System_Delegate__Remove(pSVar6,pSVar7,(MethodInfo *)0x0);
          uVar3 = TypeInfo_Action_GisketchUIColorPickerValue;
          lVar9 = 0;
          if ((pSVar8 != (System_Delegate_o *)0x0) &&
             (lVar9 = il2cpp_runtime_helper_023051f0(pSVar8,TypeInfo_Action_GisketchUIColorPickerValue), lVar9 == 0)) {
            il2cpp_runtime_helper_022b2fd0(pSVar8,uVar3);
            return;
          }
          pSVar8 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(lVar11 + 0x88,lVar9,pSVar6);
          bVar12 = pSVar6 != pSVar8;
          pSVar6 = pSVar8;
        } while (bVar12);
      }
      return;
    }
    (*(code *)pSVar6->klass[1]._1.interfaceOffsets)
              (CONCAT44((float)(__this->fields)._value.fields.G / 255.0,
                        (float)(__this->fields)._value.fields.R / 255.0),
               CONCAT44((float)(__this->fields)._value.fields.A / 255.0,
                        (float)(__this->fields)._value.fields.B / 255.0),pSVar6,pSVar6->klass[1].static_fields
              );
  }
  *(undefined1 *)&(__this->fields)._syncing = 0;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$TryRgb
// il2cpp: bool Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__TryRgb (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, uint8_t* r, uint8_t* g, uint8_t* b, const MethodInfo* method);
// 0x3b6fb40

bool_conflict
Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__TryRgb
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,uint8_t *r,uint8_t *g,uint8_t *b,
          MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool_conflict bVar2;
  System_Globalization_CultureInfo_o *pSVar3;
  System_String_o *pSVar4;
  int iVar5;
  uint8_t *puVar6;
  int32_t *piVar7;
  int extraout_EDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  bool_conflict bVar8;
  int iVar9;
  TMPro_TMP_InputField_o *pTVar10;
  byte bVar11;
  byte bVar12;
  uint8_t uVar13;
  UnityEngine_Color_o rgbColor;
  undefined8 local_70;
  float afStack_68 [7];
  int32_t local_4c;
  int32_t local_48;
  int32_t local_44;
  byte *local_40;
  uint8_t *local_38;
  
  puVar6 = b;
  if (g_data_057a9df3 == '\0') {
    afStack_68[2] = 1.0754725e-36;
    afStack_68[3] = 0.0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9df3 = '\x01';
  }
  iVar5 = (int)puVar6;
  pTVar10 = (__this->fields)._r;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    afStack_68[2] = 1.0754756e-36;
    afStack_68[3] = 0.0;
    il2cpp_runtime_helper_02337ed0();
  }
  iVar9 = 0;
  afStack_68[2] = 1.0754767e-36;
  afStack_68[3] = 0.0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pSVar4 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    pTVar1 = (__this->fields)._r;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_03b6fea8;
    pSVar4 = *(System_String_o **)&(pTVar1->fields).m_SelectionColor.fields.a;
  }
  if (g_data_057a9dfb == '\0') {
    afStack_68[2] = 1.0754841e-36;
    afStack_68[3] = 0.0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    g_data_057a9dfb = '\x01';
  }
  local_4c = 0;
  *r = '\0';
  if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
    afStack_68[2] = 1.0754879e-36;
    afStack_68[3] = 0.0;
    il2cpp_runtime_helper_02337ed0();
  }
  uVar13 = '\0';
  bVar12 = 0;
  afStack_68[2] = 1.0754888e-36;
  afStack_68[3] = 0.0;
  pSVar3 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  piVar7 = &local_4c;
  afStack_68[2] = 1.075491e-36;
  afStack_68[3] = 0.0;
  bVar2 = System_Int32__TryParse_3cb4bf0(pSVar4,7,(System_IFormatProvider_o *)pSVar3,piVar7,(MethodInfo *)0x0)
  ;
  iVar5 = (int)piVar7;
  if ((char)bVar2 != '\0') {
    iVar5 = 0xff;
    if (local_4c < 0x100) {
      iVar5 = local_4c;
    }
    if (0 < iVar5) {
      uVar13 = (uint8_t)iVar5;
    }
    *r = uVar13;
    bVar12 = 1;
  }
  pTVar10 = (__this->fields)._g;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    afStack_68[2] = 1.0754965e-36;
    afStack_68[3] = 0.0;
    il2cpp_runtime_helper_02337ed0();
  }
  iVar9 = 0;
  afStack_68[2] = 1.0754976e-36;
  afStack_68[3] = 0.0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pSVar4 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    pTVar1 = (__this->fields)._g;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_03b6fea8;
    pSVar4 = *(System_String_o **)&(pTVar1->fields).m_SelectionColor.fields.a;
  }
  if (g_data_057a9dfb == '\0') {
    afStack_68[2] = 1.075505e-36;
    afStack_68[3] = 0.0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    g_data_057a9dfb = '\x01';
  }
  local_48 = 0;
  *g = '\0';
  local_40 = g;
  local_38 = r;
  if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
    afStack_68[2] = 1.0755098e-36;
    afStack_68[3] = 0.0;
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = 0;
  afStack_68[2] = 1.0755107e-36;
  afStack_68[3] = 0.0;
  pSVar3 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  piVar7 = &local_48;
  afStack_68[2] = 1.07551285e-36;
  afStack_68[3] = 0.0;
  bVar2 = System_Int32__TryParse_3cb4bf0(pSVar4,7,(System_IFormatProvider_o *)pSVar3,piVar7,(MethodInfo *)0x0)
  ;
  iVar5 = (int)piVar7;
  if ((char)bVar2 != '\0') {
    iVar5 = 0xff;
    if (local_48 < 0x100) {
      iVar5 = local_48;
    }
    if (0 < iVar5) {
      bVar11 = (byte)iVar5;
    }
    *local_40 = bVar11;
    bVar11 = 1;
  }
  pTVar10 = (__this->fields)._b;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    afStack_68[2] = 1.0755188e-36;
    afStack_68[3] = 0.0;
    il2cpp_runtime_helper_02337ed0();
  }
  iVar9 = 0;
  afStack_68[2] = 1.0755198e-36;
  afStack_68[3] = 0.0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pSVar4 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    pTVar1 = (__this->fields)._b;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) {
label_03b6fea8:
      afStack_68[2] = 1.0755469e-36;
      afStack_68[3] = 0.0;
      il2cpp_runtime_helper_022b2c90();
      bVar12 = *(byte *)((long)&pTVar10->klass + 3);
      afStack_68[0] = 0.0;
      afStack_68[1] = 0.0;
      local_70 = (ulong)CONCAT13(bVar12,CONCAT12((char)iVar5,CONCAT11((char)extraout_EDX,(char)iVar9)));
      rgbColor.fields.r = (float)iVar9 / 255.0;
      rgbColor.fields.b = (float)iVar5 / 255.0;
      rgbColor.fields.a = (float)bVar12 / 255.0;
      rgbColor.fields.g = (float)extraout_EDX / 255.0;
      UnityEngine_Color__RGBToHSV
                (rgbColor,(float *)((long)&local_70 + 4),afStack_68,afStack_68 + 1,(MethodInfo *)0x0);
      return (bool_conflict)local_70;
    }
    pSVar4 = *(System_String_o **)&(pTVar1->fields).m_SelectionColor.fields.a;
  }
  if (g_data_057a9dfb == '\0') {
    afStack_68[2] = 1.0755272e-36;
    afStack_68[3] = 0.0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    g_data_057a9dfb = '\x01';
  }
  local_44 = 0;
  *b = '\0';
  if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
    afStack_68[2] = 1.07553105e-36;
    afStack_68[3] = 0.0;
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = 0;
  afStack_68[2] = 1.0755319e-36;
  afStack_68[3] = 0.0;
  pSVar3 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  afStack_68[2] = 1.075534e-36;
  afStack_68[3] = 0.0;
  bVar2 = System_Int32__TryParse_3cb4bf0
                    (pSVar4,7,(System_IFormatProvider_o *)pSVar3,&local_44,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    bVar8 = 0;
  }
  else {
    iVar5 = 0xff;
    if (local_44 < 0x100) {
      iVar5 = local_44;
    }
    uVar13 = (uint8_t)iVar5;
    if (iVar5 < 1) {
      uVar13 = '\0';
    }
    *b = uVar13;
    if ((bVar12 & bVar11) != 0) {
      pTVar10 = (__this->fields)._r;
      afStack_68[2] = 1.0755388e-36;
      afStack_68[3] = 0.0;
      pSVar4 = System_Byte__ToString((uint8_t)local_38,(MethodInfo *)0x0);
      afStack_68[2] = 1.07553975e-36;
      afStack_68[3] = 0.0;
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetText(pTVar10,pSVar4,method_00);
      pTVar10 = (__this->fields)._g;
      afStack_68[2] = 1.0755412e-36;
      afStack_68[3] = 0.0;
      pSVar4 = System_Byte__ToString((uint8_t)local_40,(MethodInfo *)0x0);
      afStack_68[2] = 1.0755422e-36;
      afStack_68[3] = 0.0;
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetText(pTVar10,pSVar4,method_01);
      pTVar10 = (__this->fields)._b;
      afStack_68[2] = 1.0755434e-36;
      afStack_68[3] = 0.0;
      pSVar4 = System_Byte__ToString((uint8_t)b,(MethodInfo *)0x0);
      afStack_68[2] = 1.0755444e-36;
      afStack_68[3] = 0.0;
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetText(pTVar10,pSVar4,method_02);
      bVar8 = (bool_conflict)CONCAT71((int7)((ulong)pTVar10 >> 8),1);
    }
  }
  return bVar8;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$WireRgbInput
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, TMPro_TMP_InputField_o* input, const MethodInfo* method);
// 0x3b6f0a0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,TMPro_TMP_InputField_o *input,
               MethodInfo *method)

{
  TMPro_TMP_InputField_TextSelectionEvent_o *pTVar1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  undefined8 uVar2;
  bool_conflict bVar3;
  System_Delegate_o *pSVar4;
  TMPro_TMP_InputField_c *value;
  UnityEngine_Events_UnityAction_T0__o *pUVar5;
  TMPro_TMP_InputField_OnValidateInput_o *value_00;
  UnityEngine_Transform_o *root;
  UnityEngine_Object_o *x;
  System_Delegate_o *pSVar6;
  long lVar7;
  UnityEngine_Events_UnityAction_o *call;
  TMPro_TMP_InputField_c *__this_01;
  TMPro_TMP_InputField_c *id;
  System_Delegate_o *pSVar8;
  UnityEngine_Object_o *pUVar9;
  bool bVar10;
  
  if (g_data_057a9df4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnRgbChanged);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Char_ValidateDigit);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnValidateInput);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddListener);
    g_data_057a9df4 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = (TMPro_TMP_InputField_c *)0x0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)input,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  if (input == (TMPro_TMP_InputField_o *)0x0) {
label_03b6f1ef:
    value = (TMPro_TMP_InputField_c *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar8 = (System_Delegate_o *)(input->fields).m_OnTouchScreenKeyboardStatusChanged;
    pSVar4 = (System_Delegate_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnValidateInput);
    TMPro_TMP_InputField_OnValidateInput___ctor();
    value = (TMPro_TMP_InputField_c *)System_Delegate__Combine(pSVar8,pSVar4,(MethodInfo *)0x0);
    if ((value == (TMPro_TMP_InputField_c *)0x0) ||
       (__this_01 = TypeInfo_OnValidateInput, (value->_1).image == TypeInfo_OnValidateInput)) {
      TMPro_TMP_InputField__set_onValidateInput
                (input,(TMPro_TMP_InputField_OnValidateInput_o *)value,(MethodInfo *)0x0);
      pTVar1 = (input->fields).m_OnEndTextSelection;
      pUVar5 = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
      UnityEngine_Events_UnityAction_object____ctor();
      __this_01 = (TMPro_TMP_InputField_c *)__this;
      if (pTVar1 != (TMPro_TMP_InputField_TextSelectionEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent_object___AddListener
                  ((UnityEngine_Events_UnityEvent_T0__o *)pTVar1,pUVar5,MethodInfo_Void_AddListener);
        return;
      }
      goto label_03b6f1ef;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057a9df5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnHexChanged);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Char_ValidateHex);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnValidateInput);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddListener);
    g_data_057a9df5 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  id = (TMPro_TMP_InputField_c *)0x0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  if (__this_01 != (TMPro_TMP_InputField_c *)0x0) {
    pSVar8 = (System_Delegate_o *)
             (((TMPro_TMP_InputField_o *)__this_01)->fields).m_OnTouchScreenKeyboardStatusChanged;
    pSVar4 = (System_Delegate_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnValidateInput);
    TMPro_TMP_InputField_OnValidateInput___ctor();
    value_00 = (TMPro_TMP_InputField_OnValidateInput_o *)
               System_Delegate__Combine(pSVar8,pSVar4,(MethodInfo *)0x0);
    if ((value_00 != (TMPro_TMP_InputField_OnValidateInput_o *)0x0) &&
       (id = TypeInfo_OnValidateInput, (TMPro_TMP_InputField_c *)value_00->klass != TypeInfo_OnValidateInput)) goto label_03b6f354;
    TMPro_TMP_InputField__set_onValidateInput((TMPro_TMP_InputField_o *)__this_01,value_00,(MethodInfo *)0x0);
    pTVar1 = (((TMPro_TMP_InputField_o *)__this_01)->fields).m_OnEndTextSelection;
    pUVar5 = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
    UnityEngine_Events_UnityAction_object____ctor();
    id = value;
    if (pTVar1 != (TMPro_TMP_InputField_TextSelectionEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent_object___AddListener
                ((UnityEngine_Events_UnityEvent_T0__o *)pTVar1,pUVar5,MethodInfo_Void_AddListener);
      return;
    }
  }
  value_00 = (TMPro_TMP_InputField_OnValidateInput_o *)il2cpp_runtime_helper_022b2c90();
label_03b6f354:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057a9df6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_Find_Button);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9df6 = '\x01';
  }
  root = UnityEngine_Component__get_transform((UnityEngine_Component_o *)value_00,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (UnityEngine_Object_o *)
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(root,(System_String_o *)id,MethodInfo_Button_Find_Button);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = (System_Delegate_o *)0x0;
  pUVar9 = x;
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (x != (UnityEngine_Object_o *)0x0) {
      __this_00 = (UnityEngine_Events_UnityEvent_o *)x[10].fields.m_CachedPtr;
      pUVar9 = (UnityEngine_Object_o *)0x0;
      if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9dfd == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchUIColorPickerValue);
      g_data_057a9dfd = '\x01';
    }
    pSVar4 = (System_Delegate_o *)pUVar9[5].fields.m_CachedPtr;
    while( true ) {
      pSVar6 = System_Delegate__Combine(pSVar4,pSVar8,(MethodInfo *)0x0);
      uVar2 = TypeInfo_Action_GisketchUIColorPickerValue;
      lVar7 = 0;
      if ((pSVar6 != (System_Delegate_o *)0x0) &&
         (lVar7 = il2cpp_runtime_helper_023051f0(pSVar6,TypeInfo_Action_GisketchUIColorPickerValue), lVar7 == 0)) break;
      pSVar6 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(&pUVar9[5].fields,lVar7,pSVar4);
      bVar10 = pSVar4 == pSVar6;
      pSVar4 = pSVar6;
      if (bVar10) {
        return;
      }
    }
    il2cpp_runtime_helper_022b2fd0(pSVar6,uVar2);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$WireHexInput
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireHexInput (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, TMPro_TMP_InputField_o* input, const MethodInfo* method);
// 0x3b6f200

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireHexInput
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,TMPro_TMP_InputField_o *input,
               MethodInfo *method)

{
  TMPro_TMP_InputField_TextSelectionEvent_o *__this_00;
  UnityEngine_Events_UnityEvent_o *__this_01;
  undefined8 uVar1;
  bool_conflict bVar2;
  System_Delegate_o *pSVar3;
  TMPro_TMP_InputField_OnValidateInput_o *value;
  UnityEngine_Events_UnityAction_T0__o *call;
  UnityEngine_Transform_o *root;
  UnityEngine_Object_o *x;
  System_Delegate_o *pSVar4;
  long lVar5;
  UnityEngine_Events_UnityAction_o *call_00;
  TMPro_TMP_InputField_OnValidateInput_c *id;
  System_Delegate_o *pSVar6;
  UnityEngine_Object_o *pUVar7;
  bool bVar8;
  
  if (g_data_057a9df5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnHexChanged);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Char_ValidateHex);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnValidateInput);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddListener);
    g_data_057a9df5 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  id = (TMPro_TMP_InputField_OnValidateInput_c *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)input,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  if (input != (TMPro_TMP_InputField_o *)0x0) {
    pSVar6 = (System_Delegate_o *)(input->fields).m_OnTouchScreenKeyboardStatusChanged;
    pSVar3 = (System_Delegate_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnValidateInput);
    TMPro_TMP_InputField_OnValidateInput___ctor();
    value = (TMPro_TMP_InputField_OnValidateInput_o *)
            System_Delegate__Combine(pSVar6,pSVar3,(MethodInfo *)0x0);
    if ((value != (TMPro_TMP_InputField_OnValidateInput_o *)0x0) &&
       (id = TypeInfo_OnValidateInput, value->klass != TypeInfo_OnValidateInput)) goto label_03b6f354;
    TMPro_TMP_InputField__set_onValidateInput(input,value,(MethodInfo *)0x0);
    __this_00 = (input->fields).m_OnEndTextSelection;
    call = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
    UnityEngine_Events_UnityAction_object____ctor();
    id = (TMPro_TMP_InputField_OnValidateInput_c *)__this;
    if (__this_00 != (TMPro_TMP_InputField_TextSelectionEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent_object___AddListener
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,call,MethodInfo_Void_AddListener);
      return;
    }
  }
  value = (TMPro_TMP_InputField_OnValidateInput_o *)il2cpp_runtime_helper_022b2c90();
label_03b6f354:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057a9df6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_Find_Button);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9df6 = '\x01';
  }
  root = UnityEngine_Component__get_transform((UnityEngine_Component_o *)value,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (UnityEngine_Object_o *)
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(root,(System_String_o *)id,MethodInfo_Button_Find_Button);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = (System_Delegate_o *)0x0;
  pUVar7 = x;
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (x != (UnityEngine_Object_o *)0x0) {
      __this_01 = (UnityEngine_Events_UnityEvent_o *)x[10].fields.m_CachedPtr;
      pUVar7 = (UnityEngine_Object_o *)0x0;
      if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_01,call_00,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9dfd == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchUIColorPickerValue);
      g_data_057a9dfd = '\x01';
    }
    pSVar3 = (System_Delegate_o *)pUVar7[5].fields.m_CachedPtr;
    while( true ) {
      pSVar4 = System_Delegate__Combine(pSVar3,pSVar6,(MethodInfo *)0x0);
      uVar1 = TypeInfo_Action_GisketchUIColorPickerValue;
      lVar5 = 0;
      if ((pSVar4 != (System_Delegate_o *)0x0) &&
         (lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,TypeInfo_Action_GisketchUIColorPickerValue), lVar5 == 0)) break;
      pSVar4 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(&pUVar7[5].fields,lVar5,pSVar3);
      bVar8 = pSVar3 == pSVar4;
      pSVar3 = pSVar4;
      if (bVar8) {
        return;
      }
    }
    il2cpp_runtime_helper_022b2fd0(pSVar4,uVar1);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$WireButton
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, System_String_o* id, UnityEngine_Events_UnityAction_o* action, const MethodInfo* method);
// 0x3b6f360

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,System_String_o *id,
               UnityEngine_Events_UnityAction_o *action,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  undefined8 uVar1;
  bool_conflict bVar2;
  UnityEngine_Transform_o *root;
  UnityEngine_Object_o *x;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Delegate_o *b;
  UnityEngine_Object_o *pUVar5;
  System_Delegate_o *a;
  bool bVar6;
  
  if (g_data_057a9df6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_Find_Button);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIColorPicker);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9df6 = '\x01';
  }
  root = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (UnityEngine_Object_o *)Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_(root,id,MethodInfo_Button_Find_Button)
  ;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  b = (System_Delegate_o *)0x0;
  pUVar5 = x;
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (x != (UnityEngine_Object_o *)0x0) {
      __this_00 = (UnityEngine_Events_UnityEvent_o *)x[10].fields.m_CachedPtr;
      pUVar5 = (UnityEngine_Object_o *)0x0;
      if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_00,action,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9dfd == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchUIColorPickerValue);
      g_data_057a9dfd = '\x01';
    }
    a = (System_Delegate_o *)pUVar5[5].fields.m_CachedPtr;
    while( true ) {
      pSVar3 = System_Delegate__Combine(a,b,(MethodInfo *)0x0);
      uVar1 = TypeInfo_Action_GisketchUIColorPickerValue;
      lVar4 = 0;
      if ((pSVar3 != (System_Delegate_o *)0x0) &&
         (lVar4 = il2cpp_runtime_helper_023051f0(pSVar3,TypeInfo_Action_GisketchUIColorPickerValue), lVar4 == 0)) break;
      pSVar3 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(&pUVar5[5].fields,lVar4,a);
      bVar6 = a == pSVar3;
      a = pSVar3;
      if (bVar6) {
        return;
      }
    }
    il2cpp_runtime_helper_022b2fd0(pSVar3,uVar1);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$SetText
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetText (TMPro_TMP_InputField_o* input, System_String_o* value, const MethodInfo* method);
// 0x3b704a0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetText
               (TMPro_TMP_InputField_o *input,System_String_o *value,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057a9df7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9df7 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)input,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (input == (TMPro_TMP_InputField_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    bVar1 = System_String__op_Inequality
                      (*(System_String_o **)&(input->fields).m_SelectionColor.fields.a,value,(MethodInfo *)0x0
                      );
    if ((char)bVar1 != '\0') {
      TMPro_TMP_InputField__SetTextWithoutNotify(input,value,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$ValidateDigit
// il2cpp: uint16_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__ValidateDigit (System_String_o* text, int32_t charIndex, uint16_t addedChar, const MethodInfo* method);
// 0x3b705e0

uint16_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__ValidateDigit
                   (System_String_o *text,int32_t charIndex,uint16_t addedChar,MethodInfo *method)

{
  if (0x2f < addedChar) {
    if (0x39 < addedChar) {
      addedChar = 0;
    }
    return addedChar;
  }
  return 0;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$ValidateHex
// il2cpp: uint16_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__ValidateHex (System_String_o* text, int32_t charIndex, uint16_t addedChar, const MethodInfo* method);
// 0x3b70600

uint16_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__ValidateHex
                   (System_String_o *text,int32_t charIndex,uint16_t addedChar,MethodInfo *method)

{
  uint16_t uVar1;
  uint16_t uVar2;
  
  if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar1 = System_Char__ToUpperInvariant(addedChar,(MethodInfo *)0x0);
  uVar2 = 0;
  if (uVar1 == 0x23) {
    if (charIndex == 0) {
      uVar2 = 0x23;
    }
  }
  else {
    if ((ushort)(uVar1 - 0x41) < 6) {
      uVar2 = uVar1;
    }
    if ((ushort)(uVar1 - 0x30) < 10) {
      uVar2 = uVar1;
    }
  }
  return uVar2;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, const MethodInfo* method);
// 0x3b70660

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


