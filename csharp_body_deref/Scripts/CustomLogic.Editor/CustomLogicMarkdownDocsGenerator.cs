// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.Editor.CustomLogicMarkdownDocsGenerator
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/Editor/CustomLogicMarkdownDocsGenerator.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Text;
using CustomLogic.Editor.Models;
using Il2CppDummyDll;

namespace CustomLogic.Editor;

[Token(Token = "0x20004A5")]
internal class CustomLogicMarkdownDocsGenerator : BaseCustomLogicDocsGenerator
{
	[Token(Token = "0x20004A6")]
	private enum TypeLinkKind
	{
		[Token(Token = "0x400143F")]
		None,
		[Token(Token = "0x4001440")]
		Absolute,
		[Token(Token = "0x4001441")]
		Footnote
	}

	[Token(Token = "0x400143A")]
	[FieldOffset(Offset = "0x18")]
	private readonly StringBuilder _sb;

	[Token(Token = "0x400143B")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<string> _propertiesHeaders;

	[Token(Token = "0x400143C")]
	[FieldOffset(Offset = "0x28")]
	private readonly Dictionary<string, CLType> _typeNameMap;

	[Token(Token = "0x400143D")]
	[FieldOffset(Offset = "0x30")]
	private readonly Dictionary<CLType, int> _typeIndexMap;

	[Token(Token = "0x6003109")]
	[Address(RVA = "0x417D0F0", Offset = "0x417D0F0", VA = "0x417D0F0")]
	public CustomLogicMarkdownDocsGenerator(CLType[] allTypes)
	{
	}

	[Token(Token = "0x600310A")]
	[Address(RVA = "0x417D4D0", Offset = "0x417D4D0", VA = "0x417D4D0", Slot = "4")]
	public override string GetRelativeFilePath(CLType type)
	{
		return null;
	}

	[Token(Token = "0x600310B")]
	[Address(RVA = "0x417D670", Offset = "0x417D670", VA = "0x417D670")]
	public string GetRelativeRefPath(CLType type)
	{
		return null;
	}

	[Token(Token = "0x600310C")]
	[Address(RVA = "0x417D6B0", Offset = "0x417D6B0", VA = "0x417D6B0", Slot = "5")]
	public override string Generate(CLType type)
	{
		return null;
	}

	[Token(Token = "0x600310D")]
	[Address(RVA = "0x417F1E0", Offset = "0x417F1E0", VA = "0x417F1E0")]
	private void AppendProperties(CLProperty[] properties)
	{
	}

	[Token(Token = "0x600310E")]
	[Address(RVA = "0x417F7A0", Offset = "0x417F7A0", VA = "0x417F7A0")]
	private void AppendMethods(CLMethod[] methods)
	{
	}

	[Token(Token = "0x600310F")]
	[Address(RVA = "0x417EFA0", Offset = "0x417EFA0", VA = "0x417EFA0")]
	private string GetParametersStr(CLParameter[] parameters, TypeLinkKind linkKind)
	{
		return null;
	}

	[Token(Token = "0x6003110")]
	[Address(RVA = "0x41800A0", Offset = "0x41800A0", VA = "0x41800A0")]
	private string GetTypeReferenceStr(TypeReference typeReference, TypeLinkKind linkKind)
	{
		return null;
	}

	[Token(Token = "0x6003111")]
	[Address(RVA = "0x4180930", Offset = "0x4180930", VA = "0x4180930")]
	private string GetEnumReference(string enumName)
	{
		return null;
	}

	[Token(Token = "0x6003112")]
	[Address(RVA = "0x4180440", Offset = "0x4180440", VA = "0x4180440")]
	private static string CreateTable(List<string> headers, List<List<string>> rows)
	{
		return null;
	}

	[Token(Token = "0x6003113")]
	[Address(RVA = "0x417EAC0", Offset = "0x417EAC0", VA = "0x417EAC0")]
	private static string TrimAndCleanLines(string val, bool isCodeBlock = false)
	{
		return null;
	}
}
