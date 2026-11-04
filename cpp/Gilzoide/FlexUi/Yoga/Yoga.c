// Type: Gilzoide.FlexUi.Yoga.Yoga
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gilzoide.FlexUi/Gilzoide.FlexUi.Yoga/Yoga.cs
// Prior real C# source: none
// --------------------------------

// Gilzoide.FlexUi.Yoga.Yoga.YGMeasureFunc$$.ctor
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc___ctor (Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
// 0x18187e380

void Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc___ctor
               (Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o *__this,Il2CppObject *object,intptr_t method,
               MethodInfo *methodInfo)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  Il2CppObject *ex;
  
  (__this->fields).method_ptr = *(intptr_t *)(method + 8);
  (__this->fields).method = method;
  (__this->fields).m_target = object;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_target,object);
  cVar1 = *(char *)(method + 0x52);
  (__this->fields).method_code = (intptr_t)__this;
  cVar2 = il2cpp_runtime_helper_1804161b0();
  if (cVar2 == '\0') {
    if (object == (Il2CppObject *)0x0) {
      ex = il2cpp_codegen_get_argument_exception
                     ((char *)0x0,"Delegate to an instance method cannot have null \'this\'.");
      il2cpp_codegen_raise_exception(ex,(MethodInfo *)0x0);
    }
  }
  else if (cVar1 == '\x05') {
    pcVar3 = il2cpp_runtime_helper_18022ef50;
    goto label_18187e3df;
  }
  (__this->fields).method_code = (intptr_t)(__this->fields).m_target;
  pcVar3 = (code *)(__this->fields).method_ptr;
label_18187e3df:
  (__this->fields).invoke_impl = (intptr_t)pcVar3;
  (__this->fields).extra_arg = (intptr_t)il2cpp_runtime_helper_18022eea0;
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga.YGMeasureFunc$$Invoke
// il2cpp: UnityEngine_Vector2_o Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc__Invoke (Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o* __this, intptr_t nodePtr, float width, int32_t widthMode, float height, int32_t heightMode, const MethodInfo* method);
// 0x18187e360

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
// 0x18187e280

System_IAsyncResult_o *
Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc__BeginInvoke
          (Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o *__this,intptr_t nodePtr,float width,int32_t widthMode,
          float height,int32_t heightMode,System_AsyncCallback_o *callback,Il2CppObject *object,
          MethodInfo *method)

