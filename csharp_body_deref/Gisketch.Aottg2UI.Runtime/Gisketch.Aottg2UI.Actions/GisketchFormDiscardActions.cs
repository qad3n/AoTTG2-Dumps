// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchFormDiscardActions
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormDiscardActions.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000E6")]
public static class GisketchFormDiscardActions
{
	[Token(Token = "0x40004B8")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Action<GameObject>> Actions;

	[Token(Token = "0x6000727")]
	[Address(RVA = "0x52A3050", Offset = "0x52A2050", VA = "0x52A3050")]
	public static void Register(string overlayId, Action<GameObject> action)
	{
	}

	[Token(Token = "0x6000728")]
	[Address(RVA = "0x52A30F0", Offset = "0x52A20F0", VA = "0x52A30F0")]
	public static void Invoke(string overlayId, GameObject source)
	{
	}
}
