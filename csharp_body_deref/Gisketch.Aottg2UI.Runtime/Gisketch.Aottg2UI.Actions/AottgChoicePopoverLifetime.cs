using System;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000A3")]
public sealed class AottgChoicePopoverLifetime : MonoBehaviour
{
	[Token(Token = "0x4000331")]
	[FieldOffset(Offset = "0x20")]
	private Action _closed;

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x3A21A30", Offset = "0x3A21A30", VA = "0x3A21A30")]
	public void Setup(Action closed)
	{
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x3A21A40", Offset = "0x3A21A40", VA = "0x3A21A40")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x3A21A60", Offset = "0x3A21A60", VA = "0x3A21A60")]
	public AottgChoicePopoverLifetime()
	{
	}
}
