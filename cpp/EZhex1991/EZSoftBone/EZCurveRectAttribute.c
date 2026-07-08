// Type: EZhex1991.EZSoftBone.EZCurveRectAttribute
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/EZCurveRectAttribute.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/Attributes/EZCurveRectAttribute.cs  [prior source available (delta unverified)]
// --------------------------------

// EZhex1991.EZSoftBone.EZCurveRectAttribute$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZCurveRectAttribute___ctor (EZhex1991_EZSoftBone_EZCurveRectAttribute_o* __this, const MethodInfo* method);
// 0x2453f70

void EZhex1991_EZSoftBone_EZCurveRectAttribute___ctor
               (EZhex1991_EZSoftBone_EZCurveRectAttribute_o *__this,MethodInfo *method)

{
  (__this->fields).color.fields.r = 0.0;
  (__this->fields).color.fields.g = 1.0;
  (__this->fields).color.fields.b = 0.0;
  (__this->fields).color.fields.a = 1.0;
  UnityEngine_PropertyAttribute___ctor((UnityEngine_PropertyAttribute_o *)__this,(MethodInfo *)0x0);
  (__this->fields).rect.fields.m_XMin = 0.0;
  (__this->fields).rect.fields.m_YMin = 0.0;
  (__this->fields).rect.fields.m_Width = 1.0;
  (__this->fields).rect.fields.m_Height = 1.0;
  return;
}


// EZhex1991.EZSoftBone.EZCurveRectAttribute$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZCurveRectAttribute___ctor (EZhex1991_EZSoftBone_EZCurveRectAttribute_o* __this, UnityEngine_Rect_o rect, const MethodInfo* method);
// 0x2453fa0

void EZhex1991_EZSoftBone_EZCurveRectAttribute___ctor
               (EZhex1991_EZSoftBone_EZCurveRectAttribute_o *__this,UnityEngine_Rect_o rect,
               MethodInfo *method)

{
  float local_28;
  float fStack_24;
  
  (__this->fields).color.fields.r = 0.0;
  (__this->fields).color.fields.g = 1.0;
  (__this->fields).color.fields.b = 0.0;
  (__this->fields).color.fields.a = 1.0;
  UnityEngine_PropertyAttribute___ctor((UnityEngine_PropertyAttribute_o *)__this,(MethodInfo *)0x0);
  local_28 = rect.fields.m_XMin;
  fStack_24 = rect.fields.m_YMin;
  (__this->fields).rect.fields.m_XMin = local_28;
  (__this->fields).rect.fields.m_YMin = fStack_24;
  (__this->fields).rect.fields.m_Width = rect.fields.m_Width;
  (__this->fields).rect.fields.m_Height = rect.fields.m_Height;
  return;
}


// EZhex1991.EZSoftBone.EZCurveRectAttribute$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZCurveRectAttribute___ctor (EZhex1991_EZSoftBone_EZCurveRectAttribute_o* __this, float x, float y, float width, float height, const MethodInfo* method);
// 0x2453fe0

void EZhex1991_EZSoftBone_EZCurveRectAttribute___ctor
               (EZhex1991_EZSoftBone_EZCurveRectAttribute_o *__this,float x,float y,float width,
               float height,MethodInfo *method)

{
  (__this->fields).color.fields.r = 0.0;
  (__this->fields).color.fields.g = 1.0;
  (__this->fields).color.fields.b = 0.0;
  (__this->fields).color.fields.a = 1.0;
  UnityEngine_PropertyAttribute___ctor((UnityEngine_PropertyAttribute_o *)__this,(MethodInfo *)0x0);
  (__this->fields).rect.fields.m_XMin = x;
  (__this->fields).rect.fields.m_YMin = y;
  (__this->fields).rect.fields.m_Width = width;
  (__this->fields).rect.fields.m_Height = height;
  return;
}


// EZhex1991.EZSoftBone.EZCurveRectAttribute$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZCurveRectAttribute___ctor (EZhex1991_EZSoftBone_EZCurveRectAttribute_o* __this, UnityEngine_Rect_o rect, UnityEngine_Color_o color, const MethodInfo* method);
// 0x2454050

void EZhex1991_EZSoftBone_EZCurveRectAttribute___ctor
               (EZhex1991_EZSoftBone_EZCurveRectAttribute_o *__this,UnityEngine_Rect_o rect,
               UnityEngine_Color_o color,MethodInfo *method)

{
  float local_48;
  float fStack_44;
  float local_28;
  float fStack_24;
  
  (__this->fields).color.fields.r = 0.0;
  (__this->fields).color.fields.g = 1.0;
  (__this->fields).color.fields.b = 0.0;
  (__this->fields).color.fields.a = 1.0;
  UnityEngine_PropertyAttribute___ctor((UnityEngine_PropertyAttribute_o *)__this,(MethodInfo *)0x0);
  local_48 = rect.fields.m_XMin;
  fStack_44 = rect.fields.m_YMin;
  (__this->fields).rect.fields.m_XMin = local_48;
  (__this->fields).rect.fields.m_YMin = fStack_44;
  (__this->fields).rect.fields.m_Width = rect.fields.m_Width;
  (__this->fields).rect.fields.m_Height = rect.fields.m_Height;
  local_28 = color.fields.r;
  fStack_24 = color.fields.g;
  (__this->fields).color.fields.r = local_28;
  (__this->fields).color.fields.g = fStack_24;
  (__this->fields).color.fields.b = color.fields.b;
  (__this->fields).color.fields.a = color.fields.a;
  return;
}


// EZhex1991.EZSoftBone.EZCurveRectAttribute$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZCurveRectAttribute___ctor (EZhex1991_EZSoftBone_EZCurveRectAttribute_o* __this, float x, float y, float width, float height, UnityEngine_Color_o color, const MethodInfo* method);
// 0x24540b0

void EZhex1991_EZSoftBone_EZCurveRectAttribute___ctor
               (EZhex1991_EZSoftBone_EZCurveRectAttribute_o *__this,float x,float y,float width,
               float height,UnityEngine_Color_o color,MethodInfo *method)

{
  float local_28;
  float fStack_24;
  
  (__this->fields).color.fields.r = 0.0;
  (__this->fields).color.fields.g = 1.0;
  (__this->fields).color.fields.b = 0.0;
  (__this->fields).color.fields.a = 1.0;
  UnityEngine_PropertyAttribute___ctor((UnityEngine_PropertyAttribute_o *)__this,(MethodInfo *)0x0);
  (__this->fields).rect.fields.m_XMin = x;
  (__this->fields).rect.fields.m_YMin = y;
  (__this->fields).rect.fields.m_Width = width;
  (__this->fields).rect.fields.m_Height = height;
  local_28 = color.fields.r;
  fStack_24 = color.fields.g;
  (__this->fields).color.fields.r = local_28;
  (__this->fields).color.fields.g = fStack_24;
  (__this->fields).color.fields.b = color.fields.b;
  (__this->fields).color.fields.a = color.fields.a;
  return;
}


