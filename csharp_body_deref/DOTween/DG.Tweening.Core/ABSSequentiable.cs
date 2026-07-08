using Il2CppDummyDll;

namespace DG.Tweening.Core;

[Token(Token = "0x20000A0")]
public abstract class ABSSequentiable
{
	[Token(Token = "0x40001C5")]
	[FieldOffset(Offset = "0x10")]
	internal TweenType tweenType;

	[Token(Token = "0x40001C6")]
	[FieldOffset(Offset = "0x14")]
	internal float sequencedPosition;

	[Token(Token = "0x40001C7")]
	[FieldOffset(Offset = "0x18")]
	internal float sequencedEndPosition;

	[Token(Token = "0x40001C8")]
	[FieldOffset(Offset = "0x20")]
	internal TweenCallback onStart;

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x231D2C0", Offset = "0x231D2C0", VA = "0x231D2C0")]
	protected ABSSequentiable()
	{
	}
}
