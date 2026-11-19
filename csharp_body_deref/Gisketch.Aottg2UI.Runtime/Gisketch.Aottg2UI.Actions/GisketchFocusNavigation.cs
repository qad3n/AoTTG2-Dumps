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

[Token(Token = "0x20000E4")]
public static class GisketchFocusNavigation
{
	[Token(Token = "0x6000714")]
	[Address(RVA = "0x52A17C0", Offset = "0x52A07C0", VA = "0x52A17C0")]
	public static bool Cycle(GameObject root, bool backwards)
	{
		return default(bool);
	}

	[Token(Token = "0x6000715")]
	[Address(RVA = "0x52A1820", Offset = "0x52A0820", VA = "0x52A1820")]
	internal static bool Cycle(GameObject root, bool backwards, EventSystem eventSystem)
	{
		return default(bool);
	}

	[Token(Token = "0x6000716")]
	[Address(RVA = "0x52A1990", Offset = "0x52A0990", VA = "0x52A1990")]
	private static List<Selectable> Items(GameObject root)
	{
		return null;
	}

	[Token(Token = "0x6000717")]
	[Address(RVA = "0x52A1BB0", Offset = "0x52A0BB0", VA = "0x52A1BB0")]
	private static int IndexOf(List<Selectable> items, GameObject selected)
	{
		return default(int);
	}

	[Token(Token = "0x6000718")]
	[Address(RVA = "0x52A1CA0", Offset = "0x52A0CA0", VA = "0x52A1CA0")]
	private static int FirstVisibleIndex(List<Selectable> items, bool backwards)
	{
		return default(int);
	}

	[Token(Token = "0x6000719")]
	[Address(RVA = "0x52A1C90", Offset = "0x52A0C90", VA = "0x52A1C90")]
	private static int Mod(int value, int count)
	{
		return default(int);
	}
}
