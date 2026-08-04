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
	[Address(RVA = "0x4784EF0", Offset = "0x4784EF0", VA = "0x4784EF0")]
	private void Reset()
	{
	}

	[Token(Token = "0x6001BAD")]
	[Address(RVA = "0x4784F00", Offset = "0x4784F00", VA = "0x4784F00")]
	private Query ProcessAxis(Axis root, Flags flags, out Props props)
	{
		return null;
	}

	[Token(Token = "0x6001BAE")]
	[Address(RVA = "0x4785A50", Offset = "0x4785A50", VA = "0x4785A50")]
	private static bool CanBeNumber(Query q)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BAF")]
	[Address(RVA = "0x4785AA0", Offset = "0x4785AA0", VA = "0x4785AA0")]
	private Query ProcessFilter(Filter root, Flags flags, out Props props)
	{
		return null;
	}

	[Token(Token = "0x6001BB0")]
	[Address(RVA = "0x4786040", Offset = "0x4786040", VA = "0x4786040")]
	private Query ProcessOperator(Operator root, out Props props)
	{
		return null;
	}

	[Token(Token = "0x6001BB1")]
	[Address(RVA = "0x4786240", Offset = "0x4786240", VA = "0x4786240")]
	private Query ProcessVariable(Variable root)
	{
		return null;
	}

	[Token(Token = "0x6001BB2")]
	[Address(RVA = "0x4786300", Offset = "0x4786300", VA = "0x4786300")]
	private Query ProcessFunction(Function root, out Props props)
	{
		return null;
	}

	[Token(Token = "0x6001BB3")]
	[Address(RVA = "0x47867A0", Offset = "0x47867A0", VA = "0x47867A0")]
	private List<Query> ProcessArguments(List<AstNode> args, out Props props)
	{
		return null;
	}

	[Token(Token = "0x6001BB4")]
	[Address(RVA = "0x47856A0", Offset = "0x47856A0", VA = "0x47856A0")]
	private Query ProcessNode(AstNode root, Flags flags, out Props props)
	{
		return null;
	}

	[Token(Token = "0x6001BB5")]
	[Address(RVA = "0x4786980", Offset = "0x4786980", VA = "0x4786980")]
	private Query Build(AstNode root, string query)
	{
		return null;
	}

	[Token(Token = "0x6001BB6")]
	[Address(RVA = "0x47869D0", Offset = "0x47869D0", VA = "0x47869D0")]
	internal Query Build(string query, bool allowVar, bool allowKey)
	{
		return null;
	}

	[Token(Token = "0x6001BB7")]
	[Address(RVA = "0x4786BA0", Offset = "0x4786BA0", VA = "0x4786BA0")]
	internal Query Build(string query, out bool needContext)
	{
		return null;
	}

	[Token(Token = "0x6001BB8")]
	[Address(RVA = "0x4786C50", Offset = "0x4786C50", VA = "0x4786C50")]
	public QueryBuilder()
	{
	}
}
