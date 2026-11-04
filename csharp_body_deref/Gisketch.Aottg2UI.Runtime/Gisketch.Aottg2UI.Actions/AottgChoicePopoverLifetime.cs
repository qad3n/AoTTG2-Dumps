// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.AottgChoicePopoverLifetime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/AottgChoicePopoverLifetime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000C6")]
public sealed class AottgChoicePopoverLifetime : MonoBehaviour
{
	[Token(Token = "0x40003FC")]
	[FieldOffset(Offset = "0x20")]
	private Action _closed;

	[Token(Token = "0x6000608")]
	[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
	public void Setup(Action closed)
	{
	}

	[Token(Token = "0x6000609")]
	[Address(RVA = "0x18F79C0", Offset = "0x18F5FC0", VA = "0x1818F79C0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AottgChoicePopoverLifetime()
	{
	}
}
