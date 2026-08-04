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

[Token(Token = "0x2000168")]
internal static class AottgAccountDialogUi
{
	[Token(Token = "0x40007D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly IGisketchLocalizer Localizer;

	[Token(Token = "0x60007F4")]
	[Address(RVA = "0x43ED6A0", Offset = "0x43ED6A0", VA = "0x43ED6A0")]
	public static void Intro(AottgUi body, string key, string fallback)
	{
	}

	[Token(Token = "0x60007F5")]
	[Address(RVA = "0x43ED860", Offset = "0x43ED860", VA = "0x43ED860")]
	public static void Providers(AottgUi body)
	{
	}

	[Token(Token = "0x60007F6")]
	[Address(RVA = "0x43EDC20", Offset = "0x43EDC20", VA = "0x43EDC20")]
	public static void Divider(AottgUi body)
	{
	}

	[Token(Token = "0x60007F7")]
	[Address(RVA = "0x43EDF30", Offset = "0x43EDF30", VA = "0x43EDF30")]
	public static void LabeledInput(AottgUi ui, string id, string labelKey, string label, string placeholderKey, string placeholder, AottgInputType type, [Optional][DefaultParameterValue(0)] int maxCharacters, [Optional] string value)
	{
	}

	[Token(Token = "0x60007F8")]
	[Address(RVA = "0x43EE230", Offset = "0x43EE230", VA = "0x43EE230")]
	public static void KeepSignedIn(AottgUi ui, string id)
	{
	}

	[Token(Token = "0x60007F9")]
	[Address(RVA = "0x43EE450", Offset = "0x43EE450", VA = "0x43EE450")]
	public static void EmptyMethods(AottgUi body)
	{
	}

	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x43ED750", Offset = "0x43ED750", VA = "0x43ED750")]
	public static string Text(string key, string fallback)
	{
		return null;
	}

	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x43EDA00", Offset = "0x43EDA00", VA = "0x43EDA00")]
	private static void Provider(AottgUi body, string id, string style, string icon, string textKey, string fallback, string action, string visibleKey)
	{
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x43EDEC0", Offset = "0x43EDEC0", VA = "0x43EDEC0")]
	private static GisketchUIBindingDefinition Visible(string key)
	{
		return null;
	}

	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x43EE1C0", Offset = "0x43EE1C0", VA = "0x43EE1C0")]
	private static GisketchUIBindingDefinition Enabled(string key)
	{
		return null;
	}
}
