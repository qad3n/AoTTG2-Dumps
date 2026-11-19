// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgAccountDialogUi
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgAccountDialogUi.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000294")]
internal static class AottgAccountDialogUi
{
	[Token(Token = "0x6000FB7")]
	[Address(RVA = "0x57B6320", Offset = "0x57B5320", VA = "0x57B6320")]
	public static void Intro(AottgUi body, string key)
	{
	}

	[Token(Token = "0x6000FB8")]
	[Address(RVA = "0x57B63D0", Offset = "0x57B53D0", VA = "0x57B63D0")]
	public static void Providers(AottgUi body)
	{
	}

	[Token(Token = "0x6000FB9")]
	[Address(RVA = "0x57B6730", Offset = "0x57B5730", VA = "0x57B6730")]
	public static void Divider(AottgUi body)
	{
	}

	[Token(Token = "0x6000FBA")]
	[Address(RVA = "0x57B6A00", Offset = "0x57B5A00", VA = "0x57B6A00")]
	public static void LabeledInput(AottgUi ui, string id, string labelKey, string placeholderKey, AottgInputType type, [Optional][DefaultParameterValue(0)] int maxCharacters, [Optional] string value)
	{
	}

	[Token(Token = "0x6000FBB")]
	[Address(RVA = "0x57B6CE0", Offset = "0x57B5CE0", VA = "0x57B6CE0")]
	public static void KeepSignedIn(AottgUi ui, string id)
	{
	}

	[Token(Token = "0x6000FBC")]
	[Address(RVA = "0x57B6EE0", Offset = "0x57B5EE0", VA = "0x57B6EE0")]
	public static void EmptyMethods(AottgUi body)
	{
	}

	[Token(Token = "0x6000FBD")]
	[Address(RVA = "0x57B6520", Offset = "0x57B5520", VA = "0x57B6520")]
	private static void Provider(AottgUi body, string id, string style, string icon, string textKey, string action, string visibleKey)
	{
	}

	[Token(Token = "0x6000FBE")]
	[Address(RVA = "0x57B6990", Offset = "0x57B5990", VA = "0x57B6990")]
	private static GisketchUIBindingDefinition Visible(string key)
	{
		return null;
	}

	[Token(Token = "0x6000FBF")]
	[Address(RVA = "0x57B6C70", Offset = "0x57B5C70", VA = "0x57B6C70")]
	private static GisketchUIBindingDefinition Enabled(string key)
	{
		return null;
	}
}
