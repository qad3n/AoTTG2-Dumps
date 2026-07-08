using DG.Tweening.Plugins.Options;
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening.Plugins;

[Token(Token = "0x2000073")]
public struct CircleOptions : IPlugOptions
{
	[Token(Token = "0x4000158")]
	[FieldOffset(Offset = "0x0")]
	public float endValueDegrees;

	[Token(Token = "0x4000159")]
	[FieldOffset(Offset = "0x4")]
	public bool relativeCenter;

	[Token(Token = "0x400015A")]
	[FieldOffset(Offset = "0x5")]
	public bool snapping;

	[Token(Token = "0x400015B")]
	[FieldOffset(Offset = "0x8")]
	internal Vector2 center;

	[Token(Token = "0x400015C")]
	[FieldOffset(Offset = "0x10")]
	internal float radius;

	[Token(Token = "0x400015D")]
	[FieldOffset(Offset = "0x14")]
	internal float startValueDegrees;

	[Token(Token = "0x400015E")]
	[FieldOffset(Offset = "0x18")]
	internal bool initialized;

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x2309DD0", Offset = "0x2309DD0", VA = "0x2309DD0", Slot = "4")]
	public void Reset()
	{
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x2309DF0", Offset = "0x2309DF0", VA = "0x2309DF0")]
	public void Initialize(Vector2 startValue, Vector2 endValue)
	{
	}
}
