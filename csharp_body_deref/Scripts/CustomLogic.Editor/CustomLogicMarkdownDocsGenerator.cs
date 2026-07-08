using System.Collections.Generic;
using System.Text;
using CustomLogic.Editor.Models;
using Il2CppDummyDll;

namespace CustomLogic.Editor;

[Token(Token = "0x2000460")]
internal class CustomLogicMarkdownDocsGenerator : BaseCustomLogicDocsGenerator
{
	[Token(Token = "0x2000461")]
	private enum TypeLinkKind
	{
		[Token(Token = "0x4001330")]
		None,
		[Token(Token = "0x4001331")]
		Absolute,
		[Token(Token = "0x4001332")]
		Footnote
	}

	[Token(Token = "0x400132B")]
	[FieldOffset(Offset = "0x18")]
	private readonly StringBuilder _sb;

	[Token(Token = "0x400132C")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<string> _propertiesHeaders;

	[Token(Token = "0x400132D")]
	[FieldOffset(Offset = "0x28")]
	private readonly Dictionary<string, CLType> _typeNameMap;

	[Token(Token = "0x400132E")]
	[FieldOffset(Offset = "0x30")]
	private readonly Dictionary<CLType, int> _typeIndexMap;

	[Token(Token = "0x6002EFC")]
	[Address(RVA = "0x3E70C00", Offset = "0x3E70C00", VA = "0x3E70C00")]
	public CustomLogicMarkdownDocsGenerator(CLType[] allTypes)
	{
	}

	[Token(Token = "0x6002EFD")]
	[Address(RVA = "0x3E70FE0", Offset = "0x3E70FE0", VA = "0x3E70FE0", Slot = "4")]
	public override string GetRelativeFilePath(CLType type)
	{
		return null;
	}

	[Token(Token = "0x6002EFE")]
	[Address(RVA = "0x3E71180", Offset = "0x3E71180", VA = "0x3E71180")]
	public string GetRelativeRefPath(CLType type)
	{
		return null;
	}

	[Token(Token = "0x6002EFF")]
	[Address(RVA = "0x3E711C0", Offset = "0x3E711C0", VA = "0x3E711C0", Slot = "5")]
	public override string Generate(CLType type)
	{
		return null;
	}

	[Token(Token = "0x6002F00")]
	[Address(RVA = "0x3E72CF0", Offset = "0x3E72CF0", VA = "0x3E72CF0")]
	private void AppendProperties(CLProperty[] properties)
	{
	}

	[Token(Token = "0x6002F01")]
	[Address(RVA = "0x3E732B0", Offset = "0x3E732B0", VA = "0x3E732B0")]
	private void AppendMethods(CLMethod[] methods)
	{
	}

	[Token(Token = "0x6002F02")]
	[Address(RVA = "0x3E72AB0", Offset = "0x3E72AB0", VA = "0x3E72AB0")]
	private string GetParametersStr(CLParameter[] parameters, TypeLinkKind linkKind)
	{
		return null;
	}

	[Token(Token = "0x6002F03")]
	[Address(RVA = "0x3E73BB0", Offset = "0x3E73BB0", VA = "0x3E73BB0")]
	private string GetTypeReferenceStr(TypeReference typeReference, TypeLinkKind linkKind)
	{
		return null;
	}

	[Token(Token = "0x6002F04")]
	[Address(RVA = "0x3E74430", Offset = "0x3E74430", VA = "0x3E74430")]
	private string GetEnumReference(string enumName)
	{
		return null;
	}

	[Token(Token = "0x6002F05")]
	[Address(RVA = "0x3E73F50", Offset = "0x3E73F50", VA = "0x3E73F50")]
	private static string CreateTable(List<string> headers, List<List<string>> rows)
	{
		return null;
	}

	[Token(Token = "0x6002F06")]
	[Address(RVA = "0x3E725D0", Offset = "0x3E725D0", VA = "0x3E725D0")]
	private static string TrimAndCleanLines(string val, bool isCodeBlock = false)
	{
		return null;
	}
}
