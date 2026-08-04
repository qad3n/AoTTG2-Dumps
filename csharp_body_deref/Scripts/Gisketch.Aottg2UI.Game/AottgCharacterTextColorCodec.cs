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

[Token(Token = "0x2000192")]
internal static class AottgCharacterTextColorCodec
{
	[Token(Token = "0x2000193")]
	public sealed class Document
	{
		[Token(Token = "0x40008BC")]
		[FieldOffset(Offset = "0x10")]
		public string Text;

		[Token(Token = "0x40008BD")]
		[FieldOffset(Offset = "0x18")]
		public readonly List<string> Colors;

		[Token(Token = "0x6000953")]
		[Address(RVA = "0x440C550", Offset = "0x440C550", VA = "0x440C550")]
		public Document()
		{
		}
	}

	[Token(Token = "0x40008BB")]
	public const string White = "FFFFFF";

	[Token(Token = "0x600093E")]
	[Address(RVA = "0x4401070", Offset = "0x4401070", VA = "0x4401070")]
	public static Document Parse(string serialized)
	{
		return null;
	}

	[Token(Token = "0x600093F")]
	[Address(RVA = "0x4408E20", Offset = "0x4408E20", VA = "0x4408E20")]
	public static string Plain(string serialized)
	{
		return null;
	}

	[Token(Token = "0x6000940")]
	[Address(RVA = "0x440C790", Offset = "0x440C790", VA = "0x440C790")]
	public static string FromEditableRaw(string value)
	{
		return null;
	}

	[Token(Token = "0x6000941")]
	[Address(RVA = "0x440CCD0", Offset = "0x440CCD0", VA = "0x440CCD0")]
	public static bool TryImport(string value, out Document document)
	{
		return default(bool);
	}

	[Token(Token = "0x6000942")]
	[Address(RVA = "0x440C820", Offset = "0x440C820", VA = "0x440C820")]
	public static bool TryImport(string value, Document existing, out Document document, out string trailingColor, out bool colorsVisibleText)
	{
		return default(bool);
	}

	[Token(Token = "0x6000943")]
	[Address(RVA = "0x4401320", Offset = "0x4401320", VA = "0x4401320")]
	public static string Serialize(string text, IList<string> colors)
	{
		return null;
	}

	[Token(Token = "0x6000944")]
	[Address(RVA = "0x440D200", Offset = "0x440D200", VA = "0x440D200")]
	public static string SerializeGradient(string text, IList<string> stops)
	{
		return null;
	}

	[Token(Token = "0x6000945")]
	[Address(RVA = "0x440D930", Offset = "0x440D930", VA = "0x440D930")]
	public static string Retarget(string previousSerialized, string nextText)
	{
		return null;
	}

	[Token(Token = "0x6000946")]
	[Address(RVA = "0x44049C0", Offset = "0x44049C0", VA = "0x44049C0")]
	public static string RichText(string text, IList<string> colors)
	{
		return null;
	}

	[Token(Token = "0x6000947")]
	[Address(RVA = "0x440D070", Offset = "0x440D070", VA = "0x440D070")]
	public static string NormalizeRgb(string value)
	{
		return null;
	}

	[Token(Token = "0x6000948")]
	[Address(RVA = "0x440D3F0", Offset = "0x440D3F0", VA = "0x440D3F0")]
	private static string GradientColor(int index, int length, IList<string> stops)
	{
		return null;
	}

	[Token(Token = "0x6000949")]
	[Address(RVA = "0x440DF20", Offset = "0x440DF20", VA = "0x440DF20")]
	private static Color ParseRgb(string value)
	{
		return default(Color);
	}

	[Token(Token = "0x600094A")]
	[Address(RVA = "0x440DEB0", Offset = "0x440DEB0", VA = "0x440DEB0")]
	private static bool IsRgb(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x600094B")]
	[Address(RVA = "0x440C5D0", Offset = "0x440C5D0", VA = "0x440C5D0")]
	private static bool IsColorTag(string text, int index, out string color)
	{
		return default(bool);
	}

	[Token(Token = "0x600094C")]
	[Address(RVA = "0x440CD10", Offset = "0x440CD10", VA = "0x440CD10")]
	private static bool IsImportColorTag(string text, int index, out string color, out int length)
	{
		return default(bool);
	}

	[Token(Token = "0x600094D")]
	[Address(RVA = "0x440DFC0", Offset = "0x440DFC0", VA = "0x440DFC0")]
	private static bool IsHexRange(string text, int start, int count)
	{
		return default(bool);
	}

	[Token(Token = "0x600094E")]
	[Address(RVA = "0x440E030", Offset = "0x440E030", VA = "0x440E030")]
	private static string ExpandRgb(string rgb)
	{
		return null;
	}

	[Token(Token = "0x600094F")]
	[Address(RVA = "0x440CFF0", Offset = "0x440CFF0", VA = "0x440CFF0")]
	private static string ExistingColor(Document existing, int index)
	{
		return null;
	}

	[Token(Token = "0x6000950")]
	[Address(RVA = "0x440DD60", Offset = "0x440DD60", VA = "0x440DD60")]
	private static string EditColor(Document previous, int prefix, int suffix)
	{
		return null;
	}

	[Token(Token = "0x6000951")]
	[Address(RVA = "0x440DFA0", Offset = "0x440DFA0", VA = "0x440DFA0")]
	private static bool IsHex(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000952")]
	[Address(RVA = "0x440DE20", Offset = "0x440DE20", VA = "0x440DE20")]
	private static void AppendEscaped(StringBuilder builder, char c)
	{
	}
}
