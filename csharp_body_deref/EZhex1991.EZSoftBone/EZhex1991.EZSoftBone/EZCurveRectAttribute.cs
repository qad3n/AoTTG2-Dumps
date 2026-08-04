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

[Token(Token = "0x2000004")]
public class EZCurveRectAttribute : PropertyAttribute
{
	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x10")]
	public Rect rect;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x20")]
	public Color color;

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x2392080", Offset = "0x2392080", VA = "0x2392080")]
	public EZCurveRectAttribute()
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x23920B0", Offset = "0x23920B0", VA = "0x23920B0")]
	public EZCurveRectAttribute(Rect rect)
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x23920F0", Offset = "0x23920F0", VA = "0x23920F0")]
	public EZCurveRectAttribute(float x, float y, float width, float height)
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x2392160", Offset = "0x2392160", VA = "0x2392160")]
	public EZCurveRectAttribute(Rect rect, Color color)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x23921C0", Offset = "0x23921C0", VA = "0x23921C0")]
	public EZCurveRectAttribute(float x, float y, float width, float height, Color color)
	{
	}
}
