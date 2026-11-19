// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgDialogHeader
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgDialogHeader.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000082")]
public sealed class AottgDialogHeader : AottgComponent
{
	[Token(Token = "0x40002C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _title;

	[Token(Token = "0x40002C7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly AottgButtonVariant _variant;

	[Token(Token = "0x40002C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _icon;

	[Token(Token = "0x40002C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly string _closeEnabledKey;

	[Token(Token = "0x40002CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly string _titleKey;

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x5265F60", Offset = "0x5264F60", VA = "0x5265F60")]
	public AottgDialogHeader(string title, [Optional][DefaultParameterValue(0)] AottgButtonVariant variant, [Optional] string icon, [Optional] string closeEnabledKey, [Optional] string titleKey)
	{
	}

	[Token(Token = "0x6000400")]
	[Address(RVA = "0x52660F0", Offset = "0x52650F0", VA = "0x52660F0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000401")]
	[Address(RVA = "0x52662A0", Offset = "0x52652A0", VA = "0x52662A0")]
	private static string TitleBarStyle(AottgButtonVariant variant)
	{
		return null;
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x5266060", Offset = "0x5265060", VA = "0x5266060")]
	private static string DefaultIcon(AottgButtonVariant variant)
	{
		return null;
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x5266780", Offset = "0x5265780", VA = "0x5266780")]
	private static string CloseButtonStyle(AottgButtonVariant variant)
	{
		return null;
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x5266810", Offset = "0x5265810", VA = "0x5266810")]
	private static string TitleTextStyle(AottgButtonVariant variant)
	{
		return null;
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x5266880", Offset = "0x5265880", VA = "0x5266880")]
	private static string TitleIconStyle(AottgButtonVariant variant)
	{
		return null;
	}
}
