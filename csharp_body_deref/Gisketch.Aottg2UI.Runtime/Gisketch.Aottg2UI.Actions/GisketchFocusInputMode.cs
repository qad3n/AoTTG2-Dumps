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

[Token(Token = "0x20000DC")]
public static class GisketchFocusInputMode
{
	[Token(Token = "0x400048A")]
	[FieldOffset(Offset = "0x0")]
	private static Vector3 _lastMousePosition;

	[Token(Token = "0x400048B")]
	[FieldOffset(Offset = "0xC")]
	private static bool _hasMousePosition;

	[Token(Token = "0x400048C")]
	[FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	private static Action m_Changed;

	[Token(Token = "0x170000AE")]
	public static GisketchInputMode Mode
	{
		[Token(Token = "0x60006B7")]
		[Address(RVA = "0x18FF180", Offset = "0x18FD780", VA = "0x1818FF180")]
		[CompilerGenerated]
		get
		{
			return default(GisketchInputMode);
		}
		[Token(Token = "0x60006B8")]
		[Address(RVA = "0x18FF280", Offset = "0x18FD880", VA = "0x1818FF280")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000AF")]
	public static bool IsNavigation
	{
		[Token(Token = "0x60006B9")]
		[Address(RVA = "0x18FF140", Offset = "0x18FD740", VA = "0x1818FF140")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000004")]
	public static event Action Changed
	{
		[Token(Token = "0x60006B5")]
		[Address(RVA = "0x18FF080", Offset = "0x18FD680", VA = "0x1818FF080")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60006B6")]
		[Address(RVA = "0x18FF1C0", Offset = "0x18FD7C0", VA = "0x1818FF1C0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x18FF010", Offset = "0x18FD610", VA = "0x1818FF010")]
	public static void SetPointer()
	{
	}

	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x18FA410", Offset = "0x18F8A10", VA = "0x1818FA410")]
	public static void SetNavigation()
	{
	}

	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x18FF020", Offset = "0x18FD620", VA = "0x1818FF020")]
	public static bool TakeTab(out bool backwards)
	{
		return default(bool);
	}

	[Token(Token = "0x60006BD")]
	[Address(RVA = "0x18FEE10", Offset = "0x18FD410", VA = "0x1818FEE10")]
	public static bool Poll()
	{
		return default(bool);
	}

	[Token(Token = "0x60006BE")]
	[Address(RVA = "0x18FEDE0", Offset = "0x18FD3E0", VA = "0x1818FEDE0")]
	public static void PollPointerOnly()
	{
	}

	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x18FEF60", Offset = "0x18FD560", VA = "0x1818FEF60")]
	private static void SetMode(GisketchInputMode mode)
	{
	}

	[Token(Token = "0x60006C0")]
	[Address(RVA = "0x18FEB60", Offset = "0x18FD160", VA = "0x1818FEB60")]
	private static bool HasNavigationInput()
	{
		return default(bool);
	}

	[Token(Token = "0x60006C1")]
	[Address(RVA = "0x18FEC90", Offset = "0x18FD290", VA = "0x1818FEC90")]
	private static bool HasPointerInput()
	{
		return default(bool);
	}

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x18FEB40", Offset = "0x18FD140", VA = "0x1818FEB40")]
	private static float Axis(string name)
	{
		return default(float);
	}
}
