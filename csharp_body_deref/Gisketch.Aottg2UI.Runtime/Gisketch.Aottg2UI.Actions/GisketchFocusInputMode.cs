using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000B7")]
public static class GisketchFocusInputMode
{
	[Token(Token = "0x40003A1")]
	[FieldOffset(Offset = "0x0")]
	private static Vector3 _lastMousePosition;

	[Token(Token = "0x40003A2")]
	[FieldOffset(Offset = "0xC")]
	private static bool _hasMousePosition;

	[Token(Token = "0x1700007A")]
	public static GisketchInputMode Mode
	{
		[Token(Token = "0x6000536")]
		[Address(RVA = "0x3A28CD0", Offset = "0x3A28CD0", VA = "0x3A28CD0")]
		[CompilerGenerated]
		get
		{
			return default(GisketchInputMode);
		}
		[Token(Token = "0x6000537")]
		[Address(RVA = "0x3A28D10", Offset = "0x3A28D10", VA = "0x3A28D10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700007B")]
	public static bool IsNavigation
	{
		[Token(Token = "0x6000538")]
		[Address(RVA = "0x3A1ECF0", Offset = "0x3A1ECF0", VA = "0x3A1ECF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000004")]
	public static event Action Changed
	{
		[Token(Token = "0x6000534")]
		[Address(RVA = "0x3A28B50", Offset = "0x3A28B50", VA = "0x3A28B50")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000535")]
		[Address(RVA = "0x3A28C10", Offset = "0x3A28C10", VA = "0x3A28C10")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x3A1DC30", Offset = "0x3A1DC30", VA = "0x3A1DC30")]
	public static void SetPointer()
	{
	}

	[Token(Token = "0x600053A")]
	[Address(RVA = "0x3A1DDA0", Offset = "0x3A1DDA0", VA = "0x3A1DDA0")]
	public static void SetNavigation()
	{
	}

	[Token(Token = "0x600053B")]
	[Address(RVA = "0x3A28E00", Offset = "0x3A28E00", VA = "0x3A28E00")]
	public static bool TakeTab(out bool backwards)
	{
		return default(bool);
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x3A28F10", Offset = "0x3A28F10", VA = "0x3A28F10")]
	public static bool Poll()
	{
		return default(bool);
	}

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x3A292B0", Offset = "0x3A292B0", VA = "0x3A292B0")]
	public static void PollPointerOnly()
	{
	}

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x3A28D50", Offset = "0x3A28D50", VA = "0x3A28D50")]
	private static void SetMode(GisketchInputMode mode)
	{
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x3A29070", Offset = "0x3A29070", VA = "0x3A29070")]
	private static bool HasNavigationInput()
	{
		return default(bool);
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x3A29190", Offset = "0x3A29190", VA = "0x3A29190")]
	private static bool HasPointerInput()
	{
		return default(bool);
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x3A29360", Offset = "0x3A29360", VA = "0x3A29360")]
	private static float Axis(string name)
	{
		return default(float);
	}
}
