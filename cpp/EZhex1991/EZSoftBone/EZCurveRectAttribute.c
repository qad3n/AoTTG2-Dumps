// Type: EZhex1991.EZSoftBone.EZCurveRectAttribute
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/EZCurveRectAttribute.cs
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/Attributes/EZCurveRectAttribute.cs
// --------------------------------

// EZhex1991.EZSoftBone.EZCurveRectAttribute$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZCurveRectAttribute___ctor (EZhex1991_EZSoftBone_EZCurveRectAttribute_o* __this, const MethodInfo* method);
// 0x180583e20

void EZhex1991_EZSoftBone_EZCurveRectAttribute___ctor
               (EZhex1991_EZSoftBone_EZCurveRectAttribute_o *__this,MethodInfo *method)

{
  (__this->fields).color.fields.g = 1.0;
  (__this->fields).color.fields.b = 0.0;
  (__this->fields).color.fields.r = 0.0;
  (__this->fields).color.fields.a = 1.0;
  UnityEngine_PropertyAttribute___ctor((UnityEngine_DelayedAttribute_o *)__this,(MethodInfo *)0x0);
  (__this->fields).rect.fields.m_XMin = 0.0;
  (__this->fields).rect.fields.m_YMin = 0.0;
  (__this->fields).rect.fields.m_Width = 1.0;
  (__this->fields).rect.fields.m_Height = 1.0;
  return;
}


// EZhex1991.EZSoftBone.EZCurveRectAttribute$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZCurveRectAttribute___ctor (EZhex1991_EZSoftBone_EZCurveRectAttribute_o* __this, UnityEngine_Rect_o rect, const MethodInfo* method);
// 0x180583c70

void EZhex1991_EZSoftBone_EZCurveRectAttribute___ctor_583c70
               (EZhex1991_EZSoftBone_EZCurveRectAttribute_o *__this,UnityEngine_Rect_o *rect,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  (__this->fields).color.fields.g = 1.0;
  (__this->fields).color.fields.b = 0.0;
  (__this->fields).color.fields.a = 1.0;
  (__this->fields).color.fields.r = 0.0;
  UnityEngine_PropertyAttribute___ctor((UnityEngine_DelayedAttribute_o *)__this,(MethodInfo *)0x0);
  fVar1 = (rect->fields).m_YMin;
  fVar2 = (rect->fields).m_Width;
  fVar3 = (rect->fields).m_Height;
  (__this->fields).rect.fields.m_XMin = (rect->fields).m_XMin;
  (__this->fields).rect.fields.m_YMin = fVar1;
  (__this->fields).rect.fields.m_Width = fVar2;
  (__this->fields).rect.fields.m_Height = fVar3;
  return;
}


// EZhex1991.EZSoftBone.EZCurveRectAttribute$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZCurveRectAttribute___ctor (EZhex1991_EZSoftBone_EZCurveRectAttribute_o* __this, float x, float y, float width, float height, const MethodInfo* method);
// 0x180583cb0

void EZhex1991_EZSoftBone_EZCurveRectAttribute___ctor_583cb0
               (EZhex1991_EZSoftBone_EZCurveRectAttribute_o *__this,float x,float y,float width,float height,
               MethodInfo *method)

{
  (__this->fields).color.fields.r = 0.0;
  (__this->fields).color.fields.g = 1.0;
  (__this->fields).color.fields.b = 0.0;
  (__this->fields).color.fields.a = 1.0;
  UnityEngine_PropertyAttribute___ctor((UnityEngine_DelayedAttribute_o *)__this,(MethodInfo *)0x0);
  (__this->fields).rect.fields.m_XMin = x;
  (__this->fields).rect.fields.m_YMin = y;
  (__this->fields).rect.fields.m_Width = width;
  (__this->fields).rect.fields.m_Height = height;
  return;
}


// EZhex1991.EZSoftBone.EZCurveRectAttribute$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZCurveRectAttribute___ctor (EZhex1991_EZSoftBone_EZCurveRectAttribute_o* __this, UnityEngine_Rect_o rect, UnityEngine_Color_o color, const MethodInfo* method);
// 0x180583d30

void EZhex1991_EZSoftBone_EZCurveRectAttribute___ctor_583d30
               (EZhex1991_EZSoftBone_EZCurveRectAttribute_o *__this,UnityEngine_Rect_o *rect,
               UnityEngine_Color_o *color,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  (__this->fields).color.fields.g = 1.0;
  (__this->fields).color.fields.b = 0.0;
  (__this->fields).color.fields.a = 1.0;
  (__this->fields).color.fields.r = 0.0;
  UnityEngine_PropertyAttribute___ctor((UnityEngine_DelayedAttribute_o *)__this,(MethodInfo *)0x0);
  fVar1 = (rect->fields).m_YMin;
  fVar2 = (rect->fields).m_Width;
  fVar3 = (rect->fields).m_Height;
  fVar4 = (color->fields).r;
  fVar5 = (color->fields).g;
  fVar6 = (color->fields).b;
  fVar7 = (color->fields).a;
  (__this->fields).rect.fields.m_XMin = (rect->fields).m_XMin;
  (__this->fields).rect.fields.m_YMin = fVar1;
  (__this->fields).rect.fields.m_Width = fVar2;
  (__this->fields).rect.fields.m_Height = fVar3;
  (__this->fields).color.fields.r = fVar4;
  (__this->fields).color.fields.g = fVar5;
  (__this->fields).color.fields.b = fVar6;
  (__this->fields).color.fields.a = fVar7;
  return;
}


// EZhex1991.EZSoftBone.EZCurveRectAttribute$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZCurveRectAttribute___ctor (EZhex1991_EZSoftBone_EZCurveRectAttribute_o* __this, float x, float y, float width, float height, UnityEngine_Color_o color, const MethodInfo* method);
// 0x180583d90

void EZhex1991_EZSoftBone_EZCurveRectAttribute___ctor_583d90
               (EZhex1991_EZSoftBone_EZCurveRectAttribute_o *__this,float x,float y,float width,float height,
               UnityEngine_Color_o *color,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  (__this->fields).color.fields.r = 0.0;
  (__this->fields).color.fields.g = 1.0;
  (__this->fields).color.fields.b = 0.0;
  (__this->fields).color.fields.a = 1.0;
  UnityEngine_PropertyAttribute___ctor((UnityEngine_DelayedAttribute_o *)__this,(MethodInfo *)0x0);
  (__this->fields).rect.fields.m_XMin = x;
  fVar1 = (color->fields).r;
  fVar2 = (color->fields).g;
  fVar3 = (color->fields).b;
  fVar4 = (color->fields).a;
  (__this->fields).rect.fields.m_YMin = y;
  (__this->fields).rect.fields.m_Width = width;
  (__this->fields).color.fields.r = fVar1;
  (__this->fields).color.fields.g = fVar2;
  (__this->fields).color.fields.b = fVar3;
  (__this->fields).color.fields.a = fVar4;
  (__this->fields).rect.fields.m_Height = height;
  return;
}


