using System.Collections.Generic;
using System.IO;
using System.Text;
using Il2CppDummyDll;

namespace Newtonsoft.Json;

[Token(Token = "0x2000026")]
internal struct JsonPosition
{
	[Token(Token = "0x400004C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] SpecialCharacters;

	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x0")]
	internal JsonContainerType Type;

	[Token(Token = "0x400004E")]
	[FieldOffset(Offset = "0x4")]
	internal int Position;

	[Token(Token = "0x400004F")]
	[FieldOffset(Offset = "0x8")]
	internal string? PropertyName;

	[Token(Token = "0x4000050")]
	[FieldOffset(Offset = "0x10")]
	internal bool HasIndex;

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x3A64BB0", Offset = "0x3A64BB0", VA = "0x3A64BB0")]
	public JsonPosition(JsonContainerType type)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x3A64C30", Offset = "0x3A64C30", VA = "0x3A64C30")]
	internal int CalculateLength()
	{
		return default(int);
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x3A64CB0", Offset = "0x3A64CB0", VA = "0x3A64CB0")]
	internal void WriteTo(StringBuilder sb, ref StringWriter? writer, ref char[]? buffer)
	{
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x3A64C20", Offset = "0x3A64C20", VA = "0x3A64C20")]
	internal static bool TypeHasIndex(JsonContainerType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x3A64ED0", Offset = "0x3A64ED0", VA = "0x3A64ED0")]
	internal static string BuildPath(List<JsonPosition> positions, JsonPosition? currentPosition)
	{
		return null;
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x3A64630", Offset = "0x3A64630", VA = "0x3A64630")]
	internal static string FormatMessage(IJsonLineInfo? lineInfo, string path, string message)
	{
		return null;
	}
}
