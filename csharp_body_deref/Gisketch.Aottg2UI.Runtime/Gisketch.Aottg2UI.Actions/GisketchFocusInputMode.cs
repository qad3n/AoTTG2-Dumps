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

[Token(Token = "0x20000E2")]
public static class GisketchFocusInputMode
{
	[Token(Token = "0x40004B1")]
	[FieldOffset(Offset = "0x0")]
	private static Vector3 _lastMousePosition;

	[Token(Token = "0x40004B2")]
	[FieldOffset(Offset = "0xC")]
	private static bool _hasMousePosition;

	[Token(Token = "0x40004B3")]
	[FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	private static Action m_Changed;

	[Token(Token = "0x170000AE")]
	public static GisketchInputMode Mode
	{
		[Token(Token = "0x6000705")]
		[Address(RVA = "0x52A0F70", Offset = "0x529FF70", VA = "0x52A0F70")]
		[CompilerGenerated]
		get
		{
			return default(GisketchInputMode);
		}
		[Token(Token = "0x6000706")]
		[Address(RVA = "0x52A0FB0", Offset = "0x529FFB0", VA = "0x52A0FB0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000AF")]
	public static bool IsNavigation
	{
		[Token(Token = "0x6000707")]
		[Address(RVA = "0x5295820", Offset = "0x5294820", VA = "0x5295820")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000004")]
	public static event Action Changed
	{
		[Token(Token = "0x6000703")]
		[Address(RVA = "0x52A0E10", Offset = "0x529FE10", VA = "0x52A0E10")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000704")]
		[Address(RVA = "0x52A0EC0", Offset = "0x529FEC0", VA = "0x52A0EC0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000708")]
	[Address(RVA = "0x5294640", Offset = "0x5293640", VA = "0x5294640")]
	public static void SetPointer()
	{
	}

	[Token(Token = "0x6000709")]
	[Address(RVA = "0x52947B0", Offset = "0x52937B0", VA = "0x52947B0")]
	public static void SetNavigation()
	{
	}

	[Token(Token = "0x600070A")]
	[Address(RVA = "0x52A10A0", Offset = "0x52A00A0", VA = "0x52A10A0")]
	public static bool TakeTab(out bool backwards)
	{
		return default(bool);
	}

	[Token(Token = "0x600070B")]
	[Address(RVA = "0x52A11A0", Offset = "0x52A01A0", VA = "0x52A11A0")]
	public static bool Poll()
	{
		return default(bool);
	}

	[Token(Token = "0x600070C")]
	[Address(RVA = "0x52A1520", Offset = "0x52A0520", VA = "0x52A1520")]
	public static void PollPointerOnly()
	{
	}

	[Token(Token = "0x600070D")]
	[Address(RVA = "0x52A0FF0", Offset = "0x529FFF0", VA = "0x52A0FF0")]
	private static void SetMode(GisketchInputMode mode)
	{
	}

	[Token(Token = "0x600070E")]
	[Address(RVA = "0x52A12F0", Offset = "0x52A02F0", VA = "0x52A12F0")]
	private static bool HasNavigationInput()
	{
		return default(bool);
	}

	[Token(Token = "0x600070F")]
	[Address(RVA = "0x52A1410", Offset = "0x52A0410", VA = "0x52A1410")]
	private static bool HasPointerInput()
	{
		return default(bool);
	}

	[Token(Token = "0x6000710")]
	[Address(RVA = "0x52A15D0", Offset = "0x52A05D0", VA = "0x52A15D0")]
	private static float Axis(string name)
	{
		return default(float);
	}
}
