using System.Collections.Generic;
using System.Text;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000160")]
internal static class AottgCharacterTextColorCodec
{
	[Token(Token = "0x2000161")]
	public sealed class Document
	{
		[Token(Token = "0x40007FB")]
		[FieldOffset(Offset = "0x10")]
		public string Text;

		[Token(Token = "0x40007FC")]
		[FieldOffset(Offset = "0x18")]
		public readonly List<string> Colors;

		[Token(Token = "0x60007DF")]
		[Address(RVA = "0x40DB0F0", Offset = "0x40DB0F0", VA = "0x40DB0F0")]
		public Document()
		{
		}
	}

	[Token(Token = "0x40007FA")]
	public const string White = "FFFFFF";

	[Token(Token = "0x60007CA")]
	[Address(RVA = "0x40CFA90", Offset = "0x40CFA90", VA = "0x40CFA90")]
	public static Document Parse(string serialized)
	{
		return null;
	}

	[Token(Token = "0x60007CB")]
	[Address(RVA = "0x40D64D0", Offset = "0x40D64D0", VA = "0x40D64D0")]
	public static string Plain(string serialized)
	{
		return null;
	}

	[Token(Token = "0x60007CC")]
	[Address(RVA = "0x40D9590", Offset = "0x40D9590", VA = "0x40D9590")]
	public static string FromEditableRaw(string value)
	{
		return null;
	}

	[Token(Token = "0x60007CD")]
	[Address(RVA = "0x40D9A70", Offset = "0x40D9A70", VA = "0x40D9A70")]
	public static bool TryImport(string value, out Document document)
	{
		return default(bool);
	}

	[Token(Token = "0x60007CE")]
	[Address(RVA = "0x40D9620", Offset = "0x40D9620", VA = "0x40D9620")]
	public static bool TryImport(string value, Document existing, out Document document, out string trailingColor, out bool colorsVisibleText)
	{
		return default(bool);
	}

	[Token(Token = "0x60007CF")]
	[Address(RVA = "0x40CFCF0", Offset = "0x40CFCF0", VA = "0x40CFCF0")]
	public static string Serialize(string text, IList<string> colors)
	{
		return null;
	}

	[Token(Token = "0x60007D0")]
	[Address(RVA = "0x40D9FA0", Offset = "0x40D9FA0", VA = "0x40D9FA0")]
	public static string SerializeGradient(string text, IList<string> stops)
	{
		return null;
	}

	[Token(Token = "0x60007D1")]
	[Address(RVA = "0x40DA6D0", Offset = "0x40DA6D0", VA = "0x40DA6D0")]
	public static string Retarget(string previousSerialized, string nextText)
	{
		return null;
	}

	[Token(Token = "0x60007D2")]
	[Address(RVA = "0x40D2AC0", Offset = "0x40D2AC0", VA = "0x40D2AC0")]
	public static string RichText(string text, IList<string> colors)
	{
		return null;
	}

	[Token(Token = "0x60007D3")]
	[Address(RVA = "0x40D9E10", Offset = "0x40D9E10", VA = "0x40D9E10")]
	public static string NormalizeRgb(string value)
	{
		return null;
	}

	[Token(Token = "0x60007D4")]
	[Address(RVA = "0x40DA190", Offset = "0x40DA190", VA = "0x40DA190")]
	private static string GradientColor(int index, int length, IList<string> stops)
	{
		return null;
	}

	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x40DACC0", Offset = "0x40DACC0", VA = "0x40DACC0")]
	private static Color ParseRgb(string value)
	{
		return default(Color);
	}

	[Token(Token = "0x60007D6")]
	[Address(RVA = "0x40DAC50", Offset = "0x40DAC50", VA = "0x40DAC50")]
	private static bool IsRgb(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60007D7")]
	[Address(RVA = "0x40D93D0", Offset = "0x40D93D0", VA = "0x40D93D0")]
	private static bool IsColorTag(string text, int index, out string color)
	{
		return default(bool);
	}

	[Token(Token = "0x60007D8")]
	[Address(RVA = "0x40D9AB0", Offset = "0x40D9AB0", VA = "0x40D9AB0")]
	private static bool IsImportColorTag(string text, int index, out string color, out int length)
	{
		return default(bool);
	}

	[Token(Token = "0x60007D9")]
	[Address(RVA = "0x40DAD60", Offset = "0x40DAD60", VA = "0x40DAD60")]
	private static bool IsHexRange(string text, int start, int count)
	{
		return default(bool);
	}

	[Token(Token = "0x60007DA")]
	[Address(RVA = "0x40DADD0", Offset = "0x40DADD0", VA = "0x40DADD0")]
	private static string ExpandRgb(string rgb)
	{
		return null;
	}

	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x40D9D90", Offset = "0x40D9D90", VA = "0x40D9D90")]
	private static string ExistingColor(Document existing, int index)
	{
		return null;
	}

	[Token(Token = "0x60007DC")]
	[Address(RVA = "0x40DAB00", Offset = "0x40DAB00", VA = "0x40DAB00")]
	private static string EditColor(Document previous, int prefix, int suffix)
	{
		return null;
	}

	[Token(Token = "0x60007DD")]
	[Address(RVA = "0x40DAD40", Offset = "0x40DAD40", VA = "0x40DAD40")]
	private static bool IsHex(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60007DE")]
	[Address(RVA = "0x40DABC0", Offset = "0x40DABC0", VA = "0x40DABC0")]
	private static void AppendEscaped(StringBuilder builder, char c)
	{
	}
}
