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
	[Address(RVA = "0x2353F70", Offset = "0x2353F70", VA = "0x2353F70")]
	public EZCurveRectAttribute()
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x2353FA0", Offset = "0x2353FA0", VA = "0x2353FA0")]
	public EZCurveRectAttribute(Rect rect)
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x2353FE0", Offset = "0x2353FE0", VA = "0x2353FE0")]
	public EZCurveRectAttribute(float x, float y, float width, float height)
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x2354050", Offset = "0x2354050", VA = "0x2354050")]
	public EZCurveRectAttribute(Rect rect, Color color)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x23540B0", Offset = "0x23540B0", VA = "0x23540B0")]
	public EZCurveRectAttribute(float x, float y, float width, float height, Color color)
	{
	}
}
