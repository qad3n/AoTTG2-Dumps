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
		[Address(RVA = "0x3E35BE0", Offset = "0x3E35BE0", VA = "0x3E35BE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E3B")]
	[Address(RVA = "0x3E35BF0", Offset = "0x3E35BF0", VA = "0x3E35BF0")]
	public JPath(string expression)
	{
	}

	[Token(Token = "0x6000E3C")]
	[Address(RVA = "0x3E35CA0", Offset = "0x3E35CA0", VA = "0x3E35CA0")]
	private void ParseMain()
	{
	}

	[Token(Token = "0x6000E3D")]
	[Address(RVA = "0x3E35E90", Offset = "0x3E35E90", VA = "0x3E35E90")]
	private bool ParsePath(List<PathFilter> filters, int currentPartStartIndex, bool query)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E3E")]
	[Address(RVA = "0x3E36570", Offset = "0x3E36570", VA = "0x3E36570")]
	private static PathFilter CreatePathFilter(string? member, bool scan)
	{
		return null;
	}

	[Token(Token = "0x6000E3F")]
	[Address(RVA = "0x3E365F0", Offset = "0x3E365F0", VA = "0x3E365F0")]
	private PathFilter ParseIndexer(char indexerOpenChar, bool scan)
	{
		return null;
	}

	[Token(Token = "0x6000E40")]
	[Address(RVA = "0x3E36E20", Offset = "0x3E36E20", VA = "0x3E36E20")]
	private PathFilter ParseArrayIndexer(char indexerCloseChar)
	{
		return null;
	}

	[Token(Token = "0x6000E41")]
	[Address(RVA = "0x3E35E50", Offset = "0x3E35E50", VA = "0x3E35E50")]
	private void EatWhitespace()
	{
	}

	[Token(Token = "0x6000E42")]
	[Address(RVA = "0x3E36BF0", Offset = "0x3E36BF0", VA = "0x3E36BF0")]
	private PathFilter ParseQuery(char indexerCloseChar, bool scan)
	{
		return null;
	}

	[Token(Token = "0x6000E43")]
	[Address(RVA = "0x3E37EC0", Offset = "0x3E37EC0", VA = "0x3E37EC0")]
	private bool TryParseExpression(out List<PathFilter>? expressionPath)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E44")]
	[Address(RVA = "0x3E380C0", Offset = "0x3E380C0", VA = "0x3E380C0")]
	private JsonException CreateUnexpectedCharacterException()
	{
		return null;
	}

	[Token(Token = "0x6000E45")]
	[Address(RVA = "0x3E38180", Offset = "0x3E38180", VA = "0x3E38180")]
	private object ParseSide()
	{
		return null;
	}

	[Token(Token = "0x6000E46")]
	[Address(RVA = "0x3E37760", Offset = "0x3E37760", VA = "0x3E37760")]
	private QueryExpression ParseExpression()
	{
		return null;
	}

	[Token(Token = "0x6000E47")]
	[Address(RVA = "0x3E383D0", Offset = "0x3E383D0", VA = "0x3E383D0")]
	private bool TryParseValue(out object? value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E48")]
	[Address(RVA = "0x3E38F00", Offset = "0x3E38F00", VA = "0x3E38F00")]
	private string ReadQuotedString()
	{
		return null;
	}

	[Token(Token = "0x6000E49")]
	[Address(RVA = "0x3E39210", Offset = "0x3E39210", VA = "0x3E39210")]
	private string ReadRegexString()
	{
		return null;
	}

	[Token(Token = "0x6000E4A")]
	[Address(RVA = "0x3E38DF0", Offset = "0x3E38DF0", VA = "0x3E38DF0")]
	private bool Match(string s)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E4B")]
	[Address(RVA = "0x3E38810", Offset = "0x3E38810", VA = "0x3E38810")]
	private QueryOperator ParseOperator()
	{
		return default(QueryOperator);
	}

	[Token(Token = "0x6000E4C")]
	[Address(RVA = "0x3E367C0", Offset = "0x3E367C0", VA = "0x3E367C0")]
	private PathFilter ParseQuotedField(char indexerCloseChar, bool scan)
	{
		return null;
	}

	[Token(Token = "0x6000E4D")]
	[Address(RVA = "0x3E36760", Offset = "0x3E36760", VA = "0x3E36760")]
	private void EnsureLength(string message)
	{
	}

	[Token(Token = "0x6000E4E")]
	[Address(RVA = "0x3E393A0", Offset = "0x3E393A0", VA = "0x3E393A0")]
	internal IEnumerable<JToken> Evaluate(JToken root, JToken t, JsonSelectSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000E4F")]
	[Address(RVA = "0x3E39410", Offset = "0x3E39410", VA = "0x3E39410")]
	internal static IEnumerable<JToken> Evaluate(List<PathFilter> filters, JToken root, JToken t, JsonSelectSettings? settings)
	{
		return null;
	}
}
