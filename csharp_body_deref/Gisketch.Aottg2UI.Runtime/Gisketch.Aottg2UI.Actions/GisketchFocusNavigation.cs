using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000B9")]
public static class GisketchFocusNavigation
{
	[Token(Token = "0x6000545")]
	[Address(RVA = "0x3A29550", Offset = "0x3A29550", VA = "0x3A29550")]
	public static bool Cycle(GameObject root, bool backwards)
	{
		return default(bool);
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x3A295B0", Offset = "0x3A295B0", VA = "0x3A295B0")]
	internal static bool Cycle(GameObject root, bool backwards, EventSystem eventSystem)
	{
		return default(bool);
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x3A29730", Offset = "0x3A29730", VA = "0x3A29730")]
	private static List<Selectable> Items(GameObject root)
	{
		return null;
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x3A29A50", Offset = "0x3A29A50", VA = "0x3A29A50")]
	private static int IndexOf(List<Selectable> items, GameObject selected)
	{
		return default(int);
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x3A29B40", Offset = "0x3A29B40", VA = "0x3A29B40")]
	private static int FirstVisibleIndex(List<Selectable> items, bool backwards)
	{
		return default(int);
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x3A29B30", Offset = "0x3A29B30", VA = "0x3A29B30")]
	private static int Mod(int value, int count)
	{
		return default(int);
	}
}
