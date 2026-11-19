// Type: Gilzoide.FlexUi.Yoga.Yoga
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gilzoide.FlexUi/Gilzoide.FlexUi.Yoga/Yoga.cs
// Prior real C# source: none
// --------------------------------

// Gilzoide.FlexUi.Yoga.Yoga.YGMeasureFunc$$.ctor
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc___ctor (Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
// 0x5315b20

void Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc___ctor
               (Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o *__this,Il2CppObject *object,intptr_t method,
               MethodInfo *methodInfo)

{
  char cVar1;
  char cVar2;
  Il2CppObject *ex;
  
  (__this->fields).method_ptr = *(intptr_t *)(method + 8);
  (__this->fields).method = method;
  (__this->fields).m_target = object;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_target);
  cVar1 = *(char *)(method + 0x52);
  (__this->fields).method_code = (intptr_t)__this;
  cVar2 = il2cpp_runtime_helper_030d61c0();
  if (cVar2 == '\0') {
    if (object == (Il2CppObject *)0x0) {
      ex = il2cpp_codegen_get_argument_exception
                     ((char *)0x0,"Delegate to an instance method cannot have null \'this\'.");
      il2cpp_codegen_raise_exception(ex,(MethodInfo *)0x0);
    }
  }
  else if (cVar1 == '\x05') {
    (__this->fields).invoke_impl = (intptr_t)&label_02d49c90;
    goto label_05315b86;
  }
  (__this->fields).invoke_impl = (__this->fields).method_ptr;
  (__this->fields).method_code = (intptr_t)(__this->fields).m_target;
label_05315b86:
  (__this->fields).extra_arg = (intptr_t)&label_02d49c00;
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga.YGMeasureFunc$$Invoke
// il2cpp: UnityEngine_Vector2_o Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc__Invoke (Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o* __this, intptr_t nodePtr, float width, int32_t widthMode, float height, int32_t heightMode, const MethodInfo* method);
// 0x5319d40

UnityEngine_Vector2_o
Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc__Invoke
          (Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o *__this,intptr_t nodePtr,float width,int32_t widthMode,
          float height,int32_t heightMode,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  
  UVar1.fields = (UnityEngine_Vector2_Fields)
                 (*(code *)(__this->fields).invoke_impl)((__this->fields).method_code);
  return (UnityEngine_Vector2_o)UVar1.fields;
}


// Gilzoide.FlexUi.Yoga.Yoga.YGMeasureFunc$$BeginInvoke
// il2cpp: System_IAsyncResult_o* Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc__BeginInvoke (Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o* __this, intptr_t nodePtr, float width, int32_t widthMode, float height, int32_t heightMode, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
// 0x5319d60

System_IAsyncResult_o *
Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc__BeginInvoke
          (Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o *__this,intptr_t nodePtr,float width,int32_t widthMode,
          float height,int32_t heightMode,System_AsyncCallback_o *callback,Il2CppObject *object,
          MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  int32_t local_70;
  float local_6c;
  int32_t local_68;
  float local_64;
  intptr_t local_60;
  Il2CppObject *local_58;
  Il2CppObject *local_50;
  Il2CppObject *local_48;
  Il2CppObject *local_40;
  Il2CppObject *local_38;
  undefined8 uStack_30;
  
  local_70 = heightMode;
  local_6c = height;
  local_68 = widthMode;
  local_64 = width;
  local_60 = nodePtr;
  if (Il2CppMethodInitialized_075427a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_MeasureMode);
    Il2CppMethodInitialized_075427a0 = '\x01';
  }
  local_38 = (Il2CppObject *)0x0;
  uStack_30 = 0;
  local_58 = il2cpp_vm_Object_Box(g_data_07556720,&local_60);
  local_50 = il2cpp_vm_Object_Box(g_data_07556740,&local_64);
  local_48 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_MeasureMode,&local_68);
  local_40 = il2cpp_vm_Object_Box(g_data_07556740,&local_6c);
  local_38 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_MeasureMode,&local_70);
  pSVar1 = (System_IAsyncResult_o *)il2cpp_runtime_helper_031591c0(__this,&local_58,callback,object);
  return pSVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga.YGMeasureFunc$$EndInvoke
// il2cpp: UnityEngine_Vector2_o Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc__EndInvoke (Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
// 0x5319e50

