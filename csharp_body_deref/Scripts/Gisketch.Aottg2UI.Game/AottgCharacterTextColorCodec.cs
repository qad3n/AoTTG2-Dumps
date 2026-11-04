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

[Token(Token = "0x2000298")]
internal static class AottgCharacterTextColorCodec
{
	[Token(Token = "0x2000299")]
	public sealed class Document
	{
		[Token(Token = "0x4000D5F")]
		[FieldOffset(Offset = "0x10")]
		public string Text;

		[Token(Token = "0x4000D60")]
		[FieldOffset(Offset = "0x18")]
		public readonly List<string> Colors;

		[Token(Token = "0x600100A")]
		[Address(RVA = "0x1E0BB90", Offset = "0x1E0A190", VA = "0x181E0BB90")]
		public Document()
		{
		}
	}

	[Token(Token = "0x4000D5E")]
	public const string White = "FFFFFF";

	[Token(Token = "0x6000FF5")]
	[Address(RVA = "0x1DFF000", Offset = "0x1DFD600", VA = "0x181DFF000")]
	public static Document Parse(string serialized)
	{
		return null;
	}

	[Token(Token = "0x6000FF6")]
	[Address(RVA = "0x1DFF290", Offset = "0x1DFD890", VA = "0x181DFF290")]
	public static string Plain(string serialized)
	{
		return null;
	}

	[Token(Token = "0x6000FF7")]
	[Address(RVA = "0x1DFE3B0", Offset = "0x1DFC9B0", VA = "0x181DFE3B0")]
	public static string FromEditableRaw(string value)
	{
		return null;
	}

	[Token(Token = "0x6000FF8")]
	[Address(RVA = "0x1DFFF70", Offset = "0x1DFE570", VA = "0x181DFFF70")]
	public static bool TryImport(string value, out Document document)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FF9")]
	[Address(RVA = "0x1DFFC50", Offset = "0x1DFE250", VA = "0x181DFFC50")]
	public static bool TryImport(string value, Document existing, out Document document, out string trailingColor, out bool colorsVisibleText)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FFA")]
	[Address(RVA = "0x1DFFA30", Offset = "0x1DFE030", VA = "0x181DFFA30")]
	public static string Serialize(string text, IList<string> colors)
	{
		return null;
	}

	[Token(Token = "0x6000FFB")]
	[Address(RVA = "0x1DFF890", Offset = "0x1DFDE90", VA = "0x181DFF890")]
	public static string SerializeGradient(string text, IList<string> stops)
	{
		return null;
	}

	[Token(Token = "0x6000FFC")]
	[Address(RVA = "0x1DFF2B0", Offset = "0x1DFD8B0", VA = "0x181DFF2B0")]
	public static string Retarget(string previousSerialized, string nextText)
	{
		return null;
	}

	[Token(Token = "0x6000FFD")]
	[Address(RVA = "0x1DFF680", Offset = "0x1DFDC80", VA = "0x181DFF680")]
	public static string RichText(string text, IList<string> colors)
	{
		return null;
	}

	[Token(Token = "0x6000FFE")]
	[Address(RVA = "0x1DFEE00", Offset = "0x1DFD400", VA = "0x181DFEE00")]
	public static string NormalizeRgb(string value)
	{
		return null;
	}

	[Token(Token = "0x6000FFF")]
	[Address(RVA = "0x1DFE6E0", Offset = "0x1DFCCE0", VA = "0x181DFE6E0")]
	private static string GradientColor(int index, int length, IList<string> stops)
	{
		return null;
	}

	[Token(Token = "0x6001000")]
	[Address(RVA = "0x1DFEF60", Offset = "0x1DFD560", VA = "0x181DFEF60")]
	private static Color ParseRgb(string value)
	{
		return default(Color);
	}

	[Token(Token = "0x6001001")]
	[Address(RVA = "0x1DFED70", Offset = "0x1DFD370", VA = "0x181DFED70")]
	private static bool IsRgb(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001002")]
	[Address(RVA = "0x1DFE9B0", Offset = "0x1DFCFB0", VA = "0x181DFE9B0")]
	private static bool IsColorTag(string text, int index, out string color)
	{
		return default(bool);
	}

	[Token(Token = "0x6001003")]
	[Address(RVA = "0x1DFEB70", Offset = "0x1DFD170", VA = "0x181DFEB70")]
	private static bool IsImportColorTag(string text, int index, out string color, out int length)
	{
		return default(bool);
	}

	[Token(Token = "0x6001004")]
	[Address(RVA = "0x1DFEAB0", Offset = "0x1DFD0B0", VA = "0x181DFEAB0")]
	private static bool IsHexRange(string text, int start, int count)
	{
		return default(bool);
	}

	[Token(Token = "0x6001005")]
	[Address(RVA = "0x1DFE040", Offset = "0x1DFC640", VA = "0x181DFE040")]
	private static string ExpandRgb(string rgb)
	{
		return null;
	}

	[Token(Token = "0x6001006")]
	[Address(RVA = "0x1DFDFA0", Offset = "0x1DFC5A0", VA = "0x181DFDFA0")]
	private static string ExistingColor(Document existing, int index)
	{
		return null;
	}

	[Token(Token = "0x6001007")]
	[Address(RVA = "0x1DFDEC0", Offset = "0x1DFC4C0", VA = "0x181DFDEC0")]
	private static string EditColor(Document previous, int prefix, int suffix)
	{
		return null;
	}

	[Token(Token = "0x6001008")]
	[Address(RVA = "0x1DFEB40", Offset = "0x1DFD140", VA = "0x181DFEB40")]
	private static bool IsHex(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6001009")]
	[Address(RVA = "0x1DFDE20", Offset = "0x1DFC420", VA = "0x181DFDE20")]
	private static void AppendEscaped(StringBuilder builder, char c)
	{
	}
}
