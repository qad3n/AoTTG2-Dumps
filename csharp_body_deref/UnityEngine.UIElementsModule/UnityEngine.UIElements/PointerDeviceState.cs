using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001D0")]
internal static class PointerDeviceState
{
	[Token(Token = "0x20001D1")]
	[Flags]
	internal enum LocationFlag
	{
		[Token(Token = "0x40006D0")]
		None = 0,
		[Token(Token = "0x40006D1")]
		OutsidePanel = 1
	}

	[Token(Token = "0x20001D2")]
	private struct PointerLocation
	{
		[Token(Token = "0x1700021F")]
		internal Vector2 Position
		{
			[Token(Token = "0x6000BF5")]
			[Address(RVA = "0x4D0FC20", Offset = "0x4D0FC20", VA = "0x4D0FC20")]
			[CompilerGenerated]
			readonly get
			{
				return default(Vector2);
			}
			[Token(Token = "0x6000BF6")]
			[Address(RVA = "0x4D0FC30", Offset = "0x4D0FC30", VA = "0x4D0FC30")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000220")]
		internal IPanel Panel
		{
			[Token(Token = "0x6000BF7")]
			[Address(RVA = "0x4D0FC40", Offset = "0x4D0FC40", VA = "0x4D0FC40")]
			[CompilerGenerated]
			readonly get
			{
				return null;
			}
			[Token(Token = "0x6000BF8")]
			[Address(RVA = "0x4D0FC50", Offset = "0x4D0FC50", VA = "0x4D0FC50")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000221")]
		internal LocationFlag Flags
		{
			[Token(Token = "0x6000BF9")]
			[Address(RVA = "0x4D0FC60", Offset = "0x4D0FC60", VA = "0x4D0FC60")]
			[CompilerGenerated]
			readonly get
			{
				return default(LocationFlag);
			}
			[Token(Token = "0x6000BFA")]
			[Address(RVA = "0x4D0FC70", Offset = "0x4D0FC70", VA = "0x4D0FC70")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x6000BFB")]
		[Address(RVA = "0x4D0F440", Offset = "0x4D0F440", VA = "0x4D0F440")]
		internal void SetLocation(Vector2 position, IPanel panel)
		{
		}
	}

	[Token(Token = "0x40006CC")]
	[FieldOffset(Offset = "0x0")]
	private static PointerLocation[] s_PlayerPointerLocations;

	[Token(Token = "0x40006CD")]
	[FieldOffset(Offset = "0x8")]
	private static int[] s_PressedButtons;

	[Token(Token = "0x40006CE")]
	[FieldOffset(Offset = "0x10")]
	private static readonly IPanel[] s_PlayerPanelWithSoftPointerCapture;

	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x4D0F1D0", Offset = "0x4D0F1D0", VA = "0x4D0F1D0")]
	internal static void RemovePanelData(IPanel panel)
	{
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x4D0F550", Offset = "0x4D0F550", VA = "0x4D0F550")]
	public static void SavePointerPosition(int pointerId, Vector2 position, IPanel panel, ContextType contextType)
	{
	}

	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x4D0AFC0", Offset = "0x4D0AFC0", VA = "0x4D0AFC0")]
	public static void PressButton(int pointerId, int buttonId)
	{
	}

	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x4D0B540", Offset = "0x4D0B540", VA = "0x4D0B540")]
	public static void ReleaseButton(int pointerId, int buttonId)
	{
	}

	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x4D0D290", Offset = "0x4D0D290", VA = "0x4D0D290")]
	public static void ReleaseAllButtons(int pointerId)
	{
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x4D04210", Offset = "0x4D04210", VA = "0x4D04210")]
	public static Vector2 GetPointerPosition(int pointerId, ContextType contextType)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x4D0F720", Offset = "0x4D0F720", VA = "0x4D0F720")]
	public static IPanel GetPanel(int pointerId, ContextType contextType)
	{
		return null;
	}

	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x4D0F7C0", Offset = "0x4D0F7C0", VA = "0x4D0F7C0")]
	private static bool HasFlagFast(LocationFlag flagSet, LocationFlag flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x4D0F7D0", Offset = "0x4D0F7D0", VA = "0x4D0F7D0")]
	public static bool HasLocationFlag(int pointerId, ContextType contextType, LocationFlag flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x4D0F870", Offset = "0x4D0F870", VA = "0x4D0F870")]
	public static int GetPressedButtons(int pointerId)
	{
		return default(int);
	}

	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x4D0F900", Offset = "0x4D0F900", VA = "0x4D0F900")]
	internal static bool HasAdditionalPressedButtons(int pointerId, int exceptButtonId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x4D0F9A0", Offset = "0x4D0F9A0", VA = "0x4D0F9A0")]
	internal static void SetPlayerPanelWithSoftPointerCapture(int pointerId, IPanel panel)
	{
	}

	[Token(Token = "0x6000BF3")]
	[Address(RVA = "0x4D0FA70", Offset = "0x4D0FA70", VA = "0x4D0FA70")]
	internal static IPanel GetPlayerPanelWithSoftPointerCapture(int pointerId)
	{
		return null;
	}
}
