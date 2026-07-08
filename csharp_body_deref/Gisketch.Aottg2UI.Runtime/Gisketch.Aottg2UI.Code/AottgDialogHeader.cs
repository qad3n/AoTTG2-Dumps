using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000066")]
public sealed class AottgDialogHeader : AottgComponent
{
	[Token(Token = "0x4000222")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _title;

	[Token(Token = "0x4000223")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly AottgButtonVariant _variant;

	[Token(Token = "0x4000224")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _icon;

	[Token(Token = "0x4000225")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly string _closeEnabledKey;

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x39F48E0", Offset = "0x39F48E0", VA = "0x39F48E0")]
	public AottgDialogHeader(string title, [Optional][DefaultParameterValue(0)] AottgButtonVariant variant, [Optional] string icon, [Optional] string closeEnabledKey)
	{
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x39F4A50", Offset = "0x39F4A50", VA = "0x39F4A50", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x39F4CA0", Offset = "0x39F4CA0", VA = "0x39F4CA0")]
	private static string TitleBarStyle(AottgButtonVariant variant)
	{
		return null;
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x39F49C0", Offset = "0x39F49C0", VA = "0x39F49C0")]
	private static string DefaultIcon(AottgButtonVariant variant)
	{
		return null;
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x39F5180", Offset = "0x39F5180", VA = "0x39F5180")]
	private static string CloseButtonStyle(AottgButtonVariant variant)
	{
		return null;
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x39F5210", Offset = "0x39F5210", VA = "0x39F5210")]
	private static string TitleTextStyle(AottgButtonVariant variant)
	{
		return null;
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x39F5280", Offset = "0x39F5280", VA = "0x39F5280")]
	private static string TitleIconStyle(AottgButtonVariant variant)
	{
		return null;
	}
}
