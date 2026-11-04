// Type: Gilzoide.FlexUi.Yoga.YGNode
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gilzoide.FlexUi/Gilzoide.FlexUi.Yoga/YGNode.cs
// Prior real C# source: none
// --------------------------------

// Gilzoide.FlexUi.Yoga.YGNode$$get_IsNull
// il2cpp: bool Gilzoide_FlexUi_Yoga_YGNode__get_IsNull (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x18187e270

bool Gilzoide_FlexUi_Yoga_YGNode__get_IsNull(Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

{
  return (__this->fields)._nodePtr == 0;
}


// Gilzoide.FlexUi.Yoga.YGNode$$.ctor
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode___ctor (Gilzoide_FlexUi_Yoga_YGNode_o __this, intptr_t nodePtr, const MethodInfo* method);
// 0x180b546e0

void Gilzoide_FlexUi_Yoga_YGNode___ctor
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,intptr_t nodePtr,MethodInfo *method)

{
  (__this->fields)._nodePtr = nodePtr;
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$Instantiate
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__Instantiate (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x18187e8e0

void Gilzoide_FlexUi_Yoga_YGNode__Instantiate(Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

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
  (__this->fields)._nodePtr = iVar1;
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$Dispose
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__Dispose (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x18187e550

void Gilzoide_FlexUi_Yoga_YGNode__Dispose(Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

{
  if ((__this->fields)._nodePtr != 0) {
    Gilzoide_FlexUi_Yoga_YGNode__Free(__this,(MethodInfo *)0x0);
    (__this->fields)._nodePtr = 0;
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$ApplyTo
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__ApplyTo (Gilzoide_FlexUi_Yoga_YGNode_o __this, UnityEngine_RectTransform_o* rectTransform, const MethodInfo* method);
// 0x18187e410

void Gilzoide_FlexUi_Yoga_YGNode__ApplyTo
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,UnityEngine_RectTransform_o *rectTransform,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = Gilzoide_FlexUi_Yoga_YGNode__LayoutGetTop(__this,(MethodInfo *)0x0);
  fVar2 = Gilzoide_FlexUi_Yoga_YGNode__LayoutGetHeight(__this,(MethodInfo *)0x0);
  if (rectTransform != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__SetInsetAndSizeFromParentEdge(rectTransform,2,fVar1,fVar2,(MethodInfo *)0x0);
    fVar1 = Gilzoide_FlexUi_Yoga_YGNode__LayoutGetLeft(__this,(MethodInfo *)0x0);
    fVar2 = Gilzoide_FlexUi_Yoga_YGNode__LayoutGetWidth(__this,(MethodInfo *)0x0);
    UnityEngine_RectTransform__SetInsetAndSizeFromParentEdge(rectTransform,0,fVar1,fVar2,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gilzoide.FlexUi.Yoga.YGNode$$Equals
// il2cpp: bool Gilzoide_FlexUi_Yoga_YGNode__Equals (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGNode_o other, const MethodInfo* method);
// 0x18187ded0

bool Gilzoide_FlexUi_Yoga_YGNode__Equals
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,Gilzoide_FlexUi_Yoga_YGNode_o other,MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGNode_Fields)(__this->fields)._nodePtr == other.fields._nodePtr;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPosition
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x181880760

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t edge,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

{
  Il2CppClass *klass;
  System_ArgumentOutOfRangeException_o *__this_00;
  System_String_o *message;
  System_String_o *paramName;
  MethodInfo *lastManagedFrame;
  int iVar1;
  float local_res18;
  
  iVar1 = value.fields.Unit;
  if (iVar1 == 0) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition_18806c0(__this,edge,NAN,(MethodInfo *)0x0);
    return;
  }
  local_res18 = value.fields.Value;
  if (iVar1 == 1) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition_18806c0(__this,edge,local_res18,(MethodInfo *)0x0);
    return;
  }
  if (iVar1 == 2) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetPositionPercent(__this,edge,local_res18,(MethodInfo *)0x0);
    return;
  }
  if (iVar1 != 3) {
    return;
  }
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentOutOfRangeException);
  __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_codegen_object_new(klass);
  message = il2cpp_codegen_get_runtime_metadata(&"Auto is not supported for position");
  paramName = il2cpp_codegen_get_runtime_metadata(&"value");
  System_ArgumentOutOfRangeException___ctor_1a78390(__this_00,paramName,message,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gilzoide_FlexUi_Yoga_YGNode_StyleSetPosition);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidth (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x1818809d0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidth
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  int iVar1;
  undefined4 local_res10;
  
  iVar1 = value.fields.Unit;
  if (iVar1 == 0) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidth_1880940(__this,NAN,(MethodInfo *)0x0);
    return;
  }
  local_res10 = value.fields.Value;
  if (iVar1 == 1) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidth_1880940(__this,local_res10,(MethodInfo *)0x0);
    return;
  }
  if (iVar1 == 2) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidthPercent(__this,local_res10,(MethodInfo *)0x0);
    return;
  }
  if (iVar1 == 3) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidthAuto(__this,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeight (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x18187f880

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeight
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  int iVar1;
  undefined4 local_res10;
  
  iVar1 = value.fields.Unit;
  if (iVar1 == 0) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeight_187f7f0(__this,NAN,(MethodInfo *)0x0);
    return;
  }
  local_res10 = value.fields.Value;
  if (iVar1 == 1) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeight_187f7f0(__this,local_res10,(MethodInfo *)0x0);
    return;
  }
  if (iVar1 == 2) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeightPercent(__this,local_res10,(MethodInfo *)0x0);
    return;
  }
  if (iVar1 == 3) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeightAuto(__this,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMinWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidth (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x1818802b0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidth
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  Il2CppClass *klass;
  System_ArgumentOutOfRangeException_o *__this_00;
  System_String_o *message;
  System_String_o *paramName;
  MethodInfo *lastManagedFrame;
  int iVar1;
  float local_res10;
  
  iVar1 = value.fields.Unit;
  if (iVar1 == 0) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidth_1880220(__this,NAN,(MethodInfo *)0x0);
    return;
  }
  local_res10 = value.fields.Value;
  if (iVar1 == 1) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidth_1880220(__this,local_res10,(MethodInfo *)0x0);
    return;
  }
  if (iVar1 == 2) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidthPercent(__this,local_res10,(MethodInfo *)0x0);
    return;
  }
  if (iVar1 != 3) {
    return;
  }
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentOutOfRangeException);
  __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_codegen_object_new(klass);
  message = il2cpp_codegen_get_runtime_metadata(&"Auto is not supported for min width");
  paramName = il2cpp_codegen_get_runtime_metadata(&"value");
  System_ArgumentOutOfRangeException___ctor_1a78390(__this_00,paramName,message,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gilzoide_FlexUi_Yoga_YGNode_StyleSetMinWidth);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMaxWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidth (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x18187fed0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidth
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  Il2CppClass *klass;
  System_ArgumentOutOfRangeException_o *__this_00;
  System_String_o *message;
  System_String_o *paramName;
  MethodInfo *lastManagedFrame;
  int iVar1;
  float local_res10;
  
  iVar1 = value.fields.Unit;
  if (iVar1 == 0) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidth_187fe40(__this,NAN,(MethodInfo *)0x0);
    return;
  }
  local_res10 = value.fields.Value;
  if (iVar1 == 1) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidth_187fe40(__this,local_res10,(MethodInfo *)0x0);
    return;
  }
  if (iVar1 == 2) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidthPercent(__this,local_res10,(MethodInfo *)0x0);
    return;
  }
  if (iVar1 != 3) {
    return;
  }
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentOutOfRangeException);
  __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_codegen_object_new(klass);
  message = il2cpp_codegen_get_runtime_metadata(&"Auto is not supported for max width");
  paramName = il2cpp_codegen_get_runtime_metadata(&"value");
  System_ArgumentOutOfRangeException___ctor_1a78390(__this_00,paramName,message,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gilzoide_FlexUi_Yoga_YGNode_StyleSetMaxWidth);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMinHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeight (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x1818800c0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeight
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  Il2CppClass *klass;
  System_ArgumentOutOfRangeException_o *__this_00;
  System_String_o *message;
  System_String_o *paramName;
  MethodInfo *lastManagedFrame;
  int iVar1;
  float local_res10;
  
  iVar1 = value.fields.Unit;
  if (iVar1 == 0) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeight_1880030(__this,NAN,(MethodInfo *)0x0);
    return;
  }
  local_res10 = value.fields.Value;
  if (iVar1 == 1) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeight_1880030(__this,local_res10,(MethodInfo *)0x0);
    return;
  }
  if (iVar1 == 2) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeightPercent(__this,local_res10,(MethodInfo *)0x0);
    return;
  }
  if (iVar1 != 3) {
    return;
  }
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentOutOfRangeException);
  __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_codegen_object_new(klass);
  message = il2cpp_codegen_get_runtime_metadata(&"Auto is not supported for min height");
  paramName = il2cpp_codegen_get_runtime_metadata(&"value");
  System_ArgumentOutOfRangeException___ctor_1a78390(__this_00,paramName,message,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gilzoide_FlexUi_Yoga_YGNode_StyleSetMinHeight);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMaxHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeight (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x18187fc50

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeight
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  Il2CppClass *klass;
  System_ArgumentOutOfRangeException_o *__this_00;
  System_String_o *message;
  System_String_o *paramName;
  MethodInfo *lastManagedFrame;
  int iVar1;
  float local_res10;
  
  iVar1 = value.fields.Unit;
  if (iVar1 == 0) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeight_187fd20(__this,NAN,(MethodInfo *)0x0);
    return;
  }
  local_res10 = value.fields.Value;
  if (iVar1 == 1) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeight_187fd20(__this,local_res10,(MethodInfo *)0x0);
    return;
  }
  if (iVar1 == 2) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeightPercent(__this,local_res10,(MethodInfo *)0x0);
    return;
  }
  if (iVar1 != 3) {
    return;
  }
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentOutOfRangeException);
  __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_codegen_object_new(klass);
  message = il2cpp_codegen_get_runtime_metadata(&"Auto is not supported for max height");
  paramName = il2cpp_codegen_get_runtime_metadata(&"value");
  System_ArgumentOutOfRangeException___ctor_1a78390(__this_00,paramName,message,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gilzoide_FlexUi_Yoga_YGNode_StyleSetMaxHeight);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexBasis
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasis (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x18187f300

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasis
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  int iVar1;
  undefined4 local_res10;
  
  iVar1 = value.fields.Unit;
  if (iVar1 == 0) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasis_187f370(__this,NAN,(MethodInfo *)0x0);
    return;
  }
  local_res10 = value.fields.Value;
  if (iVar1 == 1) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasis_187f370(__this,local_res10,(MethodInfo *)0x0);
    return;
  }
  if (iVar1 == 2) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasisPercent(__this,local_res10,(MethodInfo *)0x0);
    return;
  }
  if (iVar1 == 3) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasisAuto(__this,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMargin
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x18187fab0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t edge,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

{
  int iVar1;
  undefined4 local_res18;
  
  iVar1 = value.fields.Unit;
  if (iVar1 == 0) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin_187fb20(__this,edge,NAN,(MethodInfo *)0x0);
    return;
  }
  local_res18 = value.fields.Value;
  if (iVar1 == 1) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin_187fb20(__this,edge,local_res18,(MethodInfo *)0x0);
    return;
  }
  if (iVar1 == 2) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetMarginPercent(__this,edge,local_res18,(MethodInfo *)0x0);
    return;
  }
  if (iVar1 == 3) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetMarginAuto(__this,edge,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPadding
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x181880420

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t edge,Gilzoide_FlexUi_Yoga_YGValue_o value,
               MethodInfo *method)

