// Type: Gilzoide.FlexUi.Yoga.YGNode
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gilzoide.FlexUi/Gilzoide.FlexUi.Yoga/YGNode.cs
// Prior real C# source: none
// --------------------------------

// Gilzoide.FlexUi.Yoga.YGNode$$get_IsNull
// il2cpp: bool Gilzoide_FlexUi_Yoga_YGNode__get_IsNull (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x5312e30

bool Gilzoide_FlexUi_Yoga_YGNode__get_IsNull(Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

{
  return (__this->fields)._nodePtr == 0;
}


// Gilzoide.FlexUi.Yoga.YGNode$$.ctor
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode___ctor (Gilzoide_FlexUi_Yoga_YGNode_o __this, intptr_t nodePtr, const MethodInfo* method);
// 0x5316dc0

void Gilzoide_FlexUi_Yoga_YGNode___ctor
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,intptr_t nodePtr,MethodInfo *method)

{
  (__this->fields)._nodePtr = nodePtr;
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$Instantiate
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__Instantiate (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x5312e40

void Gilzoide_FlexUi_Yoga_YGNode__Instantiate(Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

{
  intptr_t iVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_075425f0 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeNew";
    local_20 = 0xe;
    local_18 = 0x200000000;
    local_10 = 0;
    local_c = 0;
    g_data_075425f0 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  iVar1 = (*g_data_075425f0)();
  (__this->fields)._nodePtr = iVar1;
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$Dispose
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__Dispose (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x5314390

void Gilzoide_FlexUi_Yoga_YGNode__Dispose(Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

{
  if ((__this->fields)._nodePtr != 0) {
    Gilzoide_FlexUi_Yoga_YGNode__Free(__this,method);
    (__this->fields)._nodePtr = 0;
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$ApplyTo
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__ApplyTo (Gilzoide_FlexUi_Yoga_YGNode_o __this, UnityEngine_RectTransform_o* rectTransform, const MethodInfo* method);
// 0x5314cd0

void Gilzoide_FlexUi_Yoga_YGNode__ApplyTo
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,UnityEngine_RectTransform_o *rectTransform,
               MethodInfo *method)

{
  intptr_t iVar1;
  float fVar2;
  float fVar3;
  char *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_07542668 == (code *)0x0) {
    local_48 = "flex-ui";
    local_40 = 7;
    local_38 = "FlexUi_NodeLayoutGetTop";
    local_30 = 0x17;
    local_28 = 0x200000000;
    local_20 = 8;
    local_1c = 0;
    g_data_07542668 = (code *)il2cpp_runtime_helper_03123230(&local_48);
  }
  fVar2 = (float)(*g_data_07542668)(iVar1);
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_07542678 == (code *)0x0) {
    local_48 = "flex-ui";
    local_40 = 7;
    local_38 = "FlexUi_NodeLayoutGetHeight";
    local_30 = 0x1a;
    local_28 = 0x200000000;
    local_20 = 8;
    local_1c = 0;
    g_data_07542678 = (code *)il2cpp_runtime_helper_03123230(&local_48);
  }
  fVar3 = (float)(*g_data_07542678)(iVar1);
  if (rectTransform == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_RectTransform__SetInsetAndSizeFromParentEdge(rectTransform,2,fVar2,fVar3,(MethodInfo *)0x0);
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_07542660 == (code *)0x0) {
    local_48 = "flex-ui";
    local_40 = 7;
    local_38 = "FlexUi_NodeLayoutGetLeft";
    local_30 = 0x18;
    local_28 = 0x200000000;
    local_20 = 8;
    local_1c = 0;
    g_data_07542660 = (code *)il2cpp_runtime_helper_03123230(&local_48);
  }
  fVar2 = (float)(*g_data_07542660)(iVar1);
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_07542670 == (code *)0x0) {
    local_48 = "flex-ui";
    local_40 = 7;
    local_38 = "FlexUi_NodeLayoutGetWidth";
    local_30 = 0x19;
    local_28 = 0x200000000;
    local_20 = 8;
    local_1c = 0;
    g_data_07542670 = (code *)il2cpp_runtime_helper_03123230(&local_48);
  }
  fVar3 = (float)(*g_data_07542670)(iVar1);
  UnityEngine_RectTransform__SetInsetAndSizeFromParentEdge(rectTransform,0,fVar2,fVar3,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$Equals
// il2cpp: bool Gilzoide_FlexUi_Yoga_YGNode__Equals (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGNode_o other, const MethodInfo* method);
// 0x53171a0

bool Gilzoide_FlexUi_Yoga_YGNode__Equals
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,Gilzoide_FlexUi_Yoga_YGNode_o other,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGNode_Fields)(__this->fields)._nodePtr == other.fields._nodePtr;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPosition
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x530f620

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t edge,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

{
  code *pcVar1;
  Il2CppClass *klass;
  System_ArgumentOutOfRangeException_o *__this_00;
  System_String_o *paramName;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  intptr_t iVar2;
  ulong uVar3;
  char *local_40;
  undefined8 local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if ((uint)value.fields.Unit < 4) {
    uVar3 = (ulong)(uint)value.fields.Value;
    switch((long)&switchD_0530f64b::switchdataD_01010858 +
           (long)(int)(&switchD_0530f64b::switchdataD_01010858)[(ulong)value.fields >> 0x20]) {
    case 0x530f64d:
      iVar2 = (__this->fields)._nodePtr;
      if (g_data_075426e8 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetPosition";
        local_28 = 0x1b;
        local_20 = 0x200000000;
        local_18 = 0x10;
        local_14 = 0;
        g_data_075426e8 = (code *)il2cpp_runtime_helper_03123230(&local_40);
      }
      uVar3 = SUB168(ZEXT416(0x7fc00000),0);
      pcVar1 = g_data_075426e8;
      break;
    case 0x530f6c0:
      iVar2 = (__this->fields)._nodePtr;
      pcVar1 = g_data_075426e8;
      if (g_data_075426e8 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetPosition";
        local_28 = 0x1b;
        local_20 = 0x200000000;
        local_18 = 0x10;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_03123230(&local_40);
        uVar3 = (ulong)(uint)value.fields.Value;
        g_data_075426e8 = pcVar1;
      }
      break;
    case 0x530f738:
      iVar2 = (__this->fields)._nodePtr;
      pcVar1 = g_data_075426f0;
      if (g_data_075426f0 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetPositionPercent";
        local_28 = 0x22;
        local_20 = 0x200000000;
        local_18 = 0x10;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_03123230(&local_40);
        uVar3 = (ulong)(uint)value.fields.Value;
        g_data_075426f0 = pcVar1;
      }
      break;
    case 0x530f7b9:
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentOutOfRangeException);
      __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_codegen_object_new(klass);
      paramName = il2cpp_codegen_get_runtime_metadata(&"value");
      message = il2cpp_codegen_get_runtime_metadata(&"Auto is not supported for position");
      System_ArgumentOutOfRangeException___ctor_5414be0(__this_00,paramName,message,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gilzoide_FlexUi_Yoga_YGNode_StyleSetPosition);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
    (*pcVar1)(uVar3,iVar2,edge);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidth (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x5310e00

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidth
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  code *pcVar1;
  intptr_t iVar2;
  ulong uVar3;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if ((uint)value.fields.Unit < 4) {
    uVar3 = (ulong)(uint)value.fields.Value;
    switch((long)&switchD_05310e27::switchdataD_01010878 +
           (long)(int)(&switchD_05310e27::switchdataD_01010878)[(ulong)value.fields >> 0x20]) {
    case 0x5310e29:
      iVar2 = (__this->fields)._nodePtr;
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
      uVar3 = SUB168(ZEXT416(0x7fc00000),0);
      pcVar1 = g_data_07542728;
      break;
    case 0x5310e9c:
      iVar2 = (__this->fields)._nodePtr;
      pcVar1 = g_data_07542728;
      if (g_data_07542728 == (code *)0x0) {
        local_38 = "flex-ui";
        local_30 = 7;
        local_28 = "FlexUi_NodeStyleSetWidth";
        local_20 = 0x18;
        local_18 = 0x200000000;
        local_10 = 0xc;
        local_c = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_03123230(&local_38);
        uVar3 = (ulong)(uint)value.fields.Value;
        g_data_07542728 = pcVar1;
      }
      break;
    case 0x5310f14:
      iVar2 = (__this->fields)._nodePtr;
      pcVar1 = g_data_07542730;
      if (g_data_07542730 == (code *)0x0) {
        local_38 = "flex-ui";
        local_30 = 7;
        local_28 = "FlexUi_NodeStyleSetWidthPercent";
        local_20 = 0x1f;
        local_18 = 0x200000000;
        local_10 = 0xc;
        local_c = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_03123230(&local_38);
        uVar3 = (ulong)(uint)value.fields.Value;
        g_data_07542730 = pcVar1;
      }
      break;
    case 0x5310f91:
      iVar2 = (__this->fields)._nodePtr;
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
      (*g_data_07542738)(iVar2);
      return;
    }
    (*pcVar1)(uVar3,iVar2);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeight (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x53110f0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeight
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  code *pcVar1;
  intptr_t iVar2;
  ulong uVar3;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if ((uint)value.fields.Unit < 4) {
    uVar3 = (ulong)(uint)value.fields.Value;
    switch((long)&switchD_05311117::switchdataD_01010888 +
           (long)(int)(&switchD_05311117::switchdataD_01010888)[(ulong)value.fields >> 0x20]) {
    case 0x5311119:
      iVar2 = (__this->fields)._nodePtr;
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
      uVar3 = SUB168(ZEXT416(0x7fc00000),0);
      pcVar1 = g_data_07542740;
      break;
    case 0x531118c:
      iVar2 = (__this->fields)._nodePtr;
      pcVar1 = g_data_07542740;
      if (g_data_07542740 == (code *)0x0) {
        local_38 = "flex-ui";
        local_30 = 7;
        local_28 = "FlexUi_NodeStyleSetHeight";
        local_20 = 0x19;
        local_18 = 0x200000000;
        local_10 = 0xc;
        local_c = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_03123230(&local_38);
        uVar3 = (ulong)(uint)value.fields.Value;
        g_data_07542740 = pcVar1;
      }
      break;
    case 0x5311204:
      iVar2 = (__this->fields)._nodePtr;
      pcVar1 = g_data_07542748;
      if (g_data_07542748 == (code *)0x0) {
        local_38 = "flex-ui";
        local_30 = 7;
        local_28 = "FlexUi_NodeStyleSetHeightPercent";
        local_20 = 0x20;
        local_18 = 0x200000000;
        local_10 = 0xc;
        local_c = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_03123230(&local_38);
        uVar3 = (ulong)(uint)value.fields.Value;
        g_data_07542748 = pcVar1;
      }
      break;
    case 0x5311281:
      iVar2 = (__this->fields)._nodePtr;
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
      (*g_data_07542750)(iVar2);
      return;
    }
    (*pcVar1)(uVar3,iVar2);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMinWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidth (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x53113e0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidth
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  code *pcVar1;
  Il2CppClass *klass;
  System_ArgumentOutOfRangeException_o *__this_00;
  System_String_o *paramName;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  intptr_t iVar2;
  ulong uVar3;
  char *local_40;
  undefined8 local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if ((uint)value.fields.Unit < 4) {
    uVar3 = (ulong)(uint)value.fields.Value;
    switch((long)&switchD_05311409::switchdataD_01010898 +
           (long)(int)(&switchD_05311409::switchdataD_01010898)[(ulong)value.fields >> 0x20]) {
    case 0x531140b:
      iVar2 = (__this->fields)._nodePtr;
      if (g_data_07542758 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMinWidth";
        local_28 = 0x1b;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        g_data_07542758 = (code *)il2cpp_runtime_helper_03123230(&local_40);
      }
      uVar3 = SUB168(ZEXT416(0x7fc00000),0);
      pcVar1 = g_data_07542758;
      break;
    case 0x531147e:
      iVar2 = (__this->fields)._nodePtr;
      pcVar1 = g_data_07542758;
      if (g_data_07542758 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMinWidth";
        local_28 = 0x1b;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_03123230(&local_40);
        uVar3 = (ulong)(uint)value.fields.Value;
        g_data_07542758 = pcVar1;
      }
      break;
    case 0x53114f6:
      iVar2 = (__this->fields)._nodePtr;
      pcVar1 = g_data_07542760;
      if (g_data_07542760 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMinWidthPercent";
        local_28 = 0x22;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_03123230(&local_40);
        uVar3 = (ulong)(uint)value.fields.Value;
        g_data_07542760 = pcVar1;
      }
      break;
    case 0x5311575:
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentOutOfRangeException);
      __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_codegen_object_new(klass);
      paramName = il2cpp_codegen_get_runtime_metadata(&"value");
      message = il2cpp_codegen_get_runtime_metadata(&"Auto is not supported for min width");
      System_ArgumentOutOfRangeException___ctor_5414be0(__this_00,paramName,message,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gilzoide_FlexUi_Yoga_YGNode_StyleSetMinWidth);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
    (*pcVar1)(uVar3,iVar2);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMaxWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidth (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x5311980

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidth
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  code *pcVar1;
  Il2CppClass *klass;
  System_ArgumentOutOfRangeException_o *__this_00;
  System_String_o *paramName;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  intptr_t iVar2;
  ulong uVar3;
  char *local_40;
  undefined8 local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if ((uint)value.fields.Unit < 4) {
    uVar3 = (ulong)(uint)value.fields.Value;
    switch((long)&switchD_053119a9::switchdataD_010108b8 +
           (long)(int)(&switchD_053119a9::switchdataD_010108b8)[(ulong)value.fields >> 0x20]) {
    case 0x53119ab:
      iVar2 = (__this->fields)._nodePtr;
      if (g_data_07542778 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMaxWidth";
        local_28 = 0x1b;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        g_data_07542778 = (code *)il2cpp_runtime_helper_03123230(&local_40);
      }
      uVar3 = SUB168(ZEXT416(0x7fc00000),0);
      pcVar1 = g_data_07542778;
      break;
    case 0x5311a1e:
      iVar2 = (__this->fields)._nodePtr;
      pcVar1 = g_data_07542778;
      if (g_data_07542778 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMaxWidth";
        local_28 = 0x1b;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_03123230(&local_40);
        uVar3 = (ulong)(uint)value.fields.Value;
        g_data_07542778 = pcVar1;
      }
      break;
    case 0x5311a96:
      iVar2 = (__this->fields)._nodePtr;
      pcVar1 = g_data_07542780;
      if (g_data_07542780 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMaxWidthPercent";
        local_28 = 0x22;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_03123230(&local_40);
        uVar3 = (ulong)(uint)value.fields.Value;
        g_data_07542780 = pcVar1;
      }
      break;
    case 0x5311b15:
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentOutOfRangeException);
      __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_codegen_object_new(klass);
      paramName = il2cpp_codegen_get_runtime_metadata(&"value");
      message = il2cpp_codegen_get_runtime_metadata(&"Auto is not supported for max width");
      System_ArgumentOutOfRangeException___ctor_5414be0(__this_00,paramName,message,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gilzoide_FlexUi_Yoga_YGNode_StyleSetMaxWidth);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
    (*pcVar1)(uVar3,iVar2);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMinHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeight (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x53116b0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeight
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  code *pcVar1;
  Il2CppClass *klass;
  System_ArgumentOutOfRangeException_o *__this_00;
  System_String_o *paramName;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  intptr_t iVar2;
  ulong uVar3;
  char *local_40;
  undefined8 local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if ((uint)value.fields.Unit < 4) {
    uVar3 = (ulong)(uint)value.fields.Value;
    switch((long)&switchD_053116d9::switchdataD_010108a8 +
           (long)(int)(&switchD_053116d9::switchdataD_010108a8)[(ulong)value.fields >> 0x20]) {
    case 0x53116db:
      iVar2 = (__this->fields)._nodePtr;
      if (g_data_07542768 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMinHeight";
        local_28 = 0x1c;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        g_data_07542768 = (code *)il2cpp_runtime_helper_03123230(&local_40);
      }
      uVar3 = SUB168(ZEXT416(0x7fc00000),0);
      pcVar1 = g_data_07542768;
      break;
    case 0x531174e:
      iVar2 = (__this->fields)._nodePtr;
      pcVar1 = g_data_07542768;
      if (g_data_07542768 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMinHeight";
        local_28 = 0x1c;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_03123230(&local_40);
        uVar3 = (ulong)(uint)value.fields.Value;
        g_data_07542768 = pcVar1;
      }
      break;
    case 0x53117c6:
      iVar2 = (__this->fields)._nodePtr;
      pcVar1 = g_data_07542770;
      if (g_data_07542770 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMinHeightPercent";
        local_28 = 0x23;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_03123230(&local_40);
        uVar3 = (ulong)(uint)value.fields.Value;
        g_data_07542770 = pcVar1;
      }
      break;
    case 0x5311845:
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentOutOfRangeException);
      __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_codegen_object_new(klass);
      paramName = il2cpp_codegen_get_runtime_metadata(&"value");
      message = il2cpp_codegen_get_runtime_metadata(&"Auto is not supported for min height");
      System_ArgumentOutOfRangeException___ctor_5414be0(__this_00,paramName,message,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gilzoide_FlexUi_Yoga_YGNode_StyleSetMinHeight);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
    (*pcVar1)(uVar3,iVar2);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMaxHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeight (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x5311c50

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeight
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  code *pcVar1;
  Il2CppClass *klass;
  System_ArgumentOutOfRangeException_o *__this_00;
  System_String_o *paramName;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  intptr_t iVar2;
  ulong uVar3;
  char *local_40;
  undefined8 local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if ((uint)value.fields.Unit < 4) {
    uVar3 = (ulong)(uint)value.fields.Value;
    switch((long)&switchD_05311c79::switchdataD_010108c8 +
           (long)(int)(&switchD_05311c79::switchdataD_010108c8)[(ulong)value.fields >> 0x20]) {
    case 0x5311c7b:
      iVar2 = (__this->fields)._nodePtr;
      if (g_data_07542788 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMaxHeight";
        local_28 = 0x1c;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        g_data_07542788 = (code *)il2cpp_runtime_helper_03123230(&local_40);
      }
      uVar3 = SUB168(ZEXT416(0x7fc00000),0);
      pcVar1 = g_data_07542788;
      break;
    case 0x5311cee:
      iVar2 = (__this->fields)._nodePtr;
      pcVar1 = g_data_07542788;
      if (g_data_07542788 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMaxHeight";
        local_28 = 0x1c;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_03123230(&local_40);
        uVar3 = (ulong)(uint)value.fields.Value;
        g_data_07542788 = pcVar1;
      }
      break;
    case 0x5311d66:
      iVar2 = (__this->fields)._nodePtr;
      pcVar1 = g_data_07542790;
      if (g_data_07542790 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMaxHeightPercent";
        local_28 = 0x23;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_03123230(&local_40);
        uVar3 = (ulong)(uint)value.fields.Value;
        g_data_07542790 = pcVar1;
      }
      break;
    case 0x5311de5:
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentOutOfRangeException);
      __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_codegen_object_new(klass);
      paramName = il2cpp_codegen_get_runtime_metadata(&"value");
      message = il2cpp_codegen_get_runtime_metadata(&"Auto is not supported for max height");
      System_ArgumentOutOfRangeException___ctor_5414be0(__this_00,paramName,message,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gilzoide_FlexUi_Yoga_YGNode_StyleSetMaxHeight);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
    (*pcVar1)(uVar3,iVar2);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexBasis
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasis (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x53100b0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasis
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  code *pcVar1;
  intptr_t iVar2;
  ulong uVar3;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if ((uint)value.fields.Unit < 4) {
    uVar3 = (ulong)(uint)value.fields.Value;
    switch((long)&switchD_053100d7::switchdataD_01010868 +
           (long)(int)(&switchD_053100d7::switchdataD_01010868)[(ulong)value.fields >> 0x20]) {
    case 0x53100d9:
      iVar2 = (__this->fields)._nodePtr;
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
      uVar3 = SUB168(ZEXT416(0x7fc00000),0);
      pcVar1 = g_data_075426d0;
      break;
    case 0x531014c:
      iVar2 = (__this->fields)._nodePtr;
      pcVar1 = g_data_075426d0;
      if (g_data_075426d0 == (code *)0x0) {
        local_38 = "flex-ui";
        local_30 = 7;
        local_28 = "FlexUi_NodeStyleSetFlexBasis";
        local_20 = 0x1c;
        local_18 = 0x200000000;
        local_10 = 0xc;
        local_c = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_03123230(&local_38);
        uVar3 = (ulong)(uint)value.fields.Value;
        g_data_075426d0 = pcVar1;
      }
      break;
    case 0x53101c4:
      iVar2 = (__this->fields)._nodePtr;
      pcVar1 = g_data_075426d8;
      if (g_data_075426d8 == (code *)0x0) {
        local_38 = "flex-ui";
        local_30 = 7;
        local_28 = "FlexUi_NodeStyleSetFlexBasisPercent";
        local_20 = 0x23;
        local_18 = 0x200000000;
        local_10 = 0xc;
        local_c = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_03123230(&local_38);
        uVar3 = (ulong)(uint)value.fields.Value;
        g_data_075426d8 = pcVar1;
      }
      break;
    case 0x5310241:
      iVar2 = (__this->fields)._nodePtr;
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
      (*g_data_075426e0)(iVar2);
      return;
    }
    (*pcVar1)(uVar3,iVar2);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMargin
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x53120f0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t edge,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

{
  code *pcVar1;
  intptr_t iVar2;
  ulong uVar3;
  char *local_40;
  undefined8 local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if ((uint)value.fields.Unit < 4) {
    uVar3 = (ulong)(uint)value.fields.Value;
    switch((long)&switchD_0531211b::switchdataD_010108d8 +
           (long)(int)(&switchD_0531211b::switchdataD_010108d8)[(ulong)value.fields >> 0x20]) {
    case 0x531211d:
      iVar2 = (__this->fields)._nodePtr;
      if (g_data_075426f8 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMargin";
        local_28 = 0x19;
        local_20 = 0x200000000;
        local_18 = 0x10;
        local_14 = 0;
        g_data_075426f8 = (code *)il2cpp_runtime_helper_03123230(&local_40);
      }
      uVar3 = SUB168(ZEXT416(0x7fc00000),0);
      pcVar1 = g_data_075426f8;
      break;
    case 0x5312190:
      iVar2 = (__this->fields)._nodePtr;
      pcVar1 = g_data_075426f8;
      if (g_data_075426f8 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMargin";
        local_28 = 0x19;
        local_20 = 0x200000000;
        local_18 = 0x10;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_03123230(&local_40);
        uVar3 = (ulong)(uint)value.fields.Value;
        g_data_075426f8 = pcVar1;
      }
      break;
    case 0x5312208:
      iVar2 = (__this->fields)._nodePtr;
      pcVar1 = g_data_07542700;
      if (g_data_07542700 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMarginPercent";
        local_28 = 0x20;
        local_20 = 0x200000000;
        local_18 = 0x10;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_03123230(&local_40);
        uVar3 = (ulong)(uint)value.fields.Value;
        g_data_07542700 = pcVar1;
      }
      break;
    case 0x5312289:
      iVar2 = (__this->fields)._nodePtr;
      if (g_data_07542708 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMarginAuto";
        local_28 = 0x1d;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        g_data_07542708 = (code *)il2cpp_runtime_helper_03123230(&local_40);
      }
      (*g_data_07542708)(iVar2,edge);
      return;
    }
    (*pcVar1)(uVar3,iVar2,edge);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPadding
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x5312680

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t edge,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

{
  code *pcVar1;
  Il2CppClass *klass;
  System_ArgumentOutOfRangeException_o *__this_00;
  System_String_o *paramName;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  intptr_t iVar2;
  ulong uVar3;
  char *local_40;
  undefined8 local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if ((uint)value.fields.Unit < 4) {
    uVar3 = (ulong)(uint)value.fields.Value;
    switch((long)&switchD_053126ab::switchdataD_010108e8 +
           (long)(int)(&switchD_053126ab::switchdataD_010108e8)[(ulong)value.fields >> 0x20]) {
    case 0x53126ad:
      iVar2 = (__this->fields)._nodePtr;
      if (g_data_07542710 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetPadding";
        local_28 = 0x1a;
        local_20 = 0x200000000;
        local_18 = 0x10;
        local_14 = 0;
        g_data_07542710 = (code *)il2cpp_runtime_helper_03123230(&local_40);
      }
      uVar3 = SUB168(ZEXT416(0x7fc00000),0);
      pcVar1 = g_data_07542710;
      break;
    case 0x5312720:
      iVar2 = (__this->fields)._nodePtr;
      pcVar1 = g_data_07542710;
      if (g_data_07542710 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetPadding";
        local_28 = 0x1a;
        local_20 = 0x200000000;
        local_18 = 0x10;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_03123230(&local_40);
        uVar3 = (ulong)(uint)value.fields.Value;
        g_data_07542710 = pcVar1;
      }
      break;
    case 0x5312798:
      iVar2 = (__this->fields)._nodePtr;
      pcVar1 = g_data_07542718;
      if (g_data_07542718 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetPaddingPercent";
        local_28 = 0x21;
        local_20 = 0x200000000;
        local_18 = 0x10;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_03123230(&local_40);
        uVar3 = (ulong)(uint)value.fields.Value;
        g_data_07542718 = pcVar1;
      }
      break;
    case 0x5312819:
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentOutOfRangeException);
      __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_codegen_object_new(klass);
      paramName = il2cpp_codegen_get_runtime_metadata(&"value");
      message = il2cpp_codegen_get_runtime_metadata(&"Auto is not supported for padding");
      System_ArgumentOutOfRangeException___ctor_5414be0(__this_00,paramName,message,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gilzoide_FlexUi_Yoga_YGNode_StyleSetPadding);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
    (*pcVar1)(uVar3,iVar2,edge);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$Free
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__Free (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x5316e50

void Gilzoide_FlexUi_Yoga_YGNode__Free(Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

{
  intptr_t iVar1;
  System_Runtime_InteropServices_GCHandle_o local_48;
  char *local_40;
  undefined8 local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_07542638 == (code *)0x0) {
    local_40 = "flex-ui";
    local_38 = 7;
    local_30 = "FlexUi_NodeGetContext";
    local_28 = 0x15;
    local_20 = 0x200000000;
    local_18 = 8;
    local_14 = 0;
    g_data_07542638 = (code *)il2cpp_runtime_helper_03123230(&local_40);
    iVar1 = (*g_data_07542638)(iVar1);
  }
  else {
    iVar1 = (*g_data_07542638)(iVar1);
  }
  if (iVar1 == 0) {
    local_48.fields.handle = (System_Runtime_InteropServices_GCHandle_Fields)0;
    iVar1 = (__this->fields)._nodePtr;
  }
  else {
    local_48 = System_Runtime_InteropServices_GCHandle__FromIntPtr(iVar1,(MethodInfo *)0x0);
    if (local_48.fields.handle != 0) {
      System_Runtime_InteropServices_GCHandle__Free(&local_48,(MethodInfo *)0x0);
    }
    iVar1 = (__this->fields)._nodePtr;
  }
  if (g_data_075425f8 == (code *)0x0) {
    local_40 = "flex-ui";
    local_38 = 7;
    local_30 = "FlexUi_NodeFree";
    local_28 = 0xf;
    local_20 = 0x200000000;
    local_18 = 8;
    local_14 = 0;
    g_data_075425f8 = (code *)il2cpp_runtime_helper_03123230(&local_40);
  }
  (*g_data_075425f8)(iVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$CalculateLayout
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__CalculateLayout (Gilzoide_FlexUi_Yoga_YGNode_o __this, float availableWidth, float availableHeight, int32_t ownerDirection, const MethodInfo* method);
// 0x5314c30

void Gilzoide_FlexUi_Yoga_YGNode__CalculateLayout
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float availableWidth,float availableHeight,
               int32_t ownerDirection,MethodInfo *method)

{
  intptr_t iVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_07542600;
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_07542600 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeCalculateLayout";
    uStack_28 = 0x1a;
    uStack_20 = 0x200000000;
    uStack_18 = 0x14;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_07542600 = auVar2._0_8_;
  (*g_data_07542600)(availableWidth,availableHeight,iVar1,ownerDirection,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$InsertChild
// il2cpp: bool Gilzoide_FlexUi_Yoga_YGNode__InsertChild (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGNode_o child, int32_t index, const MethodInfo* method);
// 0x53153f0

bool Gilzoide_FlexUi_Yoga_YGNode__InsertChild
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,Gilzoide_FlexUi_Yoga_YGNode_o child,int32_t index,
               MethodInfo *method)

{
  intptr_t iVar1;
  undefined8 uVar2;
  Il2CppObject *message;
  undefined4 in_register_00000014;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  char *local_50;
  undefined8 local_48;
  char *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000014,index);
  if (Il2CppMethodInitialized_075425b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    Il2CppMethodInitialized_075425b8 = '\x01';
    method_00 = extraout_RDX;
  }
  Gilzoide_FlexUi_Yoga_YGNode__SetContext(__this,(System_Runtime_InteropServices_GCHandle_o)0x0,method_00);
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_07542640 == (code *)0x0) {
    local_50 = "flex-ui";
    local_48 = 7;
    local_40 = "FlexUi_NodeSetMeasureFunc";
    local_38 = 0x19;
    local_30 = 0x200000000;
    local_28 = 0x10;
    local_24 = 0;
    g_data_07542640 = (code *)il2cpp_runtime_helper_03123230(&local_50);
  }
  (*g_data_07542640)(iVar1,0);
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_07542608 == (code *)0x0) {
    local_50 = "flex-ui";
    local_48 = 7;
    local_40 = "FlexUi_NodeInsertChild";
    local_38 = 0x16;
    local_30 = 0x200000000;
    local_28 = 0x14;
    local_24 = 0;
    g_data_07542608 = (code *)il2cpp_runtime_helper_03123230(&local_50);
  }
  uVar2 = (*g_data_07542608)(iVar1,child.fields._nodePtr,index);
  message = (Il2CppObject *)il2cpp_runtime_helper_03123770(uVar2);
  il2cpp_runtime_helper_03123680(uVar2);
  if (message != (Il2CppObject *)0x0) {
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    UnityEngine_Debug__LogError(message,(MethodInfo *)0x0);
  }
  return message == (Il2CppObject *)0x0;
}


// Gilzoide.FlexUi.Yoga.YGNode$$RemoveChild
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__RemoveChild (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGNode_o child, const MethodInfo* method);
// 0x5315560

void Gilzoide_FlexUi_Yoga_YGNode__RemoveChild
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,Gilzoide_FlexUi_Yoga_YGNode_o child,MethodInfo *method)

{
  intptr_t iVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_07542610;
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_07542610 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeRemoveChild";
    uStack_28 = 0x16;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_07542610 = auVar2._0_8_;
  (*g_data_07542610)(iVar1,child.fields._nodePtr,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$RemoveAllChildren
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__RemoveAllChildren (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x5315750

void Gilzoide_FlexUi_Yoga_YGNode__RemoveAllChildren(Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

{
  intptr_t iVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_07542618)(iVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$GetChildCount
// il2cpp: int32_t Gilzoide_FlexUi_Yoga_YGNode__GetChildCount (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x5314ee0

int32_t Gilzoide_FlexUi_Yoga_YGNode__GetChildCount(Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

{
  intptr_t iVar1;
  int32_t iVar2;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  iVar2 = (*g_data_07542620)(iVar1);
  return iVar2;
}


// Gilzoide.FlexUi.Yoga.YGNode$$SetConfig
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__SetConfig (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGConfig_o config, const MethodInfo* method);
// 0x530f180

void Gilzoide_FlexUi_Yoga_YGNode__SetConfig
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,Gilzoide_FlexUi_Yoga_YGConfig_o config,
               MethodInfo *method)

{
  intptr_t iVar1;
  undefined8 uVar2;
  Il2CppObject *message;
  char *local_40;
  undefined8 local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if (Il2CppMethodInitialized_075425b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    Il2CppMethodInitialized_075425b9 = '\x01';
  }
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_07542628 == (code *)0x0) {
    local_40 = "flex-ui";
    local_38 = 7;
    local_30 = "FlexUi_NodeSetConfig";
    local_28 = 0x14;
    local_20 = 0x200000000;
    local_18 = 0x10;
    local_14 = 0;
    g_data_07542628 = (code *)il2cpp_runtime_helper_03123230(&local_40);
  }
  uVar2 = (*g_data_07542628)(iVar1);
  message = (Il2CppObject *)il2cpp_runtime_helper_03123770(uVar2);
  il2cpp_runtime_helper_03123680(uVar2);
  if (message != (Il2CppObject *)0x0) {
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    UnityEngine_Debug__LogError(message,(MethodInfo *)0x0);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$SetContext<object>
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__SetContext_object_ (Gilzoide_FlexUi_Yoga_YGNode_o __this, Il2CppObject* value, const MethodInfo_378E870* method);
// 0x388e870

void Gilzoide_FlexUi_Yoga_YGNode__SetContext_object_
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,Il2CppObject *value,MethodInfo_378E870 *method)

{
  System_Runtime_InteropServices_GCHandle_o value_00;
  
  value_00 = System_Runtime_InteropServices_GCHandle__Alloc(value,(MethodInfo *)0x0);
  Gilzoide_FlexUi_Yoga_YGNode__SetContext(__this,value_00,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$SetContext<__Il2CppFullySharedGenericType>
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__SetContext___Il2CppFullySharedGenericType_ (Gilzoide_FlexUi_Yoga_YGNode_o __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_378E890* method);
// 0x388e890

void Gilzoide_FlexUi_Yoga_YGNode__SetContext___Il2CppFullySharedGenericType_
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,MethodInfo_378E890 *method)

{
  Il2CppClass *klass;
  long lVar1;
  Il2CppObject *value_00;
  System_Runtime_InteropServices_GCHandle_o value_01;
  MethodInfo *method_00;
  ulong __n;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar2;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  Il2CppRGCTXData *pIVar3;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_30;
  
  method_00 = value.monitor;
  pUVar2 = value.klass;
  pIVar3 = (method_00->field7_0x38).rgctx_data;
  local_30 = pUVar2;
  if (pIVar3 == (Il2CppRGCTXData *)0x0) {
    uStack_40 = 0x388e8bd;
    il2cpp_codegen_rgctx_method_init(method_00);
    pIVar3 = (method_00->field7_0x38).rgctx_data;
  }
  __n = (ulong)(pIVar3->klass->_2).stack_slot_size;
  lVar1 = -(__n + 0xf & 0xfffffffffffffff0);
  __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&local_30;
  if ((int)(pIVar3->klass->_1).byval_arg.bits < 0) {
    __src = pUVar2;
  }
  *(undefined8 *)(auStack_38 + lVar1 + -8) = 0x388e8f0;
  memcpy(auStack_38 + lVar1,__src,__n);
  klass = pIVar3->klass;
  *(undefined8 *)(auStack_38 + lVar1 + -8) = 0x388e8fc;
  value_00 = il2cpp_vm_Object_Box(klass,auStack_38 + lVar1);
  *(undefined8 *)(auStack_38 + lVar1 + -8) = 0x388e906;
  value_01 = System_Runtime_InteropServices_GCHandle__Alloc(value_00,(MethodInfo *)0x0);
  *(undefined8 *)(auStack_38 + lVar1 + -8) = 0x388e913;
  Gilzoide_FlexUi_Yoga_YGNode__SetContext(__this,value_01,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$SetContext
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__SetContext (Gilzoide_FlexUi_Yoga_YGNode_o __this, System_Runtime_InteropServices_GCHandle_o value, const MethodInfo* method);
// 0x5314fe0

void Gilzoide_FlexUi_Yoga_YGNode__SetContext
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,System_Runtime_InteropServices_GCHandle_o value,
               MethodInfo *method)

{
  intptr_t iVar1;
  intptr_t iVar2;
  System_Runtime_InteropServices_GCHandle_o local_50;
  char *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_07542638 == (code *)0x0) {
    local_48 = "flex-ui";
    local_40 = 7;
    local_38 = "FlexUi_NodeGetContext";
    local_30 = 0x15;
    local_28 = 0x200000000;
    local_20 = 8;
    local_1c = 0;
    g_data_07542638 = (code *)il2cpp_runtime_helper_03123230(&local_48);
    iVar1 = (*g_data_07542638)(iVar1);
  }
  else {
    iVar1 = (*g_data_07542638)(iVar1);
  }
  if (iVar1 == 0) {
    local_50.fields.handle = (System_Runtime_InteropServices_GCHandle_Fields)0;
  }
  else {
    local_50 = System_Runtime_InteropServices_GCHandle__FromIntPtr(iVar1,(MethodInfo *)0x0);
    if (local_50.fields.handle != 0) {
      System_Runtime_InteropServices_GCHandle__Free(&local_50,(MethodInfo *)0x0);
    }
  }
  iVar1 = (__this->fields)._nodePtr;
  iVar2 = System_Runtime_InteropServices_GCHandle__ToIntPtr(value,(MethodInfo *)0x0);
  if (g_data_07542630 == (code *)0x0) {
    local_48 = "flex-ui";
    local_40 = 7;
    local_38 = "FlexUi_NodeSetContext";
    local_30 = 0x15;
    local_28 = 0x200000000;
    local_20 = 0x10;
    local_1c = 0;
    g_data_07542630 = (code *)il2cpp_runtime_helper_03123230(&local_48);
  }
  (*g_data_07542630)(iVar1,iVar2);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$GetContext<object>
// il2cpp: Il2CppObject* Gilzoide_FlexUi_Yoga_YGNode__GetContext_object_ (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo_378E6D0* method);
// 0x388e6d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x388e71d: jmp 0x388e743

Il2CppObject *
Gilzoide_FlexUi_Yoga_YGNode__GetContext_object_
          (Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo_378E6D0 *method)

{
  byte bVar1;
  System_Runtime_InteropServices_GCHandle_o handle;
  undefined8 *puVar2;
  Il2CppObject *obj;
  Il2CppClass *klass;
  Il2CppObject *pIVar3;
  
  if (method->rgctx_data == (MethodInfo_378E6D0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  pIVar3 = (Il2CppObject *)0x0;
  handle = Gilzoide_FlexUi_Yoga_YGNode__GetContext(__this,(MethodInfo *)0x0);
  if (handle.fields.handle != 0) {
    if (((ulong)handle.fields.handle & 1) == 0) {
      puVar2 = System_IntPtr__op_Explicit_55103f0((intptr_t)handle.fields.handle,(MethodInfo *)0x0);
      obj = (Il2CppObject *)*puVar2;
      klass = method->rgctx_data->_0_T;
      bVar1 = (klass->_2).bitflags1;
    }
    else {
      obj = System_Runtime_InteropServices_GCHandle__GetTarget
                      ((intptr_t)handle.fields.handle,(MethodInfo *)0x0);
      klass = method->rgctx_data->_0_T;
      bVar1 = (klass->_2).bitflags1;
    }
    if ((bVar1 & 1) == 0) {
      klass = il2cpp_codegen_class_init_checked(klass);
    }
    if (obj == (Il2CppObject *)0x0) {
      pIVar3 = (Il2CppObject *)0x0;
    }
    else {
      pIVar3 = il2cpp_vm_Object_IsInst(obj,klass);
      if (pIVar3 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,klass);
      }
    }
  }
  return pIVar3;
}


// Gilzoide.FlexUi.Yoga.YGNode$$GetContext<__Il2CppFullySharedGenericType>
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Gilzoide_FlexUi_Yoga_YGNode__GetContext___Il2CppFullySharedGenericType_ (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo_378E780* method);
// 0x388e780
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x388e7f9: jmp 0x388e847

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Gilzoide_FlexUi_Yoga_YGNode__GetContext___Il2CppFullySharedGenericType_
          (Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo_378E780 *method)

{
  byte bVar1;
  long lVar2;
  Il2CppRGCTXData *pIVar3;
  System_Runtime_InteropServices_GCHandle_o handle;
  undefined8 *puVar4;
  Il2CppObject *pIVar5;
  Il2CppClass *klass;
  void *__src;
  MethodInfo *in_RDX;
  void *extraout_RDX;
  undefined1 *puVar6;
  ulong __n;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar7;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar8;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  pIVar3 = (in_RDX->field7_0x38).rgctx_data;
  if (pIVar3 == (Il2CppRGCTXData *)0x0) {
    uStack_40 = 0x388e7a8;
    il2cpp_codegen_rgctx_method_init(in_RDX);
    pIVar3 = (in_RDX->field7_0x38).rgctx_data;
  }
  __n = (ulong)(pIVar3->klass->_2).stack_slot_size;
  lVar2 = -(__n + 0xf & 0xfffffffffffffff0);
  *(undefined8 *)(auStack_38 + lVar2 + -8) = 0x388e7d2;
  handle = Gilzoide_FlexUi_Yoga_YGNode__GetContext(__this,(MethodInfo *)0x0);
  if (handle.fields.handle == 0) {
    *(undefined8 *)(auStack_38 + lVar2 + -8) = 0x388e808;
    memset(auStack_38 + lVar2,0,__n);
    UVar7.klass = memset(method,0,__n);
    UVar7.monitor = UVar7.monitor;
    return UVar7;
  }
  if (((ulong)handle.fields.handle & 1) == 0) {
    *(undefined8 *)(auStack_38 + lVar2 + -8) = 0x388e7e5;
    puVar4 = System_IntPtr__op_Explicit_55103f0((intptr_t)handle.fields.handle,(MethodInfo *)0x0);
    puVar6 = auStack_38 + lVar2;
    pIVar5 = (Il2CppObject *)*puVar4;
    klass = ((in_RDX->field7_0x38).rgctx_data)->klass;
    bVar1 = (klass->_2).bitflags1;
  }
  else {
    *(undefined8 *)(auStack_38 + lVar2 + -8) = 0x388e828;
    pIVar5 = System_Runtime_InteropServices_GCHandle__GetTarget
                       ((intptr_t)handle.fields.handle,(MethodInfo *)0x0);
    puVar6 = auStack_38 + lVar2;
    klass = ((in_RDX->field7_0x38).rgctx_data)->klass;
    bVar1 = (klass->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    puVar6 = auStack_38 + lVar2;
    *(undefined8 *)(auStack_38 + lVar2 + -8) = 0x388e844;
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  *(undefined8 *)(puVar6 + -8) = 0x388e852;
  __src = (void *)il2cpp_runtime_helper_030d6290(pIVar5,klass,auStack_38 + lVar2);
  *(undefined8 *)(puVar6 + -8) = 0x388e860;
  UVar8.klass = memcpy(method,__src,__n);
  UVar8.monitor = extraout_RDX;
  return UVar8;
}


// Gilzoide.FlexUi.Yoga.YGNode$$GetContext
// il2cpp: System_Runtime_InteropServices_GCHandle_o Gilzoide_FlexUi_Yoga_YGNode__GetContext (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x5317ef0

System_Runtime_InteropServices_GCHandle_o
Gilzoide_FlexUi_Yoga_YGNode__GetContext(Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

{
  intptr_t iVar1;
  System_Runtime_InteropServices_GCHandle_o SVar2;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_07542638 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeGetContext";
    local_20 = 0x15;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_07542638 = (code *)il2cpp_runtime_helper_03123230(&local_38);
    iVar1 = (*g_data_07542638)(iVar1);
  }
  else {
    iVar1 = (*g_data_07542638)(iVar1);
  }
  if (iVar1 == 0) {
    return (System_Runtime_InteropServices_GCHandle_o)0;
  }
  SVar2 = System_Runtime_InteropServices_GCHandle__FromIntPtr(iVar1,(MethodInfo *)0x0);
  return (System_Runtime_InteropServices_GCHandle_o)SVar2.fields.handle;
}


// Gilzoide.FlexUi.Yoga.YGNode$$SetMeasureFunc
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__SetMeasureFunc (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o* measureFunc, const MethodInfo* method);
// 0x5318480

void Gilzoide_FlexUi_Yoga_YGNode__SetMeasureFunc
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o *measureFunc,
               MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetMeasureFunc_5218490((__this->fields)._nodePtr,measureFunc,method);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$SetMeasureFunc
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__SetMeasureFunc (Gilzoide_FlexUi_Yoga_YGNode_o __this, intptr_t measureFunc, const MethodInfo* method);
// 0x5314f60

void Gilzoide_FlexUi_Yoga_YGNode__SetMeasureFunc_5214f60
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,intptr_t measureFunc,MethodInfo *method)

{
  intptr_t iVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_07542640;
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_07542640 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeSetMeasureFunc";
    uStack_28 = 0x19;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_07542640 = auVar2._0_8_;
  (*g_data_07542640)(iVar1,measureFunc,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$HasMeasureFunc
// il2cpp: bool Gilzoide_FlexUi_Yoga_YGNode__HasMeasureFunc (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x53146b0

bool Gilzoide_FlexUi_Yoga_YGNode__HasMeasureFunc(Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

{
  intptr_t iVar1;
  char cVar2;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  cVar2 = (*g_data_07542648)(iVar1);
  return cVar2 != '\0';
}


// Gilzoide.FlexUi.Yoga.YGNode$$SetDirty
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__SetDirty (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x5314730

void Gilzoide_FlexUi_Yoga_YGNode__SetDirty(Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

{
  intptr_t iVar1;
  char cVar2;
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_07542648 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeHasMeasureFunc";
    uStack_28 = 0x19;
    uStack_20 = 0x200000000;
    uStack_18 = 8;
    uStack_14 = 0;
    g_data_07542648 = (code *)il2cpp_runtime_helper_03123230(&pcStack_40);
    cVar2 = (*g_data_07542648)(iVar1);
  }
  else {
    cVar2 = (*g_data_07542648)(iVar1);
  }
  if (cVar2 == '\0') {
    return;
  }
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_07542650 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeSetDirty";
    uStack_28 = 0x13;
    uStack_20 = 0x200000000;
    uStack_18 = 8;
    uStack_14 = 0;
    g_data_07542650 = (code *)il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  (*g_data_07542650)(iVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$LayoutGetLeft
// il2cpp: float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetLeft (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x53170a0

float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetLeft(Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

{
  intptr_t iVar1;
  float fVar2;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  fVar2 = (float)(*g_data_07542660)(iVar1);
  return fVar2;
}


// Gilzoide.FlexUi.Yoga.YGNode$$LayoutGetTop
// il2cpp: float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetTop (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x5316fa0

float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetTop(Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

{
  intptr_t iVar1;
  float fVar2;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  fVar2 = (float)(*g_data_07542668)(iVar1);
  return fVar2;
}


// Gilzoide.FlexUi.Yoga.YGNode$$LayoutGetWidth
// il2cpp: float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetWidth (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x5317120

float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetWidth(Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

{
  intptr_t iVar1;
  float fVar2;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  fVar2 = (float)(*g_data_07542670)(iVar1);
  return fVar2;
}


// Gilzoide.FlexUi.Yoga.YGNode$$LayoutGetHeight
// il2cpp: float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetHeight (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x5317020

float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetHeight(Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

{
  intptr_t iVar1;
  float fVar2;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  fVar2 = (float)(*g_data_07542678)(iVar1);
  return fVar2;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetDirection
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetDirection (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t direction, const MethodInfo* method);
// 0x530fbf0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetDirection
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t direction,MethodInfo *method)

{
  intptr_t iVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_07542680;
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_07542680 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetDirection";
    uStack_28 = 0x1c;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_07542680 = auVar2._0_8_;
  (*g_data_07542680)(iVar1,direction,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexDirection
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexDirection (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t flexDirection, const MethodInfo* method);
// 0x530fda0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexDirection
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t flexDirection,MethodInfo *method)

{
  intptr_t iVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_07542688;
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_07542688 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetFlexDirection";
    uStack_28 = 0x20;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_07542688 = auVar2._0_8_;
  (*g_data_07542688)(iVar1,flexDirection,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetJustifyContent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetJustifyContent (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t justifyContent, const MethodInfo* method);
// 0x5310790

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetJustifyContent
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t justifyContent,MethodInfo *method)

{
  intptr_t iVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_07542690;
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_07542690 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetJustifyContent";
    uStack_28 = 0x21;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_07542690 = auVar2._0_8_;
  (*g_data_07542690)(iVar1,justifyContent,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetAlignContent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetAlignContent (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t alignContent, const MethodInfo* method);
// 0x5310ca0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetAlignContent
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t alignContent,MethodInfo *method)

{
  intptr_t iVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_07542698;
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_07542698 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetAlignContent";
    uStack_28 = 0x1f;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_07542698 = auVar2._0_8_;
  (*g_data_07542698)(iVar1,alignContent,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetAlignItems
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetAlignItems (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t alignItems, const MethodInfo* method);
// 0x5310940

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetAlignItems
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t alignItems,MethodInfo *method)

{
  intptr_t iVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_075426a0;
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_075426a0 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetAlignItems";
    uStack_28 = 0x1d;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_075426a0 = auVar2._0_8_;
  (*g_data_075426a0)(iVar1,alignItems,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetAlignSelf
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetAlignSelf (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t alignSelf, const MethodInfo* method);
// 0x5310af0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetAlignSelf
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t alignSelf,MethodInfo *method)

{
  intptr_t iVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_075426a8;
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_075426a8 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetAlignSelf";
    uStack_28 = 0x1c;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_075426a8 = auVar2._0_8_;
  (*g_data_075426a8)(iVar1,alignSelf,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPositionType
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPositionType (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t positionType, const MethodInfo* method);
// 0x530f4c0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPositionType
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t positionType,MethodInfo *method)

{
  intptr_t iVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_075426b0;
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_075426b0 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetPositionType";
    uStack_28 = 0x1f;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_075426b0 = auVar2._0_8_;
  (*g_data_075426b0)(iVar1,positionType,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexWrap
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexWrap (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t flexWrap, const MethodInfo* method);
// 0x530ff50

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexWrap
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t flexWrap,MethodInfo *method)

{
  intptr_t iVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_075426b8;
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_075426b8 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetFlexWrap";
    uStack_28 = 0x1b;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_075426b8 = auVar2._0_8_;
  (*g_data_075426b8)(iVar1,flexWrap,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexGrow
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexGrow (Gilzoide_FlexUi_Yoga_YGNode_o __this, float flexGrow, const MethodInfo* method);
// 0x5310400

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexGrow
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float flexGrow,MethodInfo *method)

{
  intptr_t iVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_075426c0)(flexGrow,iVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexShrink
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexShrink (Gilzoide_FlexUi_Yoga_YGNode_o __this, float flexShrink, const MethodInfo* method);
// 0x53105d0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexShrink
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float flexShrink,MethodInfo *method)

{
  intptr_t iVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_075426c8)(flexShrink,iVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexBasis
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasis (Gilzoide_FlexUi_Yoga_YGNode_o __this, float flexBasis, const MethodInfo* method);
// 0x5317a90

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasis_5217a90
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float flexBasis,MethodInfo *method)

{
  intptr_t iVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_075426d0)(flexBasis,iVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexBasisPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasisPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, float flexBasis, const MethodInfo* method);
// 0x5317b20

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasisPercent
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float flexBasis,MethodInfo *method)

{
  intptr_t iVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_075426d8)(flexBasis,iVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexBasisAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasisAuto (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x5317bb0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasisAuto
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

{
  intptr_t iVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_075426e0)(iVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPosition
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, float position, const MethodInfo* method);
// 0x53171b0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition_52171b0
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t edge,float position,MethodInfo *method)

{
  intptr_t iVar1;
  undefined1 auVar2 [16];
  char *local_40;
  undefined8 local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_075426e8;
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_075426e8 == (code *)0x0) {
    local_40 = "flex-ui";
    local_38 = 7;
    local_30 = "FlexUi_NodeStyleSetPosition";
    local_28 = 0x1b;
    local_20 = 0x200000000;
    local_18 = 0x10;
    local_14 = 0;
    auVar2 = il2cpp_runtime_helper_03123230(&local_40);
  }
  g_data_075426e8 = auVar2._0_8_;
  (*g_data_075426e8)(position,iVar1,edge,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPositionPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPositionPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, float position, const MethodInfo* method);
// 0x5317240

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPositionPercent
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t edge,float position,MethodInfo *method)

{
  intptr_t iVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_075426f0;
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_075426f0 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetPositionPercent";
    uStack_28 = 0x22;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_075426f0 = auVar2._0_8_;
  (*g_data_075426f0)(position,iVar1,edge,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMargin
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, float margin, const MethodInfo* method);
// 0x5317c30

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin_5217c30
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t edge,float margin,MethodInfo *method)

{
  intptr_t iVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_075426f8;
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_075426f8 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetMargin";
    uStack_28 = 0x19;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_075426f8 = auVar2._0_8_;
  (*g_data_075426f8)(margin,iVar1,edge,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMarginPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMarginPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, float margin, const MethodInfo* method);
// 0x5317cc0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMarginPercent
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t edge,float margin,MethodInfo *method)

{
  intptr_t iVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_07542700;
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_07542700 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetMarginPercent";
    uStack_28 = 0x20;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_07542700 = auVar2._0_8_;
  (*g_data_07542700)(margin,iVar1,edge,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMarginAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMarginAuto (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, const MethodInfo* method);
// 0x5317d50

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMarginAuto
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t edge,MethodInfo *method)

{
  intptr_t iVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_07542708;
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_07542708 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetMarginAuto";
    uStack_28 = 0x1d;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_07542708 = auVar2._0_8_;
  (*g_data_07542708)(iVar1,edge,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPadding
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, float padding, const MethodInfo* method);
// 0x5317dd0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding_5217dd0
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t edge,float padding,MethodInfo *method)

{
  intptr_t iVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_07542710;
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_07542710 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetPadding";
    uStack_28 = 0x1a;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_07542710 = auVar2._0_8_;
  (*g_data_07542710)(padding,iVar1,edge,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPaddingPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPaddingPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, float padding, const MethodInfo* method);
// 0x5317e60

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPaddingPercent
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t edge,float padding,MethodInfo *method)

{
  intptr_t iVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_07542718;
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_07542718 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetPaddingPercent";
    uStack_28 = 0x21;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_07542718 = auVar2._0_8_;
  (*g_data_07542718)(padding,iVar1,edge,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetGap
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetGap (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t gutter, float value, const MethodInfo* method);
// 0x5312c60

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetGap
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t gutter,float value,MethodInfo *method)

{
  intptr_t iVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_07542720;
  iVar1 = (__this->fields)._nodePtr;
  if (g_data_07542720 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetGap";
    uStack_28 = 0x16;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  g_data_07542720 = auVar2._0_8_;
  (*g_data_07542720)(value,iVar1,gutter,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidth (Gilzoide_FlexUi_Yoga_YGNode_o __this, float width, const MethodInfo* method);
// 0x53172d0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidth_52172d0
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float width,MethodInfo *method)

{
  intptr_t iVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_07542728)(width,iVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetWidthPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidthPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, float width, const MethodInfo* method);
// 0x5317360

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidthPercent
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float width,MethodInfo *method)

{
  intptr_t iVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_07542730)(width,iVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetWidthAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidthAuto (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x53173f0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidthAuto(Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

{
  intptr_t iVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_07542738)(iVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeight (Gilzoide_FlexUi_Yoga_YGNode_o __this, float height, const MethodInfo* method);
// 0x5317470

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeight_5217470
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float height,MethodInfo *method)

{
  intptr_t iVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_07542740)(height,iVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetHeightPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeightPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, float height, const MethodInfo* method);
// 0x5317500

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeightPercent
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float height,MethodInfo *method)

{
  intptr_t iVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_07542748)(height,iVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetHeightAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeightAuto (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x5317590

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeightAuto(Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

{
  intptr_t iVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_07542750)(iVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMinWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidth (Gilzoide_FlexUi_Yoga_YGNode_o __this, float minWidth, const MethodInfo* method);
// 0x5317610

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidth_5217610
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float minWidth,MethodInfo *method)

{
  intptr_t iVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_07542758)(minWidth,iVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMinWidthPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidthPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, float minWidth, const MethodInfo* method);
// 0x53176a0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidthPercent
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float minWidth,MethodInfo *method)

{
  intptr_t iVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_07542760)(minWidth,iVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMinHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeight (Gilzoide_FlexUi_Yoga_YGNode_o __this, float minHeight, const MethodInfo* method);
// 0x5317850

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeight_5217850
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float minHeight,MethodInfo *method)

{
  intptr_t iVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_07542768)(minHeight,iVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMinHeightPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeightPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, float minHeight, const MethodInfo* method);
// 0x53178e0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeightPercent
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float minHeight,MethodInfo *method)

{
  intptr_t iVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_07542770)(minHeight,iVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMaxWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidth (Gilzoide_FlexUi_Yoga_YGNode_o __this, float maxWidth, const MethodInfo* method);
// 0x5317730

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidth_5217730
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float maxWidth,MethodInfo *method)

{
  intptr_t iVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_07542778)(maxWidth,iVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMaxWidthPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidthPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, float maxWidth, const MethodInfo* method);
// 0x53177c0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidthPercent
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float maxWidth,MethodInfo *method)

{
  intptr_t iVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_07542780)(maxWidth,iVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMaxHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeight (Gilzoide_FlexUi_Yoga_YGNode_o __this, float maxHeight, const MethodInfo* method);
// 0x5317970

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeight_5217970
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float maxHeight,MethodInfo *method)

{
  intptr_t iVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_07542788)(maxHeight,iVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMaxHeightPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeightPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, float maxHeight, const MethodInfo* method);
// 0x5317a00

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeightPercent
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float maxHeight,MethodInfo *method)

{
  intptr_t iVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_07542790)(maxHeight,iVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetAspectRatio
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetAspectRatio (Gilzoide_FlexUi_Yoga_YGNode_o __this, float aspectRatio, const MethodInfo* method);
// 0x5311f80

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetAspectRatio
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float aspectRatio,MethodInfo *method)

{
  intptr_t iVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_07542798)(aspectRatio,iVar1);
  return;
}


