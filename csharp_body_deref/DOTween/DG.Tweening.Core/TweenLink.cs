// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Core.TweenLink
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening.Core;

[Token(Token = "0x20000B5")]
internal class TweenLink
{
	[Token(Token = "0x400021F")]
	[FieldOffset(Offset = "0x10")]
	public readonly GameObject target;

	[Token(Token = "0x4000220")]
	[FieldOffset(Offset = "0x18")]
	public readonly LinkBehaviour behaviour;

	[Token(Token = "0x4000221")]
	[FieldOffset(Offset = "0x1C")]
	public bool lastSeenActive;

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x2386F10", Offset = "0x2386F10", VA = "0x2386F10")]
	public TweenLink(GameObject target, LinkBehaviour behaviour)
	{
	}
}
