// Type: Gilzoide.FlexUi.Yoga.Yoga
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gilzoide.FlexUi/Gilzoide.FlexUi.Yoga/Yoga.cs
// Prior source: NEW in this update
// --------------------------------

// Gilzoide.FlexUi.Yoga.Yoga.YGMeasureFunc$$.ctor
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc___ctor (Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
// 0x3abbf20

void Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc___ctor(void)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  long in_RDX;
  long in_RSI;
  long in_RDI;
  
  *(undefined8 *)(in_RDI + 0x10) = *(undefined8 *)(in_RDX + 8);
  *(long *)(in_RDI + 0x28) = in_RDX;
  *(long *)(in_RDI + 0x20) = in_RSI;
  il2cpp_runtime_glue(in_RDI + 0x20);
  cVar1 = *(char *)(in_RDX + 0x52);
  *(long *)(in_RDI + 0x40) = in_RDI;
  cVar2 = il2cpp_glue_02274970();
  if (cVar2 == '\0') {
    if (in_RSI == 0) {
      uVar3 = il2cpp_glue_022dc730(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar3,0);
    }
  }
  else if (cVar1 == '\x05') {
    *(undefined1 **)(in_RDI + 0x18) = &LAB_0205d870;
    goto LAB_03abbf85;
  }
  *(undefined8 *)(in_RDI + 0x18) = *(undefined8 *)(in_RDI + 0x10);
  *(undefined8 *)(in_RDI + 0x40) = *(undefined8 *)(in_RDI + 0x20);
LAB_03abbf85:
  *(undefined1 **)(in_RDI + 0x38) = &LAB_0205d7e0;
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga.YGMeasureFunc$$Invoke
// il2cpp: UnityEngine_Vector2_o Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc__Invoke (Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o* __this, intptr_t nodePtr, float width, int32_t widthMode, float height, int32_t heightMode, const MethodInfo* method);
// 0x3ac0150

UnityEngine_Vector2_o
Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc__Invoke
          (Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o *__this,intptr_t nodePtr,float width,
          int32_t widthMode,float height,int32_t heightMode,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x03ac015f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1.fields = (UnityEngine_Vector2_Fields)
                 (*(code *)(__this->fields).invoke_impl)((__this->fields).method_code);
  return (UnityEngine_Vector2_o)UVar1.fields;
}


// Gilzoide.FlexUi.Yoga.Yoga.YGMeasureFunc$$BeginInvoke
// il2cpp: System_IAsyncResult_o* Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc__BeginInvoke (Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o* __this, intptr_t nodePtr, float width, int32_t widthMode, float height, int32_t heightMode, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
// 0x3ac0170

System_IAsyncResult_o *
Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc__BeginInvoke
          (Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o *__this,intptr_t nodePtr,float width,
          int32_t widthMode,float height,int32_t heightMode,System_AsyncCallback_o *callback,
          Il2CppObject *object,MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  int32_t local_70;
  float local_6c;
  int32_t local_68;
  float local_64;
  intptr_t local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_70 = heightMode;
  local_6c = height;
  local_68 = widthMode;
  local_64 = width;
  local_60 = nodePtr;
  if (DAT_057012d0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MeasureMode);
    DAT_057012d0 = '\x01';
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_58 = il2cpp_runtime_glue(DAT_05711078,&local_60);
  uStack_50 = il2cpp_runtime_glue(DAT_05711098,&local_64);
  local_48 = il2cpp_runtime_glue(TypeInfo_MeasureMode,&local_68);
  uStack_40 = il2cpp_runtime_glue(DAT_05711098,&local_6c);
  local_38 = il2cpp_runtime_glue(TypeInfo_MeasureMode,&local_70);
  pSVar1 = (System_IAsyncResult_o *)il2cpp_glue_022fd810(__this,&local_58,callback,object);
  return pSVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga.YGMeasureFunc$$EndInvoke
// il2cpp: UnityEngine_Vector2_o Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc__EndInvoke (Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
// 0x3ac0260

UnityEngine_Vector2_o
Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc__EndInvoke
          (Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o *__this,System_IAsyncResult_o *result,
          MethodInfo *method)

{
  long lVar1;
  UnityEngine_Vector2_Fields *pUVar2;
  
  lVar1 = il2cpp_glue_022fda50(result,0);
  if (lVar1 != 0) {
    pUVar2 = (UnityEngine_Vector2_Fields *)il2cpp_glue_022c7330(lVar1);
    return (UnityEngine_Vector2_o)*pUVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGConfigNew
// il2cpp: intptr_t Gilzoide_FlexUi_Yoga_Yoga__YGConfigNew (const MethodInfo* method);
// 0x3abce20

intptr_t Gilzoide_FlexUi_Yoga_Yoga__YGConfigNew(MethodInfo *method)

{
  intptr_t iVar1;
  char *local_30;
  undefined8 local_28;
  char *local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined4 local_8;
  undefined1 local_4;
  
  if (DAT_057010f0 != (code *)0x0) {
    iVar1 = (*DAT_057010f0)();
    return iVar1;
  }
  local_30 = "flex-ui";
  local_28 = 7;
  local_20 = "FlexUi_ConfigNew";
  local_18 = 0x10;
  local_10 = 0x200000000;
  local_8 = 0;
  local_4 = 0;
  DAT_057010f0 = (code *)il2cpp_glue_022c74a0(&local_30);
  iVar1 = (*DAT_057010f0)();
  return iVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGConfigFree
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGConfigFree (intptr_t config, const MethodInfo* method);
// 0x3abcfb0

void Gilzoide_FlexUi_Yoga_Yoga__YGConfigFree(intptr_t config,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_057010f8 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_ConfigFree";
    local_20 = 0x11;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    DAT_057010f8 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  (*DAT_057010f8)(config);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGConfigGetDefault
// il2cpp: intptr_t Gilzoide_FlexUi_Yoga_Yoga__YGConfigGetDefault (const MethodInfo* method);
// 0x3abcda0

intptr_t Gilzoide_FlexUi_Yoga_Yoga__YGConfigGetDefault(MethodInfo *method)

{
  intptr_t iVar1;
  char *local_30;
  undefined8 local_28;
  char *local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined4 local_8;
  undefined1 local_4;
  
  if (DAT_05701100 != (code *)0x0) {
    iVar1 = (*DAT_05701100)();
    return iVar1;
  }
  local_30 = "flex-ui";
  local_28 = 7;
  local_20 = "FlexUi_ConfigGetDefault";
  local_18 = 0x17;
  local_10 = 0x200000000;
  local_8 = 0;
  local_4 = 0;
  DAT_05701100 = (code *)il2cpp_glue_022c74a0(&local_30);
  iVar1 = (*DAT_05701100)();
  return iVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGConfigSetPointScaleFactor
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGConfigSetPointScaleFactor (intptr_t config, float enabled, const MethodInfo* method);
// 0x3abd030

void Gilzoide_FlexUi_Yoga_Yoga__YGConfigSetPointScaleFactor
               (intptr_t config,float enabled,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_05701108 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_ConfigSetPointScaleFactor";
    local_20 = 0x20;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    DAT_05701108 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  (*DAT_05701108)(enabled,config);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGConfigSetErrata
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGConfigSetErrata (intptr_t config, int32_t errata, const MethodInfo* method);
// 0x3abd0c0

void Gilzoide_FlexUi_Yoga_Yoga__YGConfigSetErrata(intptr_t config,int32_t errata,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = DAT_05701110;
  if (DAT_05701110 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_ConfigSetErrata";
    uStack_28 = 0x16;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar1 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_05701110 = auVar1._0_8_;
  (*DAT_05701110)(config,errata,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGConfigSetExperimentalFeatureEnabled
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGConfigSetExperimentalFeatureEnabled (intptr_t config, int32_t feature, bool enabled, const MethodInfo* method);
// 0x3abd140

void Gilzoide_FlexUi_Yoga_Yoga__YGConfigSetExperimentalFeatureEnabled
               (intptr_t config,int32_t feature,bool_conflict enabled,MethodInfo *method)

{
  char *pcStack_48;
  undefined8 uStack_40;
  char *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  
  if (DAT_05701118 == (code *)0x0) {
    pcStack_48 = "flex-ui";
    uStack_40 = 7;
    pcStack_38 = "FlexUi_ConfigSetExperimentalFeatureEnabled";
    uStack_30 = 0x2a;
    uStack_28 = 0x200000000;
    uStack_20 = 0x10;
    uStack_1c = 0;
    DAT_05701118 = (code *)il2cpp_glue_022c74a0(&pcStack_48);
  }
  (*DAT_05701118)(config,feature,enabled & 0xff);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeNew
// il2cpp: intptr_t Gilzoide_FlexUi_Yoga_Yoga__YGNodeNew (const MethodInfo* method);
// 0x3abd1e0

intptr_t Gilzoide_FlexUi_Yoga_Yoga__YGNodeNew(MethodInfo *method)

{
  intptr_t iVar1;
  char *local_30;
  undefined8 local_28;
  char *local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined4 local_8;
  undefined1 local_4;
  
  if (DAT_05701120 != (code *)0x0) {
    iVar1 = (*DAT_05701120)();
    return iVar1;
  }
  local_30 = "flex-ui";
  local_28 = 7;
  local_20 = "FlexUi_NodeNew";
  local_18 = 0xe;
  local_10 = 0x200000000;
  local_8 = 0;
  local_4 = 0;
  DAT_05701120 = (code *)il2cpp_glue_022c74a0(&local_30);
  iVar1 = (*DAT_05701120)();
  return iVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeFree
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeFree (intptr_t node, const MethodInfo* method);
// 0x3abe3a0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeFree(intptr_t node,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_05701128 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeFree";
    local_20 = 0xf;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    DAT_05701128 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  (*DAT_05701128)(node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeCalculateLayout
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeCalculateLayout (intptr_t node, float availableWidth, float availableHeight, int32_t ownerDirection, const MethodInfo* method);
// 0x3abe420

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeCalculateLayout
               (intptr_t node,float availableWidth,float availableHeight,int32_t ownerDirection,
               MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = DAT_05701130;
  if (DAT_05701130 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeCalculateLayout";
    uStack_28 = 0x1a;
    uStack_20 = 0x200000000;
    uStack_18 = 0x14;
    uStack_14 = 0;
    auVar1 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_05701130 = auVar1._0_8_;
  (*DAT_05701130)(availableWidth,availableHeight,node,ownerDirection,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeInsertChild
// il2cpp: System_String_o* Gilzoide_FlexUi_Yoga_Yoga__YGNodeInsertChild (intptr_t node, intptr_t child, int32_t index, const MethodInfo* method);
// 0x3abe4c0

System_String_o *
Gilzoide_FlexUi_Yoga_Yoga__YGNodeInsertChild
          (intptr_t node,intptr_t child,int32_t index,MethodInfo *method)

{
  undefined8 uVar1;
  System_String_o *pSVar2;
  char *pcStack_48;
  undefined8 uStack_40;
  char *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  
  if (DAT_05701138 == (code *)0x0) {
    pcStack_48 = "flex-ui";
    uStack_40 = 7;
    pcStack_38 = "FlexUi_NodeInsertChild";
    uStack_30 = 0x16;
    uStack_28 = 0x200000000;
    uStack_20 = 0x14;
    uStack_1c = 0;
    DAT_05701138 = (code *)il2cpp_glue_022c74a0(&pcStack_48);
  }
  uVar1 = (*DAT_05701138)(node,child,index);
  pSVar2 = (System_String_o *)il2cpp_glue_022c7af0(uVar1);
  il2cpp_glue_022c7970(uVar1);
  return pSVar2;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeRemoveChild
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeRemoveChild (intptr_t node, intptr_t child, const MethodInfo* method);
// 0x3abe570

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeRemoveChild(intptr_t node,intptr_t child,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = DAT_05701140;
  if (DAT_05701140 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeRemoveChild";
    uStack_28 = 0x16;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar1 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_05701140 = auVar1._0_8_;
  (*DAT_05701140)(node,child,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeRemoveAllChildren
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeRemoveAllChildren (intptr_t node, const MethodInfo* method);
// 0x3abe5f0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeRemoveAllChildren(intptr_t node,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_05701148 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeRemoveAllChildren";
    local_20 = 0x1c;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    DAT_05701148 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  (*DAT_05701148)(node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeGetChildCount
// il2cpp: int32_t Gilzoide_FlexUi_Yoga_Yoga__YGNodeGetChildCount (intptr_t node, const MethodInfo* method);
// 0x3abe670

int32_t Gilzoide_FlexUi_Yoga_Yoga__YGNodeGetChildCount(intptr_t node,MethodInfo *method)

{
  int32_t iVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_05701150 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeGetChildCount";
    local_20 = 0x18;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    DAT_05701150 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  iVar1 = (*DAT_05701150)(node);
  return iVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeSetConfig
// il2cpp: System_String_o* Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetConfig (intptr_t node, intptr_t config, const MethodInfo* method);
// 0x3abe6f0

System_String_o *
Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetConfig(intptr_t node,intptr_t config,MethodInfo *method)

{
  undefined8 uVar1;
  System_String_o *pSVar2;
  undefined1 auVar3 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = DAT_05701158;
  if (DAT_05701158 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeSetConfig";
    uStack_28 = 0x14;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar3 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_05701158 = auVar3._0_8_;
  uVar1 = (*DAT_05701158)(node,config,auVar3._8_8_);
  pSVar2 = (System_String_o *)il2cpp_glue_022c7af0(uVar1);
  il2cpp_glue_022c7970(uVar1);
  return pSVar2;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeSetContext
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetContext (intptr_t node, intptr_t context, const MethodInfo* method);
// 0x3abe790

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetContext(intptr_t node,intptr_t context,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = DAT_05701160;
  if (DAT_05701160 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeSetContext";
    uStack_28 = 0x15;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar1 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_05701160 = auVar1._0_8_;
  (*DAT_05701160)(node,context,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeGetContext
// il2cpp: intptr_t Gilzoide_FlexUi_Yoga_Yoga__YGNodeGetContext (intptr_t node, const MethodInfo* method);
// 0x3abe810

intptr_t Gilzoide_FlexUi_Yoga_Yoga__YGNodeGetContext(intptr_t node,MethodInfo *method)

{
  intptr_t iVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_05701168 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeGetContext";
    local_20 = 0x15;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    DAT_05701168 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  iVar1 = (*DAT_05701168)(node);
  return iVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeSetMeasureFunc
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetMeasureFunc (intptr_t node, intptr_t measureFunc, const MethodInfo* method);
// 0x3abe980

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetMeasureFunc
               (intptr_t node,intptr_t measureFunc,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = DAT_05701170;
  if (DAT_05701170 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeSetMeasureFunc";
    uStack_28 = 0x19;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar1 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_05701170 = auVar1._0_8_;
  (*DAT_05701170)(node,measureFunc,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeHasMeasureFunc
// il2cpp: bool Gilzoide_FlexUi_Yoga_Yoga__YGNodeHasMeasureFunc (intptr_t node, const MethodInfo* method);
// 0x3abea00

bool_conflict Gilzoide_FlexUi_Yoga_Yoga__YGNodeHasMeasureFunc(intptr_t node,MethodInfo *method)

{
  undefined8 uVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_05701178 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeHasMeasureFunc";
    local_20 = 0x19;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    DAT_05701178 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  uVar1 = (*DAT_05701178)(node);
  return (bool_conflict)CONCAT71((int7)((ulong)uVar1 >> 8),(char)uVar1 != '\0');
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeSetDirty
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetDirty (intptr_t node, const MethodInfo* method);
// 0x3abea80

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetDirty(intptr_t node,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_05701180 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeSetDirty";
    local_20 = 0x13;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    DAT_05701180 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  (*DAT_05701180)(node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeSetMeasureFunc
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetMeasureFunc (intptr_t node, Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o* measureFunc, const MethodInfo* method);
// 0x3abe8a0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetMeasureFunc
               (intptr_t node,Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o *measureFunc,
               MethodInfo *method)

{
  intptr_t iVar1;
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  if (DAT_05701188 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_IntPtr_GetFunctionPointerForDelegate_Yoga_YGMeas);
    il2cpp_init_method_metadata(&TypeInfo_Marshal);
    DAT_05701188 = '\x01';
  }
  if (*(int *)(TypeInfo_Marshal + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar1 = System_Runtime_InteropServices_Marshal__GetFunctionPointerForDelegate<object>
                    ((Il2CppObject *)measureFunc,MethodInfo_IntPtr_GetFunctionPointerForDelegate_Yoga_YGMeas);
  if (DAT_05701170 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeSetMeasureFunc";
    uStack_28 = 0x19;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    DAT_05701170 = (code *)il2cpp_glue_022c74a0(&pcStack_40);
  }
  (*DAT_05701170)(node,iVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeLayoutGetLeft
// il2cpp: float Gilzoide_FlexUi_Yoga_Yoga__YGNodeLayoutGetLeft (intptr_t node, const MethodInfo* method);
// 0x3abeb00

float Gilzoide_FlexUi_Yoga_Yoga__YGNodeLayoutGetLeft(intptr_t node,MethodInfo *method)

{
  float fVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_05701190 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeLayoutGetLeft";
    local_20 = 0x18;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    DAT_05701190 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  fVar1 = (float)(*DAT_05701190)(node);
  return fVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeLayoutGetTop
// il2cpp: float Gilzoide_FlexUi_Yoga_Yoga__YGNodeLayoutGetTop (intptr_t node, const MethodInfo* method);
// 0x3abeb80

float Gilzoide_FlexUi_Yoga_Yoga__YGNodeLayoutGetTop(intptr_t node,MethodInfo *method)

{
  float fVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_05701198 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeLayoutGetTop";
    local_20 = 0x17;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    DAT_05701198 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  fVar1 = (float)(*DAT_05701198)(node);
  return fVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeLayoutGetWidth
// il2cpp: float Gilzoide_FlexUi_Yoga_Yoga__YGNodeLayoutGetWidth (intptr_t node, const MethodInfo* method);
// 0x3abec00

float Gilzoide_FlexUi_Yoga_Yoga__YGNodeLayoutGetWidth(intptr_t node,MethodInfo *method)

{
  float fVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_057011a0 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeLayoutGetWidth";
    local_20 = 0x19;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    DAT_057011a0 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  fVar1 = (float)(*DAT_057011a0)(node);
  return fVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeLayoutGetHeight
// il2cpp: float Gilzoide_FlexUi_Yoga_Yoga__YGNodeLayoutGetHeight (intptr_t node, const MethodInfo* method);
// 0x3abec80

float Gilzoide_FlexUi_Yoga_Yoga__YGNodeLayoutGetHeight(intptr_t node,MethodInfo *method)

{
  float fVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_057011a8 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeLayoutGetHeight";
    local_20 = 0x1a;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    DAT_057011a8 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  fVar1 = (float)(*DAT_057011a8)(node);
  return fVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetDirection
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetDirection (intptr_t node, int32_t direction, const MethodInfo* method);
// 0x3abed00

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetDirection
               (intptr_t node,int32_t direction,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = DAT_057011b0;
  if (DAT_057011b0 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetDirection";
    uStack_28 = 0x1c;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar1 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_057011b0 = auVar1._0_8_;
  (*DAT_057011b0)(node,direction,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexDirection
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexDirection (intptr_t node, int32_t flexDirection, const MethodInfo* method);
// 0x3abed80

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexDirection
               (intptr_t node,int32_t flexDirection,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = DAT_057011b8;
  if (DAT_057011b8 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetFlexDirection";
    uStack_28 = 0x20;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar1 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_057011b8 = auVar1._0_8_;
  (*DAT_057011b8)(node,flexDirection,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetJustifyContent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetJustifyContent (intptr_t node, int32_t justifyContent, const MethodInfo* method);
// 0x3abee00

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetJustifyContent
               (intptr_t node,int32_t justifyContent,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = DAT_057011c0;
  if (DAT_057011c0 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetJustifyContent";
    uStack_28 = 0x21;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar1 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_057011c0 = auVar1._0_8_;
  (*DAT_057011c0)(node,justifyContent,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetAlignContent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAlignContent (intptr_t node, int32_t alignContent, const MethodInfo* method);
// 0x3abee80

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAlignContent
               (intptr_t node,int32_t alignContent,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = DAT_057011c8;
  if (DAT_057011c8 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetAlignContent";
    uStack_28 = 0x1f;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar1 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_057011c8 = auVar1._0_8_;
  (*DAT_057011c8)(node,alignContent,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetAlignItems
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAlignItems (intptr_t node, int32_t alignItems, const MethodInfo* method);
// 0x3abef00

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAlignItems
               (intptr_t node,int32_t alignItems,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = DAT_057011d0;
  if (DAT_057011d0 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetAlignItems";
    uStack_28 = 0x1d;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar1 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_057011d0 = auVar1._0_8_;
  (*DAT_057011d0)(node,alignItems,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetAlignSelf
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAlignSelf (intptr_t node, int32_t alignSelf, const MethodInfo* method);
// 0x3abef80

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAlignSelf
               (intptr_t node,int32_t alignSelf,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = DAT_057011d8;
  if (DAT_057011d8 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetAlignSelf";
    uStack_28 = 0x1c;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar1 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_057011d8 = auVar1._0_8_;
  (*DAT_057011d8)(node,alignSelf,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetPositionType
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPositionType (intptr_t node, int32_t positionType, const MethodInfo* method);
// 0x3abf000

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPositionType
               (intptr_t node,int32_t positionType,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = DAT_057011e0;
  if (DAT_057011e0 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetPositionType";
    uStack_28 = 0x1f;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar1 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_057011e0 = auVar1._0_8_;
  (*DAT_057011e0)(node,positionType,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexWrap
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexWrap (intptr_t node, int32_t flexWrap, const MethodInfo* method);
// 0x3abf080

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexWrap
               (intptr_t node,int32_t flexWrap,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = DAT_057011e8;
  if (DAT_057011e8 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetFlexWrap";
    uStack_28 = 0x1b;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar1 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_057011e8 = auVar1._0_8_;
  (*DAT_057011e8)(node,flexWrap,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexGrow
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexGrow (intptr_t node, float flexGrow, const MethodInfo* method);
// 0x3abf100

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexGrow
               (intptr_t node,float flexGrow,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_057011f0 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetFlexGrow";
    local_20 = 0x1b;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    DAT_057011f0 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  (*DAT_057011f0)(flexGrow,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexShrink
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexShrink (intptr_t node, float flexShrink, const MethodInfo* method);
// 0x3abf190

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexShrink
               (intptr_t node,float flexShrink,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_057011f8 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetFlexShrink";
    local_20 = 0x1d;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    DAT_057011f8 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  (*DAT_057011f8)(flexShrink,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexBasis
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexBasis (intptr_t node, float flexBasis, const MethodInfo* method);
// 0x3abf220

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexBasis
               (intptr_t node,float flexBasis,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_05701200 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetFlexBasis";
    local_20 = 0x1c;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    DAT_05701200 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  (*DAT_05701200)(flexBasis,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexBasisPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexBasisPercent (intptr_t node, float flexBasis, const MethodInfo* method);
// 0x3abf2b0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexBasisPercent
               (intptr_t node,float flexBasis,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_05701208 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetFlexBasisPercent";
    local_20 = 0x23;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    DAT_05701208 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  (*DAT_05701208)(flexBasis,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexBasisAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexBasisAuto (intptr_t node, const MethodInfo* method);
// 0x3abf340

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexBasisAuto(intptr_t node,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_05701210 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetFlexBasisAuto";
    local_20 = 0x20;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    DAT_05701210 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  (*DAT_05701210)(node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetPosition
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPosition (intptr_t node, int32_t edge, float position, const MethodInfo* method);
// 0x3abf3c0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPosition
               (intptr_t node,int32_t edge,float position,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = DAT_05701218;
  if (DAT_05701218 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetPosition";
    uStack_28 = 0x1b;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar1 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_05701218 = auVar1._0_8_;
  (*DAT_05701218)(position,node,edge,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetPositionPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPositionPercent (intptr_t node, int32_t edge, float position, const MethodInfo* method);
// 0x3abf450

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPositionPercent
               (intptr_t node,int32_t edge,float position,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = DAT_05701220;
  if (DAT_05701220 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetPositionPercent";
    uStack_28 = 0x22;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar1 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_05701220 = auVar1._0_8_;
  (*DAT_05701220)(position,node,edge,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMargin
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMargin (intptr_t node, int32_t edge, float margin, const MethodInfo* method);
// 0x3abf4e0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMargin
               (intptr_t node,int32_t edge,float margin,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = DAT_05701228;
  if (DAT_05701228 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetMargin";
    uStack_28 = 0x19;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar1 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_05701228 = auVar1._0_8_;
  (*DAT_05701228)(margin,node,edge,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMarginPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMarginPercent (intptr_t node, int32_t edge, float margin, const MethodInfo* method);
// 0x3abf570

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMarginPercent
               (intptr_t node,int32_t edge,float margin,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = DAT_05701230;
  if (DAT_05701230 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetMarginPercent";
    uStack_28 = 0x20;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar1 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_05701230 = auVar1._0_8_;
  (*DAT_05701230)(margin,node,edge,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMarginAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMarginAuto (intptr_t node, int32_t edge, const MethodInfo* method);
// 0x3abf600

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMarginAuto
               (intptr_t node,int32_t edge,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = DAT_05701238;
  if (DAT_05701238 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetMarginAuto";
    uStack_28 = 0x1d;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar1 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_05701238 = auVar1._0_8_;
  (*DAT_05701238)(node,edge,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetPadding
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPadding (intptr_t node, int32_t edge, float padding, const MethodInfo* method);
// 0x3abf680

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPadding
               (intptr_t node,int32_t edge,float padding,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = DAT_05701240;
  if (DAT_05701240 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetPadding";
    uStack_28 = 0x1a;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar1 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_05701240 = auVar1._0_8_;
  (*DAT_05701240)(padding,node,edge,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetPaddingPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPaddingPercent (intptr_t node, int32_t edge, float padding, const MethodInfo* method);
// 0x3abf710

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPaddingPercent
               (intptr_t node,int32_t edge,float padding,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = DAT_05701248;
  if (DAT_05701248 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetPaddingPercent";
    uStack_28 = 0x21;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar1 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_05701248 = auVar1._0_8_;
  (*DAT_05701248)(padding,node,edge,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetGap
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetGap (intptr_t node, int32_t gutter, float gapLength, const MethodInfo* method);
// 0x3abf7a0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetGap
               (intptr_t node,int32_t gutter,float gapLength,MethodInfo *method)

{
  undefined1 auVar1 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = DAT_05701250;
  if (DAT_05701250 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetGap";
    uStack_28 = 0x16;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar1 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_05701250 = auVar1._0_8_;
  (*DAT_05701250)(gapLength,node,gutter,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetWidth (intptr_t node, float width, const MethodInfo* method);
// 0x3abf830

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetWidth(intptr_t node,float width,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_05701258 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetWidth";
    local_20 = 0x18;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    DAT_05701258 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  (*DAT_05701258)(width,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetWidthPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetWidthPercent (intptr_t node, float width, const MethodInfo* method);
// 0x3abf8c0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetWidthPercent
               (intptr_t node,float width,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_05701260 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetWidthPercent";
    local_20 = 0x1f;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    DAT_05701260 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  (*DAT_05701260)(width,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetWidthAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetWidthAuto (intptr_t node, const MethodInfo* method);
// 0x3abf950

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetWidthAuto(intptr_t node,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_05701268 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetWidthAuto";
    local_20 = 0x1c;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    DAT_05701268 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  (*DAT_05701268)(node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetHeight (intptr_t node, float height, const MethodInfo* method);
// 0x3abf9d0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetHeight(intptr_t node,float height,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_05701270 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetHeight";
    local_20 = 0x19;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    DAT_05701270 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  (*DAT_05701270)(height,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetHeightPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetHeightPercent (intptr_t node, float height, const MethodInfo* method);
// 0x3abfa60

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetHeightPercent
               (intptr_t node,float height,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_05701278 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetHeightPercent";
    local_20 = 0x20;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    DAT_05701278 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  (*DAT_05701278)(height,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetHeightAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetHeightAuto (intptr_t node, const MethodInfo* method);
// 0x3abfaf0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetHeightAuto(intptr_t node,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_05701280 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetHeightAuto";
    local_20 = 0x1d;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    DAT_05701280 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  (*DAT_05701280)(node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMinWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinWidth (intptr_t node, float minWidth, const MethodInfo* method);
// 0x3abfb70

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinWidth
               (intptr_t node,float minWidth,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_05701288 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMinWidth";
    local_20 = 0x1b;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    DAT_05701288 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  (*DAT_05701288)(minWidth,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMinWidthPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinWidthPercent (intptr_t node, float minWidth, const MethodInfo* method);
// 0x3abfc00

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinWidthPercent
               (intptr_t node,float minWidth,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_05701290 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMinWidthPercent";
    local_20 = 0x22;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    DAT_05701290 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  (*DAT_05701290)(minWidth,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMinHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinHeight (intptr_t node, float minHeight, const MethodInfo* method);
// 0x3abfc90

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinHeight
               (intptr_t node,float minHeight,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_05701298 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMinHeight";
    local_20 = 0x1c;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    DAT_05701298 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  (*DAT_05701298)(minHeight,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMinHeightPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinHeightPercent (intptr_t node, float minHeight, const MethodInfo* method);
// 0x3abfd20

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinHeightPercent
               (intptr_t node,float minHeight,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_057012a0 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMinHeightPercent";
    local_20 = 0x23;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    DAT_057012a0 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  (*DAT_057012a0)(minHeight,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMaxWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxWidth (intptr_t node, float maxWidth, const MethodInfo* method);
// 0x3abfdb0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxWidth
               (intptr_t node,float maxWidth,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_057012a8 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMaxWidth";
    local_20 = 0x1b;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    DAT_057012a8 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  (*DAT_057012a8)(maxWidth,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMaxWidthPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxWidthPercent (intptr_t node, float maxWidth, const MethodInfo* method);
// 0x3abfe40

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxWidthPercent
               (intptr_t node,float maxWidth,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_057012b0 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMaxWidthPercent";
    local_20 = 0x22;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    DAT_057012b0 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  (*DAT_057012b0)(maxWidth,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMaxHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxHeight (intptr_t node, float maxHeight, const MethodInfo* method);
// 0x3abfed0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxHeight
               (intptr_t node,float maxHeight,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_057012b8 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMaxHeight";
    local_20 = 0x1c;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    DAT_057012b8 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  (*DAT_057012b8)(maxHeight,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMaxHeightPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxHeightPercent (intptr_t node, float maxHeight, const MethodInfo* method);
// 0x3abff60

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxHeightPercent
               (intptr_t node,float maxHeight,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_057012c0 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMaxHeightPercent";
    local_20 = 0x23;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    DAT_057012c0 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  (*DAT_057012c0)(maxHeight,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetAspectRatio
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAspectRatio (intptr_t node, float aspectRatio, const MethodInfo* method);
// 0x3abfff0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAspectRatio
               (intptr_t node,float aspectRatio,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (DAT_057012c8 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetAspectRatio";
    local_20 = 0x1e;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    DAT_057012c8 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  (*DAT_057012c8)(aspectRatio,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$.ctor
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga___ctor (Gilzoide_FlexUi_Yoga_Yoga_o* __this, const MethodInfo* method);
// 0x3ac0140

void Gilzoide_FlexUi_Yoga_Yoga___ctor(Gilzoide_FlexUi_Yoga_Yoga_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


