// Type: Gilzoide.FlexUi.Yoga.YGNode
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gilzoide.FlexUi/Gilzoide.FlexUi.Yoga/YGNode.cs
// Prior real C# source: none
// --------------------------------

// Gilzoide.FlexUi.Yoga.YGNode$$get_IsNull
// il2cpp: bool Gilzoide_FlexUi_Yoga_YGNode__get_IsNull (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3b224a0

bool_conflict Gilzoide_FlexUi_Yoga_YGNode__get_IsNull(Gilzoide_FlexUi_Yoga_YGNode_o __this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(long *)__this.fields._nodePtr == 0);
}


// Gilzoide.FlexUi.Yoga.YGNode$$.ctor
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode___ctor (Gilzoide_FlexUi_Yoga_YGNode_o __this, intptr_t nodePtr, const MethodInfo* method);
// 0x3b26420

void Gilzoide_FlexUi_Yoga_YGNode___ctor
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,intptr_t nodePtr,MethodInfo *method)

{
  *(intptr_t *)__this.fields._nodePtr = nodePtr;
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$Instantiate
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__Instantiate (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3b224b0

void Gilzoide_FlexUi_Yoga_YGNode__Instantiate(Gilzoide_FlexUi_Yoga_YGNode_o __this,MethodInfo *method)

{
  undefined8 uVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9a38 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeNew";
    local_20 = 0xe;
    local_18 = 0x200000000;
    local_10 = 0;
    local_c = 0;
    g_data_057a9a38 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  uVar1 = (*g_data_057a9a38)();
  *(undefined8 *)__this.fields._nodePtr = uVar1;
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$Dispose
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__Dispose (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3b239c0

void Gilzoide_FlexUi_Yoga_YGNode__Dispose(Gilzoide_FlexUi_Yoga_YGNode_o __this,MethodInfo *method)

{
  if (*(long *)__this.fields._nodePtr != 0) {
    Gilzoide_FlexUi_Yoga_YGNode__Free(__this,method);
    *(undefined8 *)__this.fields._nodePtr = 0;
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$ApplyTo
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__ApplyTo (Gilzoide_FlexUi_Yoga_YGNode_o __this, UnityEngine_RectTransform_o* rectTransform, const MethodInfo* method);
// 0x3b24310

void Gilzoide_FlexUi_Yoga_YGNode__ApplyTo
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,UnityEngine_RectTransform_o *rectTransform,
               MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  char *pcStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined8 *puStack_60;
  float local_4c;
  char *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9ab0 == (code *)0x0) {
    local_48 = "flex-ui";
    local_40 = 7;
    local_38 = "FlexUi_NodeLayoutGetTop";
    local_30 = 0x17;
    local_28 = 0x200000000;
    local_20 = 8;
    local_1c = 0;
    puStack_60 = (undefined8 *)0x3b2437e;
    g_data_057a9ab0 = (code *)il2cpp_runtime_helper_023055b0(&local_48);
  }
  puStack_60 = (undefined8 *)0x3b2438a;
  local_4c = (float)(*g_data_057a9ab0)(uVar1);
  puVar2 = *(undefined8 **)__this.fields._nodePtr;
  if (g_data_057a9ac0 == (code *)0x0) {
    local_48 = "flex-ui";
    local_40 = 7;
    local_38 = "FlexUi_NodeLayoutGetHeight";
    local_30 = 0x1a;
    local_28 = 0x200000000;
    local_20 = 8;
    local_1c = 0;
    puStack_60 = (undefined8 *)0x3b243ef;
    g_data_057a9ac0 = (code *)il2cpp_runtime_helper_023055b0(&local_48);
  }
  puStack_60 = (undefined8 *)0x3b243fb;
  puVar3 = puVar2;
  fVar4 = (float)(*g_data_057a9ac0)();
  if (rectTransform != (UnityEngine_RectTransform_o *)0x0) {
    puStack_60 = (undefined8 *)0x3b2441c;
    UnityEngine_RectTransform__SetInsetAndSizeFromParentEdge(rectTransform,2,local_4c,fVar4,(MethodInfo *)0x0)
    ;
    uVar1 = *(undefined8 *)__this.fields._nodePtr;
    if (g_data_057a9aa8 == (code *)0x0) {
      local_48 = "flex-ui";
      local_40 = 7;
      local_38 = "FlexUi_NodeLayoutGetLeft";
      local_30 = 0x18;
      local_28 = 0x200000000;
      local_20 = 8;
      local_1c = 0;
      puStack_60 = (undefined8 *)0x3b2447b;
      g_data_057a9aa8 = (code *)il2cpp_runtime_helper_023055b0(&local_48);
    }
    puStack_60 = (undefined8 *)0x3b24487;
    local_4c = (float)(*g_data_057a9aa8)(uVar1);
    uVar1 = *(undefined8 *)__this.fields._nodePtr;
    if (g_data_057a9ab8 == (code *)0x0) {
      local_48 = "flex-ui";
      local_40 = 7;
      local_38 = "FlexUi_NodeLayoutGetWidth";
      local_30 = 0x19;
      local_28 = 0x200000000;
      local_20 = 8;
      local_1c = 0;
      puStack_60 = (undefined8 *)0x3b244ec;
      g_data_057a9ab8 = (code *)il2cpp_runtime_helper_023055b0(&local_48);
    }
    puStack_60 = (undefined8 *)0x3b244f8;
    fVar4 = (float)(*g_data_057a9ab8)(uVar1);
    puStack_60 = (undefined8 *)0x3b2450d;
    UnityEngine_RectTransform__SetInsetAndSizeFromParentEdge(rectTransform,0,local_4c,fVar4,(MethodInfo *)0x0)
    ;
    return;
  }
  puStack_60 = (undefined8 *)0x3b2451c;
  il2cpp_runtime_helper_022b2c90();
  uVar1 = *puVar3;
  puStack_60 = puVar2;
  if (g_data_057a9a68 == (code *)0x0) {
    pcStack_90 = "flex-ui";
    uStack_88 = 7;
    pcStack_80 = "FlexUi_NodeGetChildCount";
    uStack_78 = 0x18;
    uStack_70 = 0x200000000;
    uStack_68 = 8;
    uStack_64 = 0;
    g_data_057a9a68 = (code *)il2cpp_runtime_helper_023055b0(&pcStack_90);
  }
  (*g_data_057a9a68)(uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$Equals
// il2cpp: bool Gilzoide_FlexUi_Yoga_YGNode__Equals (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGNode_o other, const MethodInfo* method);
// 0x3b26800

bool_conflict
Gilzoide_FlexUi_Yoga_YGNode__Equals
          (Gilzoide_FlexUi_Yoga_YGNode_o __this,Gilzoide_FlexUi_Yoga_YGNode_o other,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  (Gilzoide_FlexUi_Yoga_YGNode_Fields)*__this.fields._nodePtr == other.fields._nodePtr);
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPosition
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b1ea90

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,int32_t edge,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

{
  code *pcVar1;
  undefined8 uVar2;
  System_ArgumentOutOfRangeException_o *__this_00;
  System_String_o *paramName;
  System_String_o *message;
  ulong uVar3;
  char *local_40;
  undefined8 local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if ((uint)value.fields.Unit < 4) {
    uVar3 = (ulong)value.fields & 0xffffffff;
    switch((long)&switchD_03b1eabb::switchdataD_00d204bc +
           (long)(int)(&switchD_03b1eabb::switchdataD_00d204bc)[(ulong)value.fields >> 0x20]) {
    case 0x3b1eabd:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      if (g_data_057a9b30 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetPosition";
        local_28 = 0x1b;
        local_20 = 0x200000000;
        local_18 = 0x10;
        local_14 = 0;
        g_data_057a9b30 = (code *)il2cpp_runtime_helper_023055b0(&local_40);
      }
      uVar3 = SUB168(ZEXT416(0x7fc00000),0);
      pcVar1 = g_data_057a9b30;
      break;
    case 0x3b1eb30:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = g_data_057a9b38;
      if (g_data_057a9b38 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetPositionPercent";
        local_28 = 0x22;
        local_20 = 0x200000000;
        local_18 = 0x10;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_023055b0(&local_40);
        uVar3 = (ulong)value.fields & 0xffffffff;
        g_data_057a9b38 = pcVar1;
      }
      break;
    case 0x3b1eba8:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = g_data_057a9b30;
      if (g_data_057a9b30 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetPosition";
        local_28 = 0x1b;
        local_20 = 0x200000000;
        local_18 = 0x10;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_023055b0(&local_40);
        uVar3 = (ulong)value.fields & 0xffffffff;
        g_data_057a9b30 = pcVar1;
      }
      break;
    case 0x3b1ec29:
      uVar2 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentOutOfRangeException);
      __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_helper_023052d0(uVar2);
      paramName = (System_String_o *)il2cpp_runtime_helper_023445d0(&"value");
      message = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Auto is not supported for position");
      System_ArgumentOutOfRangeException___ctor_3c0eb50(__this_00,paramName,message,(MethodInfo *)0x0);
      uVar2 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_StyleSetPosition);
      il2cpp_runtime_helper_022b2b10(__this_00,uVar2);
      return;
    }
    (*pcVar1)(uVar3,uVar2,edge);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidth (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b20350

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidth
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if ((uint)value.fields.Unit < 4) {
    uVar3 = (ulong)value.fields & 0xffffffff;
    switch((long)&switchD_03b20377::switchdataD_00d204dc +
           (long)(int)(&switchD_03b20377::switchdataD_00d204dc)[(ulong)value.fields >> 0x20]) {
    case 0x3b20379:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      if (g_data_057a9b70 == (code *)0x0) {
        local_38 = "flex-ui";
        local_30 = 7;
        local_28 = "FlexUi_NodeStyleSetWidth";
        local_20 = 0x18;
        local_18 = 0x200000000;
        local_10 = 0xc;
        local_c = 0;
        g_data_057a9b70 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
      }
      uVar3 = SUB168(ZEXT416(0x7fc00000),0);
      pcVar1 = g_data_057a9b70;
      break;
    case 0x3b203ec:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = g_data_057a9b70;
      if (g_data_057a9b70 == (code *)0x0) {
        local_38 = "flex-ui";
        local_30 = 7;
        local_28 = "FlexUi_NodeStyleSetWidth";
        local_20 = 0x18;
        local_18 = 0x200000000;
        local_10 = 0xc;
        local_c = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
        uVar3 = (ulong)value.fields & 0xffffffff;
        g_data_057a9b70 = pcVar1;
      }
      break;
    case 0x3b20464:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = g_data_057a9b78;
      if (g_data_057a9b78 == (code *)0x0) {
        local_38 = "flex-ui";
        local_30 = 7;
        local_28 = "FlexUi_NodeStyleSetWidthPercent";
        local_20 = 0x1f;
        local_18 = 0x200000000;
        local_10 = 0xc;
        local_c = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
        uVar3 = (ulong)value.fields & 0xffffffff;
        g_data_057a9b78 = pcVar1;
      }
      break;
    case 0x3b204e1:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      if (g_data_057a9b80 == (code *)0x0) {
        local_38 = "flex-ui";
        local_30 = 7;
        local_28 = "FlexUi_NodeStyleSetWidthAuto";
        local_20 = 0x1c;
        local_18 = 0x200000000;
        local_10 = 8;
        local_c = 0;
        g_data_057a9b80 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
      }
      (*g_data_057a9b80)(uVar2);
      return;
    }
    (*pcVar1)(uVar3,uVar2);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeight (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b20650

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeight
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if ((uint)value.fields.Unit < 4) {
    uVar3 = (ulong)value.fields & 0xffffffff;
    switch((long)&switchD_03b20677::switchdataD_00d204ec +
           (long)(int)(&switchD_03b20677::switchdataD_00d204ec)[(ulong)value.fields >> 0x20]) {
    case 0x3b20679:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      if (g_data_057a9b88 == (code *)0x0) {
        local_38 = "flex-ui";
        local_30 = 7;
        local_28 = "FlexUi_NodeStyleSetHeight";
        local_20 = 0x19;
        local_18 = 0x200000000;
        local_10 = 0xc;
        local_c = 0;
        g_data_057a9b88 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
      }
      uVar3 = SUB168(ZEXT416(0x7fc00000),0);
      pcVar1 = g_data_057a9b88;
      break;
    case 0x3b206ec:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = g_data_057a9b88;
      if (g_data_057a9b88 == (code *)0x0) {
        local_38 = "flex-ui";
        local_30 = 7;
        local_28 = "FlexUi_NodeStyleSetHeight";
        local_20 = 0x19;
        local_18 = 0x200000000;
        local_10 = 0xc;
        local_c = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
        uVar3 = (ulong)value.fields & 0xffffffff;
        g_data_057a9b88 = pcVar1;
      }
      break;
    case 0x3b20764:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = g_data_057a9b90;
      if (g_data_057a9b90 == (code *)0x0) {
        local_38 = "flex-ui";
        local_30 = 7;
        local_28 = "FlexUi_NodeStyleSetHeightPercent";
        local_20 = 0x20;
        local_18 = 0x200000000;
        local_10 = 0xc;
        local_c = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
        uVar3 = (ulong)value.fields & 0xffffffff;
        g_data_057a9b90 = pcVar1;
      }
      break;
    case 0x3b207e1:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      if (g_data_057a9b98 == (code *)0x0) {
        local_38 = "flex-ui";
        local_30 = 7;
        local_28 = "FlexUi_NodeStyleSetHeightAuto";
        local_20 = 0x1d;
        local_18 = 0x200000000;
        local_10 = 8;
        local_c = 0;
        g_data_057a9b98 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
      }
      (*g_data_057a9b98)(uVar2);
      return;
    }
    (*pcVar1)(uVar3,uVar2);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMinWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidth (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b20950

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidth
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  code *pcVar1;
  undefined8 uVar2;
  System_ArgumentOutOfRangeException_o *__this_00;
  System_String_o *paramName;
  System_String_o *message;
  ulong uVar3;
  char *local_40;
  undefined8 local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if ((uint)value.fields.Unit < 4) {
    uVar3 = (ulong)value.fields & 0xffffffff;
    switch((long)&switchD_03b20979::switchdataD_00d204fc +
           (long)(int)(&switchD_03b20979::switchdataD_00d204fc)[(ulong)value.fields >> 0x20]) {
    case 0x3b2097b:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      if (g_data_057a9ba0 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMinWidth";
        local_28 = 0x1b;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        g_data_057a9ba0 = (code *)il2cpp_runtime_helper_023055b0(&local_40);
      }
      uVar3 = SUB168(ZEXT416(0x7fc00000),0);
      pcVar1 = g_data_057a9ba0;
      break;
    case 0x3b209ee:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = g_data_057a9ba8;
      if (g_data_057a9ba8 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMinWidthPercent";
        local_28 = 0x22;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_023055b0(&local_40);
        uVar3 = (ulong)value.fields & 0xffffffff;
        g_data_057a9ba8 = pcVar1;
      }
      break;
    case 0x3b20a66:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = g_data_057a9ba0;
      if (g_data_057a9ba0 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMinWidth";
        local_28 = 0x1b;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_023055b0(&local_40);
        uVar3 = (ulong)value.fields & 0xffffffff;
        g_data_057a9ba0 = pcVar1;
      }
      break;
    case 0x3b20ae5:
      uVar2 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentOutOfRangeException);
      __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_helper_023052d0(uVar2);
      paramName = (System_String_o *)il2cpp_runtime_helper_023445d0(&"value");
      message = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Auto is not supported for min width");
      System_ArgumentOutOfRangeException___ctor_3c0eb50(__this_00,paramName,message,(MethodInfo *)0x0);
      uVar2 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_StyleSetMinWidth);
      il2cpp_runtime_helper_022b2b10(__this_00,uVar2);
      return;
    }
    (*pcVar1)(uVar3,uVar2);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMaxWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidth (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b20f10

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidth
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  code *pcVar1;
  undefined8 uVar2;
  System_ArgumentOutOfRangeException_o *__this_00;
  System_String_o *paramName;
  System_String_o *message;
  ulong uVar3;
  char *local_40;
  undefined8 local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if ((uint)value.fields.Unit < 4) {
    uVar3 = (ulong)value.fields & 0xffffffff;
    switch((long)&switchD_03b20f39::switchdataD_00d2051c +
           (long)(int)(&switchD_03b20f39::switchdataD_00d2051c)[(ulong)value.fields >> 0x20]) {
    case 0x3b20f3b:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      if (g_data_057a9bc0 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMaxWidth";
        local_28 = 0x1b;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        g_data_057a9bc0 = (code *)il2cpp_runtime_helper_023055b0(&local_40);
      }
      uVar3 = SUB168(ZEXT416(0x7fc00000),0);
      pcVar1 = g_data_057a9bc0;
      break;
    case 0x3b20fae:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = g_data_057a9bc8;
      if (g_data_057a9bc8 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMaxWidthPercent";
        local_28 = 0x22;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_023055b0(&local_40);
        uVar3 = (ulong)value.fields & 0xffffffff;
        g_data_057a9bc8 = pcVar1;
      }
      break;
    case 0x3b21026:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = g_data_057a9bc0;
      if (g_data_057a9bc0 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMaxWidth";
        local_28 = 0x1b;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_023055b0(&local_40);
        uVar3 = (ulong)value.fields & 0xffffffff;
        g_data_057a9bc0 = pcVar1;
      }
      break;
    case 0x3b210a5:
      uVar2 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentOutOfRangeException);
      __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_helper_023052d0(uVar2);
      paramName = (System_String_o *)il2cpp_runtime_helper_023445d0(&"value");
      message = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Auto is not supported for max width");
      System_ArgumentOutOfRangeException___ctor_3c0eb50(__this_00,paramName,message,(MethodInfo *)0x0);
      uVar2 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_StyleSetMaxWidth);
      il2cpp_runtime_helper_022b2b10(__this_00,uVar2);
      return;
    }
    (*pcVar1)(uVar3,uVar2);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMinHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeight (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b20c30

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeight
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  code *pcVar1;
  undefined8 uVar2;
  System_ArgumentOutOfRangeException_o *__this_00;
  System_String_o *paramName;
  System_String_o *message;
  ulong uVar3;
  char *local_40;
  undefined8 local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if ((uint)value.fields.Unit < 4) {
    uVar3 = (ulong)value.fields & 0xffffffff;
    switch((long)&switchD_03b20c59::switchdataD_00d2050c +
           (long)(int)(&switchD_03b20c59::switchdataD_00d2050c)[(ulong)value.fields >> 0x20]) {
    case 0x3b20c5b:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      if (g_data_057a9bb0 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMinHeight";
        local_28 = 0x1c;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        g_data_057a9bb0 = (code *)il2cpp_runtime_helper_023055b0(&local_40);
      }
      uVar3 = SUB168(ZEXT416(0x7fc00000),0);
      pcVar1 = g_data_057a9bb0;
      break;
    case 0x3b20cce:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = g_data_057a9bb8;
      if (g_data_057a9bb8 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMinHeightPercent";
        local_28 = 0x23;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_023055b0(&local_40);
        uVar3 = (ulong)value.fields & 0xffffffff;
        g_data_057a9bb8 = pcVar1;
      }
      break;
    case 0x3b20d46:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = g_data_057a9bb0;
      if (g_data_057a9bb0 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMinHeight";
        local_28 = 0x1c;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_023055b0(&local_40);
        uVar3 = (ulong)value.fields & 0xffffffff;
        g_data_057a9bb0 = pcVar1;
      }
      break;
    case 0x3b20dc5:
      uVar2 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentOutOfRangeException);
      __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_helper_023052d0(uVar2);
      paramName = (System_String_o *)il2cpp_runtime_helper_023445d0(&"value");
      message = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Auto is not supported for min height");
      System_ArgumentOutOfRangeException___ctor_3c0eb50(__this_00,paramName,message,(MethodInfo *)0x0);
      uVar2 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_StyleSetMinHeight);
      il2cpp_runtime_helper_022b2b10(__this_00,uVar2);
      return;
    }
    (*pcVar1)(uVar3,uVar2);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMaxHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeight (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b211f0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeight
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  code *pcVar1;
  undefined8 uVar2;
  System_ArgumentOutOfRangeException_o *__this_00;
  System_String_o *paramName;
  System_String_o *message;
  ulong uVar3;
  char *local_40;
  undefined8 local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if ((uint)value.fields.Unit < 4) {
    uVar3 = (ulong)value.fields & 0xffffffff;
    switch((long)&switchD_03b21219::switchdataD_00d2052c +
           (long)(int)(&switchD_03b21219::switchdataD_00d2052c)[(ulong)value.fields >> 0x20]) {
    case 0x3b2121b:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      if (g_data_057a9bd0 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMaxHeight";
        local_28 = 0x1c;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        g_data_057a9bd0 = (code *)il2cpp_runtime_helper_023055b0(&local_40);
      }
      uVar3 = SUB168(ZEXT416(0x7fc00000),0);
      pcVar1 = g_data_057a9bd0;
      break;
    case 0x3b2128e:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = g_data_057a9bd8;
      if (g_data_057a9bd8 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMaxHeightPercent";
        local_28 = 0x23;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_023055b0(&local_40);
        uVar3 = (ulong)value.fields & 0xffffffff;
        g_data_057a9bd8 = pcVar1;
      }
      break;
    case 0x3b21306:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = g_data_057a9bd0;
      if (g_data_057a9bd0 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMaxHeight";
        local_28 = 0x1c;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_023055b0(&local_40);
        uVar3 = (ulong)value.fields & 0xffffffff;
        g_data_057a9bd0 = pcVar1;
      }
      break;
    case 0x3b21385:
      uVar2 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentOutOfRangeException);
      __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_helper_023052d0(uVar2);
      paramName = (System_String_o *)il2cpp_runtime_helper_023445d0(&"value");
      message = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Auto is not supported for max height");
      System_ArgumentOutOfRangeException___ctor_3c0eb50(__this_00,paramName,message,(MethodInfo *)0x0);
      uVar2 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_StyleSetMaxHeight);
      il2cpp_runtime_helper_022b2b10(__this_00,uVar2);
      return;
    }
    (*pcVar1)(uVar3,uVar2);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexBasis
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasis (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b1f590

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasis
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if ((uint)value.fields.Unit < 4) {
    uVar3 = (ulong)value.fields & 0xffffffff;
    switch((long)&switchD_03b1f5b7::switchdataD_00d204cc +
           (long)(int)(&switchD_03b1f5b7::switchdataD_00d204cc)[(ulong)value.fields >> 0x20]) {
    case 0x3b1f5b9:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      if (g_data_057a9b18 == (code *)0x0) {
        local_38 = "flex-ui";
        local_30 = 7;
        local_28 = "FlexUi_NodeStyleSetFlexBasis";
        local_20 = 0x1c;
        local_18 = 0x200000000;
        local_10 = 0xc;
        local_c = 0;
        g_data_057a9b18 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
      }
      uVar3 = SUB168(ZEXT416(0x7fc00000),0);
      pcVar1 = g_data_057a9b18;
      break;
    case 0x3b1f62c:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = g_data_057a9b18;
      if (g_data_057a9b18 == (code *)0x0) {
        local_38 = "flex-ui";
        local_30 = 7;
        local_28 = "FlexUi_NodeStyleSetFlexBasis";
        local_20 = 0x1c;
        local_18 = 0x200000000;
        local_10 = 0xc;
        local_c = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
        uVar3 = (ulong)value.fields & 0xffffffff;
        g_data_057a9b18 = pcVar1;
      }
      break;
    case 0x3b1f6a4:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = g_data_057a9b20;
      if (g_data_057a9b20 == (code *)0x0) {
        local_38 = "flex-ui";
        local_30 = 7;
        local_28 = "FlexUi_NodeStyleSetFlexBasisPercent";
        local_20 = 0x23;
        local_18 = 0x200000000;
        local_10 = 0xc;
        local_c = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
        uVar3 = (ulong)value.fields & 0xffffffff;
        g_data_057a9b20 = pcVar1;
      }
      break;
    case 0x3b1f721:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      if (g_data_057a9b28 == (code *)0x0) {
        local_38 = "flex-ui";
        local_30 = 7;
        local_28 = "FlexUi_NodeStyleSetFlexBasisAuto";
        local_20 = 0x20;
        local_18 = 0x200000000;
        local_10 = 8;
        local_c = 0;
        g_data_057a9b28 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
      }
      (*g_data_057a9b28)(uVar2);
      return;
    }
    (*pcVar1)(uVar3,uVar2);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMargin
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b216c0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,int32_t edge,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  char *local_40;
  undefined8 local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if ((uint)value.fields.Unit < 4) {
    uVar3 = (ulong)value.fields & 0xffffffff;
    switch((long)&switchD_03b216eb::switchdataD_00d2053c +
           (long)(int)(&switchD_03b216eb::switchdataD_00d2053c)[(ulong)value.fields >> 0x20]) {
    case 0x3b216ed:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      if (g_data_057a9b40 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMargin";
        local_28 = 0x19;
        local_20 = 0x200000000;
        local_18 = 0x10;
        local_14 = 0;
        g_data_057a9b40 = (code *)il2cpp_runtime_helper_023055b0(&local_40);
      }
      uVar3 = SUB168(ZEXT416(0x7fc00000),0);
      pcVar1 = g_data_057a9b40;
      break;
    case 0x3b21760:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = g_data_057a9b40;
      if (g_data_057a9b40 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMargin";
        local_28 = 0x19;
        local_20 = 0x200000000;
        local_18 = 0x10;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_023055b0(&local_40);
        uVar3 = (ulong)value.fields & 0xffffffff;
        g_data_057a9b40 = pcVar1;
      }
      break;
    case 0x3b217d8:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = g_data_057a9b48;
      if (g_data_057a9b48 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMarginPercent";
        local_28 = 0x20;
        local_20 = 0x200000000;
        local_18 = 0x10;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_023055b0(&local_40);
        uVar3 = (ulong)value.fields & 0xffffffff;
        g_data_057a9b48 = pcVar1;
      }
      break;
    case 0x3b21859:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      if (g_data_057a9b50 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMarginAuto";
        local_28 = 0x1d;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        g_data_057a9b50 = (code *)il2cpp_runtime_helper_023055b0(&local_40);
      }
      (*g_data_057a9b50)(uVar2,edge);
      return;
    }
    (*pcVar1)(uVar3,uVar2,edge);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPadding
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b21c90

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,int32_t edge,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

{
  code *pcVar1;
  undefined8 uVar2;
  System_ArgumentOutOfRangeException_o *__this_00;
  System_String_o *paramName;
  System_String_o *message;
  ulong uVar3;
  char *local_40;
  undefined8 local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if ((uint)value.fields.Unit < 4) {
    uVar3 = (ulong)value.fields & 0xffffffff;
    switch((long)&switchD_03b21cbb::switchdataD_00d2054c +
           (long)(int)(&switchD_03b21cbb::switchdataD_00d2054c)[(ulong)value.fields >> 0x20]) {
    case 0x3b21cbd:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      if (g_data_057a9b58 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetPadding";
        local_28 = 0x1a;
        local_20 = 0x200000000;
        local_18 = 0x10;
        local_14 = 0;
        g_data_057a9b58 = (code *)il2cpp_runtime_helper_023055b0(&local_40);
      }
      uVar3 = SUB168(ZEXT416(0x7fc00000),0);
      pcVar1 = g_data_057a9b58;
      break;
    case 0x3b21d30:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = g_data_057a9b60;
      if (g_data_057a9b60 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetPaddingPercent";
        local_28 = 0x21;
        local_20 = 0x200000000;
        local_18 = 0x10;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_023055b0(&local_40);
        uVar3 = (ulong)value.fields & 0xffffffff;
        g_data_057a9b60 = pcVar1;
      }
      break;
    case 0x3b21da8:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = g_data_057a9b58;
      if (g_data_057a9b58 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetPadding";
        local_28 = 0x1a;
        local_20 = 0x200000000;
        local_18 = 0x10;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_runtime_helper_023055b0(&local_40);
        uVar3 = (ulong)value.fields & 0xffffffff;
        g_data_057a9b58 = pcVar1;
      }
      break;
    case 0x3b21e29:
      uVar2 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentOutOfRangeException);
      __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_helper_023052d0(uVar2);
      paramName = (System_String_o *)il2cpp_runtime_helper_023445d0(&"value");
      message = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Auto is not supported for padding");
      System_ArgumentOutOfRangeException___ctor_3c0eb50(__this_00,paramName,message,(MethodInfo *)0x0);
      uVar2 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_StyleSetPadding);
      il2cpp_runtime_helper_022b2b10(__this_00,uVar2);
      return;
    }
    (*pcVar1)(uVar3,uVar2,edge);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$Free
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__Free (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3b264b0

void Gilzoide_FlexUi_Yoga_YGNode__Free(Gilzoide_FlexUi_Yoga_YGNode_o __this,MethodInfo *method)

{
  undefined8 uVar1;
  intptr_t value;
  System_Runtime_InteropServices_GCHandle_Fields local_48;
  char *local_40;
  undefined8 local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  local_48.handle = 0;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9a80 == (code *)0x0) {
    local_40 = "flex-ui";
    local_38 = 7;
    local_30 = "FlexUi_NodeGetContext";
    local_28 = 0x15;
    local_20 = 0x200000000;
    local_18 = 8;
    local_14 = 0;
    g_data_057a9a80 = (code *)il2cpp_runtime_helper_023055b0(&local_40);
    value = (*g_data_057a9a80)(uVar1);
  }
  else {
    value = (*g_data_057a9a80)(uVar1);
  }
  if (value == 0) {
    local_48.handle = 0;
    uVar1 = *(undefined8 *)__this.fields._nodePtr;
  }
  else {
    local_48.handle = (intptr_t)System_Runtime_InteropServices_GCHandle__FromIntPtr(value,(MethodInfo *)0x0);
    if (local_48.handle != 0) {
      System_Runtime_InteropServices_GCHandle__Free
                ((System_Runtime_InteropServices_GCHandle_o)&local_48,(MethodInfo *)0x0);
    }
    uVar1 = *(undefined8 *)__this.fields._nodePtr;
  }
  if (g_data_057a9a40 == (code *)0x0) {
    local_40 = "flex-ui";
    local_38 = 7;
    local_30 = "FlexUi_NodeFree";
    local_28 = 0xf;
    local_20 = 0x200000000;
    local_18 = 8;
    local_14 = 0;
    g_data_057a9a40 = (code *)il2cpp_runtime_helper_023055b0(&local_40);
  }
  (*g_data_057a9a40)(uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$CalculateLayout
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__CalculateLayout (Gilzoide_FlexUi_Yoga_YGNode_o __this, float availableWidth, float availableHeight, int32_t ownerDirection, const MethodInfo* method);
// 0x3b24270

void Gilzoide_FlexUi_Yoga_YGNode__CalculateLayout
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,float availableWidth,float availableHeight,
               int32_t ownerDirection,MethodInfo *method)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_057a9a48;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9a48 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeCalculateLayout";
    uStack_28 = 0x1a;
    uStack_20 = 0x200000000;
    uStack_18 = 0x14;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9a48 = auVar2._0_8_;
  (*g_data_057a9a48)(availableWidth,availableHeight,uVar1,ownerDirection,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$InsertChild
// il2cpp: bool Gilzoide_FlexUi_Yoga_YGNode__InsertChild (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGNode_o child, int32_t index, const MethodInfo* method);
// 0x3b24a30

bool_conflict
Gilzoide_FlexUi_Yoga_YGNode__InsertChild
          (Gilzoide_FlexUi_Yoga_YGNode_o __this,Gilzoide_FlexUi_Yoga_YGNode_o child,int32_t index,
          MethodInfo *method)

{
  undefined8 uVar1;
  Il2CppObject *message;
  undefined4 in_register_00000014;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  bool_conflict bVar2;
  char *local_50;
  undefined8 local_48;
  char *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000014,index);
  if (g_data_057a9a00 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    g_data_057a9a00 = '\x01';
    method_00 = extraout_RDX;
  }
  Gilzoide_FlexUi_Yoga_YGNode__SetContext(__this,(System_Runtime_InteropServices_GCHandle_o)0x0,method_00);
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9a88 == (code *)0x0) {
    local_50 = "flex-ui";
    local_48 = 7;
    local_40 = "FlexUi_NodeSetMeasureFunc";
    local_38 = 0x19;
    local_30 = 0x200000000;
    local_28 = 0x10;
    local_24 = 0;
    g_data_057a9a88 = (code *)il2cpp_runtime_helper_023055b0(&local_50);
  }
  (*g_data_057a9a88)(uVar1,0);
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9a50 == (code *)0x0) {
    local_50 = "flex-ui";
    local_48 = 7;
    local_40 = "FlexUi_NodeInsertChild";
    local_38 = 0x16;
    local_30 = 0x200000000;
    local_28 = 0x14;
    local_24 = 0;
    g_data_057a9a50 = (code *)il2cpp_runtime_helper_023055b0(&local_50);
  }
  uVar1 = (*g_data_057a9a50)(uVar1,child.fields._nodePtr,index);
  message = (Il2CppObject *)il2cpp_runtime_helper_02305c00(uVar1);
  il2cpp_runtime_helper_02305a80(uVar1);
  if (message == (Il2CppObject *)0x0) {
    bVar2 = (bool_conflict)CONCAT71((int7)((ulong)uVar1 >> 8),1);
  }
  else {
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = 0;
    UnityEngine_Debug__LogError(message,(MethodInfo *)0x0);
  }
  return bVar2;
}


// Gilzoide.FlexUi.Yoga.YGNode$$RemoveChild
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__RemoveChild (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGNode_o child, const MethodInfo* method);
// 0x3b24ba0

void Gilzoide_FlexUi_Yoga_YGNode__RemoveChild
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,Gilzoide_FlexUi_Yoga_YGNode_o child,MethodInfo *method)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_057a9a58;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9a58 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeRemoveChild";
    uStack_28 = 0x16;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9a58 = auVar2._0_8_;
  (*g_data_057a9a58)(uVar1,child.fields._nodePtr,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$RemoveAllChildren
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__RemoveAllChildren (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3b24da0

void Gilzoide_FlexUi_Yoga_YGNode__RemoveAllChildren(Gilzoide_FlexUi_Yoga_YGNode_o __this,MethodInfo *method)

{
  undefined8 uVar1;
  char *pcStack_38;
  undefined8 uStack_30;
  char *pcStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined4 uStack_10;
  undefined1 uStack_c;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9a60 == (code *)0x0) {
    pcStack_38 = "flex-ui";
    uStack_30 = 7;
    pcStack_28 = "FlexUi_NodeRemoveAllChildren";
    uStack_20 = 0x1c;
    uStack_18 = 0x200000000;
    uStack_10 = 8;
    uStack_c = 0;
    g_data_057a9a60 = (code *)il2cpp_runtime_helper_023055b0(&pcStack_38);
  }
  (*g_data_057a9a60)(uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$GetChildCount
// il2cpp: int32_t Gilzoide_FlexUi_Yoga_YGNode__GetChildCount (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3b24520

int32_t Gilzoide_FlexUi_Yoga_YGNode__GetChildCount(Gilzoide_FlexUi_Yoga_YGNode_o __this,MethodInfo *method)

{
  undefined8 uVar1;
  int32_t iVar2;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9a68 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeGetChildCount";
    local_20 = 0x18;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_057a9a68 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  iVar2 = (*g_data_057a9a68)(uVar1);
  return iVar2;
}


// Gilzoide.FlexUi.Yoga.YGNode$$SetConfig
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__SetConfig (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGConfig_o config, const MethodInfo* method);
// 0x3b1e5c0

void Gilzoide_FlexUi_Yoga_YGNode__SetConfig
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,Gilzoide_FlexUi_Yoga_YGConfig_o config,MethodInfo *method
               )

{
  undefined8 uVar1;
  Il2CppObject *message;
  char *local_40;
  undefined8 local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if (g_data_057a9a01 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    g_data_057a9a01 = '\x01';
  }
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9a70 == (code *)0x0) {
    local_40 = "flex-ui";
    local_38 = 7;
    local_30 = "FlexUi_NodeSetConfig";
    local_28 = 0x14;
    local_20 = 0x200000000;
    local_18 = 0x10;
    local_14 = 0;
    g_data_057a9a70 = (code *)il2cpp_runtime_helper_023055b0(&local_40);
  }
  uVar1 = (*g_data_057a9a70)(uVar1);
  message = (Il2CppObject *)il2cpp_runtime_helper_02305c00(uVar1);
  il2cpp_runtime_helper_02305a80(uVar1);
  if (message != (Il2CppObject *)0x0) {
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__LogError(message,(MethodInfo *)0x0);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$SetContext<object>
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__SetContext_object_ (Gilzoide_FlexUi_Yoga_YGNode_o __this, Il2CppObject* value, const MethodInfo_2663060* method);
// 0x2763060

void Gilzoide_FlexUi_Yoga_YGNode__SetContext_object_
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,Il2CppObject *value,MethodInfo_2663060 *method)

{
  System_Runtime_InteropServices_GCHandle_o value_00;
  
  value_00 = System_Runtime_InteropServices_GCHandle__Alloc(value,(MethodInfo *)0x0);
  Gilzoide_FlexUi_Yoga_YGNode__SetContext(__this,value_00,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$SetContext<__Il2CppFullySharedGenericType>
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__SetContext___Il2CppFullySharedGenericType_ (Gilzoide_FlexUi_Yoga_YGNode_o __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_2663080* method);
// 0x2763080

void Gilzoide_FlexUi_Yoga_YGNode__SetContext___Il2CppFullySharedGenericType_
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,MethodInfo_2663080 *method)

{
  long lVar1;
  long lVar2;
  Il2CppObject *value_00;
  System_Runtime_InteropServices_GCHandle_o value_01;
  void *pvVar3;
  ulong __n;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar4;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  long *plVar5;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_30;
  
  pvVar3 = value.monitor;
  pUVar4 = value.klass;
  plVar5 = *(long **)((long)pvVar3 + 0x38);
  local_30 = pUVar4;
  if (plVar5 == (long *)0x0) {
    uStack_40 = 0x27630ad;
    il2cpp_runtime_helper_02300a20(pvVar3);
    plVar5 = *(long **)((long)pvVar3 + 0x38);
  }
  __n = (ulong)*(uint *)(*plVar5 + 0xfc);
  lVar2 = -(__n + 0xf & 0xfffffffffffffff0);
  __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffd0;
  if (*(int *)(*plVar5 + 0x28) < 0) {
    __src = pUVar4;
  }
  *(undefined8 *)(auStack_38 + lVar2 + -8) = 0x27630e0;
  memcpy(auStack_38 + lVar2,__src,__n);
  lVar1 = *plVar5;
  *(undefined8 *)(auStack_38 + lVar2 + -8) = 0x27630ec;
  value_00 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(lVar1);
  *(undefined8 *)(auStack_38 + lVar2 + -8) = 0x27630f6;
  value_01 = System_Runtime_InteropServices_GCHandle__Alloc(value_00,(MethodInfo *)0x0);
  *(undefined8 *)(auStack_38 + lVar2 + -8) = 0x2763103;
  Gilzoide_FlexUi_Yoga_YGNode__SetContext(__this,value_01,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$SetContext
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__SetContext (Gilzoide_FlexUi_Yoga_YGNode_o __this, System_Runtime_InteropServices_GCHandle_o value, const MethodInfo* method);
// 0x3b24620

void Gilzoide_FlexUi_Yoga_YGNode__SetContext
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,System_Runtime_InteropServices_GCHandle_o value,
               MethodInfo *method)

{
  undefined8 uVar1;
  intptr_t iVar2;
  System_Runtime_InteropServices_GCHandle_Fields local_50;
  char *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  
  local_50.handle = 0;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9a80 == (code *)0x0) {
    local_48 = "flex-ui";
    local_40 = 7;
    local_38 = "FlexUi_NodeGetContext";
    local_30 = 0x15;
    local_28 = 0x200000000;
    local_20 = 8;
    local_1c = 0;
    g_data_057a9a80 = (code *)il2cpp_runtime_helper_023055b0(&local_48);
    iVar2 = (*g_data_057a9a80)(uVar1);
  }
  else {
    iVar2 = (*g_data_057a9a80)(uVar1);
  }
  if (iVar2 == 0) {
    local_50.handle = 0;
  }
  else {
    local_50.handle = (intptr_t)System_Runtime_InteropServices_GCHandle__FromIntPtr(iVar2,(MethodInfo *)0x0);
    if (local_50.handle != 0) {
      System_Runtime_InteropServices_GCHandle__Free
                ((System_Runtime_InteropServices_GCHandle_o)&local_50,(MethodInfo *)0x0);
    }
  }
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  iVar2 = System_Runtime_InteropServices_GCHandle__ToIntPtr(value,(MethodInfo *)0x0);
  if (g_data_057a9a78 == (code *)0x0) {
    local_48 = "flex-ui";
    local_40 = 7;
    local_38 = "FlexUi_NodeSetContext";
    local_30 = 0x15;
    local_28 = 0x200000000;
    local_20 = 0x10;
    local_1c = 0;
    g_data_057a9a78 = (code *)il2cpp_runtime_helper_023055b0(&local_48);
  }
  (*g_data_057a9a78)(uVar1,iVar2);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$GetContext<object>
// il2cpp: Il2CppObject* Gilzoide_FlexUi_Yoga_YGNode__GetContext_object_ (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo_2662EA0* method);
// 0x2762ea0

Il2CppObject *
Gilzoide_FlexUi_Yoga_YGNode__GetContext_object_
          (Gilzoide_FlexUi_Yoga_YGNode_o __this,MethodInfo_2662EA0 *method)

{
  byte bVar1;
  System_Runtime_InteropServices_GCHandle_o handle;
  long *plVar2;
  Il2CppObject *pIVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *pIVar5;
  
  if (method->rgctx_data == (MethodInfo_2662EA0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(method);
  }
  handle = Gilzoide_FlexUi_Yoga_YGNode__GetContext(__this,(MethodInfo *)0x0);
  if (handle.fields.handle != 0) {
    if (((ulong)handle.fields.handle & 1) == 0) {
      plVar2 = System_IntPtr__op_Explicit_3d0c9f0((intptr_t)handle.fields.handle,(MethodInfo *)0x0);
      pIVar3 = (Il2CppObject *)*plVar2;
      pIVar4 = method->rgctx_data->_0_T;
      bVar1 = (pIVar4->_2).field_0x6d;
    }
    else {
      pIVar3 = System_Runtime_InteropServices_GCHandle__GetTarget
                         ((intptr_t)handle.fields.handle,(MethodInfo *)0x0);
      pIVar4 = method->rgctx_data->_0_T;
      bVar1 = (pIVar4->_2).field_0x6d;
    }
    if ((bVar1 & 1) == 0) {
      pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar4);
    }
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023051f0(pIVar3,pIVar4);
      if (pIVar5 != (Il2CppObject *)0x0) {
        return pIVar5;
      }
      il2cpp_runtime_helper_022b2fd0(pIVar3,pIVar4);
    }
  }
  return (Il2CppObject *)0x0;
}


// Gilzoide.FlexUi.Yoga.YGNode$$GetContext<__Il2CppFullySharedGenericType>
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Gilzoide_FlexUi_Yoga_YGNode__GetContext___Il2CppFullySharedGenericType_ (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo_2662F50* method);
// 0x2762f50

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Gilzoide_FlexUi_Yoga_YGNode__GetContext___Il2CppFullySharedGenericType_
          (Gilzoide_FlexUi_Yoga_YGNode_o __this,MethodInfo_2662F50 *method)

{
  byte bVar1;
  MethodInfo_2662F50 *__dest;
  long *plVar2;
  ulong uVar3;
  System_Runtime_InteropServices_GCHandle_o handle;
  undefined8 *puVar4;
  Il2CppObject *pIVar5;
  long lVar6;
  void *__dest_00;
  long in_RDX;
  void *extraout_RDX;
  void *__s;
  ulong __n;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar7;
  undefined8 uStack_40;
  MethodInfo_2662F50 *local_38;
  
  plVar2 = *(long **)(in_RDX + 0x38);
  local_38 = method;
  if (plVar2 == (long *)0x0) {
    uStack_40 = 0x2762f79;
    il2cpp_runtime_helper_02300a20();
    plVar2 = *(long **)(in_RDX + 0x38);
  }
  __n = (ulong)*(uint *)(*plVar2 + 0xfc);
  uVar3 = __n + 0xf & 0xfffffffffffffff0;
  __dest_00 = (void *)((long)&local_38 - uVar3);
  __s = (void *)((long)__dest_00 - uVar3);
  *(undefined8 *)((long)__s + -8) = 0x2762faf;
  memset(__s,0,__n);
  *(undefined8 *)((long)__s + -8) = 0x2762fb9;
  handle = Gilzoide_FlexUi_Yoga_YGNode__GetContext(__this,(MethodInfo *)0x0);
  if (handle.fields.handle == 0) {
    *(undefined8 *)((long)__s + -8) = 0x2762fef;
    memset(__s,0,__n);
    *(undefined8 *)((long)__s + -8) = 0x2762ffd;
    memcpy(__dest_00,__s,__n);
  }
  else {
    if (((ulong)handle.fields.handle & 1) == 0) {
      *(undefined8 *)((long)__s + -8) = 0x2762fcc;
      puVar4 = System_IntPtr__op_Explicit_3d0c9f0((intptr_t)handle.fields.handle,(MethodInfo *)0x0);
      pIVar5 = (Il2CppObject *)*puVar4;
      lVar6 = **(long **)(in_RDX + 0x38);
      bVar1 = *(byte *)(lVar6 + 0x135);
    }
    else {
      *(undefined8 *)((long)__s + -8) = 0x276300b;
      pIVar5 = System_Runtime_InteropServices_GCHandle__GetTarget
                         ((intptr_t)handle.fields.handle,(MethodInfo *)0x0);
      lVar6 = **(long **)(in_RDX + 0x38);
      bVar1 = *(byte *)(lVar6 + 0x135);
    }
    if ((bVar1 & 1) == 0) {
      *(undefined8 *)((long)__s + -8) = 0x2763027;
      lVar6 = il2cpp_runtime_helper_023009c0(lVar6);
    }
    *(undefined8 *)((long)__s + -8) = 0x2763035;
    __dest_00 = (void *)il2cpp_runtime_helper_022b2b80(pIVar5,lVar6,__dest_00);
  }
  __dest = local_38;
  *(undefined8 *)((long)__s + -8) = 0x2763044;
  UVar7.klass = memcpy(__dest,__dest_00,__n);
  UVar7.monitor = extraout_RDX;
  return UVar7;
}


// Gilzoide.FlexUi.Yoga.YGNode$$GetContext
// il2cpp: System_Runtime_InteropServices_GCHandle_o Gilzoide_FlexUi_Yoga_YGNode__GetContext (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3b27550

System_Runtime_InteropServices_GCHandle_o
Gilzoide_FlexUi_Yoga_YGNode__GetContext(Gilzoide_FlexUi_Yoga_YGNode_o __this,MethodInfo *method)

{
  undefined8 uVar1;
  intptr_t value;
  System_Runtime_InteropServices_GCHandle_o SVar2;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9a80 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeGetContext";
    local_20 = 0x15;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_057a9a80 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
    value = (*g_data_057a9a80)(uVar1);
  }
  else {
    value = (*g_data_057a9a80)(uVar1);
  }
  if (value != 0) {
    SVar2 = System_Runtime_InteropServices_GCHandle__FromIntPtr(value,(MethodInfo *)0x0);
    return (System_Runtime_InteropServices_GCHandle_o)SVar2.fields.handle;
  }
  return (System_Runtime_InteropServices_GCHandle_o)0;
}


// Gilzoide.FlexUi.Yoga.YGNode$$SetMeasureFunc
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__SetMeasureFunc (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o* measureFunc, const MethodInfo* method);
// 0x3b27ae0

void Gilzoide_FlexUi_Yoga_YGNode__SetMeasureFunc
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o *measureFunc,
               MethodInfo *method)

{
  undefined8 uVar1;
  intptr_t iVar2;
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9aa0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IntPtr_GetFunctionPointerForDelegate_Yoga_YGMeasureFunc);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Marshal);
    g_data_057a9aa0 = '\x01';
  }
  if (*(int *)(TypeInfo_Marshal + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar2 = System_Runtime_InteropServices_Marshal__GetFunctionPointerForDelegate_object_
                    ((Il2CppObject *)measureFunc,MethodInfo_IntPtr_GetFunctionPointerForDelegate_Yoga_YGMeasureFunc);
  if (g_data_057a9a88 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeSetMeasureFunc";
    uStack_28 = 0x19;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    g_data_057a9a88 = (code *)il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  (*g_data_057a9a88)(uVar1,iVar2);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$SetMeasureFunc
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__SetMeasureFunc (Gilzoide_FlexUi_Yoga_YGNode_o __this, intptr_t measureFunc, const MethodInfo* method);
// 0x3b245a0

void Gilzoide_FlexUi_Yoga_YGNode__SetMeasureFunc_3a245a0
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,intptr_t measureFunc,MethodInfo *method)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_057a9a88;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9a88 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeSetMeasureFunc";
    uStack_28 = 0x19;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9a88 = auVar2._0_8_;
  (*g_data_057a9a88)(uVar1,measureFunc,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$HasMeasureFunc
// il2cpp: bool Gilzoide_FlexUi_Yoga_YGNode__HasMeasureFunc (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3b23cf0

bool_conflict
Gilzoide_FlexUi_Yoga_YGNode__HasMeasureFunc(Gilzoide_FlexUi_Yoga_YGNode_o __this,MethodInfo *method)

{
  undefined8 uVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9a90 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeHasMeasureFunc";
    local_20 = 0x19;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_057a9a90 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  uVar1 = (*g_data_057a9a90)(uVar1);
  return (bool_conflict)CONCAT71((int7)((ulong)uVar1 >> 8),(char)uVar1 != '\0');
}


// Gilzoide.FlexUi.Yoga.YGNode$$SetDirty
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__SetDirty (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3b23d70

void Gilzoide_FlexUi_Yoga_YGNode__SetDirty(Gilzoide_FlexUi_Yoga_YGNode_o __this,MethodInfo *method)

{
  undefined8 uVar1;
  char cVar2;
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9a90 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeHasMeasureFunc";
    uStack_28 = 0x19;
    uStack_20 = 0x200000000;
    uStack_18 = 8;
    uStack_14 = 0;
    g_data_057a9a90 = (code *)il2cpp_runtime_helper_023055b0(&pcStack_40);
    cVar2 = (*g_data_057a9a90)(uVar1);
  }
  else {
    cVar2 = (*g_data_057a9a90)(uVar1);
  }
  if (cVar2 != '\0') {
    uVar1 = *(undefined8 *)__this.fields._nodePtr;
    if (g_data_057a9a98 == (code *)0x0) {
      pcStack_40 = "flex-ui";
      uStack_38 = 7;
      pcStack_30 = "FlexUi_NodeSetDirty";
      uStack_28 = 0x13;
      uStack_20 = 0x200000000;
      uStack_18 = 8;
      uStack_14 = 0;
      g_data_057a9a98 = (code *)il2cpp_runtime_helper_023055b0(&pcStack_40);
    }
    (*g_data_057a9a98)(uVar1);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$LayoutGetLeft
// il2cpp: float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetLeft (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3b26700

float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetLeft(Gilzoide_FlexUi_Yoga_YGNode_o __this,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9aa8 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeLayoutGetLeft";
    local_20 = 0x18;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_057a9aa8 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  fVar2 = (float)(*g_data_057a9aa8)(uVar1);
  return fVar2;
}


// Gilzoide.FlexUi.Yoga.YGNode$$LayoutGetTop
// il2cpp: float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetTop (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3b26600

float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetTop(Gilzoide_FlexUi_Yoga_YGNode_o __this,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9ab0 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeLayoutGetTop";
    local_20 = 0x17;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_057a9ab0 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  fVar2 = (float)(*g_data_057a9ab0)(uVar1);
  return fVar2;
}


// Gilzoide.FlexUi.Yoga.YGNode$$LayoutGetWidth
// il2cpp: float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetWidth (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3b26780

float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetWidth(Gilzoide_FlexUi_Yoga_YGNode_o __this,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9ab8 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeLayoutGetWidth";
    local_20 = 0x19;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_057a9ab8 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  fVar2 = (float)(*g_data_057a9ab8)(uVar1);
  return fVar2;
}


// Gilzoide.FlexUi.Yoga.YGNode$$LayoutGetHeight
// il2cpp: float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetHeight (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3b26680

float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetHeight(Gilzoide_FlexUi_Yoga_YGNode_o __this,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9ac0 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeLayoutGetHeight";
    local_20 = 0x1a;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_057a9ac0 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  fVar2 = (float)(*g_data_057a9ac0)(uVar1);
  return fVar2;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetDirection
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetDirection (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t direction, const MethodInfo* method);
// 0x3b1f0a0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetDirection
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,int32_t direction,MethodInfo *method)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_057a9ac8;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9ac8 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetDirection";
    uStack_28 = 0x1c;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9ac8 = auVar2._0_8_;
  (*g_data_057a9ac8)(uVar1,direction,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexDirection
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexDirection (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t flexDirection, const MethodInfo* method);
// 0x3b1f260

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexDirection
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,int32_t flexDirection,MethodInfo *method)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_057a9ad0;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9ad0 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetFlexDirection";
    uStack_28 = 0x20;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9ad0 = auVar2._0_8_;
  (*g_data_057a9ad0)(uVar1,flexDirection,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetJustifyContent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetJustifyContent (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t justifyContent, const MethodInfo* method);
// 0x3b1fca0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetJustifyContent
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,int32_t justifyContent,MethodInfo *method)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_057a9ad8;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9ad8 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetJustifyContent";
    uStack_28 = 0x21;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9ad8 = auVar2._0_8_;
  (*g_data_057a9ad8)(uVar1,justifyContent,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetAlignContent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetAlignContent (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t alignContent, const MethodInfo* method);
// 0x3b201e0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetAlignContent
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,int32_t alignContent,MethodInfo *method)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_057a9ae0;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9ae0 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetAlignContent";
    uStack_28 = 0x1f;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9ae0 = auVar2._0_8_;
  (*g_data_057a9ae0)(uVar1,alignContent,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetAlignItems
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetAlignItems (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t alignItems, const MethodInfo* method);
// 0x3b1fe60

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetAlignItems
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,int32_t alignItems,MethodInfo *method)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_057a9ae8;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9ae8 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetAlignItems";
    uStack_28 = 0x1d;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9ae8 = auVar2._0_8_;
  (*g_data_057a9ae8)(uVar1,alignItems,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetAlignSelf
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetAlignSelf (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t alignSelf, const MethodInfo* method);
// 0x3b20020

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetAlignSelf
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,int32_t alignSelf,MethodInfo *method)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_057a9af0;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9af0 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetAlignSelf";
    uStack_28 = 0x1c;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9af0 = auVar2._0_8_;
  (*g_data_057a9af0)(uVar1,alignSelf,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPositionType
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPositionType (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t positionType, const MethodInfo* method);
// 0x3b1e920

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPositionType
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,int32_t positionType,MethodInfo *method)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_057a9af8;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9af8 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetPositionType";
    uStack_28 = 0x1f;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9af8 = auVar2._0_8_;
  (*g_data_057a9af8)(uVar1,positionType,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexWrap
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexWrap (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t flexWrap, const MethodInfo* method);
// 0x3b1f420

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexWrap
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,int32_t flexWrap,MethodInfo *method)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_057a9b00;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9b00 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetFlexWrap";
    uStack_28 = 0x1b;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9b00 = auVar2._0_8_;
  (*g_data_057a9b00)(uVar1,flexWrap,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexGrow
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexGrow (Gilzoide_FlexUi_Yoga_YGNode_o __this, float flexGrow, const MethodInfo* method);
// 0x3b1f8f0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexGrow
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,float flexGrow,MethodInfo *method)

{
  undefined8 uVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9b08 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetFlexGrow";
    local_20 = 0x1b;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9b08 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9b08)(flexGrow,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexShrink
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexShrink (Gilzoide_FlexUi_Yoga_YGNode_o __this, float flexShrink, const MethodInfo* method);
// 0x3b1fad0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexShrink
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,float flexShrink,MethodInfo *method)

{
  undefined8 uVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9b10 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetFlexShrink";
    local_20 = 0x1d;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9b10 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9b10)(flexShrink,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexBasis
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasis (Gilzoide_FlexUi_Yoga_YGNode_o __this, float flexBasis, const MethodInfo* method);
// 0x3b270f0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasis_3a270f0
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,float flexBasis,MethodInfo *method)

{
  undefined8 uVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9b18 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetFlexBasis";
    local_20 = 0x1c;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9b18 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9b18)(flexBasis,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexBasisPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasisPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, float flexBasis, const MethodInfo* method);
// 0x3b27180

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasisPercent
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,float flexBasis,MethodInfo *method)

{
  undefined8 uVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9b20 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetFlexBasisPercent";
    local_20 = 0x23;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9b20 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9b20)(flexBasis,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexBasisAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasisAuto (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3b27210

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasisAuto
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,MethodInfo *method)

{
  undefined8 uVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9b28 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetFlexBasisAuto";
    local_20 = 0x20;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_057a9b28 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9b28)(uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPosition
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, float position, const MethodInfo* method);
// 0x3b26810

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition_3a26810
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,int32_t edge,float position,MethodInfo *method)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_057a9b30;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9b30 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetPosition";
    uStack_28 = 0x1b;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9b30 = auVar2._0_8_;
  (*g_data_057a9b30)(position,uVar1,edge,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPositionPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPositionPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, float position, const MethodInfo* method);
// 0x3b268a0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPositionPercent
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,int32_t edge,float position,MethodInfo *method)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_057a9b38;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9b38 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetPositionPercent";
    uStack_28 = 0x22;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9b38 = auVar2._0_8_;
  (*g_data_057a9b38)(position,uVar1,edge,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMargin
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, float margin, const MethodInfo* method);
// 0x3b27290

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin_3a27290
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,int32_t edge,float margin,MethodInfo *method)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_057a9b40;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9b40 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetMargin";
    uStack_28 = 0x19;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9b40 = auVar2._0_8_;
  (*g_data_057a9b40)(margin,uVar1,edge,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMarginPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMarginPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, float margin, const MethodInfo* method);
// 0x3b27320

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMarginPercent
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,int32_t edge,float margin,MethodInfo *method)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_057a9b48;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9b48 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetMarginPercent";
    uStack_28 = 0x20;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9b48 = auVar2._0_8_;
  (*g_data_057a9b48)(margin,uVar1,edge,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMarginAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMarginAuto (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, const MethodInfo* method);
// 0x3b273b0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMarginAuto
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,int32_t edge,MethodInfo *method)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_057a9b50;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9b50 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetMarginAuto";
    uStack_28 = 0x1d;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9b50 = auVar2._0_8_;
  (*g_data_057a9b50)(uVar1,edge,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPadding
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, float padding, const MethodInfo* method);
// 0x3b27430

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding_3a27430
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,int32_t edge,float padding,MethodInfo *method)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_057a9b58;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9b58 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetPadding";
    uStack_28 = 0x1a;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9b58 = auVar2._0_8_;
  (*g_data_057a9b58)(padding,uVar1,edge,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPaddingPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPaddingPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, float padding, const MethodInfo* method);
// 0x3b274c0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPaddingPercent
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,int32_t edge,float padding,MethodInfo *method)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_057a9b60;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9b60 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetPaddingPercent";
    uStack_28 = 0x21;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9b60 = auVar2._0_8_;
  (*g_data_057a9b60)(padding,uVar1,edge,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetGap
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetGap (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t gutter, float value, const MethodInfo* method);
// 0x3b222b0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetGap
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,int32_t gutter,float value,MethodInfo *method)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_057a9b68;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9b68 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetGap";
    uStack_28 = 0x16;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar2 = il2cpp_runtime_helper_023055b0(&pcStack_40);
  }
  g_data_057a9b68 = auVar2._0_8_;
  (*g_data_057a9b68)(value,uVar1,gutter,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidth (Gilzoide_FlexUi_Yoga_YGNode_o __this, float width, const MethodInfo* method);
// 0x3b26930

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidth_3a26930
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,float width,MethodInfo *method)

{
  undefined8 uVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9b70 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetWidth";
    local_20 = 0x18;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9b70 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9b70)(width,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetWidthPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidthPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, float width, const MethodInfo* method);
// 0x3b269c0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidthPercent
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,float width,MethodInfo *method)

{
  undefined8 uVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9b78 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetWidthPercent";
    local_20 = 0x1f;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9b78 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9b78)(width,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetWidthAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidthAuto (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3b26a50

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidthAuto(Gilzoide_FlexUi_Yoga_YGNode_o __this,MethodInfo *method)

{
  undefined8 uVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9b80 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetWidthAuto";
    local_20 = 0x1c;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_057a9b80 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9b80)(uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeight (Gilzoide_FlexUi_Yoga_YGNode_o __this, float height, const MethodInfo* method);
// 0x3b26ad0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeight_3a26ad0
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,float height,MethodInfo *method)

{
  undefined8 uVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9b88 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetHeight";
    local_20 = 0x19;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9b88 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9b88)(height,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetHeightPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeightPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, float height, const MethodInfo* method);
// 0x3b26b60

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeightPercent
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,float height,MethodInfo *method)

{
  undefined8 uVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9b90 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetHeightPercent";
    local_20 = 0x20;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9b90 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9b90)(height,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetHeightAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeightAuto (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3b26bf0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeightAuto(Gilzoide_FlexUi_Yoga_YGNode_o __this,MethodInfo *method)

{
  undefined8 uVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9b98 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetHeightAuto";
    local_20 = 0x1d;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    g_data_057a9b98 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9b98)(uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMinWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidth (Gilzoide_FlexUi_Yoga_YGNode_o __this, float minWidth, const MethodInfo* method);
// 0x3b26c70

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidth_3a26c70
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,float minWidth,MethodInfo *method)

{
  undefined8 uVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9ba0 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMinWidth";
    local_20 = 0x1b;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9ba0 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9ba0)(minWidth,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMinWidthPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidthPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, float minWidth, const MethodInfo* method);
// 0x3b26d00

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidthPercent
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,float minWidth,MethodInfo *method)

{
  undefined8 uVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9ba8 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMinWidthPercent";
    local_20 = 0x22;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9ba8 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9ba8)(minWidth,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMinHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeight (Gilzoide_FlexUi_Yoga_YGNode_o __this, float minHeight, const MethodInfo* method);
// 0x3b26eb0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeight_3a26eb0
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,float minHeight,MethodInfo *method)

{
  undefined8 uVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9bb0 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMinHeight";
    local_20 = 0x1c;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9bb0 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9bb0)(minHeight,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMinHeightPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeightPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, float minHeight, const MethodInfo* method);
// 0x3b26f40

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeightPercent
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,float minHeight,MethodInfo *method)

{
  undefined8 uVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9bb8 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMinHeightPercent";
    local_20 = 0x23;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9bb8 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9bb8)(minHeight,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMaxWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidth (Gilzoide_FlexUi_Yoga_YGNode_o __this, float maxWidth, const MethodInfo* method);
// 0x3b26d90

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidth_3a26d90
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,float maxWidth,MethodInfo *method)

{
  undefined8 uVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9bc0 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMaxWidth";
    local_20 = 0x1b;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9bc0 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9bc0)(maxWidth,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMaxWidthPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidthPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, float maxWidth, const MethodInfo* method);
// 0x3b26e20

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidthPercent
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,float maxWidth,MethodInfo *method)

{
  undefined8 uVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9bc8 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMaxWidthPercent";
    local_20 = 0x22;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9bc8 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9bc8)(maxWidth,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMaxHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeight (Gilzoide_FlexUi_Yoga_YGNode_o __this, float maxHeight, const MethodInfo* method);
// 0x3b26fd0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeight_3a26fd0
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,float maxHeight,MethodInfo *method)

{
  undefined8 uVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9bd0 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMaxHeight";
    local_20 = 0x1c;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9bd0 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9bd0)(maxHeight,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMaxHeightPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeightPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, float maxHeight, const MethodInfo* method);
// 0x3b27060

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeightPercent
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,float maxHeight,MethodInfo *method)

{
  undefined8 uVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9bd8 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetMaxHeightPercent";
    local_20 = 0x23;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9bd8 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9bd8)(maxHeight,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetAspectRatio
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetAspectRatio (Gilzoide_FlexUi_Yoga_YGNode_o __this, float aspectRatio, const MethodInfo* method);
// 0x3b21540

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetAspectRatio
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,float aspectRatio,MethodInfo *method)

{
  undefined8 uVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (g_data_057a9be0 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeStyleSetAspectRatio";
    local_20 = 0x1e;
    local_18 = 0x200000000;
    local_10 = 0xc;
    local_c = 0;
    g_data_057a9be0 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  (*g_data_057a9be0)(aspectRatio,uVar1);
  return;
}


