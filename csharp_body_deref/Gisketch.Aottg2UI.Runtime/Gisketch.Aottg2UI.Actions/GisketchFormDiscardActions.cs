// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchFormDiscardActions
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormDiscardActions.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000E0")]
public static class GisketchFormDiscardActions
{
	[Token(Token = "0x4000491")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Action<GameObject>> Actions;

	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x1900BD0", Offset = "0x18FF1D0", VA = "0x181900BD0")]
	public static void Register(string overlayId, Action<GameObject> action)
	{
	}

	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x1900B10", Offset = "0x18FF110", VA = "0x181900B10")]
	public static void Invoke(string overlayId, GameObject source)
	{
	}
}