{
  System_IAsyncResult_o *pSVar1;
  intptr_t local_res10;
  float local_res18 [2];
  int32_t local_res20 [2];
  Il2CppObject *local_38;
  Il2CppObject *pIStack_30;
  Il2CppObject *local_28;
  Il2CppObject *pIStack_20;
  Il2CppObject *local_18;
  undefined8 uStack_10;
  
  local_res10 = nodePtr;
  local_res18[0] = width;
  local_res20[0] = widthMode;
  if (Il2CppMethodInitialized_184341e60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_MeasureMode);
    Il2CppMethodInitialized_184341e60 = '\x01';
  }
  local_38 = (Il2CppObject *)0x0;
  pIStack_30 = (Il2CppObject *)0x0;
  local_28 = (Il2CppObject *)0x0;
  pIStack_20 = (Il2CppObject *)0x0;
  local_18 = (Il2CppObject *)0x0;
  uStack_10 = 0;
  local_38 = il2cpp_value_box(g_data_184354e18,&local_res10);
  pIStack_30 = il2cpp_value_box(g_data_184354e38,local_res18);
  local_28 = il2cpp_value_box((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_MeasureMode,local_res20);
  pIStack_20 = il2cpp_value_box(g_data_184354e38,&height);
  local_18 = il2cpp_value_box((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_MeasureMode,&heightMode);
  pSVar1 = (System_IAsyncResult_o *)il2cpp_runtime_helper_18042b200(__this,&local_38,callback,object);
  return pSVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga.YGMeasureFunc$$EndInvoke
// il2cpp: UnityEngine_Vector2_o Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc__EndInvoke (Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
// 0x18052f5a0

UnityEngine_Vector2_o
Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc__EndInvoke
          (Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o *__this,System_IAsyncResult_o *result,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Vector2_Fields *pUVar1;
  
  obj = (Il2CppObject *)il2cpp_runtime_helper_18042b2c0(result,0);
  if (obj != (Il2CppObject *)0x0) {
    pUVar1 = il2cpp_object_unbox(obj);
    return (UnityEngine_Vector2_o)*pUVar1;
  }
  ThrowNullReferenceException();
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGConfigNew
// il2cpp: intptr_t Gilzoide_FlexUi_Yoga_Yoga__YGConfigNew (const MethodInfo* method);
// 0x181880ba0

intptr_t Gilzoide_FlexUi_Yoga_Yoga__YGConfigNew(MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_14;
  undefined1 local_c;
  
  if (g_data_184341c80 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x10;
    local_28 = "FlexUi_ConfigNew";
    local_18 = 0;
    local_c = 0;
    local_14 = 2;
    g_data_184341c80 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  iVar1 = (*g_data_184341c80)();
  return iVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGConfigFree
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGConfigFree (intptr_t config, const MethodInfo* method);
// 0x181880b20

void Gilzoide_FlexUi_Yoga_Yoga__YGConfigFree(intptr_t config,MethodInfo *method)

{
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_184341c88 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x11;
    local_28 = "FlexUi_ConfigFree";
    local_18 = 0;
    local_14 = 2;
    local_10 = 8;
    local_c = 0;
    g_data_184341c88 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  (*g_data_184341c88)(config);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGConfigGetDefault
// il2cpp: intptr_t Gilzoide_FlexUi_Yoga_Yoga__YGConfigGetDefault (const MethodInfo* method);
// 0x18187df70

intptr_t Gilzoide_FlexUi_Yoga_Yoga__YGConfigGetDefault(MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_14;
  undefined1 local_c;
  
  if (g_data_184341c90 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x17;
    local_28 = "FlexUi_ConfigGetDefault";
    local_18 = 0;
    local_c = 0;
    local_14 = 2;
    g_data_184341c90 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  iVar1 = (*g_data_184341c90)();
  return iVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGConfigSetPointScaleFactor
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGConfigSetPointScaleFactor (intptr_t config, float enabled, const MethodInfo* method);
// 0x181880d40

void Gilzoide_FlexUi_Yoga_Yoga__YGConfigSetPointScaleFactor(intptr_t config,float enabled,MethodInfo *method)

{
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  if (g_data_184341c98 == (code *)0x0) {
    local_40 = 7;
    local_48 = L"flex-ui";
    local_30 = 0x20;
    local_38 = "FlexUi_ConfigSetPointScaleFactor";
    local_28 = 0;
    local_24 = 2;
    local_20 = 0xc;
    local_1c = 0;
    g_data_184341c98 = (code *)il2cpp_runtime_helper_18046cbe0(&local_48);
  }
  (*g_data_184341c98)(config,enabled);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGConfigSetErrata
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGConfigSetErrata (intptr_t config, int32_t errata, const MethodInfo* method);
// 0x181880c10

void Gilzoide_FlexUi_Yoga_Yoga__YGConfigSetErrata(intptr_t config,int32_t errata,MethodInfo *method)

{
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_184341ca0 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x16;
    local_28 = "FlexUi_ConfigSetErrata";
    local_18 = 0;
    local_14 = 2;
    local_10 = 0xc;
    local_c = 0;
    g_data_184341ca0 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  (*g_data_184341ca0)(config,errata);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGConfigSetExperimentalFeatureEnabled
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGConfigSetExperimentalFeatureEnabled (intptr_t config, int32_t feature, bool enabled, const MethodInfo* method);
// 0x181880ca0

void Gilzoide_FlexUi_Yoga_Yoga__YGConfigSetExperimentalFeatureEnabled
               (intptr_t config,int32_t feature,bool enabled,MethodInfo *method)

{
  undefined4 in_register_00000014;
  undefined7 in_register_00000081;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_184341ca8 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x2a;
    local_28 = "FlexUi_ConfigSetExperimentalFeatureEnabled";
    local_18 = 0;
    local_14 = 2;
    local_10 = 0x10;
    local_c = 0;
    g_data_184341ca8 =
         (code *)il2cpp_runtime_helper_18046cbe0(&local_38,CONCAT44(in_register_00000014,feature),
                                     CONCAT71(in_register_00000081,enabled));
  }
  (*g_data_184341ca8)(config,feature,enabled);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeNew
// il2cpp: intptr_t Gilzoide_FlexUi_Yoga_Yoga__YGNodeNew (const MethodInfo* method);
// 0x181881330

intptr_t Gilzoide_FlexUi_Yoga_Yoga__YGNodeNew(MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_14;
  undefined1 local_c;
  
  if (g_data_184341cb0 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0xe;
    local_28 = "FlexUi_NodeNew";
    local_18 = 0;
    local_c = 0;
    local_14 = 2;
    g_data_184341cb0 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  iVar1 = (*g_data_184341cb0)();
  return iVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeFree
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeFree (intptr_t node, const MethodInfo* method);
// 0x181880e80

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeFree(intptr_t node,MethodInfo *method)

{
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_184341cb8 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0xf;
    local_28 = "FlexUi_NodeFree";
    local_18 = 0;
    local_14 = 2;
    local_10 = 8;
    local_c = 0;
    g_data_184341cb8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  (*g_data_184341cb8)(node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeCalculateLayout
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeCalculateLayout (intptr_t node, float availableWidth, float availableHeight, int32_t ownerDirection, const MethodInfo* method);
// 0x181880dd0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeCalculateLayout
               (intptr_t node,float availableWidth,float availableHeight,int32_t ownerDirection,
               MethodInfo *method)

{
  wchar_t *local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  
  if (g_data_184341cc0 == (code *)0x0) {
    local_50 = 7;
    local_58 = L"flex-ui";
    local_40 = 0x1a;
    local_48 = "FlexUi_NodeCalculateLayout";
    local_38 = 0;
    local_34 = 2;
    local_30 = 0x14;
    local_2c = 0;
    g_data_184341cc0 = (code *)il2cpp_runtime_helper_18046cbe0(&local_58);
  }
  (*g_data_184341cc0)(node,availableWidth,availableHeight,ownerDirection);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeInsertChild
// il2cpp: System_String_o* Gilzoide_FlexUi_Yoga_Yoga__YGNodeInsertChild (intptr_t node, intptr_t child, int32_t index, const MethodInfo* method);
// 0x181881080

System_String_o *
Gilzoide_FlexUi_Yoga_Yoga__YGNodeInsertChild(intptr_t node,intptr_t child,int32_t index,MethodInfo *method)

{
  intptr_t ptr;
  System_String_o *pSVar1;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_184341cc8 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x16;
    local_28 = "FlexUi_NodeInsertChild";
    local_18 = 0;
    local_14 = 2;
    local_10 = 0x14;
    local_c = 0;
    g_data_184341cc8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  ptr = (*g_data_184341cc8)(node,child,index);
  pSVar1 = il2cpp_runtime_helper_180436850(ptr,(MethodInfo *)child);
  il2cpp_runtime_helper_18046bcf0(ptr);
  return pSVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeRemoveChild
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeRemoveChild (intptr_t node, intptr_t child, const MethodInfo* method);
// 0x181881420

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeRemoveChild(intptr_t node,intptr_t child,MethodInfo *method)

{
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_184341cd0 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x16;
    local_28 = "FlexUi_NodeRemoveChild";
    local_18 = 0;
    local_14 = 2;
    local_10 = 0x10;
    local_c = 0;
    g_data_184341cd0 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  (*g_data_184341cd0)(node,child);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeRemoveAllChildren
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeRemoveAllChildren (intptr_t node, const MethodInfo* method);
// 0x1818813a0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeRemoveAllChildren(intptr_t node,MethodInfo *method)

{
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_184341cd8 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x1c;
    local_28 = "FlexUi_NodeRemoveAllChildren";
    local_18 = 0;
    local_14 = 2;
    local_10 = 8;
    local_c = 0;
    g_data_184341cd8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  (*g_data_184341cd8)(node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeGetChildCount
// il2cpp: int32_t Gilzoide_FlexUi_Yoga_Yoga__YGNodeGetChildCount (intptr_t node, const MethodInfo* method);
// 0x181880f00

int32_t Gilzoide_FlexUi_Yoga_Yoga__YGNodeGetChildCount(intptr_t node,MethodInfo *method)

{
  int32_t iVar1;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_184341ce0 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x18;
    local_28 = "FlexUi_NodeGetChildCount";
    local_18 = 0;
    local_14 = 2;
    local_10 = 8;
    local_c = 0;
    g_data_184341ce0 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  iVar1 = (*g_data_184341ce0)(node);
  return iVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeSetConfig
// il2cpp: System_String_o* Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetConfig (intptr_t node, intptr_t config, const MethodInfo* method);
// 0x1818814b0

System_String_o * Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetConfig(intptr_t node,intptr_t config,MethodInfo *method)

{
  intptr_t ptr;
  System_String_o *pSVar1;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_184341ce8 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x14;
    local_28 = "FlexUi_NodeSetConfig";
    local_18 = 0;
    local_14 = 2;
    local_10 = 0x10;
    local_c = 0;
    g_data_184341ce8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  ptr = (*g_data_184341ce8)(node);
  pSVar1 = il2cpp_runtime_helper_180436850(ptr,(MethodInfo *)config);
  il2cpp_runtime_helper_18046bcf0(ptr);
  return pSVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeSetContext
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetContext (intptr_t node, intptr_t context, const MethodInfo* method);
// 0x181881550

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetContext(intptr_t node,intptr_t context,MethodInfo *method)

{
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_184341cf0 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x15;
    local_28 = "FlexUi_NodeSetContext";
    local_18 = 0;
    local_14 = 2;
    local_10 = 0x10;
    local_c = 0;
    g_data_184341cf0 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  (*g_data_184341cf0)(node,context);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeGetContext
// il2cpp: intptr_t Gilzoide_FlexUi_Yoga_Yoga__YGNodeGetContext (intptr_t node, const MethodInfo* method);
// 0x181880f80

intptr_t Gilzoide_FlexUi_Yoga_Yoga__YGNodeGetContext(intptr_t node,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_184341cf8 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x15;
    local_28 = "FlexUi_NodeGetContext";
    local_18 = 0;
    local_14 = 2;
    local_10 = 8;
    local_c = 0;
    g_data_184341cf8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  iVar1 = (*g_data_184341cf8)(node);
  return iVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeSetMeasureFunc
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetMeasureFunc (intptr_t node, intptr_t measureFunc, const MethodInfo* method);
// 0x1818816e0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetMeasureFunc(intptr_t node,intptr_t measureFunc,MethodInfo *method)

{
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_184341d00 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x19;
    local_28 = "FlexUi_NodeSetMeasureFunc";
    local_18 = 0;
    local_14 = 2;
    local_10 = 0x10;
    local_c = 0;
    g_data_184341d00 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  (*g_data_184341d00)(node,measureFunc);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeHasMeasureFunc
// il2cpp: bool Gilzoide_FlexUi_Yoga_Yoga__YGNodeHasMeasureFunc (intptr_t node, const MethodInfo* method);
// 0x181881000

bool Gilzoide_FlexUi_Yoga_Yoga__YGNodeHasMeasureFunc(intptr_t node,MethodInfo *method)

{
  char cVar1;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_184341d08 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x19;
    local_28 = "FlexUi_NodeHasMeasureFunc";
    local_18 = 0;
    local_14 = 2;
    local_10 = 8;
    local_c = 0;
    g_data_184341d08 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  cVar1 = (*g_data_184341d08)(node);
  return cVar1 != '\0';
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeSetDirty
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetDirty (intptr_t node, const MethodInfo* method);
// 0x1818815e0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetDirty(intptr_t node,MethodInfo *method)

{
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_184341d10 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x13;
    local_28 = "FlexUi_NodeSetDirty";
    local_18 = 0;
    local_14 = 2;
    local_10 = 8;
    local_c = 0;
    g_data_184341d10 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  (*g_data_184341d10)(node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeSetMeasureFunc
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetMeasureFunc (intptr_t node, Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o* measureFunc, const MethodInfo* method);
// 0x181881660

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetMeasureFunc_1881660
               (intptr_t node,Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o *measureFunc,MethodInfo *method)

{
  intptr_t measureFunc_00;
  
  if (Il2CppMethodInitialized_184341d18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate_Yoga_YGMeasureFunc
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Runtime_InteropServices_Marshal);
    Il2CppMethodInitialized_184341d18 = '\x01';
  }
  if ((TypeInfo_System_Runtime_InteropServices_Marshal->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Runtime_InteropServices_Marshal);
  }
  measureFunc_00 =
       System_Runtime_InteropServices_Marshal__GetFunctionPointerForDelegate_object_
                 ((Il2CppObject *)measureFunc,
                  (MethodInfo_72C3A0 *)
                  MethodInfo_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate_Yoga_YGMeasureFunc
                 );
  Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetMeasureFunc(node,measureFunc_00,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeLayoutGetLeft
// il2cpp: float Gilzoide_FlexUi_Yoga_Yoga__YGNodeLayoutGetLeft (intptr_t node, const MethodInfo* method);
// 0x1818811b0

float Gilzoide_FlexUi_Yoga_Yoga__YGNodeLayoutGetLeft(intptr_t node,MethodInfo *method)

{
  float fVar1;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_184341d20 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x18;
    local_28 = "FlexUi_NodeLayoutGetLeft";
    local_18 = 0;
    local_14 = 2;
    local_10 = 8;
    local_c = 0;
    g_data_184341d20 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  fVar1 = (float)(*g_data_184341d20)(node);
  return fVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeLayoutGetTop
// il2cpp: float Gilzoide_FlexUi_Yoga_Yoga__YGNodeLayoutGetTop (intptr_t node, const MethodInfo* method);
// 0x181881230

float Gilzoide_FlexUi_Yoga_Yoga__YGNodeLayoutGetTop(intptr_t node,MethodInfo *method)

{
  float fVar1;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_184341d28 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x17;
    local_28 = "FlexUi_NodeLayoutGetTop";
    local_18 = 0;
    local_14 = 2;
    local_10 = 8;
    local_c = 0;
    g_data_184341d28 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  fVar1 = (float)(*g_data_184341d28)(node);
  return fVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeLayoutGetWidth
// il2cpp: float Gilzoide_FlexUi_Yoga_Yoga__YGNodeLayoutGetWidth (intptr_t node, const MethodInfo* method);
// 0x1818812b0

float Gilzoide_FlexUi_Yoga_Yoga__YGNodeLayoutGetWidth(intptr_t node,MethodInfo *method)

{
  float fVar1;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_184341d30 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x19;
    local_28 = "FlexUi_NodeLayoutGetWidth";
    local_18 = 0;
    local_14 = 2;
    local_10 = 8;
    local_c = 0;
    g_data_184341d30 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  fVar1 = (float)(*g_data_184341d30)(node);
  return fVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeLayoutGetHeight
// il2cpp: float Gilzoide_FlexUi_Yoga_Yoga__YGNodeLayoutGetHeight (intptr_t node, const MethodInfo* method);
// 0x181881130

float Gilzoide_FlexUi_Yoga_Yoga__YGNodeLayoutGetHeight(intptr_t node,MethodInfo *method)

{
  float fVar1;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_184341d38 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x1a;
    local_28 = "FlexUi_NodeLayoutGetHeight";
    local_18 = 0;
    local_14 = 2;
    local_10 = 8;
    local_c = 0;
    g_data_184341d38 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  fVar1 = (float)(*g_data_184341d38)(node);
  return fVar1;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetDirection
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetDirection (intptr_t node, int32_t direction, const MethodInfo* method);
// 0x1818819b0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetDirection(intptr_t node,int32_t direction,MethodInfo *method)

{
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_184341d40 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x1c;
    local_28 = "FlexUi_NodeStyleSetDirection";
    local_18 = 0;
    local_14 = 2;
    local_10 = 0xc;
    local_c = 0;
    g_data_184341d40 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  (*g_data_184341d40)(node,direction);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexDirection
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexDirection (intptr_t node, int32_t flexDirection, const MethodInfo* method);
// 0x181881be0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexDirection
               (intptr_t node,int32_t flexDirection,MethodInfo *method)

{
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_184341d48 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x20;
    local_28 = "FlexUi_NodeStyleSetFlexDirection";
    local_18 = 0;
    local_14 = 2;
    local_10 = 0xc;
    local_c = 0;
    g_data_184341d48 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  (*g_data_184341d48)(node,flexDirection);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetJustifyContent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetJustifyContent (intptr_t node, int32_t justifyContent, const MethodInfo* method);
// 0x181882060

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetJustifyContent
               (intptr_t node,int32_t justifyContent,MethodInfo *method)

{
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_184341d50 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x21;
    local_28 = "FlexUi_NodeStyleSetJustifyContent";
    local_18 = 0;
    local_14 = 2;
    local_10 = 0xc;
    local_c = 0;
    g_data_184341d50 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  (*g_data_184341d50)(node,justifyContent);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetAlignContent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAlignContent (intptr_t node, int32_t alignContent, const MethodInfo* method);
// 0x181881770

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAlignContent
               (intptr_t node,int32_t alignContent,MethodInfo *method)

{
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_184341d58 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x1f;
    local_28 = "FlexUi_NodeStyleSetAlignContent";
    local_18 = 0;
    local_14 = 2;
    local_10 = 0xc;
    local_c = 0;
    g_data_184341d58 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  (*g_data_184341d58)(node,alignContent);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetAlignItems
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAlignItems (intptr_t node, int32_t alignItems, const MethodInfo* method);
// 0x181881800

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAlignItems(intptr_t node,int32_t alignItems,MethodInfo *method)

{
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_184341d60 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x1d;
    local_28 = "FlexUi_NodeStyleSetAlignItems";
    local_18 = 0;
    local_14 = 2;
    local_10 = 0xc;
    local_c = 0;
    g_data_184341d60 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  (*g_data_184341d60)(node,alignItems);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetAlignSelf
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAlignSelf (intptr_t node, int32_t alignSelf, const MethodInfo* method);
// 0x181881890

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAlignSelf(intptr_t node,int32_t alignSelf,MethodInfo *method)

{
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_184341d68 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x1c;
    local_28 = "FlexUi_NodeStyleSetAlignSelf";
    local_18 = 0;
    local_14 = 2;
    local_10 = 0xc;
    local_c = 0;
    g_data_184341d68 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  (*g_data_184341d68)(node,alignSelf);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetPositionType
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPositionType (intptr_t node, int32_t positionType, const MethodInfo* method);
// 0x181882920

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPositionType
               (intptr_t node,int32_t positionType,MethodInfo *method)

{
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_184341d70 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x1f;
    local_28 = "FlexUi_NodeStyleSetPositionType";
    local_18 = 0;
    local_14 = 2;
    local_10 = 0xc;
    local_c = 0;
    g_data_184341d70 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  (*g_data_184341d70)(node,positionType);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexWrap
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexWrap (intptr_t node, int32_t flexWrap, const MethodInfo* method);
// 0x181881d90

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexWrap(intptr_t node,int32_t flexWrap,MethodInfo *method)

{
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_184341d78 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x1b;
    local_28 = "FlexUi_NodeStyleSetFlexWrap";
    local_18 = 0;
    local_14 = 2;
    local_10 = 0xc;
    local_c = 0;
    g_data_184341d78 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  (*g_data_184341d78)(node,flexWrap);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexGrow
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexGrow (intptr_t node, float flexGrow, const MethodInfo* method);
// 0x181881c70

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexGrow(intptr_t node,float flexGrow,MethodInfo *method)

{
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  if (g_data_184341d80 == (code *)0x0) {
    local_40 = 7;
    local_48 = L"flex-ui";
    local_30 = 0x1b;
    local_38 = "FlexUi_NodeStyleSetFlexGrow";
    local_28 = 0;
    local_24 = 2;
    local_20 = 0xc;
    local_1c = 0;
    g_data_184341d80 = (code *)il2cpp_runtime_helper_18046cbe0(&local_48);
  }
  (*g_data_184341d80)(node,flexGrow);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexShrink
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexShrink (intptr_t node, float flexShrink, const MethodInfo* method);
// 0x181881d00

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexShrink(intptr_t node,float flexShrink,MethodInfo *method)

{
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  if (g_data_184341d88 == (code *)0x0) {
    local_40 = 7;
    local_48 = L"flex-ui";
    local_30 = 0x1d;
    local_38 = "FlexUi_NodeStyleSetFlexShrink";
    local_28 = 0;
    local_24 = 2;
    local_20 = 0xc;
    local_1c = 0;
    g_data_184341d88 = (code *)il2cpp_runtime_helper_18046cbe0(&local_48);
  }
  (*g_data_184341d88)(node,flexShrink);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexBasis
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexBasis (intptr_t node, float flexBasis, const MethodInfo* method);
// 0x181881b50

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexBasis(intptr_t node,float flexBasis,MethodInfo *method)

{
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  if (g_data_184341d90 == (code *)0x0) {
    local_40 = 7;
    local_48 = L"flex-ui";
    local_30 = 0x1c;
    local_38 = "FlexUi_NodeStyleSetFlexBasis";
    local_28 = 0;
    local_24 = 2;
    local_20 = 0xc;
    local_1c = 0;
    g_data_184341d90 = (code *)il2cpp_runtime_helper_18046cbe0(&local_48);
  }
  (*g_data_184341d90)(node,flexBasis);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexBasisPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexBasisPercent (intptr_t node, float flexBasis, const MethodInfo* method);
// 0x181881ac0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexBasisPercent
               (intptr_t node,float flexBasis,MethodInfo *method)

{
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  if (g_data_184341d98 == (code *)0x0) {
    local_40 = 7;
    local_48 = L"flex-ui";
    local_30 = 0x23;
    local_38 = "FlexUi_NodeStyleSetFlexBasisPercent";
    local_28 = 0;
    local_24 = 2;
    local_20 = 0xc;
    local_1c = 0;
    g_data_184341d98 = (code *)il2cpp_runtime_helper_18046cbe0(&local_48);
  }
  (*g_data_184341d98)(node,flexBasis);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetFlexBasisAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexBasisAuto (intptr_t node, const MethodInfo* method);
// 0x181881a40

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetFlexBasisAuto(intptr_t node,MethodInfo *method)

{
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_184341da0 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x20;
    local_28 = "FlexUi_NodeStyleSetFlexBasisAuto";
    local_18 = 0;
    local_14 = 2;
    local_10 = 8;
    local_c = 0;
    g_data_184341da0 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  (*g_data_184341da0)(node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetPosition
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPosition (intptr_t node, int32_t edge, float position, const MethodInfo* method);
// 0x1818829b0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPosition
               (intptr_t node,int32_t edge,float position,MethodInfo *method)

{
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  if (g_data_184341da8 == (code *)0x0) {
    local_40 = 7;
    local_48 = L"flex-ui";
    local_30 = 0x1b;
    local_38 = "FlexUi_NodeStyleSetPosition";
    local_28 = 0;
    local_24 = 2;
    local_20 = 0x10;
    local_1c = 0;
    g_data_184341da8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_48);
  }
  (*g_data_184341da8)(node,edge,position);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetPositionPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPositionPercent (intptr_t node, int32_t edge, float position, const MethodInfo* method);
// 0x181882880

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPositionPercent
               (intptr_t node,int32_t edge,float position,MethodInfo *method)

{
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  if (g_data_184341db0 == (code *)0x0) {
    local_40 = 7;
    local_48 = L"flex-ui";
    local_30 = 0x22;
    local_38 = "FlexUi_NodeStyleSetPositionPercent";
    local_28 = 0;
    local_24 = 2;
    local_20 = 0x10;
    local_1c = 0;
    g_data_184341db0 = (code *)il2cpp_runtime_helper_18046cbe0(&local_48);
  }
  (*g_data_184341db0)(node,edge,position);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMargin
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMargin (intptr_t node, int32_t edge, float margin, const MethodInfo* method);
// 0x181882220

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMargin
               (intptr_t node,int32_t edge,float margin,MethodInfo *method)

{
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  if (g_data_184341db8 == (code *)0x0) {
    local_40 = 7;
    local_48 = L"flex-ui";
    local_30 = 0x19;
    local_38 = "FlexUi_NodeStyleSetMargin";
    local_28 = 0;
    local_24 = 2;
    local_20 = 0x10;
    local_1c = 0;
    g_data_184341db8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_48);
  }
  (*g_data_184341db8)(node,edge,margin);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMarginPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMarginPercent (intptr_t node, int32_t edge, float margin, const MethodInfo* method);
// 0x181882180

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMarginPercent
               (intptr_t node,int32_t edge,float margin,MethodInfo *method)

{
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  if (g_data_184341dc0 == (code *)0x0) {
    local_40 = 7;
    local_48 = L"flex-ui";
    local_30 = 0x20;
    local_38 = "FlexUi_NodeStyleSetMarginPercent";
    local_28 = 0;
    local_24 = 2;
    local_20 = 0x10;
    local_1c = 0;
    g_data_184341dc0 = (code *)il2cpp_runtime_helper_18046cbe0(&local_48);
  }
  (*g_data_184341dc0)(node,edge,margin);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMarginAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMarginAuto (intptr_t node, int32_t edge, const MethodInfo* method);
// 0x1818820f0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMarginAuto(intptr_t node,int32_t edge,MethodInfo *method)

{
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_184341dc8 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x1d;
    local_28 = "FlexUi_NodeStyleSetMarginAuto";
    local_18 = 0;
    local_14 = 2;
    local_10 = 0xc;
    local_c = 0;
    g_data_184341dc8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  (*g_data_184341dc8)(node,edge);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetPadding
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPadding (intptr_t node, int32_t edge, float padding, const MethodInfo* method);
// 0x1818827e0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPadding
               (intptr_t node,int32_t edge,float padding,MethodInfo *method)

{
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  if (g_data_184341dd0 == (code *)0x0) {
    local_40 = 7;
    local_48 = L"flex-ui";
    local_30 = 0x1a;
    local_38 = "FlexUi_NodeStyleSetPadding";
    local_28 = 0;
    local_24 = 2;
    local_20 = 0x10;
    local_1c = 0;
    g_data_184341dd0 = (code *)il2cpp_runtime_helper_18046cbe0(&local_48);
  }
  (*g_data_184341dd0)(node,edge,padding);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetPaddingPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPaddingPercent (intptr_t node, int32_t edge, float padding, const MethodInfo* method);
// 0x181882740

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetPaddingPercent
               (intptr_t node,int32_t edge,float padding,MethodInfo *method)

{
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  if (g_data_184341dd8 == (code *)0x0) {
    local_40 = 7;
    local_48 = L"flex-ui";
    local_30 = 0x21;
    local_38 = "FlexUi_NodeStyleSetPaddingPercent";
    local_28 = 0;
    local_24 = 2;
    local_20 = 0x10;
    local_1c = 0;
    g_data_184341dd8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_48);
  }
  (*g_data_184341dd8)(node,edge,padding);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetGap
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetGap (intptr_t node, int32_t gutter, float gapLength, const MethodInfo* method);
// 0x181881e20

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetGap
               (intptr_t node,int32_t gutter,float gapLength,MethodInfo *method)

{
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  if (g_data_184341de0 == (code *)0x0) {
    local_40 = 7;
    local_48 = L"flex-ui";
    local_30 = 0x16;
    local_38 = "FlexUi_NodeStyleSetGap";
    local_28 = 0;
    local_24 = 2;
    local_20 = 0x10;
    local_1c = 0;
    g_data_184341de0 = (code *)il2cpp_runtime_helper_18046cbe0(&local_48);
  }
  (*g_data_184341de0)(node,gutter,gapLength);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetWidth (intptr_t node, float width, const MethodInfo* method);
// 0x181882b60

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetWidth(intptr_t node,float width,MethodInfo *method)

{
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  if (g_data_184341de8 == (code *)0x0) {
    local_40 = 7;
    local_48 = L"flex-ui";
    local_30 = 0x18;
    local_38 = "FlexUi_NodeStyleSetWidth";
    local_28 = 0;
    local_24 = 2;
    local_20 = 0xc;
    local_1c = 0;
    g_data_184341de8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_48);
  }
  (*g_data_184341de8)(node,width);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetWidthPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetWidthPercent (intptr_t node, float width, const MethodInfo* method);
// 0x181882ad0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetWidthPercent(intptr_t node,float width,MethodInfo *method)

{
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  if (g_data_184341df0 == (code *)0x0) {
    local_40 = 7;
    local_48 = L"flex-ui";
    local_30 = 0x1f;
    local_38 = "FlexUi_NodeStyleSetWidthPercent";
    local_28 = 0;
    local_24 = 2;
    local_20 = 0xc;
    local_1c = 0;
    g_data_184341df0 = (code *)il2cpp_runtime_helper_18046cbe0(&local_48);
  }
  (*g_data_184341df0)(node,width);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetWidthAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetWidthAuto (intptr_t node, const MethodInfo* method);
// 0x181882a50

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetWidthAuto(intptr_t node,MethodInfo *method)

{
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_184341df8 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x1c;
    local_28 = "FlexUi_NodeStyleSetWidthAuto";
    local_18 = 0;
    local_14 = 2;
    local_10 = 8;
    local_c = 0;
    g_data_184341df8 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  (*g_data_184341df8)(node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetHeight (intptr_t node, float height, const MethodInfo* method);
// 0x181881fd0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetHeight(intptr_t node,float height,MethodInfo *method)

{
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  if (g_data_184341e00 == (code *)0x0) {
    local_40 = 7;
    local_48 = L"flex-ui";
    local_30 = 0x19;
    local_38 = "FlexUi_NodeStyleSetHeight";
    local_28 = 0;
    local_24 = 2;
    local_20 = 0xc;
    local_1c = 0;
    g_data_184341e00 = (code *)il2cpp_runtime_helper_18046cbe0(&local_48);
  }
  (*g_data_184341e00)(node,height);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetHeightPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetHeightPercent (intptr_t node, float height, const MethodInfo* method);
// 0x181881f40

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetHeightPercent(intptr_t node,float height,MethodInfo *method)

{
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  if (g_data_184341e08 == (code *)0x0) {
    local_40 = 7;
    local_48 = L"flex-ui";
    local_30 = 0x20;
    local_38 = "FlexUi_NodeStyleSetHeightPercent";
    local_28 = 0;
    local_24 = 2;
    local_20 = 0xc;
    local_1c = 0;
    g_data_184341e08 = (code *)il2cpp_runtime_helper_18046cbe0(&local_48);
  }
  (*g_data_184341e08)(node,height);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetHeightAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetHeightAuto (intptr_t node, const MethodInfo* method);
// 0x181881ec0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetHeightAuto(intptr_t node,MethodInfo *method)

{
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_184341e10 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x1d;
    local_28 = "FlexUi_NodeStyleSetHeightAuto";
    local_18 = 0;
    local_14 = 2;
    local_10 = 8;
    local_c = 0;
    g_data_184341e10 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  (*g_data_184341e10)(node);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMinWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinWidth (intptr_t node, float minWidth, const MethodInfo* method);
// 0x1818826b0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinWidth(intptr_t node,float minWidth,MethodInfo *method)

{
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  if (g_data_184341e18 == (code *)0x0) {
    local_40 = 7;
    local_48 = L"flex-ui";
    local_30 = 0x1b;
    local_38 = "FlexUi_NodeStyleSetMinWidth";
    local_28 = 0;
    local_24 = 2;
    local_20 = 0xc;
    local_1c = 0;
    g_data_184341e18 = (code *)il2cpp_runtime_helper_18046cbe0(&local_48);
  }
  (*g_data_184341e18)(node,minWidth);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMinWidthPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinWidthPercent (intptr_t node, float minWidth, const MethodInfo* method);
// 0x181882620

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinWidthPercent(intptr_t node,float minWidth,MethodInfo *method)

{
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  if (g_data_184341e20 == (code *)0x0) {
    local_40 = 7;
    local_48 = L"flex-ui";
    local_30 = 0x22;
    local_38 = "FlexUi_NodeStyleSetMinWidthPercent";
    local_28 = 0;
    local_24 = 2;
    local_20 = 0xc;
    local_1c = 0;
    g_data_184341e20 = (code *)il2cpp_runtime_helper_18046cbe0(&local_48);
  }
  (*g_data_184341e20)(node,minWidth);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMinHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinHeight (intptr_t node, float minHeight, const MethodInfo* method);
// 0x181882590

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinHeight(intptr_t node,float minHeight,MethodInfo *method)

{
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  if (g_data_184341e28 == (code *)0x0) {
    local_40 = 7;
    local_48 = L"flex-ui";
    local_30 = 0x1c;
    local_38 = "FlexUi_NodeStyleSetMinHeight";
    local_28 = 0;
    local_24 = 2;
    local_20 = 0xc;
    local_1c = 0;
    g_data_184341e28 = (code *)il2cpp_runtime_helper_18046cbe0(&local_48);
  }
  (*g_data_184341e28)(node,minHeight);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMinHeightPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinHeightPercent (intptr_t node, float minHeight, const MethodInfo* method);
// 0x181882500

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMinHeightPercent
               (intptr_t node,float minHeight,MethodInfo *method)

{
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  if (g_data_184341e30 == (code *)0x0) {
    local_40 = 7;
    local_48 = L"flex-ui";
    local_30 = 0x23;
    local_38 = "FlexUi_NodeStyleSetMinHeightPercent";
    local_28 = 0;
    local_24 = 2;
    local_20 = 0xc;
    local_1c = 0;
    g_data_184341e30 = (code *)il2cpp_runtime_helper_18046cbe0(&local_48);
  }
  (*g_data_184341e30)(node,minHeight);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMaxWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxWidth (intptr_t node, float maxWidth, const MethodInfo* method);
// 0x181882470

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxWidth(intptr_t node,float maxWidth,MethodInfo *method)

{
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  if (g_data_184341e38 == (code *)0x0) {
    local_40 = 7;
    local_48 = L"flex-ui";
    local_30 = 0x1b;
    local_38 = "FlexUi_NodeStyleSetMaxWidth";
    local_28 = 0;
    local_24 = 2;
    local_20 = 0xc;
    local_1c = 0;
    g_data_184341e38 = (code *)il2cpp_runtime_helper_18046cbe0(&local_48);
  }
  (*g_data_184341e38)(node,maxWidth);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMaxWidthPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxWidthPercent (intptr_t node, float maxWidth, const MethodInfo* method);
// 0x1818823e0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxWidthPercent(intptr_t node,float maxWidth,MethodInfo *method)

{
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  if (g_data_184341e40 == (code *)0x0) {
    local_40 = 7;
    local_48 = L"flex-ui";
    local_30 = 0x22;
    local_38 = "FlexUi_NodeStyleSetMaxWidthPercent";
    local_28 = 0;
    local_24 = 2;
    local_20 = 0xc;
    local_1c = 0;
    g_data_184341e40 = (code *)il2cpp_runtime_helper_18046cbe0(&local_48);
  }
  (*g_data_184341e40)(node,maxWidth);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMaxHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxHeight (intptr_t node, float maxHeight, const MethodInfo* method);
// 0x181882350

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxHeight(intptr_t node,float maxHeight,MethodInfo *method)

{
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  if (g_data_184341e48 == (code *)0x0) {
    local_40 = 7;
    local_48 = L"flex-ui";
    local_30 = 0x1c;
    local_38 = "FlexUi_NodeStyleSetMaxHeight";
    local_28 = 0;
    local_24 = 2;
    local_20 = 0xc;
    local_1c = 0;
    g_data_184341e48 = (code *)il2cpp_runtime_helper_18046cbe0(&local_48);
  }
  (*g_data_184341e48)(node,maxHeight);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetMaxHeightPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxHeightPercent (intptr_t node, float maxHeight, const MethodInfo* method);
// 0x1818822c0

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetMaxHeightPercent
               (intptr_t node,float maxHeight,MethodInfo *method)

{
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  if (g_data_184341e50 == (code *)0x0) {
    local_40 = 7;
    local_48 = L"flex-ui";
    local_30 = 0x23;
    local_38 = "FlexUi_NodeStyleSetMaxHeightPercent";
    local_28 = 0;
    local_24 = 2;
    local_20 = 0xc;
    local_1c = 0;
    g_data_184341e50 = (code *)il2cpp_runtime_helper_18046cbe0(&local_48);
  }
  (*g_data_184341e50)(node,maxHeight);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$YGNodeStyleSetAspectRatio
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAspectRatio (intptr_t node, float aspectRatio, const MethodInfo* method);
// 0x181881920

void Gilzoide_FlexUi_Yoga_Yoga__YGNodeStyleSetAspectRatio(intptr_t node,float aspectRatio,MethodInfo *method)

{
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  if (g_data_184341e58 == (code *)0x0) {
    local_40 = 7;
    local_48 = L"flex-ui";
    local_30 = 0x1e;
    local_38 = "FlexUi_NodeStyleSetAspectRatio";
    local_28 = 0;
    local_24 = 2;
    local_20 = 0xc;
    local_1c = 0;
    g_data_184341e58 = (code *)il2cpp_runtime_helper_18046cbe0(&local_48);
  }
  (*g_data_184341e58)(node,aspectRatio);
  return;
}


// Gilzoide.FlexUi.Yoga.Yoga$$.ctor
// il2cpp: void Gilzoide_FlexUi_Yoga_Yoga___ctor (Gilzoide_FlexUi_Yoga_Yoga_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gilzoide_FlexUi_Yoga_Yoga___ctor(Gilzoide_FlexUi_Yoga_Yoga_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


