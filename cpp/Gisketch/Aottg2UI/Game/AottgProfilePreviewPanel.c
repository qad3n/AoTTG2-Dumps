// Type: Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfilePreviewPanel.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c___cctor (const MethodInfo* method);
// 0x4528930

void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aee63 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aee63 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c___ctor (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c_o* __this, const MethodInfo* method);
// 0x45289a0

void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c___ctor
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel.<>c$$<Build>b__3_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c___Build_b__3_1 (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* title, const MethodInfo* method);
// 0x45289b0

void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c___Build_b__3_1
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *title,MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  System_String_o *area;
  bool_conflict bVar2;
  UnityEngine_Object_o *x;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  long *plVar5;
  int32_t iVar6;
  undefined1 auVar7 [12];
  undefined1 in_stack_ffffffffffffff60 [12];
  int32_t iVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o GStack_68;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_48;
  
  if (g_data_057aee64 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Preview");
    __this = (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c_o *)&"profilePreviewTitle";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee64 = '\x01';
  }
  if (title != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (title,"Preview","profilePreviewTitle",(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGStack_48 = title;
  if (g_data_057aee6b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextAsset_Load_TextAsset);
    il2cpp_runtime_helper_023445d0(&" bytes=");
    il2cpp_runtime_helper_023445d0(&"ProfilePresetCatalog.LoadJson");
    g_data_057aee6b = '\x01';
  }
  iVar8 = 0;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&GStack_68,"ProfilePresetCatalog.LoadJson",(System_String_o *)__this,(MethodInfo *)0x0);
  x = (UnityEngine_Object_o *)UnityEngine_Resources__Load_object_((System_String_o *)__this,MethodInfo_TextAsset_Load_TextAsset);
  pSVar9 = GStack_68.fields._area;
  pSVar10 = GStack_68.fields._detail;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar9 = GStack_68.fields._area;
    pSVar10 = GStack_68.fields._detail;
  }
  iVar6 = 0;
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  area = "ProfilePresetCatalog.LoadJson";
  pSVar4 = " bytes=";
  if ((char)bVar2 == '\0') {
label_04528b53:
    pSVar3 = System_Int32__ToString((int32_t)&stack0xffffffffffffff6c,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat_3af7150((System_String_o *)__this,pSVar4,pSVar3,(MethodInfo *)0x0);
    iVar8 = iVar6;
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      iVar8 = iVar6;
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark(area,pSVar4,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
label_04528be3:
      __this_00.fields._detail._4_4_ = iVar8;
      __this_00.fields._0_12_ = in_stack_ffffffffffffff60;
      __this_00.fields._startMs = (int64_t)pSVar9;
      __this_00.fields._24_8_ = pSVar10;
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
                (__this_00,(MethodInfo *)&stack0xffffffffffffff70);
      return;
    }
    if (x != (UnityEngine_Object_o *)0x0) {
      pSVar4 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
      SimpleJSONFixed_JSON__Parse(pSVar4,(MethodInfo *)0x0);
      goto label_04528be3;
    }
  }
  else {
    if (x != (UnityEngine_Object_o *)0x0) {
      iVar6 = 0;
      pSVar3 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
      if (pSVar3 != (System_String_o *)0x0) {
        pSVar3 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
        if (pSVar3 == (System_String_o *)0x0) goto label_04528c0b;
        iVar6 = (pSVar3->fields)._stringLength;
      }
      goto label_04528b53;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
label_04528c0b:
  auVar7 = il2cpp_runtime_helper_022b2c90();
  if (auVar7._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar1 = *plVar5;
    __cxa_end_catch();
    __this_01.fields._detail._4_4_ = iVar8;
    __this_01.fields._0_12_ = in_stack_ffffffffffffff60;
    __this_01.fields._startMs = (int64_t)pSVar9;
    __this_01.fields._24_8_ = pSVar10;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_01,(MethodInfo *)&stack0xffffffffffffff70);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_02.fields._detail._4_4_ = iVar8;
  __this_02.fields._0_12_ = in_stack_ffffffffffffff60;
  __this_02.fields._startMs = (int64_t)pSVar9;
  __this_02.fields._24_8_ = pSVar10;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_02,(MethodInfo *)&stack0xffffffffffffff70);
  _Unwind_Resume(auVar7._0_8_);
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___ctor (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_o* __this, System_String_o* avatarSprite, System_String_o* bannerSprite, const MethodInfo* method);
// 0x451f600

void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___ctor
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_o *__this,System_String_o *avatarSprite,
               System_String_o *bannerSprite,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._avatarSprite = avatarSprite;
  il2cpp_runtime_helper_022b4080(&__this->fields,avatarSprite);
  (__this->fields)._bannerSprite = bannerSprite;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._bannerSprite,bannerSprite);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel__Build (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x4528350

void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel__Build
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui
               ,MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  System_String_o *detail;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  long *plVar4;
  undefined1 auVar5 [12];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  Il2CppMethodPointer local_68;
  Il2CppMethodPointer pIStack_60;
  InvokerMethod local_58;
  char *pcStack_50;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_40;
  
  if (g_data_057aee61 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__3_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&"profile-preview-dialog");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"avatar=");
    il2cpp_runtime_helper_023445d0(&"ProfilePreviewPanel.Build");
    il2cpp_runtime_helper_023445d0(&"profilePreviewDialog");
    il2cpp_runtime_helper_023445d0(&" banner=");
    g_data_057aee61 = '\x01';
  }
  local_58 = (InvokerMethod)0x0;
  pcStack_50 = (char *)0x0;
  local_68 = (Il2CppMethodPointer)0x0;
  pIStack_60 = (Il2CppMethodPointer)0x0;
  detail = System_String__Concat_3af7470
                     ("avatar=",(__this->fields)._avatarSprite," banner=",(__this->fields)._bannerSprite,
                      (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time(&local_40,"ProfilePreviewPanel.Build",detail,(MethodInfo *)0x0);
  build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(480.0,(MethodInfo *)0x0);
  uVar8 = 0;
  uVar9 = 0;
  uVar6 = 0;
  uVar7 = 0;
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,12.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (g_data_057aee38 == '\0') {
    il2cpp_runtime_helper_023445d0(&"slideRightSmall");
    g_data_057aee38 = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideRightSmall",(System_String_o *)0x0,0.16,0.0,0.0,1,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar6 = 0;
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,"profilePreviewDialog",build,"profile-preview-dialog",layout,pGVar2,(MethodInfo *)0x0);
    if (g_data_057aee39 == '\0') {
      il2cpp_runtime_helper_023445d0(&"slideRightSmall");
      g_data_057aee39 = '\x01';
    }
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                       ("slideRightSmall",(System_String_o *)0x0,0.16,0.0,0.0,1,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).enter = pGVar2;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).enter,pGVar2);
      __this_00.fields._detail = (System_String_o *)uVar7;
      __this_00.fields._area = (System_String_o *)uVar6;
      __this_00.fields._startMs = uVar8;
      __this_00.fields._enabled = (int)uVar9;
      __this_00.fields._hotLoop = (int)((ulong)uVar9 >> 0x20);
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_00,(MethodInfo *)&local_68);
      return;
    }
  }
  auVar5 = il2cpp_runtime_helper_022b2c90();
  if (auVar5._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar1 = *plVar4;
    __cxa_end_catch();
    __this_01.fields._detail = (System_String_o *)uVar7;
    __this_01.fields._area = (System_String_o *)uVar6;
    __this_01.fields._startMs = uVar8;
    __this_01.fields._enabled = (int)uVar9;
    __this_01.fields._hotLoop = (int)((ulong)uVar9 >> 0x20);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_01,(MethodInfo *)&local_68);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_02.fields._detail = (System_String_o *)uVar7;
  __this_02.fields._area = (System_String_o *)uVar6;
  __this_02.fields._startMs = uVar8;
  __this_02.fields._enabled = (int)uVar9;
  __this_02.fields._hotLoop = (int)((ulong)uVar9 >> 0x20);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_02,(MethodInfo *)&local_68);
  _Unwind_Resume(auVar5._0_8_);
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel$$<Build>b__3_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___Build_b__3_0 (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* preview, const MethodInfo* method);
// 0x45286c0

