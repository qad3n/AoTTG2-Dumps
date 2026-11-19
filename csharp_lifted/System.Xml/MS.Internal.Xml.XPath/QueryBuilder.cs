// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.QueryBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002BA")]
internal sealed class QueryBuilder
{
	[Token(Token = "0x20002BB")]
	private enum Flags
	{
		[Token(Token = "0x4000E8F")]
		None = 0,
		[Token(Token = "0x4000E90")]
		SmartDesc = 1,
		[Token(Token = "0x4000E91")]
		PosFilter = 2,
		[Token(Token = "0x4000E92")]
		Filter = 4
	}

	[Token(Token = "0x20002BC")]
	private enum Props
	{
		[Token(Token = "0x4000E94")]
		None = 0,
		[Token(Token = "0x4000E95")]
		PosFilter = 1,
		[Token(Token = "0x4000E96")]
		HasPosition = 2,
		[Token(Token = "0x4000E97")]
		HasLast = 4,
		[Token(Token = "0x4000E98")]
		NonFlat = 8
	}

	[Token(Token = "0x4000E87")]
	[FieldOffset(Offset = "0x10")]
	private string _query;

	[Token(Token = "0x4000E88")]
	[FieldOffset(Offset = "0x18")]
	private bool _allowVar;

	[Token(Token = "0x4000E89")]
	[FieldOffset(Offset = "0x19")]
	private bool _allowKey;

	[Token(Token = "0x4000E8A")]
	[FieldOffset(Offset = "0x1A")]
	private bool _allowCurrent;

	[Token(Token = "0x4000E8B")]
	[FieldOffset(Offset = "0x1B")]
	private bool _needContext;

	[Token(Token = "0x4000E8C")]
	[FieldOffset(Offset = "0x20")]
	private BaseAxisQuery _firstInput;

	[Token(Token = "0x4000E8D")]
	[FieldOffset(Offset = "0x28")]
	private int _parseDepth;

	[Token(Token = "0x6001BAC")]
	[Address(RVA = "0x608A3D0", Offset = "0x60893D0", VA = "0x608A3D0")]
	private void Reset()
	{
	}

	[Token(Token = "0x6001BAD")]
	[Address(RVA = "0x608A3E0", Offset = "0x60893E0", VA = "0x608A3E0")]
	private Query ProcessAxis(Axis root, Flags flags, out Props props)
	{
		return null;
	}

	[Token(Token = "0x6001BAE")]
	[Address(RVA = "0x608AEF0", Offset = "0x6089EF0", VA = "0x608AEF0")]
	private static bool CanBeNumber(Query q)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BAF")]
	[Address(RVA = "0x608AF40", Offset = "0x6089F40", VA = "0x608AF40")]
	private Query ProcessFilter(Filter root, Flags flags, out Props props)
	{
		return null;
	}

	[Token(Token = "0x6001BB0")]
	[Address(RVA = "0x608B480", Offset = "0x608A480", VA = "0x608B480")]
	private Query ProcessOperator(Operator root, out Props props)
	{
		return null;
	}

	[Token(Token = "0x6001BB1")]
	[Address(RVA = "0x608B680", Offset = "0x608A680", VA = "0x608B680")]
	private Query ProcessVariable(Variable root)
	{
		return null;
	}

	[Token(Token = "0x6001BB2")]
	[Address(RVA = "0x608B740", Offset = "0x608A740", VA = "0x608B740")]
	private Query ProcessFunction(Function root, out Props props)
	{
		return null;
	}

	[Token(Token = "0x6001BB3")]
	[Address(RVA = "0x608BBE0", Offset = "0x608ABE0", VA = "0x608BBE0")]
	private List<Query> ProcessArguments(List<AstNode> args, out Props props)
	{
		return null;
	}

	[Token(Token = "0x6001BB4")]
	[Address(RVA = "0x608AB50", Offset = "0x6089B50", VA = "0x608AB50")]
	private Query ProcessNode(AstNode root, Flags flags, out Props props)
	{
		return null;
	}

	[Token(Token = "0x6001BB5")]
	[Address(RVA = "0x608BDC0", Offset = "0x608ADC0", VA = "0x608BDC0")]
	private Query Build(AstNode root, string query)
	{
		return null;
	}

	[Token(Token = "0x6001BB6")]
	[Address(RVA = "0x608BE10", Offset = "0x608AE10", VA = "0x608BE10")]
	internal Query Build(string query, bool allowVar, bool allowKey)
	{
		return null;
	}

	[Token(Token = "0x6001BB7")]
	[Address(RVA = "0x608BFC0", Offset = "0x608AFC0", VA = "0x608BFC0")]
	internal Query Build(string query, out bool needContext)
	{
		return null;
	}

	[Token(Token = "0x6001BB8")]
	[Address(RVA = "0x608C070", Offset = "0x608B070", VA = "0x608C070")]
	public QueryBuilder()
	{
	}
}