UnityEngine_Vector2_o
Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc__EndInvoke
          (Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o *__this,System_IAsyncResult_o *result,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Vector2_Fields *pUVar1;
  
  obj = (Il2CppObject *)il2cpp_runtime_helper_03159300(result,0);
  if (obj == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar1 = il2cpp_vm_Object_Unbox(obj);
  return (UnityEngine_Vector2_o)*pUVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGConfigNew
// il2cpp: intptr_t Gilzoide_FlexUi_Yoga_Yoga__YGConfigNew (const MethodInfo* method);
// 0x5316a10

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
  
  if (g_data_075425c0 == (code *)0x0) {
    local_30 = "flex-ui";
    local_28 = 7;
    local_20 = "FlexUi_ConfigNew";
    local_18 = 0x10;
    local_10 = 0x200000000;
    local_8 = 0;
    local_4 = 0;
    g_data_075425c0 = (code *)il2cpp_runtime_helper_03123230(&local_30);
    iVar1 = (*g_data_075425c0)();
    return iVar1;
  }
  iVar1 = (*g_data_075425c0)();
  return iVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGConfigFree
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGConfigFree (intptr_t config, const MethodInfo* method);
// 0x5316ba0

void Gilzoide_FlexUi_Yoga_Yoga__YGConfigFree(intptr_t config,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_075425c8 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_ConfigFree";
    local_20 = 0x11;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_075425c8 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  (*g_data_075425c8)(config);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGConfigGetDefault
// il2cpp: intptr_t Gilzoide_FlexUi_Yoga_Yoga__YGConfigGetDefault (const MethodInfo* method);
// 0x5316990

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
  
  if (g_data_075425d0 == (code *)0x0) {
    local_30 = "flex-ui";
    local_28 = 7;
    local_20 = "FlexUi_ConfigGetDefault";
    local_18 = 0x17;
    local_10 = 0x200000000;
    local_8 = 0;
    local_4 = 0;
    g_data_075425d0 = (code *)il2cpp_runtime_helper_03123230(&local_30);
    iVar1 = (*g_data_075425d0)();
    return iVar1;
  }
  iVar1 = (*g_data_075425d0)();
  return iVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGConfigSetPointScaleFactor
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGConfigSetPointScaleFactor (intptr_t config, float enabled, const MethodInfo* method);
// 0x5316c20

void Gilzoide_FlexUi_Yoga_Yoga__YGConfigSetPointScaleFactor(intptr_t config,float enabled,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_075425d8 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_ConfigSetPointScaleFactor";
    local_20 = 0x20;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_075425d8 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  (*g_data_075425d8)(enabled,config);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGConfigSetErrata
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGConfigSetErrata (intptr_t config, int32_t errata, const MethodInfo* method);
// 0x5316cb0

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
  auVar1._0_8_ = g_data_075425e0;
  if (g_data_075425e0 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_ConfigSetErrata";
    uStack_28 = 0x16;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_075425e0 = auVar1._0_8_;
  (*g_data_075425e0)(config,errata,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGConfigSetExperimentalFeatureEnabled
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGConfigSetExperimentalFeatureEnabled (intptr_t config, int32_t feature, bool enabled, const MethodInfo* method);
// 0x5316d30

void Gilzoide_FlexUi_Yoga_Yoga__YGConfigSetExperimentalFeatureEnabled
               (intptr_t config,int32_t feature,bool enabled,MethodInfo *method)

{
  char *pcStack_48;
  undefined8 uStack_40;
  char *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  
  if (g_data_075425e8 == (code *)0x0) {
    pcStack_48 = "flex-ui";
    uStack_40 = 7;
    pcStack_38 = "FlexUi_ConfigSetExperimentalFeatureEnabled";
    uStack_30 = 0x2a;
    uStack_28 = 0x200000000;
    uStack_20 = 0x10;
    uStack_1c = 0;
    g_data_075425e8 = (code *)il2cpp_runtime_helper_03123230(&pcStack_48);
  }
  (*g_data_075425e8)(config,feature,enabled);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeNew
// il2cpp: intptr_t Gilzoide_FlexUi_Yoga_Yoga__YGNodeNew (const MethodInfo* method);
// 0x5316dd0

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
  
  if (g_data_075425f0 == (code *)0x0) {
    local_30 = "flex-ui";
    local_28 = 7;
    local_20 = "FlexUi_NodeNew";
    local_18 = 0xe;
    local_10 = 0x200000000;
    local_8 = 0;
    local_4 = 0;
    g_data_075425f0 = (code *)il2cpp_runtime_helper_03123230(&local_30);
    iVar1 = (*g_data_075425f0)();
    return iVar1;
  }
  iVar1 = (*g_data_075425f0)();
  return iVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeFree
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeFree (intptr_t node, const MethodInfo* method);
// 0x5317f90

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeFree(intptr_t node,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_075425f8 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeFree";
    local_20 = 0xf;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_075425f8 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  (*g_data_075425f8)(node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeCalculateLayout
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeCalculateLayout (intptr_t node, float availableWidth, float availableHeight, int32_t ownerDirection, const MethodInfo* method);
// 0x5318010

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
  auVar1._0_8_ = g_data_07542600;
  if (g_data_07542600 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeCalculateLayout";
    uStack_28 = 0x1a;
    uStack_20 = 0x200000000;
    uStack_18 = 0x14;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_07542600 = auVar1._0_8_;
  (*g_data_07542600)(availableWidth,availableHeight,node,ownerDirection,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeInsertChild
// il2cpp: System_String_o* Gilzoide_FlexUi_Yoga_Yoga__YGNodeInsertChild (intptr_t node, intptr_t child, int32_t index, const MethodInfo* method);
// 0x53180b0

System_String_o *
Gilzoide_FlexUi_Yoga_Yoga__YGNodeInsertChild(intptr_t node,intptr_t child,int32_t index,MethodInfo *method)

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
  
  if (g_data_07542608 == (code *)0x0) {
    pcStack_48 = "flex-ui";
    uStack_40 = 7;
    pcStack_38 = "FlexUi_NodeInsertChild";
    uStack_30 = 0x16;
    uStack_28 = 0x200000000;
    uStack_20 = 0x14;
    uStack_1c = 0;
    g_data_07542608 = (code *)il2cpp_runtime_helper_03123230(&pcStack_48);
  }
  uVar1 = (*g_data_07542608)(node,child,index);
  pSVar2 = (System_String_o *)il2cpp_runtime_helper_03123770(uVar1);
  il2cpp_runtime_helper_03123680(uVar1);
  return pSVar2;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeRemoveChild
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeRemoveChild (intptr_t node, intptr_t child, const MethodInfo* method);
// 0x5318160

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
  auVar1._0_8_ = g_data_07542610;
  if (g_data_07542610 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeRemoveChild";
    uStack_28 = 0x16;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_07542610 = auVar1._0_8_;
  (*g_data_07542610)(node,child,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeRemoveAllChildren
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeRemoveAllChildren (intptr_t node, const MethodInfo* method);
// 0x53181e0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeRemoveAllChildren(intptr_t node,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_07542618 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeRemoveAllChildren";
    local_20 = 0x1c;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_07542618 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  (*g_data_07542618)(node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeGetChildCount
// il2cpp: int32_t Gilzoide_FlexUi_Yoga_Yoga__YGNodeGetChildCount (intptr_t node, const MethodInfo* method);
// 0x5318260

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
  
  if (g_data_07542620 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeGetChildCount";
    local_20 = 0x18;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_07542620 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  iVar1 = (*g_data_07542620)(node);
  return iVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeSetConfig
// il2cpp: System_String_o* Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetConfig (intptr_t node, intptr_t config, const MethodInfo* method);
// 0x53182e0

System_String_o * Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetConfig(intptr_t node,intptr_t config,MethodInfo *method)

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
  auVar3._0_8_ = g_data_07542628;
  if (g_data_07542628 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeSetConfig";
    uStack_28 = 0x14;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar3 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_07542628 = auVar3._0_8_;
  uVar1 = (*g_data_07542628)(node,config,auVar3._8_8_);
  pSVar2 = (System_String_o *)il2cpp_runtime_helper_03123770(uVar1);
  il2cpp_runtime_helper_03123680(uVar1);
  return pSVar2;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeSetContext
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetContext (intptr_t node, intptr_t context, const MethodInfo* method);
// 0x5318380

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
  auVar1._0_8_ = g_data_07542630;
  if (g_data_07542630 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeSetContext";
    uStack_28 = 0x15;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_07542630 = auVar1._0_8_;
  (*g_data_07542630)(node,context,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeGetContext
// il2cpp: intptr_t Gilzoide_FlexUi_Yoga_Yoga__YGNodeGetContext (intptr_t node, const MethodInfo* method);
// 0x5318400

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
  
  if (g_data_07542638 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeGetContext";
    local_20 = 0x15;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_07542638 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  iVar1 = (*g_data_07542638)(node);
  return iVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeSetMeasureFunc
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetMeasureFunc (intptr_t node, intptr_t measureFunc, const MethodInfo* method);
// 0x5318570

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetMeasureFunc(intptr_t node,intptr_t measureFunc,MethodInfo *method)

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
  auVar1._0_8_ = g_data_07542640;
  if (g_data_07542640 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeSetMeasureFunc";
    uStack_28 = 0x19;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_07542640 = auVar1._0_8_;
  (*g_data_07542640)(node,measureFunc,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeHasMeasureFunc
// il2cpp: bool Gilzoide_FlexUi_Yoga_Yoga__YGNodeHasMeasureFunc (intptr_t node, const MethodInfo* method);
// 0x53185f0

bool Gilzoide_FlexUi_Yoga_Yoga__YGNodeHasMeasureFunc(intptr_t node,MethodInfo *method)

{
  char cVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_07542648 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeHasMeasureFunc";
    local_20 = 0x19;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_07542648 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  cVar1 = (*g_data_07542648)(node);
  return cVar1 != '\0';
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeSetDirty
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetDirty (intptr_t node, const MethodInfo* method);
// 0x5318670

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetDirty(intptr_t node,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_07542650 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeSetDirty";
    local_20 = 0x13;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_07542650 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  (*g_data_07542650)(node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeSetMeasureFunc
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetMeasureFunc (intptr_t node, Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o* measureFunc, const MethodInfo* method);
// 0x5318490

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetMeasureFunc_5218490
               (intptr_t node,Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o *measureFunc,MethodInfo *method)

{
  intptr_t iVar1;
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  if (Il2CppMethodInitialized_07542658 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate_Yoga_YGMeasureFunc
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Runtime_InteropServices_Marshal);
    Il2CppMethodInitialized_07542658 = '\x01';
  }
  if ((TypeInfo_System_Runtime_InteropServices_Marshal->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Runtime_InteropServices_Marshal);
  }
  iVar1 = System_Runtime_InteropServices_Marshal__GetFunctionPointerForDelegate_object_
                    ((Il2CppObject *)measureFunc,
                     (MethodInfo_35842A0 *)
                     MethodInfo_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate_Yoga_YGMeasureFunc
                    );
  if (g_data_07542640 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeSetMeasureFunc";
    uStack_28 = 0x19;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    g_data_07542640 = (code *)il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  (*g_data_07542640)(node,iVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeLayoutGetLeft
// il2cpp: float Gilzoide_FlexUi_Yoga_Yoga__YGNodeLayoutGetLeft (intptr_t node, const MethodInfo* method);
// 0x53186f0

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
  
  if (g_data_07542660 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeLayoutGetLeft";
    local_20 = 0x18;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_07542660 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  fVar1 = (float)(*g_data_07542660)(node);
  return fVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeLayoutGetTop
// il2cpp: float Gilzoide_FlexUi_Yoga_Yoga__YGNodeLayoutGetTop (intptr_t node, const MethodInfo* method);
// 0x5318770

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
  
  if (g_data_07542668 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeLayoutGetTop";
    local_20 = 0x17;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_07542668 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  fVar1 = (float)(*g_data_07542668)(node);
  return fVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeLayoutGetWidth
// il2cpp: float Gilzoide_FlexUi_Yoga_Yoga__YGNodeLayoutGetWidth (intptr_t node, const MethodInfo* method);
// 0x53187f0

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
  
  if (g_data_07542670 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeLayoutGetWidth";
    local_20 = 0x19;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_07542670 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  fVar1 = (float)(*g_data_07542670)(node);
  return fVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeLayoutGetHeight
// il2cpp: float Gilzoide_FlexUi_Yoga_Yoga__YGNodeLayoutGetHeight (intptr_t node, const MethodInfo* method);
// 0x5318870

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
  
  if (g_data_07542678 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeLayoutGetHeight";
    local_20 = 0x1a;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_07542678 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  fVar1 = (float)(*g_data_07542678)(node);
  return fVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetDirection
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetDirection (intptr_t node, int32_t direction, const MethodInfo* method);
// 0x53188f0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetDirection(intptr_t node,int32_t direction,MethodInfo *method)

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
  auVar1._0_8_ = g_data_07542680;
  if (g_data_07542680 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetDirection";
    uStack_28 = 0x1c;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_07542680 = auVar1._0_8_;
  (*g_data_07542680)(node,direction,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexDirection
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexDirection (intptr_t node, int32_t flexDirection, const MethodInfo* method);
// 0x5318970

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
  auVar1._0_8_ = g_data_07542688;
  if (g_data_07542688 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetFlexDirection";
    uStack_28 = 0x20;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_07542688 = auVar1._0_8_;
  (*g_data_07542688)(node,flexDirection,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetJustifyContent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetJustifyContent (intptr_t node, int32_t justifyContent, const MethodInfo* method);
// 0x53189f0

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
  auVar1._0_8_ = g_data_07542690;
  if (g_data_07542690 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetJustifyContent";
    uStack_28 = 0x21;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_07542690 = auVar1._0_8_;
  (*g_data_07542690)(node,justifyContent,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetAlignContent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAlignContent (intptr_t node, int32_t alignContent, const MethodInfo* method);
// 0x5318a70

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
  auVar1._0_8_ = g_data_07542698;
  if (g_data_07542698 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetAlignContent";
    uStack_28 = 0x1f;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_07542698 = auVar1._0_8_;
  (*g_data_07542698)(node,alignContent,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetAlignItems
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAlignItems (intptr_t node, int32_t alignItems, const MethodInfo* method);
// 0x5318af0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAlignItems(intptr_t node,int32_t alignItems,MethodInfo *method)

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
  auVar1._0_8_ = g_data_075426a0;
  if (g_data_075426a0 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetAlignItems";
    uStack_28 = 0x1d;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_075426a0 = auVar1._0_8_;
  (*g_data_075426a0)(node,alignItems,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetAlignSelf
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAlignSelf (intptr_t node, int32_t alignSelf, const MethodInfo* method);
// 0x5318b70

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAlignSelf(intptr_t node,int32_t alignSelf,MethodInfo *method)

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
  auVar1._0_8_ = g_data_075426a8;
  if (g_data_075426a8 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetAlignSelf";
    uStack_28 = 0x1c;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_075426a8 = auVar1._0_8_;
  (*g_data_075426a8)(node,alignSelf,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetPositionType
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPositionType (intptr_t node, int32_t positionType, const MethodInfo* method);
// 0x5318bf0

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
  auVar1._0_8_ = g_data_075426b0;
  if (g_data_075426b0 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetPositionType";
    uStack_28 = 0x1f;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_075426b0 = auVar1._0_8_;
  (*g_data_075426b0)(node,positionType,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexWrap
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexWrap (intptr_t node, int32_t flexWrap, const MethodInfo* method);
// 0x5318c70

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexWrap(intptr_t node,int32_t flexWrap,MethodInfo *method)

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
  auVar1._0_8_ = g_data_075426b8;
  if (g_data_075426b8 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetFlexWrap";
    uStack_28 = 0x1b;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_075426b8 = auVar1._0_8_;
  (*g_data_075426b8)(node,flexWrap,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexGrow
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexGrow (intptr_t node, float flexGrow, const MethodInfo* method);
// 0x5318cf0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexGrow(intptr_t node,float flexGrow,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_075426c0 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetFlexGrow";
    local_20 = 0x1b;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_075426c0 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  (*g_data_075426c0)(flexGrow,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexShrink
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexShrink (intptr_t node, float flexShrink, const MethodInfo* method);
// 0x5318d80

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexShrink(intptr_t node,float flexShrink,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_075426c8 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetFlexShrink";
    local_20 = 0x1d;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_075426c8 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  (*g_data_075426c8)(flexShrink,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexBasis
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexBasis (intptr_t node, float flexBasis, const MethodInfo* method);
// 0x5318e10

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexBasis(intptr_t node,float flexBasis,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_075426d0 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetFlexBasis";
    local_20 = 0x1c;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_075426d0 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  (*g_data_075426d0)(flexBasis,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexBasisPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexBasisPercent (intptr_t node, float flexBasis, const MethodInfo* method);
// 0x5318ea0

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
  
  if (g_data_075426d8 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetFlexBasisPercent";
    local_20 = 0x23;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_075426d8 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  (*g_data_075426d8)(flexBasis,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexBasisAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexBasisAuto (intptr_t node, const MethodInfo* method);
// 0x5318f30

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexBasisAuto(intptr_t node,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_075426e0 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetFlexBasisAuto";
    local_20 = 0x20;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_075426e0 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  (*g_data_075426e0)(node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetPosition
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPosition (intptr_t node, int32_t edge, float position, const MethodInfo* method);
// 0x5318fb0

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
  auVar1._0_8_ = g_data_075426e8;
  if (g_data_075426e8 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetPosition";
    uStack_28 = 0x1b;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_075426e8 = auVar1._0_8_;
  (*g_data_075426e8)(position,node,edge,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetPositionPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPositionPercent (intptr_t node, int32_t edge, float position, const MethodInfo* method);
// 0x5319040

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
  auVar1._0_8_ = g_data_075426f0;
  if (g_data_075426f0 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetPositionPercent";
    uStack_28 = 0x22;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_075426f0 = auVar1._0_8_;
  (*g_data_075426f0)(position,node,edge,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMargin
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMargin (intptr_t node, int32_t edge, float margin, const MethodInfo* method);
// 0x53190d0

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
  auVar1._0_8_ = g_data_075426f8;
  if (g_data_075426f8 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetMargin";
    uStack_28 = 0x19;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_075426f8 = auVar1._0_8_;
  (*g_data_075426f8)(margin,node,edge,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMarginPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMarginPercent (intptr_t node, int32_t edge, float margin, const MethodInfo* method);
// 0x5319160

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
  auVar1._0_8_ = g_data_07542700;
  if (g_data_07542700 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetMarginPercent";
    uStack_28 = 0x20;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_07542700 = auVar1._0_8_;
  (*g_data_07542700)(margin,node,edge,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMarginAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMarginAuto (intptr_t node, int32_t edge, const MethodInfo* method);
// 0x53191f0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMarginAuto(intptr_t node,int32_t edge,MethodInfo *method)

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
  auVar1._0_8_ = g_data_07542708;
  if (g_data_07542708 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetMarginAuto";
    uStack_28 = 0x1d;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_07542708 = auVar1._0_8_;
  (*g_data_07542708)(node,edge,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetPadding
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPadding (intptr_t node, int32_t edge, float padding, const MethodInfo* method);
// 0x5319270

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
  auVar1._0_8_ = g_data_07542710;
  if (g_data_07542710 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetPadding";
    uStack_28 = 0x1a;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_07542710 = auVar1._0_8_;
  (*g_data_07542710)(padding,node,edge,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetPaddingPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPaddingPercent (intptr_t node, int32_t edge, float padding, const MethodInfo* method);
// 0x5319300

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
  auVar1._0_8_ = g_data_07542718;
  if (g_data_07542718 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetPaddingPercent";
    uStack_28 = 0x21;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_07542718 = auVar1._0_8_;
  (*g_data_07542718)(padding,node,edge,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetGap
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetGap (intptr_t node, int32_t gutter, float gapLength, const MethodInfo* method);
// 0x5319390

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
  auVar1._0_8_ = g_data_07542720;
  if (g_data_07542720 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetGap";
    uStack_28 = 0x16;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar1 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_07542720 = auVar1._0_8_;
  (*g_data_07542720)(gapLength,node,gutter,auVar1._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetWidth (intptr_t node, float width, const MethodInfo* method);
// 0x5319420

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetWidth(intptr_t node,float width,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_07542728 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetWidth";
    local_20 = 0x18;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_07542728 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  (*g_data_07542728)(width,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetWidthPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetWidthPercent (intptr_t node, float width, const MethodInfo* method);
// 0x53194b0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetWidthPercent(intptr_t node,float width,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_07542730 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetWidthPercent";
    local_20 = 0x1f;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_07542730 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  (*g_data_07542730)(width,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetWidthAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetWidthAuto (intptr_t node, const MethodInfo* method);
// 0x5319540

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetWidthAuto(intptr_t node,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_07542738 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetWidthAuto";
    local_20 = 0x1c;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_07542738 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  (*g_data_07542738)(node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetHeight (intptr_t node, float height, const MethodInfo* method);
// 0x53195c0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetHeight(intptr_t node,float height,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_07542740 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetHeight";
    local_20 = 0x19;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_07542740 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  (*g_data_07542740)(height,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetHeightPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetHeightPercent (intptr_t node, float height, const MethodInfo* method);
// 0x5319650

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetHeightPercent(intptr_t node,float height,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_07542748 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetHeightPercent";
    local_20 = 0x20;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_07542748 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  (*g_data_07542748)(height,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetHeightAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetHeightAuto (intptr_t node, const MethodInfo* method);
// 0x53196e0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetHeightAuto(intptr_t node,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_07542750 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetHeightAuto";
    local_20 = 0x1d;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_07542750 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  (*g_data_07542750)(node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMinWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinWidth (intptr_t node, float minWidth, const MethodInfo* method);
// 0x5319760

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinWidth(intptr_t node,float minWidth,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_07542758 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMinWidth";
    local_20 = 0x1b;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_07542758 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  (*g_data_07542758)(minWidth,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMinWidthPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinWidthPercent (intptr_t node, float minWidth, const MethodInfo* method);
// 0x53197f0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinWidthPercent(intptr_t node,float minWidth,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_07542760 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMinWidthPercent";
    local_20 = 0x22;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_07542760 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  (*g_data_07542760)(minWidth,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMinHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinHeight (intptr_t node, float minHeight, const MethodInfo* method);
// 0x5319880

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinHeight(intptr_t node,float minHeight,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_07542768 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMinHeight";
    local_20 = 0x1c;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_07542768 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  (*g_data_07542768)(minHeight,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMinHeightPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinHeightPercent (intptr_t node, float minHeight, const MethodInfo* method);
// 0x5319910

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
  
  if (g_data_07542770 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMinHeightPercent";
    local_20 = 0x23;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_07542770 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  (*g_data_07542770)(minHeight,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMaxWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxWidth (intptr_t node, float maxWidth, const MethodInfo* method);
// 0x53199a0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxWidth(intptr_t node,float maxWidth,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_07542778 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMaxWidth";
    local_20 = 0x1b;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_07542778 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  (*g_data_07542778)(maxWidth,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMaxWidthPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxWidthPercent (intptr_t node, float maxWidth, const MethodInfo* method);
// 0x5319a30

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxWidthPercent(intptr_t node,float maxWidth,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_07542780 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMaxWidthPercent";
    local_20 = 0x22;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_07542780 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  (*g_data_07542780)(maxWidth,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMaxHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxHeight (intptr_t node, float maxHeight, const MethodInfo* method);
// 0x5319ac0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxHeight(intptr_t node,float maxHeight,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_07542788 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMaxHeight";
    local_20 = 0x1c;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_07542788 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  (*g_data_07542788)(maxHeight,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMaxHeightPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxHeightPercent (intptr_t node, float maxHeight, const MethodInfo* method);
// 0x5319b50

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
  
  if (g_data_07542790 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMaxHeightPercent";
    local_20 = 0x23;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_07542790 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  (*g_data_07542790)(maxHeight,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetAspectRatio
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAspectRatio (intptr_t node, float aspectRatio, const MethodInfo* method);
// 0x5319be0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAspectRatio(intptr_t node,float aspectRatio,MethodInfo *method)

{
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_07542798 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetAspectRatio";
    local_20 = 0x1e;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_07542798 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  (*g_data_07542798)(aspectRatio,node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$.ctor
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga___ctor (Gilzoide_FlexUi_Yoga_Yoga_o* __this, const MethodInfo* method);
// 0x5319d30

void Gilzoide_FlexUi_Yoga_Yoga___ctor(Gilzoide_FlexUi_Yoga_Yoga_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


