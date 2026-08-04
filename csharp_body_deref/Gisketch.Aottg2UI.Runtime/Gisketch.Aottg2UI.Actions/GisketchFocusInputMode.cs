// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchFocusInputMode
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusInputMode.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000BB")]
public static class GisketchFocusInputMode
{
	[Token(Token = "0x40003D0")]
	[FieldOffset(Offset = "0x0")]
	private static Vector3 _lastMousePosition;

	[Token(Token = "0x40003D1")]
	[FieldOffset(Offset = "0xC")]
	private static bool _hasMousePosition;

	[Token(Token = "0x1700007C")]
	public static GisketchInputMode Mode
	{
		[Token(Token = "0x6000563")]
		[Address(RVA = "0x3A956F0", Offset = "0x3A956F0", VA = "0x3A956F0")]
		[CompilerGenerated]
		get
		{
			return default(GisketchInputMode);
		}
		[Token(Token = "0x6000564")]
		[Address(RVA = "0x3A95730", Offset = "0x3A95730", VA = "0x3A95730")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700007D")]
	public static bool IsNavigation
	{
		[Token(Token = "0x6000565")]
		[Address(RVA = "0x3A8AEB0", Offset = "0x3A8AEB0", VA = "0x3A8AEB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000004")]
	public static event Action Changed
	{
		[Token(Token = "0x6000561")]
		[Address(RVA = "0x3A95570", Offset = "0x3A95570", VA = "0x3A95570")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000562")]
		[Address(RVA = "0x3A95630", Offset = "0x3A95630", VA = "0x3A95630")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x3A89E70", Offset = "0x3A89E70", VA = "0x3A89E70")]
	public static void SetPointer()
	{
	}

	[Token(Token = "0x6000567")]
	[Address(RVA = "0x3A89FE0", Offset = "0x3A89FE0", VA = "0x3A89FE0")]
	public static void SetNavigation()
	{
	}

	[Token(Token = "0x6000568")]
	[Address(RVA = "0x3A95820", Offset = "0x3A95820", VA = "0x3A95820")]
	public static bool TakeTab(out bool backwards)
	{
		return default(bool);
	}

	[Token(Token = "0x6000569")]
	[Address(RVA = "0x3A95930", Offset = "0x3A95930", VA = "0x3A95930")]
	public static bool Poll()
	{
		return default(bool);
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x3A95CD0", Offset = "0x3A95CD0", VA = "0x3A95CD0")]
	public static void PollPointerOnly()
	{
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x3A95770", Offset = "0x3A95770", VA = "0x3A95770")]
	private static void SetMode(GisketchInputMode mode)
	{
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x3A95A90", Offset = "0x3A95A90", VA = "0x3A95A90")]
	private static bool HasNavigationInput()
	{
		return default(bool);
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x3A95BB0", Offset = "0x3A95BB0", VA = "0x3A95BB0")]
	private static bool HasPointerInput()
	{
		return default(bool);
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x3A95D80", Offset = "0x3A95D80", VA = "0x3A95D80")]
	private static float Axis(string name)
	{
		return default(float);
	}
}
