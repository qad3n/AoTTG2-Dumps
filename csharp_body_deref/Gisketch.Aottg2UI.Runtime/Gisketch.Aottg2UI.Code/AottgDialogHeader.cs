// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgDialogHeader
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgDialogHeader.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000068")]
public sealed class AottgDialogHeader : AottgComponent
{
	[Token(Token = "0x4000229")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _title;

	[Token(Token = "0x400022A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly AottgButtonVariant _variant;

	[Token(Token = "0x400022B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _icon;

	[Token(Token = "0x400022C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly string _closeEnabledKey;

	[Token(Token = "0x400022D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly string _titleKey;

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x3A5E830", Offset = "0x3A5E830", VA = "0x3A5E830")]
	public AottgDialogHeader(string title, [Optional][DefaultParameterValue(0)] AottgButtonVariant variant, [Optional] string icon, [Optional] string closeEnabledKey, [Optional] string titleKey)
	{
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x3A5FFE0", Offset = "0x3A5FFE0", VA = "0x3A5FFE0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x3A60230", Offset = "0x3A60230", VA = "0x3A60230")]
	private static string TitleBarStyle(AottgButtonVariant variant)
	{
		return null;
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x3A5FF50", Offset = "0x3A5FF50", VA = "0x3A5FF50")]
	private static string DefaultIcon(AottgButtonVariant variant)
	{
		return null;
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x3A60460", Offset = "0x3A60460", VA = "0x3A60460")]
	private static string CloseButtonStyle(AottgButtonVariant variant)
	{
		return null;
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x3A604F0", Offset = "0x3A604F0", VA = "0x3A604F0")]
	private static string TitleTextStyle(AottgButtonVariant variant)
	{
		return null;
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x3A60560", Offset = "0x3A60560", VA = "0x3A60560")]
	private static string TitleIconStyle(AottgButtonVariant variant)
	{
		return null;
	}
}
