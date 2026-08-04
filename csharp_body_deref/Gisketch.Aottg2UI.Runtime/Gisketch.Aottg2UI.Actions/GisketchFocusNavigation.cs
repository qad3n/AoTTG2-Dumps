// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchFocusNavigation
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusNavigation.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000BD")]
public static class GisketchFocusNavigation
{
	[Token(Token = "0x6000572")]
	[Address(RVA = "0x3A95F70", Offset = "0x3A95F70", VA = "0x3A95F70")]
	public static bool Cycle(GameObject root, bool backwards)
	{
		return default(bool);
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x3A95FD0", Offset = "0x3A95FD0", VA = "0x3A95FD0")]
	internal static bool Cycle(GameObject root, bool backwards, EventSystem eventSystem)
	{
		return default(bool);
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x3A96150", Offset = "0x3A96150", VA = "0x3A96150")]
	private static List<Selectable> Items(GameObject root)
	{
		return null;
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x3A96470", Offset = "0x3A96470", VA = "0x3A96470")]
	private static int IndexOf(List<Selectable> items, GameObject selected)
	{
		return default(int);
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x3A96560", Offset = "0x3A96560", VA = "0x3A96560")]
	private static int FirstVisibleIndex(List<Selectable> items, bool backwards)
	{
		return default(int);
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x3A96550", Offset = "0x3A96550", VA = "0x3A96550")]
	private static int Mod(int value, int count)
	{
		return default(int);
	}
}
