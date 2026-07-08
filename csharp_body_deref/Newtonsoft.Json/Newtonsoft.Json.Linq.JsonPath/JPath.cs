using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Linq.JsonPath;

[Token(Token = "0x200019C")]
internal class JPath
{
	[Token(Token = "0x40007A8")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] FloatCharacters;

	[Token(Token = "0x40007A9")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _expression;

	[Token(Token = "0x40007AB")]
	[FieldOffset(Offset = "0x20")]
	private int _currentIndex;

	[Token(Token = "0x17000242")]
	public List<PathFilter> Filters
	{
		[Token(Token = "0x6000E3A")]
		[Address(RVA = "0x3B40290", Offset = "0x3B40290", VA = "0x3B40290")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E3B")]
	[Address(RVA = "0x3B402A0", Offset = "0x3B402A0", VA = "0x3B402A0")]
	public JPath(string expression)
	{
	}

	[Token(Token = "0x6000E3C")]
	[Address(RVA = "0x3B40350", Offset = "0x3B40350", VA = "0x3B40350")]
	private void ParseMain()
	{
	}

	[Token(Token = "0x6000E3D")]
	[Address(RVA = "0x3B40540", Offset = "0x3B40540", VA = "0x3B40540")]
	private bool ParsePath(List<PathFilter> filters, int currentPartStartIndex, bool query)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E3E")]
	[Address(RVA = "0x3B40C20", Offset = "0x3B40C20", VA = "0x3B40C20")]
	private static PathFilter CreatePathFilter(string? member, bool scan)
	{
		return null;
	}

	[Token(Token = "0x6000E3F")]
	[Address(RVA = "0x3B40CA0", Offset = "0x3B40CA0", VA = "0x3B40CA0")]
	private PathFilter ParseIndexer(char indexerOpenChar, bool scan)
	{
		return null;
	}

	[Token(Token = "0x6000E40")]
	[Address(RVA = "0x3B414D0", Offset = "0x3B414D0", VA = "0x3B414D0")]
	private PathFilter ParseArrayIndexer(char indexerCloseChar)
	{
		return null;
	}

	[Token(Token = "0x6000E41")]
	[Address(RVA = "0x3B40500", Offset = "0x3B40500", VA = "0x3B40500")]
	private void EatWhitespace()
	{
	}

	[Token(Token = "0x6000E42")]
	[Address(RVA = "0x3B412A0", Offset = "0x3B412A0", VA = "0x3B412A0")]
	private PathFilter ParseQuery(char indexerCloseChar, bool scan)
	{
		return null;
	}

	[Token(Token = "0x6000E43")]
	[Address(RVA = "0x3B42570", Offset = "0x3B42570", VA = "0x3B42570")]
	private bool TryParseExpression(out List<PathFilter>? expressionPath)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E44")]
	[Address(RVA = "0x3B42770", Offset = "0x3B42770", VA = "0x3B42770")]
	private JsonException CreateUnexpectedCharacterException()
	{
		return null;
	}

	[Token(Token = "0x6000E45")]
	[Address(RVA = "0x3B42830", Offset = "0x3B42830", VA = "0x3B42830")]
	private object ParseSide()
	{
		return null;
	}

	[Token(Token = "0x6000E46")]
	[Address(RVA = "0x3B41E10", Offset = "0x3B41E10", VA = "0x3B41E10")]
	private QueryExpression ParseExpression()
	{
		return null;
	}

	[Token(Token = "0x6000E47")]
	[Address(RVA = "0x3B42A80", Offset = "0x3B42A80", VA = "0x3B42A80")]
	private bool TryParseValue(out object? value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E48")]
	[Address(RVA = "0x3B435B0", Offset = "0x3B435B0", VA = "0x3B435B0")]
	private string ReadQuotedString()
	{
		return null;
	}

	[Token(Token = "0x6000E49")]
	[Address(RVA = "0x3B438C0", Offset = "0x3B438C0", VA = "0x3B438C0")]
	private string ReadRegexString()
	{
		return null;
	}

	[Token(Token = "0x6000E4A")]
	[Address(RVA = "0x3B434A0", Offset = "0x3B434A0", VA = "0x3B434A0")]
	private bool Match(string s)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E4B")]
	[Address(RVA = "0x3B42EC0", Offset = "0x3B42EC0", VA = "0x3B42EC0")]
	private QueryOperator ParseOperator()
	{
		return default(QueryOperator);
	}

	[Token(Token = "0x6000E4C")]
	[Address(RVA = "0x3B40E70", Offset = "0x3B40E70", VA = "0x3B40E70")]
	private PathFilter ParseQuotedField(char indexerCloseChar, bool scan)
	{
		return null;
	}

	[Token(Token = "0x6000E4D")]
	[Address(RVA = "0x3B40E10", Offset = "0x3B40E10", VA = "0x3B40E10")]
	private void EnsureLength(string message)
	{
	}

	[Token(Token = "0x6000E4E")]
	[Address(RVA = "0x3B43A50", Offset = "0x3B43A50", VA = "0x3B43A50")]
	internal IEnumerable<JToken> Evaluate(JToken root, JToken t, JsonSelectSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000E4F")]
	[Address(RVA = "0x3B43AC0", Offset = "0x3B43AC0", VA = "0x3B43AC0")]
	internal static IEnumerable<JToken> Evaluate(List<PathFilter> filters, JToken root, JToken t, JsonSelectSettings? settings)
	{
		return null;
	}
}
