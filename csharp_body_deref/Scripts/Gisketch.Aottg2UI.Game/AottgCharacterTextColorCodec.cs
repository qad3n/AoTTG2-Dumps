// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterTextColorCodec
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterTextColorCodec.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Text;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002F4")]
internal static class AottgCharacterTextColorCodec
{
	[Token(Token = "0x20002F5")]
	public sealed class Document
	{
		[Token(Token = "0x4000EF6")]
		[FieldOffset(Offset = "0x10")]
		public string Text;

		[Token(Token = "0x4000EF7")]
		[FieldOffset(Offset = "0x18")]
		public readonly List<string> Colors;

		[Token(Token = "0x600125A")]
		[Address(RVA = "0x57E8D90", Offset = "0x57E7D90", VA = "0x57E8D90")]
		public Document()
		{
		}
	}

	[Token(Token = "0x4000EF5")]
	public const string White = "FFFFFF";

	[Token(Token = "0x6001245")]
	[Address(RVA = "0x57E0740", Offset = "0x57DF740", VA = "0x57E0740")]
	public static Document Parse(string serialized)
	{
		return null;
	}

	[Token(Token = "0x6001246")]
	[Address(RVA = "0x57E55D0", Offset = "0x57E45D0", VA = "0x57E55D0")]
	public static string Plain(string serialized)
	{
		return null;
	}

	[Token(Token = "0x6001247")]
	[Address(RVA = "0x57E9030", Offset = "0x57E8030", VA = "0x57E9030")]
	public static string FromEditableRaw(string value)
	{
		return null;
	}

	[Token(Token = "0x6001248")]
	[Address(RVA = "0x57E98F0", Offset = "0x57E88F0", VA = "0x57E98F0")]
	public static bool TryImport(string value, out Document document)
	{
		return default(bool);
	}

	[Token(Token = "0x6001249")]
	[Address(RVA = "0x57E90B0", Offset = "0x57E80B0", VA = "0x57E90B0")]
	public static bool TryImport(string value, Document existing, out Document document, out string trailingColor, out bool colorsVisibleText)
	{
		return default(bool);
	}

	[Token(Token = "0x600124A")]
	[Address(RVA = "0x57E9590", Offset = "0x57E8590", VA = "0x57E9590")]
	public static string Serialize(string text, IList<string> colors)
	{
		return null;
	}

	[Token(Token = "0x600124B")]
	[Address(RVA = "0x57E9EF0", Offset = "0x57E8EF0", VA = "0x57E9EF0")]
	public static string SerializeGradient(string text, IList<string> stops)
	{
		return null;
	}

	[Token(Token = "0x600124C")]
	[Address(RVA = "0x57EA620", Offset = "0x57E9620", VA = "0x57EA620")]
	public static string Retarget(string previousSerialized, string nextText)
	{
		return null;
	}

	[Token(Token = "0x600124D")]
	[Address(RVA = "0x57E0D10", Offset = "0x57DFD10", VA = "0x57E0D10")]
	public static string RichText(string text, IList<string> colors)
	{
		return null;
	}

	[Token(Token = "0x600124E")]
	[Address(RVA = "0x57E9D40", Offset = "0x57E8D40", VA = "0x57E9D40")]
	public static string NormalizeRgb(string value)
	{
		return null;
	}

	[Token(Token = "0x600124F")]
	[Address(RVA = "0x57EA0D0", Offset = "0x57E90D0", VA = "0x57EA0D0")]
	private static string GradientColor(int index, int length, IList<string> stops)
	{
		return null;
	}

	[Token(Token = "0x6001250")]
	[Address(RVA = "0x57EABD0", Offset = "0x57E9BD0", VA = "0x57EABD0")]
	private static Color ParseRgb(string value)
	{
		return default(Color);
	}

	[Token(Token = "0x6001251")]
	[Address(RVA = "0x57EAB40", Offset = "0x57E9B40", VA = "0x57EAB40")]
	private static bool IsRgb(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001252")]
	[Address(RVA = "0x57E8E10", Offset = "0x57E7E10", VA = "0x57E8E10")]
	private static bool IsColorTag(string text, int index, out string color)
	{
		return default(bool);
	}

	[Token(Token = "0x6001253")]
	[Address(RVA = "0x57E9930", Offset = "0x57E8930", VA = "0x57E9930")]
	private static bool IsImportColorTag(string text, int index, out string color, out int length)
	{
		return default(bool);
	}

	[Token(Token = "0x6001254")]
	[Address(RVA = "0x57EAC70", Offset = "0x57E9C70", VA = "0x57EAC70")]
	private static bool IsHexRange(string text, int start, int count)
	{
		return default(bool);
	}

	[Token(Token = "0x6001255")]
	[Address(RVA = "0x57EAD00", Offset = "0x57E9D00", VA = "0x57EAD00")]
	private static string ExpandRgb(string rgb)
	{
		return null;
	}

	[Token(Token = "0x6001256")]
	[Address(RVA = "0x57E9CB0", Offset = "0x57E8CB0", VA = "0x57E9CB0")]
	private static string ExistingColor(Document existing, int index)
	{
		return null;
	}

	[Token(Token = "0x6001257")]
	[Address(RVA = "0x57EA9F0", Offset = "0x57E99F0", VA = "0x57EA9F0")]
	private static string EditColor(Document previous, int prefix, int suffix)
	{
		return null;
	}

	[Token(Token = "0x6001258")]
	[Address(RVA = "0x57EAC50", Offset = "0x57E9C50", VA = "0x57EAC50")]
	private static bool IsHex(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6001259")]
	[Address(RVA = "0x57EAAB0", Offset = "0x57E9AB0", VA = "0x57EAAB0")]
	private static void AppendEscaped(StringBuilder builder, char c)
	{
	}
}
