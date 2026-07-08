using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000116")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct GradientColorKey
{
	[Token(Token = "0x40004BB")]
	[FieldOffset(Offset = "0x0")]
	public Color color;

	[Token(Token = "0x40004BC")]
	[FieldOffset(Offset = "0x10")]
	public float time;

	[Token(Token = "0x600079E")]
	[Address(RVA = "0x4ABF510", Offset = "0x4ABF510", VA = "0x4ABF510")]
	public GradientColorKey(Color col, float time)
	{
	}
}
