using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Localization;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000136")]
internal static class AottgAccountDialogUi
{
	[Token(Token = "0x4000717")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly IGisketchLocalizer Localizer;

	[Token(Token = "0x6000687")]
	[Address(RVA = "0x4075E00", Offset = "0x4075E00", VA = "0x4075E00")]
	public static void Intro(AottgUi body, string key, string fallback)
	{
	}

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x4075FC0", Offset = "0x4075FC0", VA = "0x4075FC0")]
	public static void Providers(AottgUi body)
	{
	}

	[Token(Token = "0x6000689")]
	[Address(RVA = "0x4076380", Offset = "0x4076380", VA = "0x4076380")]
	public static void Divider(AottgUi body)
	{
	}

	[Token(Token = "0x600068A")]
	[Address(RVA = "0x4076690", Offset = "0x4076690", VA = "0x4076690")]
	public static void LabeledInput(AottgUi ui, string id, string labelKey, string label, string placeholderKey, string placeholder, AottgInputType type, [Optional][DefaultParameterValue(0)] int maxCharacters, [Optional] string value)
	{
	}

	[Token(Token = "0x600068B")]
	[Address(RVA = "0x4076990", Offset = "0x4076990", VA = "0x4076990")]
	public static void KeepSignedIn(AottgUi ui, string id)
	{
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x4076BB0", Offset = "0x4076BB0", VA = "0x4076BB0")]
	public static void EmptyMethods(AottgUi body)
	{
	}

	[Token(Token = "0x600068D")]
	[Address(RVA = "0x4075EB0", Offset = "0x4075EB0", VA = "0x4075EB0")]
	public static string Text(string key, string fallback)
	{
		return null;
	}

	[Token(Token = "0x600068E")]
	[Address(RVA = "0x4076160", Offset = "0x4076160", VA = "0x4076160")]
	private static void Provider(AottgUi body, string id, string style, string icon, string textKey, string fallback, string action, string visibleKey)
	{
	}

	[Token(Token = "0x600068F")]
	[Address(RVA = "0x4076620", Offset = "0x4076620", VA = "0x4076620")]
	private static GisketchUIBindingDefinition Visible(string key)
	{
		return null;
	}

	[Token(Token = "0x6000690")]
	[Address(RVA = "0x4076920", Offset = "0x4076920", VA = "0x4076920")]
	private static GisketchUIBindingDefinition Enabled(string key)
	{
		return null;
	}
}
