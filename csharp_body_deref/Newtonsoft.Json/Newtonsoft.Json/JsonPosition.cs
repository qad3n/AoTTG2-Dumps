// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.JsonPosition
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3D5A500", Offset = "0x3D5A500", VA = "0x3D5A500")]
	public JsonPosition(JsonContainerType type)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x3D5A580", Offset = "0x3D5A580", VA = "0x3D5A580")]
	internal int CalculateLength()
	{
		return default(int);
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x3D5A600", Offset = "0x3D5A600", VA = "0x3D5A600")]
	internal void WriteTo(StringBuilder sb, ref StringWriter? writer, ref char[]? buffer)
	{
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x3D5A570", Offset = "0x3D5A570", VA = "0x3D5A570")]
	internal static bool TypeHasIndex(JsonContainerType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x3D5A820", Offset = "0x3D5A820", VA = "0x3D5A820")]
	internal static string BuildPath(List<JsonPosition> positions, JsonPosition? currentPosition)
	{
		return null;
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x3D59F80", Offset = "0x3D59F80", VA = "0x3D59F80")]
	internal static string FormatMessage(IJsonLineInfo? lineInfo, string path, string message)
	{
		return null;
	}
}
