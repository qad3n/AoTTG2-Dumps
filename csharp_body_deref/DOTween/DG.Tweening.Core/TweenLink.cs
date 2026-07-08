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
	[Address(RVA = "0x2320630", Offset = "0x2320630", VA = "0x2320630")]
	public TweenLink(GameObject target, LinkBehaviour behaviour)
	{
	}
}
