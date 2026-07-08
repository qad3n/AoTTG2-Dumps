// Type: Gilzoide.FlexUi.Yoga.YGNode
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gilzoide.FlexUi/Gilzoide.FlexUi.Yoga/YGNode.cs
// Prior source: NEW in this update
// --------------------------------

// Gilzoide.FlexUi.Yoga.YGNode$$get_IsNull
// il2cpp: bool Gilzoide_FlexUi_Yoga_YGNode__get_IsNull (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3ab9250

bool_conflict
Gilzoide_FlexUi_Yoga_YGNode__get_IsNull(Gilzoide_FlexUi_Yoga_YGNode_o __this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(long *)__this.fields._nodePtr == 0);
}


// Gilzoide.FlexUi.Yoga.YGNode$$.ctor
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode___ctor (Gilzoide_FlexUi_Yoga_YGNode_o __this, intptr_t nodePtr, const MethodInfo* method);
// 0x3abd1d0

void Gilzoide_FlexUi_Yoga_YGNode___ctor
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,intptr_t nodePtr,MethodInfo *method)

{
  *(intptr_t *)__this.fields._nodePtr = nodePtr;
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$Instantiate
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__Instantiate (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3ab9260

void Gilzoide_FlexUi_Yoga_YGNode__Instantiate
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
  
  if (DAT_05701120 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeNew";
    local_20 = 0xe;
    local_18 = 0x200000000;
    local_10 = 0;
    local_c = 0;
    DAT_05701120 = (code *)il2cpp_glue_022c74a0(&local_38);
  }
  uVar1 = (*DAT_05701120)();
  *(undefined8 *)__this.fields._nodePtr = uVar1;
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$Dispose
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__Dispose (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3aba770

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
// 0x3abb0c0

void Gilzoide_FlexUi_Yoga_YGNode__ApplyTo
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,UnityEngine_RectTransform_o *rectTransform,
               MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  char *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (DAT_05701198 == (code *)0x0) {
    local_48 = "flex-ui";
    local_40 = 7;
    local_38 = "FlexUi_NodeLayoutGetTop";
    local_30 = 0x17;
    local_28 = 0x200000000;
    local_20 = 8;
    local_1c = 0;
    DAT_05701198 = (code *)il2cpp_glue_022c74a0(&local_48);
  }
  fVar2 = (float)(*DAT_05701198)(uVar1);
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (DAT_057011a8 == (code *)0x0) {
    local_48 = "flex-ui";
    local_40 = 7;
    local_38 = "FlexUi_NodeLayoutGetHeight";
    local_30 = 0x1a;
    local_28 = 0x200000000;
    local_20 = 8;
    local_1c = 0;
    DAT_057011a8 = (code *)il2cpp_glue_022c74a0(&local_48);
  }
  fVar3 = (float)(*DAT_057011a8)(uVar1);
  if (rectTransform != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__SetInsetAndSizeFromParentEdge
              (rectTransform,2,fVar2,fVar3,(MethodInfo *)0x0);
    uVar1 = *(undefined8 *)__this.fields._nodePtr;
    if (DAT_05701190 == (code *)0x0) {
      local_48 = "flex-ui";
      local_40 = 7;
      local_38 = "FlexUi_NodeLayoutGetLeft";
      local_30 = 0x18;
      local_28 = 0x200000000;
      local_20 = 8;
      local_1c = 0;
      DAT_05701190 = (code *)il2cpp_glue_022c74a0(&local_48);
    }
    fVar2 = (float)(*DAT_05701190)(uVar1);
    uVar1 = *(undefined8 *)__this.fields._nodePtr;
    if (DAT_057011a0 == (code *)0x0) {
      local_48 = "flex-ui";
      local_40 = 7;
      local_38 = "FlexUi_NodeLayoutGetWidth";
      local_30 = 0x19;
      local_28 = 0x200000000;
      local_20 = 8;
      local_1c = 0;
      DAT_057011a0 = (code *)il2cpp_glue_022c74a0(&local_48);
    }
    fVar3 = (float)(*DAT_057011a0)(uVar1);
    UnityEngine_RectTransform__SetInsetAndSizeFromParentEdge
              (rectTransform,0,fVar2,fVar3,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gilzoide.FlexUi.Yoga.YGNode$$Equals
// il2cpp: bool Gilzoide_FlexUi_Yoga_YGNode__Equals (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGNode_o other, const MethodInfo* method);
// 0x3abd5b0

bool_conflict
Gilzoide_FlexUi_Yoga_YGNode__Equals
          (Gilzoide_FlexUi_Yoga_YGNode_o __this,Gilzoide_FlexUi_Yoga_YGNode_o other,
          MethodInfo *method)

{
  undefined4 in_EAX;
  
                    /* WARNING: Load size is inaccurate */
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  (Gilzoide_FlexUi_Yoga_YGNode_Fields)*__this.fields._nodePtr ==
                  other.fields._nodePtr);
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPosition
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3ab5840

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,int32_t edge,
               Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

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
    switch((long)&switchD_03ab586b::switchdataD_00d0b6b0 +
           (long)(int)(&switchD_03ab586b::switchdataD_00d0b6b0)[(ulong)value.fields >> 0x20]) {
    case 0x3ab586d:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      if (DAT_05701218 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetPosition";
        local_28 = 0x1b;
        local_20 = 0x200000000;
        local_18 = 0x10;
        local_14 = 0;
        DAT_05701218 = (code *)il2cpp_glue_022c74a0(&local_40);
      }
      uVar3 = SUB168(ZEXT416(0x7fc00000),0);
      pcVar1 = DAT_05701218;
      break;
    case 0x3ab58e0:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = DAT_05701220;
      if (DAT_05701220 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetPositionPercent";
        local_28 = 0x22;
        local_20 = 0x200000000;
        local_18 = 0x10;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_glue_022c74a0(&local_40);
        uVar3 = (ulong)value.fields & 0xffffffff;
        DAT_05701220 = pcVar1;
      }
      break;
    case 0x3ab5958:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = DAT_05701218;
      if (DAT_05701218 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetPosition";
        local_28 = 0x1b;
        local_20 = 0x200000000;
        local_18 = 0x10;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_glue_022c74a0(&local_40);
        uVar3 = (ulong)value.fields & 0xffffffff;
        DAT_05701218 = pcVar1;
      }
      break;
    case 0x3ab59d9:
      uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentOutOfRangeException);
      __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_glue(uVar2);
      paramName = (System_String_o *)il2cpp_init_method_metadata(&"value");
      message = (System_String_o *)il2cpp_init_method_metadata(&"Auto is not supported for position");
      System_ArgumentOutOfRangeException___ctor(__this_00,paramName,message,(MethodInfo *)0x0);
      uVar2 = il2cpp_init_method_metadata(&MethodInfo_Void_StyleSetPosition);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this_00,uVar2);
    }
    (*pcVar1)(uVar3,uVar2,edge);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidth (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3ab7100

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidth
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

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
    switch((long)&switchD_03ab7127::switchdataD_00d0b6d0 +
           (long)(int)(&switchD_03ab7127::switchdataD_00d0b6d0)[(ulong)value.fields >> 0x20]) {
    case 0x3ab7129:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
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
      uVar3 = SUB168(ZEXT416(0x7fc00000),0);
      pcVar1 = DAT_05701258;
      break;
    case 0x3ab719c:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = DAT_05701258;
      if (DAT_05701258 == (code *)0x0) {
        local_38 = "flex-ui";
        local_30 = 7;
        local_28 = "FlexUi_NodeStyleSetWidth";
        local_20 = 0x18;
        local_18 = 0x200000000;
        local_10 = 0xc;
        local_c = 0;
        pcVar1 = (code *)il2cpp_glue_022c74a0(&local_38);
        uVar3 = (ulong)value.fields & 0xffffffff;
        DAT_05701258 = pcVar1;
      }
      break;
    case 0x3ab7214:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = DAT_05701260;
      if (DAT_05701260 == (code *)0x0) {
        local_38 = "flex-ui";
        local_30 = 7;
        local_28 = "FlexUi_NodeStyleSetWidthPercent";
        local_20 = 0x1f;
        local_18 = 0x200000000;
        local_10 = 0xc;
        local_c = 0;
        pcVar1 = (code *)il2cpp_glue_022c74a0(&local_38);
        uVar3 = (ulong)value.fields & 0xffffffff;
        DAT_05701260 = pcVar1;
      }
      break;
    case 0x3ab7291:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
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
      (*DAT_05701268)(uVar2);
      return;
    }
    (*pcVar1)(uVar3,uVar2);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeight (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3ab7400

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeight
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

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
    switch((long)&switchD_03ab7427::switchdataD_00d0b6e0 +
           (long)(int)(&switchD_03ab7427::switchdataD_00d0b6e0)[(ulong)value.fields >> 0x20]) {
    case 0x3ab7429:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
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
      uVar3 = SUB168(ZEXT416(0x7fc00000),0);
      pcVar1 = DAT_05701270;
      break;
    case 0x3ab749c:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = DAT_05701270;
      if (DAT_05701270 == (code *)0x0) {
        local_38 = "flex-ui";
        local_30 = 7;
        local_28 = "FlexUi_NodeStyleSetHeight";
        local_20 = 0x19;
        local_18 = 0x200000000;
        local_10 = 0xc;
        local_c = 0;
        pcVar1 = (code *)il2cpp_glue_022c74a0(&local_38);
        uVar3 = (ulong)value.fields & 0xffffffff;
        DAT_05701270 = pcVar1;
      }
      break;
    case 0x3ab7514:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = DAT_05701278;
      if (DAT_05701278 == (code *)0x0) {
        local_38 = "flex-ui";
        local_30 = 7;
        local_28 = "FlexUi_NodeStyleSetHeightPercent";
        local_20 = 0x20;
        local_18 = 0x200000000;
        local_10 = 0xc;
        local_c = 0;
        pcVar1 = (code *)il2cpp_glue_022c74a0(&local_38);
        uVar3 = (ulong)value.fields & 0xffffffff;
        DAT_05701278 = pcVar1;
      }
      break;
    case 0x3ab7591:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
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
      (*DAT_05701280)(uVar2);
      return;
    }
    (*pcVar1)(uVar3,uVar2);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMinWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidth (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3ab7700

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidth
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,Gilzoide_FlexUi_Yoga_YGValue_o value,
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
    switch((long)&switchD_03ab7729::switchdataD_00d0b6f0 +
           (long)(int)(&switchD_03ab7729::switchdataD_00d0b6f0)[(ulong)value.fields >> 0x20]) {
    case 0x3ab772b:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      if (DAT_05701288 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMinWidth";
        local_28 = 0x1b;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        DAT_05701288 = (code *)il2cpp_glue_022c74a0(&local_40);
      }
      uVar3 = SUB168(ZEXT416(0x7fc00000),0);
      pcVar1 = DAT_05701288;
      break;
    case 0x3ab779e:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = DAT_05701290;
      if (DAT_05701290 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMinWidthPercent";
        local_28 = 0x22;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_glue_022c74a0(&local_40);
        uVar3 = (ulong)value.fields & 0xffffffff;
        DAT_05701290 = pcVar1;
      }
      break;
    case 0x3ab7816:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = DAT_05701288;
      if (DAT_05701288 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMinWidth";
        local_28 = 0x1b;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_glue_022c74a0(&local_40);
        uVar3 = (ulong)value.fields & 0xffffffff;
        DAT_05701288 = pcVar1;
      }
      break;
    case 0x3ab7895:
      uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentOutOfRangeException);
      __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_glue(uVar2);
      paramName = (System_String_o *)il2cpp_init_method_metadata(&"value");
      message = (System_String_o *)il2cpp_init_method_metadata(&"Auto is not supported for min width");
      System_ArgumentOutOfRangeException___ctor(__this_00,paramName,message,(MethodInfo *)0x0);
      uVar2 = il2cpp_init_method_metadata(&MethodInfo_Void_StyleSetMinWidth);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this_00,uVar2);
    }
    (*pcVar1)(uVar3,uVar2);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMaxWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidth (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3ab7cc0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidth
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,Gilzoide_FlexUi_Yoga_YGValue_o value,
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
    switch((long)&switchD_03ab7ce9::switchdataD_00d0b710 +
           (long)(int)(&switchD_03ab7ce9::switchdataD_00d0b710)[(ulong)value.fields >> 0x20]) {
    case 0x3ab7ceb:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      if (DAT_057012a8 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMaxWidth";
        local_28 = 0x1b;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        DAT_057012a8 = (code *)il2cpp_glue_022c74a0(&local_40);
      }
      uVar3 = SUB168(ZEXT416(0x7fc00000),0);
      pcVar1 = DAT_057012a8;
      break;
    case 0x3ab7d5e:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = DAT_057012b0;
      if (DAT_057012b0 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMaxWidthPercent";
        local_28 = 0x22;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_glue_022c74a0(&local_40);
        uVar3 = (ulong)value.fields & 0xffffffff;
        DAT_057012b0 = pcVar1;
      }
      break;
    case 0x3ab7dd6:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = DAT_057012a8;
      if (DAT_057012a8 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMaxWidth";
        local_28 = 0x1b;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_glue_022c74a0(&local_40);
        uVar3 = (ulong)value.fields & 0xffffffff;
        DAT_057012a8 = pcVar1;
      }
      break;
    case 0x3ab7e55:
      uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentOutOfRangeException);
      __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_glue(uVar2);
      paramName = (System_String_o *)il2cpp_init_method_metadata(&"value");
      message = (System_String_o *)il2cpp_init_method_metadata(&"Auto is not supported for max width");
      System_ArgumentOutOfRangeException___ctor(__this_00,paramName,message,(MethodInfo *)0x0);
      uVar2 = il2cpp_init_method_metadata(&MethodInfo_Void_StyleSetMaxWidth);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this_00,uVar2);
    }
    (*pcVar1)(uVar3,uVar2);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMinHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeight (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3ab79e0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeight
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,Gilzoide_FlexUi_Yoga_YGValue_o value,
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
    switch((long)&switchD_03ab7a09::switchdataD_00d0b700 +
           (long)(int)(&switchD_03ab7a09::switchdataD_00d0b700)[(ulong)value.fields >> 0x20]) {
    case 0x3ab7a0b:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      if (DAT_05701298 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMinHeight";
        local_28 = 0x1c;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        DAT_05701298 = (code *)il2cpp_glue_022c74a0(&local_40);
      }
      uVar3 = SUB168(ZEXT416(0x7fc00000),0);
      pcVar1 = DAT_05701298;
      break;
    case 0x3ab7a7e:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = DAT_057012a0;
      if (DAT_057012a0 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMinHeightPercent";
        local_28 = 0x23;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_glue_022c74a0(&local_40);
        uVar3 = (ulong)value.fields & 0xffffffff;
        DAT_057012a0 = pcVar1;
      }
      break;
    case 0x3ab7af6:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = DAT_05701298;
      if (DAT_05701298 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMinHeight";
        local_28 = 0x1c;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_glue_022c74a0(&local_40);
        uVar3 = (ulong)value.fields & 0xffffffff;
        DAT_05701298 = pcVar1;
      }
      break;
    case 0x3ab7b75:
      uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentOutOfRangeException);
      __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_glue(uVar2);
      paramName = (System_String_o *)il2cpp_init_method_metadata(&"value");
      message = (System_String_o *)il2cpp_init_method_metadata(&"Auto is not supported for min height");
      System_ArgumentOutOfRangeException___ctor(__this_00,paramName,message,(MethodInfo *)0x0);
      uVar2 = il2cpp_init_method_metadata(&MethodInfo_Void_StyleSetMinHeight);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this_00,uVar2);
    }
    (*pcVar1)(uVar3,uVar2);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMaxHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeight (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3ab7fa0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeight
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,Gilzoide_FlexUi_Yoga_YGValue_o value,
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
    switch((long)&switchD_03ab7fc9::switchdataD_00d0b720 +
           (long)(int)(&switchD_03ab7fc9::switchdataD_00d0b720)[(ulong)value.fields >> 0x20]) {
    case 0x3ab7fcb:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      if (DAT_057012b8 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMaxHeight";
        local_28 = 0x1c;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        DAT_057012b8 = (code *)il2cpp_glue_022c74a0(&local_40);
      }
      uVar3 = SUB168(ZEXT416(0x7fc00000),0);
      pcVar1 = DAT_057012b8;
      break;
    case 0x3ab803e:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = DAT_057012c0;
      if (DAT_057012c0 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMaxHeightPercent";
        local_28 = 0x23;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_glue_022c74a0(&local_40);
        uVar3 = (ulong)value.fields & 0xffffffff;
        DAT_057012c0 = pcVar1;
      }
      break;
    case 0x3ab80b6:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = DAT_057012b8;
      if (DAT_057012b8 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMaxHeight";
        local_28 = 0x1c;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_glue_022c74a0(&local_40);
        uVar3 = (ulong)value.fields & 0xffffffff;
        DAT_057012b8 = pcVar1;
      }
      break;
    case 0x3ab8135:
      uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentOutOfRangeException);
      __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_glue(uVar2);
      paramName = (System_String_o *)il2cpp_init_method_metadata(&"value");
      message = (System_String_o *)il2cpp_init_method_metadata(&"Auto is not supported for max height");
      System_ArgumentOutOfRangeException___ctor(__this_00,paramName,message,(MethodInfo *)0x0);
      uVar2 = il2cpp_init_method_metadata(&MethodInfo_Void_StyleSetMaxHeight);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this_00,uVar2);
    }
    (*pcVar1)(uVar3,uVar2);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexBasis
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasis (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3ab6340

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasis
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

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
    switch((long)&switchD_03ab6367::switchdataD_00d0b6c0 +
           (long)(int)(&switchD_03ab6367::switchdataD_00d0b6c0)[(ulong)value.fields >> 0x20]) {
    case 0x3ab6369:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
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
      uVar3 = SUB168(ZEXT416(0x7fc00000),0);
      pcVar1 = DAT_05701200;
      break;
    case 0x3ab63dc:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = DAT_05701200;
      if (DAT_05701200 == (code *)0x0) {
        local_38 = "flex-ui";
        local_30 = 7;
        local_28 = "FlexUi_NodeStyleSetFlexBasis";
        local_20 = 0x1c;
        local_18 = 0x200000000;
        local_10 = 0xc;
        local_c = 0;
        pcVar1 = (code *)il2cpp_glue_022c74a0(&local_38);
        uVar3 = (ulong)value.fields & 0xffffffff;
        DAT_05701200 = pcVar1;
      }
      break;
    case 0x3ab6454:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = DAT_05701208;
      if (DAT_05701208 == (code *)0x0) {
        local_38 = "flex-ui";
        local_30 = 7;
        local_28 = "FlexUi_NodeStyleSetFlexBasisPercent";
        local_20 = 0x23;
        local_18 = 0x200000000;
        local_10 = 0xc;
        local_c = 0;
        pcVar1 = (code *)il2cpp_glue_022c74a0(&local_38);
        uVar3 = (ulong)value.fields & 0xffffffff;
        DAT_05701208 = pcVar1;
      }
      break;
    case 0x3ab64d1:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
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
      (*DAT_05701210)(uVar2);
      return;
    }
    (*pcVar1)(uVar3,uVar2);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMargin
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3ab8470

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,int32_t edge,
               Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

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
    switch((long)&switchD_03ab849b::switchdataD_00d0b730 +
           (long)(int)(&switchD_03ab849b::switchdataD_00d0b730)[(ulong)value.fields >> 0x20]) {
    case 0x3ab849d:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      if (DAT_05701228 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMargin";
        local_28 = 0x19;
        local_20 = 0x200000000;
        local_18 = 0x10;
        local_14 = 0;
        DAT_05701228 = (code *)il2cpp_glue_022c74a0(&local_40);
      }
      uVar3 = SUB168(ZEXT416(0x7fc00000),0);
      pcVar1 = DAT_05701228;
      break;
    case 0x3ab8510:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = DAT_05701228;
      if (DAT_05701228 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMargin";
        local_28 = 0x19;
        local_20 = 0x200000000;
        local_18 = 0x10;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_glue_022c74a0(&local_40);
        uVar3 = (ulong)value.fields & 0xffffffff;
        DAT_05701228 = pcVar1;
      }
      break;
    case 0x3ab8588:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = DAT_05701230;
      if (DAT_05701230 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMarginPercent";
        local_28 = 0x20;
        local_20 = 0x200000000;
        local_18 = 0x10;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_glue_022c74a0(&local_40);
        uVar3 = (ulong)value.fields & 0xffffffff;
        DAT_05701230 = pcVar1;
      }
      break;
    case 0x3ab8609:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      if (DAT_05701238 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetMarginAuto";
        local_28 = 0x1d;
        local_20 = 0x200000000;
        local_18 = 0xc;
        local_14 = 0;
        DAT_05701238 = (code *)il2cpp_glue_022c74a0(&local_40);
      }
      (*DAT_05701238)(uVar2,edge);
      return;
    }
    (*pcVar1)(uVar3,uVar2,edge);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPadding
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3ab8a40

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,int32_t edge,
               Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

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
    switch((long)&switchD_03ab8a6b::switchdataD_00d0b740 +
           (long)(int)(&switchD_03ab8a6b::switchdataD_00d0b740)[(ulong)value.fields >> 0x20]) {
    case 0x3ab8a6d:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      if (DAT_05701240 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetPadding";
        local_28 = 0x1a;
        local_20 = 0x200000000;
        local_18 = 0x10;
        local_14 = 0;
        DAT_05701240 = (code *)il2cpp_glue_022c74a0(&local_40);
      }
      uVar3 = SUB168(ZEXT416(0x7fc00000),0);
      pcVar1 = DAT_05701240;
      break;
    case 0x3ab8ae0:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = DAT_05701248;
      if (DAT_05701248 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetPaddingPercent";
        local_28 = 0x21;
        local_20 = 0x200000000;
        local_18 = 0x10;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_glue_022c74a0(&local_40);
        uVar3 = (ulong)value.fields & 0xffffffff;
        DAT_05701248 = pcVar1;
      }
      break;
    case 0x3ab8b58:
      uVar2 = *(undefined8 *)__this.fields._nodePtr;
      pcVar1 = DAT_05701240;
      if (DAT_05701240 == (code *)0x0) {
        local_40 = "flex-ui";
        local_38 = 7;
        local_30 = "FlexUi_NodeStyleSetPadding";
        local_28 = 0x1a;
        local_20 = 0x200000000;
        local_18 = 0x10;
        local_14 = 0;
        pcVar1 = (code *)il2cpp_glue_022c74a0(&local_40);
        uVar3 = (ulong)value.fields & 0xffffffff;
        DAT_05701240 = pcVar1;
      }
      break;
    case 0x3ab8bd9:
      uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentOutOfRangeException);
      __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_glue(uVar2);
      paramName = (System_String_o *)il2cpp_init_method_metadata(&"value");
      message = (System_String_o *)il2cpp_init_method_metadata(&"Auto is not supported for padding");
      System_ArgumentOutOfRangeException___ctor(__this_00,paramName,message,(MethodInfo *)0x0);
      uVar2 = il2cpp_init_method_metadata(&MethodInfo_Void_StyleSetPadding);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this_00,uVar2);
    }
    (*pcVar1)(uVar3,uVar2,edge);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$Free
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__Free (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3abd260

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
  if (DAT_05701168 == (code *)0x0) {
    local_40 = "flex-ui";
    local_38 = 7;
    local_30 = "FlexUi_NodeGetContext";
    local_28 = 0x15;
    local_20 = 0x200000000;
    local_18 = 8;
    local_14 = 0;
    DAT_05701168 = (code *)il2cpp_glue_022c74a0(&local_40);
    value = (*DAT_05701168)(uVar1);
  }
  else {
    value = (*DAT_05701168)(uVar1);
  }
  if (value == 0) {
    local_48.handle = 0;
    uVar1 = *(undefined8 *)__this.fields._nodePtr;
  }
  else {
    local_48.handle =
         (intptr_t)System_Runtime_InteropServices_GCHandle__FromIntPtr(value,(MethodInfo *)0x0);
    if (local_48.handle != 0) {
      System_Runtime_InteropServices_GCHandle__Free
                ((System_Runtime_InteropServices_GCHandle_o)&local_48,(MethodInfo *)0x0);
    }
    uVar1 = *(undefined8 *)__this.fields._nodePtr;
  }
  if (DAT_05701128 == (code *)0x0) {
    local_40 = "flex-ui";
    local_38 = 7;
    local_30 = "FlexUi_NodeFree";
    local_28 = 0xf;
    local_20 = 0x200000000;
    local_18 = 8;
    local_14 = 0;
    DAT_05701128 = (code *)il2cpp_glue_022c74a0(&local_40);
  }
  (*DAT_05701128)(uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$CalculateLayout
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__CalculateLayout (Gilzoide_FlexUi_Yoga_YGNode_o __this, float availableWidth, float availableHeight, int32_t ownerDirection, const MethodInfo* method);
// 0x3abb020

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
  auVar2._0_8_ = DAT_05701130;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (DAT_05701130 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeCalculateLayout";
    uStack_28 = 0x1a;
    uStack_20 = 0x200000000;
    uStack_18 = 0x14;
    uStack_14 = 0;
    auVar2 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_05701130 = auVar2._0_8_;
  (*DAT_05701130)(availableWidth,availableHeight,uVar1,ownerDirection,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$InsertChild
// il2cpp: bool Gilzoide_FlexUi_Yoga_YGNode__InsertChild (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGNode_o child, int32_t index, const MethodInfo* method);
// 0x3abb7e0

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
  if (DAT_057010e7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    DAT_057010e7 = '\x01';
    method_00 = extraout_RDX;
  }
  Gilzoide_FlexUi_Yoga_YGNode__SetContext
            (__this,(System_Runtime_InteropServices_GCHandle_o)0x0,method_00);
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (DAT_05701170 == (code *)0x0) {
    local_50 = "flex-ui";
    local_48 = 7;
    local_40 = "FlexUi_NodeSetMeasureFunc";
    local_38 = 0x19;
    local_30 = 0x200000000;
    local_28 = 0x10;
    local_24 = 0;
    DAT_05701170 = (code *)il2cpp_glue_022c74a0(&local_50);
  }
  (*DAT_05701170)(uVar1,0);
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (DAT_05701138 == (code *)0x0) {
    local_50 = "flex-ui";
    local_48 = 7;
    local_40 = "FlexUi_NodeInsertChild";
    local_38 = 0x16;
    local_30 = 0x200000000;
    local_28 = 0x14;
    local_24 = 0;
    DAT_05701138 = (code *)il2cpp_glue_022c74a0(&local_50);
  }
  uVar1 = (*DAT_05701138)(uVar1,child.fields._nodePtr,index);
  message = (Il2CppObject *)il2cpp_glue_022c7af0(uVar1);
  il2cpp_glue_022c7970(uVar1);
  if (message == (Il2CppObject *)0x0) {
    bVar2 = (bool_conflict)CONCAT71((int7)((ulong)uVar1 >> 8),1);
  }
  else {
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = 0;
    UnityEngine_Debug__LogError(message,(MethodInfo *)0x0);
  }
  return bVar2;
}


// Gilzoide.FlexUi.Yoga.YGNode$$RemoveChild
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__RemoveChild (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGNode_o child, const MethodInfo* method);
// 0x3abb950

void Gilzoide_FlexUi_Yoga_YGNode__RemoveChild
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,Gilzoide_FlexUi_Yoga_YGNode_o child,
               MethodInfo *method)

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
  auVar2._0_8_ = DAT_05701140;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (DAT_05701140 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeRemoveChild";
    uStack_28 = 0x16;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar2 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_05701140 = auVar2._0_8_;
  (*DAT_05701140)(uVar1,child.fields._nodePtr,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$RemoveAllChildren
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__RemoveAllChildren (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3abbb50

void Gilzoide_FlexUi_Yoga_YGNode__RemoveAllChildren
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
  (*DAT_05701148)(uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$GetChildCount
// il2cpp: int32_t Gilzoide_FlexUi_Yoga_YGNode__GetChildCount (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3abb2d0

int32_t Gilzoide_FlexUi_Yoga_YGNode__GetChildCount
                  (Gilzoide_FlexUi_Yoga_YGNode_o __this,MethodInfo *method)

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
  iVar2 = (*DAT_05701150)(uVar1);
  return iVar2;
}


// Gilzoide.FlexUi.Yoga.YGNode$$SetConfig
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__SetConfig (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGConfig_o config, const MethodInfo* method);
// 0x3ab5370

void Gilzoide_FlexUi_Yoga_YGNode__SetConfig
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,Gilzoide_FlexUi_Yoga_YGConfig_o config,
               MethodInfo *method)

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
  
  if (DAT_057010e8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    DAT_057010e8 = '\x01';
  }
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (DAT_05701158 == (code *)0x0) {
    local_40 = "flex-ui";
    local_38 = 7;
    local_30 = "FlexUi_NodeSetConfig";
    local_28 = 0x14;
    local_20 = 0x200000000;
    local_18 = 0x10;
    local_14 = 0;
    DAT_05701158 = (code *)il2cpp_glue_022c74a0(&local_40);
  }
  uVar1 = (*DAT_05701158)(uVar1);
  message = (Il2CppObject *)il2cpp_glue_022c7af0(uVar1);
  il2cpp_glue_022c7970(uVar1);
  if (message != (Il2CppObject *)0x0) {
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Debug__LogError(message,(MethodInfo *)0x0);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$SetContext<object>
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__SetContext_object_ (Gilzoide_FlexUi_Yoga_YGNode_o __this, Il2CppObject* value, const MethodInfo_2623790* method);
// 0x2723790

void Gilzoide_FlexUi_Yoga_YGNode__SetContext<object>
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,Il2CppObject *value,MethodInfo_2623790 *method)

{
  System_Runtime_InteropServices_GCHandle_o value_00;
  
  value_00 = System_Runtime_InteropServices_GCHandle__Alloc(value,(MethodInfo *)0x0);
  Gilzoide_FlexUi_Yoga_YGNode__SetContext(__this,value_00,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$SetContext<__Il2CppFullySharedGenericType>
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__SetContext___Il2CppFullySharedGenericType_ (Gilzoide_FlexUi_Yoga_YGNode_o __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_26237B0* method);
// 0x27237b0

void Gilzoide_FlexUi_Yoga_YGNode__SetContext<__Il2CppFullySharedGenericType>
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,
               MethodInfo_26237B0 *method)

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
    uStack_40 = 0x27237dd;
    il2cpp_glue_022c2910(pvVar3);
    plVar5 = *(long **)((long)pvVar3 + 0x38);
  }
  __n = (ulong)*(uint *)(*plVar5 + 0xfc);
  lVar2 = -(__n + 0xf & 0xfffffffffffffff0);
  __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffd0;
  if (*(int *)(*plVar5 + 0x28) < 0) {
    __src = pUVar4;
  }
  *(undefined8 *)(auStack_38 + lVar2 + -8) = 0x2723810;
  memcpy(auStack_38 + lVar2,__src,__n);
  lVar1 = *plVar5;
  *(undefined8 *)(auStack_38 + lVar2 + -8) = 0x272381c;
  value_00 = (Il2CppObject *)il2cpp_runtime_glue(lVar1);
  *(undefined8 *)(auStack_38 + lVar2 + -8) = 0x2723826;
  value_01 = System_Runtime_InteropServices_GCHandle__Alloc(value_00,(MethodInfo *)0x0);
  *(undefined8 *)(auStack_38 + lVar2 + -8) = 0x2723833;
  Gilzoide_FlexUi_Yoga_YGNode__SetContext(__this,value_01,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$SetContext
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__SetContext (Gilzoide_FlexUi_Yoga_YGNode_o __this, System_Runtime_InteropServices_GCHandle_o value, const MethodInfo* method);
// 0x3abb3d0

void Gilzoide_FlexUi_Yoga_YGNode__SetContext
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,System_Runtime_InteropServices_GCHandle_o value
               ,MethodInfo *method)

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
  if (DAT_05701168 == (code *)0x0) {
    local_48 = "flex-ui";
    local_40 = 7;
    local_38 = "FlexUi_NodeGetContext";
    local_30 = 0x15;
    local_28 = 0x200000000;
    local_20 = 8;
    local_1c = 0;
    DAT_05701168 = (code *)il2cpp_glue_022c74a0(&local_48);
    iVar2 = (*DAT_05701168)(uVar1);
  }
  else {
    iVar2 = (*DAT_05701168)(uVar1);
  }
  if (iVar2 == 0) {
    local_50.handle = 0;
  }
  else {
    local_50.handle =
         (intptr_t)System_Runtime_InteropServices_GCHandle__FromIntPtr(iVar2,(MethodInfo *)0x0);
    if (local_50.handle != 0) {
      System_Runtime_InteropServices_GCHandle__Free
                ((System_Runtime_InteropServices_GCHandle_o)&local_50,(MethodInfo *)0x0);
    }
  }
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  iVar2 = System_Runtime_InteropServices_GCHandle__ToIntPtr(value,(MethodInfo *)0x0);
  if (DAT_05701160 == (code *)0x0) {
    local_48 = "flex-ui";
    local_40 = 7;
    local_38 = "FlexUi_NodeSetContext";
    local_30 = 0x15;
    local_28 = 0x200000000;
    local_20 = 0x10;
    local_1c = 0;
    DAT_05701160 = (code *)il2cpp_glue_022c74a0(&local_48);
  }
  (*DAT_05701160)(uVar1,iVar2);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$GetContext<object>
// il2cpp: Il2CppObject* Gilzoide_FlexUi_Yoga_YGNode__GetContext_object_ (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo_26235D0* method);
// 0x27235d0

Il2CppObject *
Gilzoide_FlexUi_Yoga_YGNode__GetContext<object>
          (Gilzoide_FlexUi_Yoga_YGNode_o __this,MethodInfo_26235D0 *method)

{
  byte bVar1;
  System_Runtime_InteropServices_GCHandle_o handle;
  long *plVar2;
  Il2CppObject *pIVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *pIVar5;
  
  if (method->rgctx_data == (MethodInfo_26235D0_RGCTXs *)0x0) {
    il2cpp_glue_022c2910(method);
  }
  pIVar5 = (Il2CppObject *)0x0;
  handle = Gilzoide_FlexUi_Yoga_YGNode__GetContext(__this,(MethodInfo *)0x0);
  if (handle.fields.handle != 0) {
    if (((ulong)handle.fields.handle & 1) == 0) {
      plVar2 = System_IntPtr__op_Explicit((intptr_t)handle.fields.handle,(MethodInfo *)0x0);
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
      pIVar4 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar4);
    }
    if (pIVar3 == (Il2CppObject *)0x0) {
      pIVar5 = (Il2CppObject *)0x0;
    }
    else {
      pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(pIVar3,pIVar4);
      if (pIVar5 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar3,pIVar4);
      }
    }
  }
  return pIVar5;
}


// Gilzoide.FlexUi.Yoga.YGNode$$GetContext<__Il2CppFullySharedGenericType>
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Gilzoide_FlexUi_Yoga_YGNode__GetContext___Il2CppFullySharedGenericType_ (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo_2623680* method);
// 0x2723680

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Gilzoide_FlexUi_Yoga_YGNode__GetContext<__Il2CppFullySharedGenericType>
          (Gilzoide_FlexUi_Yoga_YGNode_o __this,MethodInfo_2623680 *method)

{
  byte bVar1;
  MethodInfo_2623680 *__dest;
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
  MethodInfo_2623680 *local_38;
  
  plVar2 = *(long **)(in_RDX + 0x38);
  local_38 = method;
  if (plVar2 == (long *)0x0) {
    uStack_40 = 0x27236a9;
    il2cpp_glue_022c2910();
    plVar2 = *(long **)(in_RDX + 0x38);
  }
  __n = (ulong)*(uint *)(*plVar2 + 0xfc);
  uVar3 = __n + 0xf & 0xfffffffffffffff0;
  __dest_00 = (void *)((long)&local_38 - uVar3);
  __s = (void *)((long)__dest_00 - uVar3);
  *(undefined8 *)((long)__s + -8) = 0x27236df;
  memset(__s,0,__n);
  *(undefined8 *)((long)__s + -8) = 0x27236e9;
  handle = Gilzoide_FlexUi_Yoga_YGNode__GetContext(__this,(MethodInfo *)0x0);
  if (handle.fields.handle == 0) {
    *(undefined8 *)((long)__s + -8) = 0x272371f;
    memset(__s,0,__n);
    *(undefined8 *)((long)__s + -8) = 0x272372d;
    memcpy(__dest_00,__s,__n);
  }
  else {
    if (((ulong)handle.fields.handle & 1) == 0) {
      *(undefined8 *)((long)__s + -8) = 0x27236fc;
      puVar4 = System_IntPtr__op_Explicit((intptr_t)handle.fields.handle,(MethodInfo *)0x0);
      pIVar5 = (Il2CppObject *)*puVar4;
      lVar6 = **(long **)(in_RDX + 0x38);
      bVar1 = *(byte *)(lVar6 + 0x135);
    }
    else {
      *(undefined8 *)((long)__s + -8) = 0x272373b;
      pIVar5 = System_Runtime_InteropServices_GCHandle__GetTarget
                         ((intptr_t)handle.fields.handle,(MethodInfo *)0x0);
      lVar6 = **(long **)(in_RDX + 0x38);
      bVar1 = *(byte *)(lVar6 + 0x135);
    }
    if ((bVar1 & 1) == 0) {
      *(undefined8 *)((long)__s + -8) = 0x2723757;
      lVar6 = il2cpp_glue_022c28b0(lVar6);
    }
    *(undefined8 *)((long)__s + -8) = 0x2723765;
    __dest_00 = (void *)il2cpp_glue_02274a70(pIVar5,lVar6,__dest_00);
  }
  __dest = local_38;
  *(undefined8 *)((long)__s + -8) = 0x2723774;
  UVar7.klass = memcpy(__dest,__dest_00,__n);
  UVar7.monitor = extraout_RDX;
  return UVar7;
}


// Gilzoide.FlexUi.Yoga.YGNode$$GetContext
// il2cpp: System_Runtime_InteropServices_GCHandle_o Gilzoide_FlexUi_Yoga_YGNode__GetContext (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3abe300

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
  if (DAT_05701168 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_NodeGetContext";
    local_20 = 0x15;
    local_18 = 0x200000000;
    local_10 = 8;
    local_c = 0;
    DAT_05701168 = (code *)il2cpp_glue_022c74a0(&local_38);
    value = (*DAT_05701168)(uVar1);
  }
  else {
    value = (*DAT_05701168)(uVar1);
  }
  if (value != 0) {
    SVar2 = System_Runtime_InteropServices_GCHandle__FromIntPtr(value,(MethodInfo *)0x0);
    return (System_Runtime_InteropServices_GCHandle_o)SVar2.fields.handle;
  }
  return (System_Runtime_InteropServices_GCHandle_o)0;
}


// Gilzoide.FlexUi.Yoga.YGNode$$SetMeasureFunc
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__SetMeasureFunc (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o* measureFunc, const MethodInfo* method);
// 0x3abe890

void Gilzoide_FlexUi_Yoga_YGNode__SetMeasureFunc
               (Gilzoide_FlexUi_Yoga_YGNode_o __this,
               Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o *measureFunc,MethodInfo *method)

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
  if (DAT_05701188 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_IntPtr_GetFunctionPointerForDelegate_Yoga_YGMeas);
    il2cpp_init_method_metadata(&TypeInfo_Marshal);
    DAT_05701188 = '\x01';
  }
  if (*(int *)(TypeInfo_Marshal + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar2 = System_Runtime_InteropServices_Marshal__GetFunctionPointerForDelegate<object>
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
  (*DAT_05701170)(uVar1,iVar2);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$SetMeasureFunc
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__SetMeasureFunc (Gilzoide_FlexUi_Yoga_YGNode_o __this, intptr_t measureFunc, const MethodInfo* method);
// 0x3abb350

void Gilzoide_FlexUi_Yoga_YGNode__SetMeasureFunc
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
  auVar2._0_8_ = DAT_05701170;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (DAT_05701170 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeSetMeasureFunc";
    uStack_28 = 0x19;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar2 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_05701170 = auVar2._0_8_;
  (*DAT_05701170)(uVar1,measureFunc,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$HasMeasureFunc
// il2cpp: bool Gilzoide_FlexUi_Yoga_YGNode__HasMeasureFunc (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3abaaa0

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
  uVar1 = (*DAT_05701178)(uVar1);
  return (bool_conflict)CONCAT71((int7)((ulong)uVar1 >> 8),(char)uVar1 != '\0');
}


// Gilzoide.FlexUi.Yoga.YGNode$$SetDirty
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__SetDirty (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3abab20

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
  if (DAT_05701178 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeHasMeasureFunc";
    uStack_28 = 0x19;
    uStack_20 = 0x200000000;
    uStack_18 = 8;
    uStack_14 = 0;
    DAT_05701178 = (code *)il2cpp_glue_022c74a0(&pcStack_40);
    cVar2 = (*DAT_05701178)(uVar1);
  }
  else {
    cVar2 = (*DAT_05701178)(uVar1);
  }
  if (cVar2 != '\0') {
    uVar1 = *(undefined8 *)__this.fields._nodePtr;
    if (DAT_05701180 == (code *)0x0) {
      pcStack_40 = "flex-ui";
      uStack_38 = 7;
      pcStack_30 = "FlexUi_NodeSetDirty";
      uStack_28 = 0x13;
      uStack_20 = 0x200000000;
      uStack_18 = 8;
      uStack_14 = 0;
      DAT_05701180 = (code *)il2cpp_glue_022c74a0(&pcStack_40);
    }
    (*DAT_05701180)(uVar1);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$LayoutGetLeft
// il2cpp: float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetLeft (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3abd4b0

float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetLeft
                (Gilzoide_FlexUi_Yoga_YGNode_o __this,MethodInfo *method)

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
  fVar2 = (float)(*DAT_05701190)(uVar1);
  return fVar2;
}


// Gilzoide.FlexUi.Yoga.YGNode$$LayoutGetTop
// il2cpp: float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetTop (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3abd3b0

float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetTop
                (Gilzoide_FlexUi_Yoga_YGNode_o __this,MethodInfo *method)

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
  fVar2 = (float)(*DAT_05701198)(uVar1);
  return fVar2;
}


// Gilzoide.FlexUi.Yoga.YGNode$$LayoutGetWidth
// il2cpp: float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetWidth (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3abd530

float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetWidth
                (Gilzoide_FlexUi_Yoga_YGNode_o __this,MethodInfo *method)

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
  fVar2 = (float)(*DAT_057011a0)(uVar1);
  return fVar2;
}


// Gilzoide.FlexUi.Yoga.YGNode$$LayoutGetHeight
// il2cpp: float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetHeight (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3abd430

float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetHeight
                (Gilzoide_FlexUi_Yoga_YGNode_o __this,MethodInfo *method)

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
  fVar2 = (float)(*DAT_057011a8)(uVar1);
  return fVar2;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetDirection
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetDirection (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t direction, const MethodInfo* method);
// 0x3ab5e50

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
  auVar2._0_8_ = DAT_057011b0;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (DAT_057011b0 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetDirection";
    uStack_28 = 0x1c;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar2 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_057011b0 = auVar2._0_8_;
  (*DAT_057011b0)(uVar1,direction,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexDirection
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexDirection (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t flexDirection, const MethodInfo* method);
// 0x3ab6010

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
  auVar2._0_8_ = DAT_057011b8;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (DAT_057011b8 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetFlexDirection";
    uStack_28 = 0x20;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar2 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_057011b8 = auVar2._0_8_;
  (*DAT_057011b8)(uVar1,flexDirection,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetJustifyContent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetJustifyContent (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t justifyContent, const MethodInfo* method);
// 0x3ab6a50

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
  auVar2._0_8_ = DAT_057011c0;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (DAT_057011c0 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetJustifyContent";
    uStack_28 = 0x21;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar2 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_057011c0 = auVar2._0_8_;
  (*DAT_057011c0)(uVar1,justifyContent,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetAlignContent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetAlignContent (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t alignContent, const MethodInfo* method);
// 0x3ab6f90

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
  auVar2._0_8_ = DAT_057011c8;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (DAT_057011c8 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetAlignContent";
    uStack_28 = 0x1f;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar2 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_057011c8 = auVar2._0_8_;
  (*DAT_057011c8)(uVar1,alignContent,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetAlignItems
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetAlignItems (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t alignItems, const MethodInfo* method);
// 0x3ab6c10

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
  auVar2._0_8_ = DAT_057011d0;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (DAT_057011d0 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetAlignItems";
    uStack_28 = 0x1d;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar2 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_057011d0 = auVar2._0_8_;
  (*DAT_057011d0)(uVar1,alignItems,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetAlignSelf
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetAlignSelf (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t alignSelf, const MethodInfo* method);
// 0x3ab6dd0

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
  auVar2._0_8_ = DAT_057011d8;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (DAT_057011d8 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetAlignSelf";
    uStack_28 = 0x1c;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar2 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_057011d8 = auVar2._0_8_;
  (*DAT_057011d8)(uVar1,alignSelf,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPositionType
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPositionType (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t positionType, const MethodInfo* method);
// 0x3ab56d0

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
  auVar2._0_8_ = DAT_057011e0;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (DAT_057011e0 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetPositionType";
    uStack_28 = 0x1f;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar2 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_057011e0 = auVar2._0_8_;
  (*DAT_057011e0)(uVar1,positionType,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexWrap
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexWrap (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t flexWrap, const MethodInfo* method);
// 0x3ab61d0

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
  auVar2._0_8_ = DAT_057011e8;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (DAT_057011e8 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetFlexWrap";
    uStack_28 = 0x1b;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar2 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_057011e8 = auVar2._0_8_;
  (*DAT_057011e8)(uVar1,flexWrap,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexGrow
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexGrow (Gilzoide_FlexUi_Yoga_YGNode_o __this, float flexGrow, const MethodInfo* method);
// 0x3ab66a0

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
  (*DAT_057011f0)(flexGrow,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexShrink
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexShrink (Gilzoide_FlexUi_Yoga_YGNode_o __this, float flexShrink, const MethodInfo* method);
// 0x3ab6880

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
  (*DAT_057011f8)(flexShrink,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexBasis
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasis (Gilzoide_FlexUi_Yoga_YGNode_o __this, float flexBasis, const MethodInfo* method);
// 0x3abdea0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasis
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
  (*DAT_05701200)(flexBasis,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexBasisPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasisPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, float flexBasis, const MethodInfo* method);
// 0x3abdf30

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
  (*DAT_05701208)(flexBasis,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexBasisAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasisAuto (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3abdfc0

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
  (*DAT_05701210)(uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPosition
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, float position, const MethodInfo* method);
// 0x3abd5c0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition
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
  auVar2._0_8_ = DAT_05701218;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (DAT_05701218 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetPosition";
    uStack_28 = 0x1b;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar2 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_05701218 = auVar2._0_8_;
  (*DAT_05701218)(position,uVar1,edge,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPositionPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPositionPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, float position, const MethodInfo* method);
// 0x3abd650

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
  auVar2._0_8_ = DAT_05701220;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (DAT_05701220 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetPositionPercent";
    uStack_28 = 0x22;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar2 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_05701220 = auVar2._0_8_;
  (*DAT_05701220)(position,uVar1,edge,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMargin
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, float margin, const MethodInfo* method);
// 0x3abe040

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin
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
  auVar2._0_8_ = DAT_05701228;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (DAT_05701228 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetMargin";
    uStack_28 = 0x19;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar2 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_05701228 = auVar2._0_8_;
  (*DAT_05701228)(margin,uVar1,edge,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMarginPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMarginPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, float margin, const MethodInfo* method);
// 0x3abe0d0

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
  auVar2._0_8_ = DAT_05701230;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (DAT_05701230 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetMarginPercent";
    uStack_28 = 0x20;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar2 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_05701230 = auVar2._0_8_;
  (*DAT_05701230)(margin,uVar1,edge,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMarginAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMarginAuto (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, const MethodInfo* method);
// 0x3abe160

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
  auVar2._0_8_ = DAT_05701238;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (DAT_05701238 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetMarginAuto";
    uStack_28 = 0x1d;
    uStack_20 = 0x200000000;
    uStack_18 = 0xc;
    uStack_14 = 0;
    auVar2 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_05701238 = auVar2._0_8_;
  (*DAT_05701238)(uVar1,edge,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPadding
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, float padding, const MethodInfo* method);
// 0x3abe1e0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding
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
  auVar2._0_8_ = DAT_05701240;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (DAT_05701240 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetPadding";
    uStack_28 = 0x1a;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar2 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_05701240 = auVar2._0_8_;
  (*DAT_05701240)(padding,uVar1,edge,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPaddingPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPaddingPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, float padding, const MethodInfo* method);
// 0x3abe270

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
  auVar2._0_8_ = DAT_05701248;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (DAT_05701248 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetPaddingPercent";
    uStack_28 = 0x21;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar2 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_05701248 = auVar2._0_8_;
  (*DAT_05701248)(padding,uVar1,edge,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetGap
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetGap (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t gutter, float value, const MethodInfo* method);
// 0x3ab9060

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
  auVar2._0_8_ = DAT_05701250;
  uVar1 = *(undefined8 *)__this.fields._nodePtr;
  if (DAT_05701250 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_NodeStyleSetGap";
    uStack_28 = 0x16;
    uStack_20 = 0x200000000;
    uStack_18 = 0x10;
    uStack_14 = 0;
    auVar2 = il2cpp_glue_022c74a0(&pcStack_40);
  }
  DAT_05701250 = auVar2._0_8_;
  (*DAT_05701250)(value,uVar1,gutter,auVar2._8_8_);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidth (Gilzoide_FlexUi_Yoga_YGNode_o __this, float width, const MethodInfo* method);
// 0x3abd6e0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidth
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
  (*DAT_05701258)(width,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetWidthPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidthPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, float width, const MethodInfo* method);
// 0x3abd770

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
  (*DAT_05701260)(width,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetWidthAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidthAuto (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3abd800

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidthAuto
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
  (*DAT_05701268)(uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeight (Gilzoide_FlexUi_Yoga_YGNode_o __this, float height, const MethodInfo* method);
// 0x3abd880

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeight
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
  (*DAT_05701270)(height,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetHeightPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeightPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, float height, const MethodInfo* method);
// 0x3abd910

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
  (*DAT_05701278)(height,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetHeightAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeightAuto (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x3abd9a0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeightAuto
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
  (*DAT_05701280)(uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMinWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidth (Gilzoide_FlexUi_Yoga_YGNode_o __this, float minWidth, const MethodInfo* method);
// 0x3abda20

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidth
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
  (*DAT_05701288)(minWidth,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMinWidthPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidthPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, float minWidth, const MethodInfo* method);
// 0x3abdab0

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
  (*DAT_05701290)(minWidth,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMinHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeight (Gilzoide_FlexUi_Yoga_YGNode_o __this, float minHeight, const MethodInfo* method);
// 0x3abdc60

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeight
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
  (*DAT_05701298)(minHeight,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMinHeightPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeightPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, float minHeight, const MethodInfo* method);
// 0x3abdcf0

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
  (*DAT_057012a0)(minHeight,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMaxWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidth (Gilzoide_FlexUi_Yoga_YGNode_o __this, float maxWidth, const MethodInfo* method);
// 0x3abdb40

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidth
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
  (*DAT_057012a8)(maxWidth,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMaxWidthPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidthPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, float maxWidth, const MethodInfo* method);
// 0x3abdbd0

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
  (*DAT_057012b0)(maxWidth,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMaxHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeight (Gilzoide_FlexUi_Yoga_YGNode_o __this, float maxHeight, const MethodInfo* method);
// 0x3abdd80

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeight
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
  (*DAT_057012b8)(maxHeight,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMaxHeightPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeightPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, float maxHeight, const MethodInfo* method);
// 0x3abde10

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
  (*DAT_057012c0)(maxHeight,uVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetAspectRatio
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetAspectRatio (Gilzoide_FlexUi_Yoga_YGNode_o __this, float aspectRatio, const MethodInfo* method);
// 0x3ab82f0

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
  (*DAT_057012c8)(aspectRatio,uVar1);
  return;
}


