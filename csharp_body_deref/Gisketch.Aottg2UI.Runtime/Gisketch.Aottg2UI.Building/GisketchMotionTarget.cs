using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x2000099")]
public readonly struct GisketchMotionTarget
{
	[Token(Token = "0x400030E")]
	[FieldOffset(Offset = "0x0")]
	public readonly GameObject GameObject;

	[Token(Token = "0x400030F")]
	[FieldOffset(Offset = "0x8")]
	public readonly GisketchMotionDefinition Enter;

	[Token(Token = "0x4000310")]
	[FieldOffset(Offset = "0x10")]
	public readonly GisketchMotionDefinition Exit;

	[Token(Token = "0x4000311")]
	[FieldOffset(Offset = "0x18")]
	public readonly Vector3 RestScale;

	[Token(Token = "0x4000312")]
	[FieldOffset(Offset = "0x24")]
	public readonly float RestAlpha;

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x3A1D810", Offset = "0x3A1D810", VA = "0x3A1D810")]
	public GisketchMotionTarget(GameObject gameObject, GisketchMotionDefinition enter, GisketchMotionDefinition exit)
	{
	}
}
