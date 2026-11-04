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
	[FieldOffset(Offset = "0x18")]
	public Rect rect;

	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x28")]
	public Color color;

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x583E20", Offset = "0x582420", VA = "0x180583E20")]
	public EZCurveRectAttribute()
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x583C70", Offset = "0x582270", VA = "0x180583C70")]
	public EZCurveRectAttribute(Rect rect)
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x583CB0", Offset = "0x5822B0", VA = "0x180583CB0")]
	public EZCurveRectAttribute(float x, float y, float width, float height)
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x583D30", Offset = "0x582330", VA = "0x180583D30")]
	public EZCurveRectAttribute(Rect rect, Color color)
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x583D90", Offset = "0x582390", VA = "0x180583D90")]
	public EZCurveRectAttribute(float x, float y, float width, float height, Color color)
	{
	}
}
