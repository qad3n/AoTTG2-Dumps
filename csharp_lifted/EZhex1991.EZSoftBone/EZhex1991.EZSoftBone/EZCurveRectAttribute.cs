// ==================== AoTTG2 cross-reference ====================
// Type: EZhex1991.EZSoftBone.EZCurveRectAttribute
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/EZhex1991/EZSoftBone/EZCurveRectAttribute.c
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/Attributes/EZCurveRectAttribute.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace EZhex1991.EZSoftBone;

[Token(Token = "0x2000002")]
public class EZCurveRectAttribute : PropertyAttribute
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x14")]
	public Rect rect;

	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x24")]
	public Color color;

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x31A25A0", Offset = "0x31A15A0", VA = "0x31A25A0")]
	public EZCurveRectAttribute()
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZCurveRectAttribute.c (EZhex1991.EZSoftBone.EZCurveRectAttribute$$.ctor): clean
		this.color.r = 0.0;
		this.color.g = 1.0;
		this.color.b = 0.0;
		this.color.a = 1.0;
		base();
		this.rect.m_XMin = 0.0;
		this.rect.m_YMin = 0.0;
		this.rect.m_Width = 1.0;
		this.rect.m_Height = 1.0;
		return;
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x31A25D0", Offset = "0x31A15D0", VA = "0x31A25D0")]
	public EZCurveRectAttribute(Rect rect)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZCurveRectAttribute.c (EZhex1991.EZSoftBone.EZCurveRectAttribute$$.ctor): clean
		float local_28;
		float fStack_24;

		this.color.r = 0.0;
		this.color.g = 1.0;
		this.color.b = 0.0;
		this.color.a = 1.0;
		base();
		local_28 = rect.m_XMin;
		fStack_24 = rect.m_YMin;
		this.rect.m_XMin = local_28;
		this.rect.m_YMin = fStack_24;
		this.rect.m_Width = rect.m_Width;
		this.rect.m_Height = rect.m_Height;
		return;
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x31A2610", Offset = "0x31A1610", VA = "0x31A2610")]
	public EZCurveRectAttribute(float x, float y, float width, float height)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZCurveRectAttribute.c (EZhex1991.EZSoftBone.EZCurveRectAttribute$$.ctor): clean
		this.color.r = 0.0;
		this.color.g = 1.0;
		this.color.b = 0.0;
		this.color.a = 1.0;
		base();
		this.rect.m_XMin = x;
		this.rect.m_YMin = y;
		this.rect.m_Width = width;
		this.rect.m_Height = height;
		return;
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x31A2680", Offset = "0x31A1680", VA = "0x31A2680")]
	public EZCurveRectAttribute(Rect rect, Color color)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZCurveRectAttribute.c (EZhex1991.EZSoftBone.EZCurveRectAttribute$$.ctor): clean
		float local_48;
		float fStack_44;
		float local_28;
		float fStack_24;

		this.color.r = 0.0;
		this.color.g = 1.0;
		this.color.b = 0.0;
		this.color.a = 1.0;
		base();
		local_48 = rect.m_XMin;
		fStack_44 = rect.m_YMin;
		this.rect.m_XMin = local_48;
		this.rect.m_YMin = fStack_44;
		this.rect.m_Width = rect.m_Width;
		this.rect.m_Height = rect.m_Height;
		local_28 = color.r;
		fStack_24 = color.g;
		this.color.r = local_28;
		this.color.g = fStack_24;
		this.color.b = color.b;
		this.color.a = color.a;
		return;
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x31A26D0", Offset = "0x31A16D0", VA = "0x31A26D0")]
	public EZCurveRectAttribute(float x, float y, float width, float height, Color color)
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZCurveRectAttribute.c (EZhex1991.EZSoftBone.EZCurveRectAttribute$$.ctor): clean
		float local_28;
		float fStack_24;

		this.color.r = 0.0;
		this.color.g = 1.0;
		this.color.b = 0.0;
		this.color.a = 1.0;
		base();
		this.rect.m_XMin = x;
		this.rect.m_YMin = y;
		this.rect.m_Width = width;
		this.rect.m_Height = height;
		local_28 = color.r;
		fStack_24 = color.g;
		this.color.r = local_28;
		this.color.g = fStack_24;
		this.color.b = color.b;
		this.color.a = color.a;
		return;
	}
}