void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___Build_b__3_0
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *preview,MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar2;
  System_String_o *pSVar3;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  System_String_c *extraout_RDX;
  System_String_Fields SVar4;
  System_String_o *__this_01;
  
  if (g_data_057aee62 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgProfilePreviewCard);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__3_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"profilePreviewTitleBar");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profile-preview-title-bar");
    g_data_057aee62 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = "profilePreviewTitleBar";
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 8) = build;
    il2cpp_runtime_helper_022b4080(lVar1 + 8,build);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  SVar4._stringLength = 0;
  SVar4._firstChar = 0;
  SVar4._6_2_ = 0;
  __this_01 = "Column";
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (preview != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (preview,pSVar3,build,"profile-preview-title-bar",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar2 = (Gisketch_Aottg2UI_Code_AottgComponent_c *)(__this->fields)._avatarSprite;
    pSVar3 = (__this->fields)._bannerSprite;
    __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgProfilePreviewCard);
    Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
    __this_00[1].klass = pGVar2;
    il2cpp_runtime_helper_022b4080(__this_00 + 1,pGVar2);
    __this_00[1].monitor = pSVar3;
    il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,pSVar3);
    Gisketch_Aottg2UI_Code_AottgUi__Component(preview,__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
  __this_01->fields = SVar4;
  il2cpp_runtime_helper_022b4080(&__this_01->fields,SVar4);
  __this_01[1].klass = extraout_RDX;
  il2cpp_runtime_helper_022b4080(__this_01 + 1,extraout_RDX);
  return;
}


