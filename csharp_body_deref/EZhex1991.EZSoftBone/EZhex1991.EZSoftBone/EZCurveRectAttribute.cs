// ==================== AoTTG2 cross-reference ====================
// Type: EZhex1991.EZSoftBone.EZCurveRectAttribute
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/EZhex1991/EZSoftBone/EZCurveRectAttribute.c
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/Attributes/EZCurveRectAttribute.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x31A25D0", Offset = "0x31A15D0", VA = "0x31A25D0")]
	public EZCurveRectAttribute(Rect rect)
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x31A2610", Offset = "0x31A1610", VA = "0x31A2610")]
	public EZCurveRectAttribute(float x, float y, float width, float height)
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x31A2680", Offset = "0x31A1680", VA = "0x31A2680")]
	public EZCurveRectAttribute(Rect rect, Color color)
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x31A26D0", Offset = "0x31A16D0", VA = "0x31A26D0")]
	public EZCurveRectAttribute(float x, float y, float width, float height, Color color)
	{
	}
}
