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

[Token(Token = "0x20000DE")]
public static class GisketchFocusNavigation
{
	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x18FF2C0", Offset = "0x18FD8C0", VA = "0x1818FF2C0")]
	public static bool Cycle(GameObject root, bool backwards)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x18FF330", Offset = "0x18FD930", VA = "0x1818FF330")]
	internal static bool Cycle(GameObject root, bool backwards, EventSystem eventSystem)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x18FF930", Offset = "0x18FDF30", VA = "0x1818FF930")]
	private static List<Selectable> Items(GameObject root)
	{
		return null;
	}

	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x18FF860", Offset = "0x18FDE60", VA = "0x1818FF860")]
	private static int IndexOf(List<Selectable> items, GameObject selected)
	{
		return default(int);
	}

	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x18FF770", Offset = "0x18FDD70", VA = "0x1818FF770")]
	private static int FirstVisibleIndex(List<Selectable> items, bool backwards)
	{
		return default(int);
	}

	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x18FFB00", Offset = "0x18FE100", VA = "0x1818FFB00")]
	private static int Mod(int value, int count)
	{
		return default(int);
	}
}