{
  Il2CppClass *klass;
  System_ArgumentOutOfRangeException_o *__this_00;
  System_String_o *message;
  System_String_o *paramName;
  MethodInfo *lastManagedFrame;
  int iVar1;
  float local_res18;
  
  iVar1 = value.fields.Unit;
  if (iVar1 == 0) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding_18804f0(__this,edge,NAN,(MethodInfo *)0x0);
    return;
  }
  local_res18 = value.fields.Value;
  if (iVar1 == 1) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding_18804f0(__this,edge,local_res18,(MethodInfo *)0x0);
    return;
  }
  if (iVar1 == 2) {
    Gilzoide_FlexUi_Yoga_YGNode__StyleSetPaddingPercent(__this,edge,local_res18,(MethodInfo *)0x0);
    return;
  }
  if (iVar1 != 3) {
    return;
  }
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentOutOfRangeException);
  __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_codegen_object_new(klass);
  message = il2cpp_codegen_get_runtime_metadata(&"Auto is not supported for padding");
  paramName = il2cpp_codegen_get_runtime_metadata(&"value");
  System_ArgumentOutOfRangeException___ctor_1a78390(__this_00,paramName,message,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gilzoide_FlexUi_Yoga_YGNode_StyleSetPadding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gilzoide.FlexUi.Yoga.YGNode$$Free
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__Free (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x18187e580

void Gilzoide_FlexUi_Yoga_YGNode__Free(Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

{
  intptr_t iVar1;
  System_Runtime_InteropServices_GCHandle_o local_res8 [4];
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  local_res8[0].fields.handle = (System_Runtime_InteropServices_GCHandle_Fields)0;
  local_res8[0] = Gilzoide_FlexUi_Yoga_YGNode__GetContext(__this,(MethodInfo *)0x0);
  if (local_res8[0].fields.handle != 0) {
    System_Runtime_InteropServices_GCHandle__Free(local_res8,(MethodInfo *)0x0);
  }
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341cb8)(iVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$CalculateLayout
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__CalculateLayout (Gilzoide_FlexUi_Yoga_YGNode_o __this, float availableWidth, float availableHeight, int32_t ownerDirection, const MethodInfo* method);
// 0x18187e4a0

void Gilzoide_FlexUi_Yoga_YGNode__CalculateLayout
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float availableWidth,float availableHeight,
               int32_t ownerDirection,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341cc0)(iVar1,availableWidth,availableHeight,ownerDirection);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$InsertChild
// il2cpp: bool Gilzoide_FlexUi_Yoga_YGNode__InsertChild (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGNode_o child, int32_t index, const MethodInfo* method);
// 0x18187e7c0

bool Gilzoide_FlexUi_Yoga_YGNode__InsertChild
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,Gilzoide_FlexUi_Yoga_YGNode_o child,int32_t index,
               MethodInfo *method)

{
  intptr_t iVar1;
  System_String_o *message;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (Il2CppMethodInitialized_184341c78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    Il2CppMethodInitialized_184341c78 = '\x01';
  }
  Gilzoide_FlexUi_Yoga_YGNode__SetContext
            (__this,(System_Runtime_InteropServices_GCHandle_o)0x0,(MethodInfo *)0x0);
  Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetMeasureFunc((__this->fields)._nodePtr,0,(MethodInfo *)0x0);
  iVar1 = (__this->fields)._nodePtr;
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
  iVar1 = (*g_data_184341cc8)(iVar1,child.fields._nodePtr,index);
  message = il2cpp_runtime_helper_180436850(iVar1,(MethodInfo *)child.fields._nodePtr);
  il2cpp_runtime_helper_18046bcf0(iVar1);
  if (message == (System_String_o *)0x0) {
    return true;
  }
  if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
  }
  UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
  return false;
}


// Gilzoide.FlexUi.Yoga.YGNode$$RemoveChild
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__RemoveChild (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGNode_o child, const MethodInfo* method);
// 0x18187ebd0

void Gilzoide_FlexUi_Yoga_YGNode__RemoveChild
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,Gilzoide_FlexUi_Yoga_YGNode_o child,MethodInfo *method)

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
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341cd0)(iVar1,child.fields._nodePtr);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$RemoveAllChildren
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__RemoveAllChildren (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x18187eb50

void Gilzoide_FlexUi_Yoga_YGNode__RemoveAllChildren(Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

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
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341cd8)(iVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$GetChildCount
// il2cpp: int32_t Gilzoide_FlexUi_Yoga_YGNode__GetChildCount (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x18187e630

int32_t Gilzoide_FlexUi_Yoga_YGNode__GetChildCount(Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

{
  intptr_t iVar1;
  int32_t iVar2;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  iVar2 = (*g_data_184341ce0)(iVar1);
  return iVar2;
}


// Gilzoide.FlexUi.Yoga.YGNode$$SetConfig
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__SetConfig (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_YGConfig_o config, const MethodInfo* method);
// 0x18187ec60

void Gilzoide_FlexUi_Yoga_YGNode__SetConfig
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,Gilzoide_FlexUi_Yoga_YGConfig_o config,
               MethodInfo *method)

{
  intptr_t iVar1;
  System_String_o *message;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if (Il2CppMethodInitialized_184341c79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    Il2CppMethodInitialized_184341c79 = '\x01';
  }
  iVar1 = (__this->fields)._nodePtr;
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
  iVar1 = (*g_data_184341ce8)(iVar1);
  message = il2cpp_runtime_helper_180436850(iVar1,(MethodInfo *)config.fields._configPtr);
  il2cpp_runtime_helper_18046bcf0(iVar1);
  if (message != (System_String_o *)0x0) {
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$SetContext<object>
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__SetContext_object_ (Gilzoide_FlexUi_Yoga_YGNode_o __this, Il2CppObject* value, const MethodInfo_875190* method);
// 0x180875190

void Gilzoide_FlexUi_Yoga_YGNode__SetContext_object_
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,Il2CppObject *value,MethodInfo_875190 *method)

{
  System_Runtime_InteropServices_GCHandle_o value_00;
  
  value_00 = System_Runtime_InteropServices_GCHandle__Alloc(value,(MethodInfo *)0x0);
  Gilzoide_FlexUi_Yoga_YGNode__SetContext(__this,value_00,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$SetContext<__Il2CppFullySharedGenericType>
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__SetContext___Il2CppFullySharedGenericType_ (Gilzoide_FlexUi_Yoga_YGNode_o __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_8750D0* method);
// 0x1808750d0

void Gilzoide_FlexUi_Yoga_YGNode__SetContext___Il2CppFullySharedGenericType_
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *value,MethodInfo_8750D0 *method)

{
  Il2CppClass *klass;
  longlong lVar1;
  ulonglong uVar2;
  Il2CppObject *value_00;
  System_Runtime_InteropServices_GCHandle_o value_01;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *source;
  ulonglong size;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_res10;
  undefined8 auStack_40 [5];
  
  local_res10 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)value;
  if (method->rgctx_data == (MethodInfo_8750D0_RGCTXs *)0x0) {
    auStack_40[0] = 0x180875102;
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  size = (ulonglong)(method->rgctx_data->_0_T->_2).stack_slot_size;
  uVar2 = size + 0xf;
  if (uVar2 <= size) {
    uVar2 = 0xffffffffffffff0;
  }
  auStack_40[0] = 0x18087512c;
  lVar1 = -(uVar2 & 0xfffffffffffffff0);
  source = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)&local_res10;
  if ((int)(method->rgctx_data->_0_T->_1).byval_arg.bits < 0) {
    source = value;
  }
  *(undefined8 *)((longlong)auStack_40 + lVar1) = 0x18087514f;
  memcpy(&stack0xffffffffffffffe8 + lVar1,source,size);
  klass = method->rgctx_data->_0_T;
  *(undefined8 *)((longlong)auStack_40 + lVar1) = 0x18087515e;
  value_00 = il2cpp_value_box(klass,&stack0xffffffffffffffe8 + lVar1);
  *(undefined8 *)((longlong)auStack_40 + lVar1) = 0x180875168;
  value_01 = System_Runtime_InteropServices_GCHandle__Alloc(value_00,(MethodInfo *)0x0);
  *(undefined8 *)((longlong)auStack_40 + lVar1) = 0x180875176;
  Gilzoide_FlexUi_Yoga_YGNode__SetContext(__this,value_01,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$SetContext
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__SetContext (Gilzoide_FlexUi_Yoga_YGNode_o __this, System_Runtime_InteropServices_GCHandle_o value, const MethodInfo* method);
// 0x18187ed40

void Gilzoide_FlexUi_Yoga_YGNode__SetContext
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,System_Runtime_InteropServices_GCHandle_o value,
               MethodInfo *method)

{
  intptr_t iVar1;
  uint64_t *puVar2;
  System_Runtime_InteropServices_GCHandle_o local_res8;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  local_res8.fields.handle = (System_Runtime_InteropServices_GCHandle_Fields)0;
  local_res8 = Gilzoide_FlexUi_Yoga_YGNode__GetContext(__this,(MethodInfo *)0x0);
  if (local_res8.fields.handle != 0) {
    System_Runtime_InteropServices_GCHandle__Free(&local_res8,(MethodInfo *)0x0);
  }
  iVar1 = (__this->fields)._nodePtr;
  puVar2 = Unity_Collections_LowLevel_Unsafe_ILSupport__AsRef_NativeText_ReadOnly_
                     ((Unity_Collections_xxHash3_StreamingState_o *)value.fields.handle,(MethodInfo *)0x0);
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
  (*g_data_184341cf0)(iVar1,puVar2);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$GetContext<object>
// il2cpp: Il2CppObject* Gilzoide_FlexUi_Yoga_YGNode__GetContext_object_ (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo_875030* method);
// 0x180875030
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1808750a9: jmp 0x1808750ad

Il2CppObject *
Gilzoide_FlexUi_Yoga_YGNode__GetContext_object_
          (Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo_875030 *method)

{
  System_Runtime_InteropServices_GCHandle_o __this_00;
  Il2CppObject *obj;
  uint64_t *puVar1;
  Il2CppClass *klass;
  Il2CppObject *pIVar2;
  
  if (method->rgctx_data == (MethodInfo_875030_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  __this_00 = Gilzoide_FlexUi_Yoga_YGNode__GetContext(__this,(MethodInfo *)0x0);
  if (__this_00.fields.handle != 0) {
    if (((ulonglong)__this_00.fields.handle & 1) == 0) {
      puVar1 = Unity_Collections_LowLevel_Unsafe_ILSupport__AsRef_NativeText_ReadOnly_
                         ((Unity_Collections_xxHash3_StreamingState_o *)__this_00.fields.handle,
                          (MethodInfo *)0x0);
      obj = (Il2CppObject *)*puVar1;
    }
    else {
      obj = System_Runtime_InteropServices_GCHandle__GetTarget
                      ((intptr_t)__this_00.fields.handle,(MethodInfo *)0x0);
    }
    klass = method->rgctx_data->_0_T;
    if (((klass->_2).bitflags1 & 1) == 0) {
      klass = il2cpp_codegen_class_init_checked(klass);
    }
    if (obj != (Il2CppObject *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst(obj,klass);
      if (pIVar2 != (Il2CppObject *)0x0) {
        return pIVar2;
      }
      il2cpp_codegen_raise_invalid_cast_exception(obj,klass);
    }
  }
  return (Il2CppObject *)0x0;
}


// Gilzoide.FlexUi.Yoga.YGNode$$GetContext<__Il2CppFullySharedGenericType>
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Gilzoide_FlexUi_Yoga_YGNode__GetContext___Il2CppFullySharedGenericType_ (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo_874F00* method);
// 0x180874f00

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *
Gilzoide_FlexUi_Yoga_YGNode__GetContext___Il2CppFullySharedGenericType_
          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *__return_storage_ptr__,
          Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo_874F00 *method)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  System_Runtime_InteropServices_GCHandle_o __this_00;
  Il2CppObject *pIVar4;
  uint64_t *puVar5;
  Il2CppClass *klass;
  void *source;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *pUVar6;
  ulonglong size;
  undefined8 auStack_60 [5];
  
  if (method->rgctx_data == (MethodInfo_874F00_RGCTXs *)0x0) {
    auStack_60[0] = 0x180874f2c;
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  size = (ulonglong)(method->rgctx_data->_0_T->_2).stack_slot_size;
  uVar3 = size + 0xf;
  if (uVar3 <= size) {
    uVar3 = 0xffffffffffffff0;
  }
  auStack_60[0] = 0x180874f59;
  lVar1 = -(uVar3 & 0xfffffffffffffff0);
  uVar3 = size + 0xf;
  if (uVar3 <= size) {
    uVar3 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_60 + lVar1) = 0x180874f76;
  lVar2 = -(uVar3 & 0xfffffffffffffff0);
  *(undefined8 *)((longlong)auStack_60 + lVar2 + lVar1) = 0x180874f8b;
  il2cpp_runtime_helper_180522500(&stack0xffffffffffffffc8 + lVar2 + lVar1,0,size);
  *(undefined8 *)((longlong)auStack_60 + lVar2 + lVar1) = 0x180874f95;
  __this_00 = Gilzoide_FlexUi_Yoga_YGNode__GetContext
                        ((Gilzoide_FlexUi_Yoga_YGNode_o *)__return_storage_ptr__,(MethodInfo *)0x0);
  if (__this_00.fields.handle != 0) {
    if (((ulonglong)__this_00.fields.handle & 1) == 0) {
      *(undefined8 *)((longlong)auStack_60 + lVar2 + lVar1) = 0x180874fb2;
      puVar5 = Unity_Collections_LowLevel_Unsafe_ILSupport__AsRef_NativeText_ReadOnly_
                         ((Unity_Collections_xxHash3_StreamingState_o *)__this_00.fields.handle,
                          (MethodInfo *)0x0);
      pIVar4 = (Il2CppObject *)*puVar5;
    }
    else {
      *(undefined8 *)((longlong)auStack_60 + lVar2 + lVar1) = 0x180874fa8;
      pIVar4 = System_Runtime_InteropServices_GCHandle__GetTarget
                         ((intptr_t)__this_00.fields.handle,(MethodInfo *)0x0);
    }
    klass = method->rgctx_data->_0_T;
    if (((klass->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((longlong)auStack_60 + lVar2 + lVar1) = 0x180874fcd;
      klass = il2cpp_codegen_class_init_checked(klass);
    }
    *(undefined8 *)((longlong)auStack_60 + lVar2 + lVar1) = 0x180874fdb;
    source = (void *)il2cpp_runtime_helper_180416280(pIVar4,klass,&stack0xffffffffffffffc8 + lVar1);
    *(undefined8 *)((longlong)auStack_60 + lVar2 + lVar1) = 0x180874fe9;
    pUVar6 = memcpy(__this,source,size);
    return pUVar6;
  }
  *(undefined8 *)((longlong)auStack_60 + lVar2 + lVar1) = 0x180875004;
  il2cpp_runtime_helper_180522500(&stack0xffffffffffffffc8 + lVar2 + lVar1,0,size);
  *(undefined8 *)((longlong)auStack_60 + lVar2 + lVar1) = 0x180875011;
  il2cpp_runtime_helper_180522500(&stack0xffffffffffffffc8 + lVar1,0,size);
  *(undefined8 *)((longlong)auStack_60 + lVar2 + lVar1) = 0x18087501e;
  pUVar6 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)il2cpp_runtime_helper_180522500(__this,0,size);
  return pUVar6;
}


// Gilzoide.FlexUi.Yoga.YGNode$$GetContext
// il2cpp: System_Runtime_InteropServices_GCHandle_o Gilzoide_FlexUi_Yoga_YGNode__GetContext (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x18187e6b0

System_Runtime_InteropServices_GCHandle_o
Gilzoide_FlexUi_Yoga_YGNode__GetContext(Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

{
  intptr_t iVar1;
  longlong value;
  System_Runtime_InteropServices_GCHandle_o SVar2;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  value = (*g_data_184341cf8)(iVar1);
  if (value != 0) {
    SVar2 = System_Runtime_InteropServices_GCHandle__FromIntPtr(value,(MethodInfo *)0x0);
    return (System_Runtime_InteropServices_GCHandle_o)SVar2.fields.handle;
  }
  return (System_Runtime_InteropServices_GCHandle_o)0;
}


// Gilzoide.FlexUi.Yoga.YGNode$$SetMeasureFunc
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__SetMeasureFunc (Gilzoide_FlexUi_Yoga_YGNode_o __this, Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o* measureFunc, const MethodInfo* method);
// 0x18187eea0

void Gilzoide_FlexUi_Yoga_YGNode__SetMeasureFunc
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,Gilzoide_FlexUi_Yoga_Yoga_YGMeasureFunc_o *measureFunc,
               MethodInfo *method)

{
  intptr_t node;
  intptr_t measureFunc_00;
  
  node = (__this->fields)._nodePtr;
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


// Gilzoide.FlexUi.Yoga.YGNode$$SetMeasureFunc
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__SetMeasureFunc (Gilzoide_FlexUi_Yoga_YGNode_o __this, intptr_t measureFunc, const MethodInfo* method);
// 0x18187ee90

void Gilzoide_FlexUi_Yoga_YGNode__SetMeasureFunc_187ee90
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,intptr_t measureFunc,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_Yoga__YGNodeSetMeasureFunc((__this->fields)._nodePtr,measureFunc,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$HasMeasureFunc
// il2cpp: bool Gilzoide_FlexUi_Yoga_YGNode__HasMeasureFunc (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x18187e740

bool Gilzoide_FlexUi_Yoga_YGNode__HasMeasureFunc(Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

{
  intptr_t iVar1;
  char cVar2;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  cVar2 = (*g_data_184341d08)(iVar1);
  return cVar2 != '\0';
}


// Gilzoide.FlexUi.Yoga.YGNode$$SetDirty
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__SetDirty (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x18187ee00

void Gilzoide_FlexUi_Yoga_YGNode__SetDirty(Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

{
  intptr_t iVar1;
  bool bVar2;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  bVar2 = Gilzoide_FlexUi_Yoga_YGNode__HasMeasureFunc(__this,(MethodInfo *)0x0);
  if (bVar2) {
    iVar1 = (__this->fields)._nodePtr;
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
    (*g_data_184341d10)(iVar1);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$LayoutGetLeft
// il2cpp: float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetLeft (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x18187e9d0

float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetLeft(Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

{
  intptr_t iVar1;
  float fVar2;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  fVar2 = (float)(*g_data_184341d20)(iVar1);
  return fVar2;
}


// Gilzoide.FlexUi.Yoga.YGNode$$LayoutGetTop
// il2cpp: float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetTop (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x18187ea50

float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetTop(Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

{
  intptr_t iVar1;
  float fVar2;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  fVar2 = (float)(*g_data_184341d28)(iVar1);
  return fVar2;
}


// Gilzoide.FlexUi.Yoga.YGNode$$LayoutGetWidth
// il2cpp: float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetWidth (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x18187ead0

float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetWidth(Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

{
  intptr_t iVar1;
  float fVar2;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  fVar2 = (float)(*g_data_184341d30)(iVar1);
  return fVar2;
}


// Gilzoide.FlexUi.Yoga.YGNode$$LayoutGetHeight
// il2cpp: float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetHeight (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x18187e950

float Gilzoide_FlexUi_Yoga_YGNode__LayoutGetHeight(Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

{
  intptr_t iVar1;
  float fVar2;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  fVar2 = (float)(*g_data_184341d38)(iVar1);
  return fVar2;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetDirection
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetDirection (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t direction, const MethodInfo* method);
// 0x18187f160

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetDirection
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t direction,MethodInfo *method)

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
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341d40)(iVar1,direction);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexDirection
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexDirection (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t flexDirection, const MethodInfo* method);
// 0x18187f400

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexDirection
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t flexDirection,MethodInfo *method)

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
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341d48)(iVar1,flexDirection);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetJustifyContent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetJustifyContent (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t justifyContent, const MethodInfo* method);
// 0x18187f8f0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetJustifyContent
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t justifyContent,MethodInfo *method)

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
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341d50)(iVar1,justifyContent);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetAlignContent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetAlignContent (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t alignContent, const MethodInfo* method);
// 0x18187ef20

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetAlignContent
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t alignContent,MethodInfo *method)

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
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341d58)(iVar1,alignContent);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetAlignItems
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetAlignItems (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t alignItems, const MethodInfo* method);
// 0x18187efb0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetAlignItems
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t alignItems,MethodInfo *method)

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
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341d60)(iVar1,alignItems);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetAlignSelf
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetAlignSelf (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t alignSelf, const MethodInfo* method);
// 0x18187f040

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetAlignSelf
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t alignSelf,MethodInfo *method)

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
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341d68)(iVar1,alignSelf);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPositionType
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPositionType (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t positionType, const MethodInfo* method);
// 0x181880630

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPositionType
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t positionType,MethodInfo *method)

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
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341d70)(iVar1,positionType);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexWrap
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexWrap (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t flexWrap, const MethodInfo* method);
// 0x18187f5b0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexWrap
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t flexWrap,MethodInfo *method)

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
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341d78)(iVar1,flexWrap);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexGrow
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexGrow (Gilzoide_FlexUi_Yoga_YGNode_o __this, float flexGrow, const MethodInfo* method);
// 0x18187f490

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexGrow
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float flexGrow,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341d80)(iVar1,flexGrow);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexShrink
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexShrink (Gilzoide_FlexUi_Yoga_YGNode_o __this, float flexShrink, const MethodInfo* method);
// 0x18187f520

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexShrink
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float flexShrink,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341d88)(iVar1,flexShrink);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexBasis
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasis (Gilzoide_FlexUi_Yoga_YGNode_o __this, float flexBasis, const MethodInfo* method);
// 0x18187f370

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasis_187f370
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float flexBasis,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341d90)(iVar1,flexBasis);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexBasisPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasisPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, float flexBasis, const MethodInfo* method);
// 0x18187f270

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasisPercent
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float flexBasis,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341d98)(iVar1,flexBasis);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetFlexBasisAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasisAuto (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x18187f1f0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetFlexBasisAuto
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

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
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341da0)(iVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPosition
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, float position, const MethodInfo* method);
// 0x1818806c0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPosition_18806c0
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t edge,float position,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341da8)(iVar1,edge,position);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPositionPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPositionPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, float position, const MethodInfo* method);
// 0x181880590

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPositionPercent
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t edge,float position,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341db0)(iVar1,edge,position);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMargin
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, float margin, const MethodInfo* method);
// 0x18187fb20

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMargin_187fb20
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t edge,float margin,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341db8)(iVar1,edge,margin);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMarginPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMarginPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, float margin, const MethodInfo* method);
// 0x18187fa10

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMarginPercent
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t edge,float margin,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341dc0)(iVar1,edge,margin);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMarginAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMarginAuto (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, const MethodInfo* method);
// 0x18187f980

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMarginAuto
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t edge,MethodInfo *method)

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
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341dc8)(iVar1,edge);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPadding
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, float padding, const MethodInfo* method);
// 0x1818804f0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPadding_18804f0
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t edge,float padding,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341dd0)(iVar1,edge,padding);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetPaddingPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPaddingPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t edge, float padding, const MethodInfo* method);
// 0x181880380

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetPaddingPercent
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t edge,float padding,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341dd8)(iVar1,edge,padding);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetGap
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetGap (Gilzoide_FlexUi_Yoga_YGNode_o __this, int32_t gutter, float value, const MethodInfo* method);
// 0x18187f640

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetGap
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,int32_t gutter,float value,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341de0)(iVar1,gutter,value);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidth (Gilzoide_FlexUi_Yoga_YGNode_o __this, float width, const MethodInfo* method);
// 0x181880940

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidth_1880940
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float width,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341de8)(iVar1,width);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetWidthPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidthPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, float width, const MethodInfo* method);
// 0x1818808b0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidthPercent
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float width,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341df0)(iVar1,width);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetWidthAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidthAuto (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x181880830

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetWidthAuto(Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

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
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341df8)(iVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeight (Gilzoide_FlexUi_Yoga_YGNode_o __this, float height, const MethodInfo* method);
// 0x18187f7f0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeight_187f7f0
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float height,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341e00)(iVar1,height);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetHeightPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeightPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, float height, const MethodInfo* method);
// 0x18187f760

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeightPercent
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float height,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341e08)(iVar1,height);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetHeightAuto
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeightAuto (Gilzoide_FlexUi_Yoga_YGNode_o __this, const MethodInfo* method);
// 0x18187f6e0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetHeightAuto(Gilzoide_FlexUi_Yoga_YGNode_o *__this,MethodInfo *method)

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
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341e10)(iVar1);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMinWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidth (Gilzoide_FlexUi_Yoga_YGNode_o __this, float minWidth, const MethodInfo* method);
// 0x181880220

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidth_1880220
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float minWidth,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341e18)(iVar1,minWidth);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMinWidthPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidthPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, float minWidth, const MethodInfo* method);
// 0x181880190

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinWidthPercent
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float minWidth,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341e20)(iVar1,minWidth);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMinHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeight (Gilzoide_FlexUi_Yoga_YGNode_o __this, float minHeight, const MethodInfo* method);
// 0x181880030

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeight_1880030
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float minHeight,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341e28)(iVar1,minHeight);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMinHeightPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeightPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, float minHeight, const MethodInfo* method);
// 0x18187ffa0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMinHeightPercent
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float minHeight,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341e30)(iVar1,minHeight);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMaxWidth
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidth (Gilzoide_FlexUi_Yoga_YGNode_o __this, float maxWidth, const MethodInfo* method);
// 0x18187fe40

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidth_187fe40
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float maxWidth,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341e38)(iVar1,maxWidth);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMaxWidthPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidthPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, float maxWidth, const MethodInfo* method);
// 0x18187fdb0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxWidthPercent
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float maxWidth,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341e40)(iVar1,maxWidth);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMaxHeight
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeight (Gilzoide_FlexUi_Yoga_YGNode_o __this, float maxHeight, const MethodInfo* method);
// 0x18187fd20

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeight_187fd20
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float maxHeight,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341e48)(iVar1,maxHeight);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetMaxHeightPercent
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeightPercent (Gilzoide_FlexUi_Yoga_YGNode_o __this, float maxHeight, const MethodInfo* method);
// 0x18187fbc0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetMaxHeightPercent
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float maxHeight,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341e50)(iVar1,maxHeight);
  return;
}


// Gilzoide.FlexUi.Yoga.YGNode$$StyleSetAspectRatio
// il2cpp: void Gilzoide_FlexUi_Yoga_YGNode__StyleSetAspectRatio (Gilzoide_FlexUi_Yoga_YGNode_o __this, float aspectRatio, const MethodInfo* method);
// 0x18187f0d0

void Gilzoide_FlexUi_Yoga_YGNode__StyleSetAspectRatio
               (Gilzoide_FlexUi_Yoga_YGNode_o *__this,float aspectRatio,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  iVar1 = (__this->fields)._nodePtr;
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
  (*g_data_184341e58)(iVar1,aspectRatio);
  return;
}


