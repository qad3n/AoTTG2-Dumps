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

[Token(Token = "0x20000CC")]
public sealed class AottgChoicePopoverLifetime : MonoBehaviour
{
	[Token(Token = "0x4000423")]
	[FieldOffset(Offset = "0x20")]
	private Action _closed;

	[Token(Token = "0x6000655")]
	[Address(RVA = "0x5298620", Offset = "0x5297620", VA = "0x5298620")]
	public void Setup(Action closed)
	{
	}

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x5298630", Offset = "0x5297630", VA = "0x5298630")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x5298650", Offset = "0x5297650", VA = "0x5298650")]
	public AottgChoicePopoverLifetime()
	{
	}
}
