// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgAccountDialogUi
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgAccountDialogUi.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Localization;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200026E")]
internal static class AottgAccountDialogUi
{
	[Token(Token = "0x4000C77")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly IGisketchLocalizer Localizer;

	[Token(Token = "0x6000EA8")]
	[Address(RVA = "0x1DD5B20", Offset = "0x1DD4120", VA = "0x181DD5B20")]
	public static void Intro(AottgUi body, string key, string fallback)
	{
	}

	[Token(Token = "0x6000EA9")]
	[Address(RVA = "0x1DD6320", Offset = "0x1DD4920", VA = "0x181DD6320")]
	public static void Providers(AottgUi body)
	{
	}

	[Token(Token = "0x6000EAA")]
	[Address(RVA = "0x1DD5680", Offset = "0x1DD3C80", VA = "0x181DD5680")]
	public static void Divider(AottgUi body)
	{
	}

	[Token(Token = "0x6000EAB")]
	[Address(RVA = "0x1DD5E00", Offset = "0x1DD4400", VA = "0x181DD5E00")]
	public static void LabeledInput(AottgUi ui, string id, string labelKey, string label, string placeholderKey, string placeholder, AottgInputType type, [Optional][DefaultParameterValue(0)] int maxCharacters, [Optional] string value)
	{
	}

	[Token(Token = "0x6000EAC")]
	[Address(RVA = "0x1DD5BE0", Offset = "0x1DD41E0", VA = "0x181DD5BE0")]
	public static void KeepSignedIn(AottgUi ui, string id)
	{
	}

	[Token(Token = "0x6000EAD")]
	[Address(RVA = "0x1DD5940", Offset = "0x1DD3F40", VA = "0x181DD5940")]
	public static void EmptyMethods(AottgUi body)
	{
	}

	[Token(Token = "0x6000EAE")]
	[Address(RVA = "0x1DD64C0", Offset = "0x1DD4AC0", VA = "0x181DD64C0")]
	public static string Text(string key, string fallback)
	{
		return null;
	}

	[Token(Token = "0x6000EAF")]
	[Address(RVA = "0x1DD60C0", Offset = "0x1DD46C0", VA = "0x181DD60C0")]
	private static void Provider(AottgUi body, string id, string style, string icon, string textKey, string fallback, string action, string visibleKey)
	{
	}

	[Token(Token = "0x6000EB0")]
	[Address(RVA = "0x1DD6550", Offset = "0x1DD4B50", VA = "0x181DD6550")]
	private static GisketchUIBindingDefinition Visible(string key)
	{
		return null;
	}

	[Token(Token = "0x6000EB1")]
	[Address(RVA = "0x1DD5AB0", Offset = "0x1DD40B0", VA = "0x181DD5AB0")]
	private static GisketchUIBindingDefinition Enabled(string key)
	{
		return null;
	}
}
