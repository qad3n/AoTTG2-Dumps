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

[Token(Token = "0x200007C")]
public sealed class AottgDialogHeader : AottgComponent
{
	[Token(Token = "0x40002A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _title;

	[Token(Token = "0x40002A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly AottgButtonVariant _variant;

	[Token(Token = "0x40002A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _icon;

	[Token(Token = "0x40002A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly string _closeEnabledKey;

	[Token(Token = "0x40002A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly string _titleKey;

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x18C4700", Offset = "0x18C2D00", VA = "0x1818C4700")]
	public AottgDialogHeader(string title, [Optional][DefaultParameterValue(0)] AottgButtonVariant variant, [Optional] string icon, [Optional] string closeEnabledKey, [Optional] string titleKey)
	{
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x18C3B60", Offset = "0x18C2160", VA = "0x1818C3B60", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x18C3F70", Offset = "0x18C2570", VA = "0x1818C3F70")]
	private static string TitleBarStyle(AottgButtonVariant variant)
	{
		return null;
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x18C3EA0", Offset = "0x18C24A0", VA = "0x1818C3EA0")]
	private static string DefaultIcon(AottgButtonVariant variant)
	{
		return null;
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x18C3DB0", Offset = "0x18C23B0", VA = "0x1818C3DB0")]
	private static string CloseButtonStyle(AottgButtonVariant variant)
	{
		return null;
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x18C40D0", Offset = "0x18C26D0", VA = "0x1818C40D0")]
	private static string TitleTextStyle(AottgButtonVariant variant)
	{
		return null;
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x18C4060", Offset = "0x18C2660", VA = "0x1818C4060")]
	private static string TitleIconStyle(AottgButtonVariant variant)
	{
		return null;
	}
}
