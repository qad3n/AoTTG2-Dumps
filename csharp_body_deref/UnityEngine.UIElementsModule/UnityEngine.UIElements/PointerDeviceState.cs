// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PointerDeviceState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
			[Address(RVA = "0x5037550", Offset = "0x5037550", VA = "0x5037550")]
			[CompilerGenerated]
			readonly get
			{
				return default(Vector2);
			}
			[Token(Token = "0x6000BF6")]
			[Address(RVA = "0x5037560", Offset = "0x5037560", VA = "0x5037560")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000220")]
		internal IPanel Panel
		{
			[Token(Token = "0x6000BF7")]
			[Address(RVA = "0x5037570", Offset = "0x5037570", VA = "0x5037570")]
			[CompilerGenerated]
			readonly get
			{
				return null;
			}
			[Token(Token = "0x6000BF8")]
			[Address(RVA = "0x5037580", Offset = "0x5037580", VA = "0x5037580")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000221")]
		internal LocationFlag Flags
		{
			[Token(Token = "0x6000BF9")]
			[Address(RVA = "0x5037590", Offset = "0x5037590", VA = "0x5037590")]
			[CompilerGenerated]
			readonly get
			{
				return default(LocationFlag);
			}
			[Token(Token = "0x6000BFA")]
			[Address(RVA = "0x50375A0", Offset = "0x50375A0", VA = "0x50375A0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x6000BFB")]
		[Address(RVA = "0x5036D70", Offset = "0x5036D70", VA = "0x5036D70")]
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
	[Address(RVA = "0x5036B00", Offset = "0x5036B00", VA = "0x5036B00")]
	internal static void RemovePanelData(IPanel panel)
	{
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x5036E80", Offset = "0x5036E80", VA = "0x5036E80")]
	public static void SavePointerPosition(int pointerId, Vector2 position, IPanel panel, ContextType contextType)
	{
	}

	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x50328F0", Offset = "0x50328F0", VA = "0x50328F0")]
	public static void PressButton(int pointerId, int buttonId)
	{
	}

	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x5032E70", Offset = "0x5032E70", VA = "0x5032E70")]
	public static void ReleaseButton(int pointerId, int buttonId)
	{
	}

	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x5034BC0", Offset = "0x5034BC0", VA = "0x5034BC0")]
	public static void ReleaseAllButtons(int pointerId)
	{
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x502BB40", Offset = "0x502BB40", VA = "0x502BB40")]
	public static Vector2 GetPointerPosition(int pointerId, ContextType contextType)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x5037050", Offset = "0x5037050", VA = "0x5037050")]
	public static IPanel GetPanel(int pointerId, ContextType contextType)
	{
		return null;
	}

	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x50370F0", Offset = "0x50370F0", VA = "0x50370F0")]
	private static bool HasFlagFast(LocationFlag flagSet, LocationFlag flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x5037100", Offset = "0x5037100", VA = "0x5037100")]
	public static bool HasLocationFlag(int pointerId, ContextType contextType, LocationFlag flag)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x50371A0", Offset = "0x50371A0", VA = "0x50371A0")]
	public static int GetPressedButtons(int pointerId)
	{
		return default(int);
	}

	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x5037230", Offset = "0x5037230", VA = "0x5037230")]
	internal static bool HasAdditionalPressedButtons(int pointerId, int exceptButtonId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x50372D0", Offset = "0x50372D0", VA = "0x50372D0")]
	internal static void SetPlayerPanelWithSoftPointerCapture(int pointerId, IPanel panel)
	{
	}

	[Token(Token = "0x6000BF3")]
	[Address(RVA = "0x50373A0", Offset = "0x50373A0", VA = "0x50373A0")]
	internal static IPanel GetPlayerPanelWithSoftPointerCapture(int pointerId)
	{
		return null;
	}
}
