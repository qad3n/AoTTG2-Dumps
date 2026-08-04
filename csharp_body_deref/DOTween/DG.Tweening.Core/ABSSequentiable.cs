// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Core.ABSSequentiable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x2383BA0", Offset = "0x2383BA0", VA = "0x2383BA0")]
	protected ABSSequentiable()
	{
	}
}
