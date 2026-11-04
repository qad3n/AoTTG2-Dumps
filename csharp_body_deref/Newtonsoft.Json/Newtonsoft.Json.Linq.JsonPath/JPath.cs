// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.JsonPath.JPath
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E3B")]
	[Address(RVA = "0x1C98870", Offset = "0x1C96E70", VA = "0x181C98870")]
	public JPath(string expression)
	{
	}

	[Token(Token = "0x6000E3C")]
	[Address(RVA = "0x1C96770", Offset = "0x1C94D70", VA = "0x181C96770")]
	private void ParseMain()
	{
	}

	[Token(Token = "0x6000E3D")]
	[Address(RVA = "0x1C96EF0", Offset = "0x1C954F0", VA = "0x181C96EF0")]
	private bool ParsePath(List<PathFilter> filters, int currentPartStartIndex, bool query)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E3E")]
	[Address(RVA = "0x1C95420", Offset = "0x1C93A20", VA = "0x181C95420")]
	private static PathFilter CreatePathFilter(string? member, bool scan)
	{
		return null;
	}

	[Token(Token = "0x6000E3F")]
	[Address(RVA = "0x1C96600", Offset = "0x1C94C00", VA = "0x181C96600")]
	private PathFilter ParseIndexer(char indexerOpenChar, bool scan)
	{
		return null;
	}

	[Token(Token = "0x6000E40")]
	[Address(RVA = "0x1C95920", Offset = "0x1C93F20", VA = "0x181C95920")]
	private PathFilter ParseArrayIndexer(char indexerCloseChar)
	{
		return null;
	}

	[Token(Token = "0x6000E41")]
	[Address(RVA = "0x1C95560", Offset = "0x1C93B60", VA = "0x181C95560")]
	private void EatWhitespace()
	{
	}

	[Token(Token = "0x6000E42")]
	[Address(RVA = "0x1C97400", Offset = "0x1C95A00", VA = "0x181C97400")]
	private PathFilter ParseQuery(char indexerCloseChar, bool scan)
	{
		return null;
	}

	[Token(Token = "0x6000E43")]
	[Address(RVA = "0x1C982A0", Offset = "0x1C968A0", VA = "0x181C982A0")]
	private bool TryParseExpression(out List<PathFilter>? expressionPath)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E44")]
	[Address(RVA = "0x1C954A0", Offset = "0x1C93AA0", VA = "0x181C954A0")]
	private JsonException CreateUnexpectedCharacterException()
	{
		return null;
	}

	[Token(Token = "0x6000E45")]
	[Address(RVA = "0x1C97A70", Offset = "0x1C96070", VA = "0x181C97A70")]
	private object ParseSide()
	{
		return null;
	}

	[Token(Token = "0x6000E46")]
	[Address(RVA = "0x1C96240", Offset = "0x1C94840", VA = "0x181C96240")]
	private QueryExpression ParseExpression()
	{
		return null;
	}

	[Token(Token = "0x6000E47")]
	[Address(RVA = "0x1C98470", Offset = "0x1C96A70", VA = "0x181C98470")]
	private bool TryParseValue(out object? value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E48")]
	[Address(RVA = "0x1C97E70", Offset = "0x1C96470", VA = "0x181C97E70")]
	private string ReadQuotedString()
	{
		return null;
	}

	[Token(Token = "0x6000E49")]
	[Address(RVA = "0x1C98120", Offset = "0x1C96720", VA = "0x181C98120")]
	private string ReadRegexString()
	{
		return null;
	}

	[Token(Token = "0x6000E4A")]
	[Address(RVA = "0x1C95890", Offset = "0x1C93E90", VA = "0x181C95890")]
	private bool Match(string s)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E4B")]
	[Address(RVA = "0x1C96950", Offset = "0x1C94F50", VA = "0x181C96950")]
	private QueryOperator ParseOperator()
	{
		return default(QueryOperator);
	}

	[Token(Token = "0x6000E4C")]
	[Address(RVA = "0x1C976F0", Offset = "0x1C95CF0", VA = "0x181C976F0")]
	private PathFilter ParseQuotedField(char indexerCloseChar, bool scan)
	{
		return null;
	}

	[Token(Token = "0x6000E4D")]
	[Address(RVA = "0x1C955C0", Offset = "0x1C93BC0", VA = "0x181C955C0")]
	private void EnsureLength(string message)
	{
	}

	[Token(Token = "0x6000E4E")]
	[Address(RVA = "0x1C95820", Offset = "0x1C93E20", VA = "0x181C95820")]
	internal IEnumerable<JToken> Evaluate(JToken root, JToken t, JsonSelectSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000E4F")]
	[Address(RVA = "0x1C95630", Offset = "0x1C93C30", VA = "0x181C95630")]
	internal static IEnumerable<JToken> Evaluate(List<PathFilter> filters, JToken root, JToken t, JsonSelectSettings? settings)
	{
		return null;
	}
}
