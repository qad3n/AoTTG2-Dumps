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
		[Address(RVA = "0x56288E0", Offset = "0x56278E0", VA = "0x56288E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E3B")]
	[Address(RVA = "0x56288F0", Offset = "0x56278F0", VA = "0x56288F0")]
	public JPath(string expression)
	{
	}

	[Token(Token = "0x6000E3C")]
	[Address(RVA = "0x56289A0", Offset = "0x56279A0", VA = "0x56289A0")]
	private void ParseMain()
	{
	}

	[Token(Token = "0x6000E3D")]
	[Address(RVA = "0x5628B90", Offset = "0x5627B90", VA = "0x5628B90")]
	private bool ParsePath(List<PathFilter> filters, int currentPartStartIndex, bool query)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E3E")]
	[Address(RVA = "0x5629230", Offset = "0x5628230", VA = "0x5629230")]
	private static PathFilter CreatePathFilter(string? member, bool scan)
	{
		return null;
	}

	[Token(Token = "0x6000E3F")]
	[Address(RVA = "0x56292B0", Offset = "0x56282B0", VA = "0x56292B0")]
	private PathFilter ParseIndexer(char indexerOpenChar, bool scan)
	{
		return null;
	}

	[Token(Token = "0x6000E40")]
	[Address(RVA = "0x5629AB0", Offset = "0x5628AB0", VA = "0x5629AB0")]
	private PathFilter ParseArrayIndexer(char indexerCloseChar)
	{
		return null;
	}

	[Token(Token = "0x6000E41")]
	[Address(RVA = "0x5628B50", Offset = "0x5627B50", VA = "0x5628B50")]
	private void EatWhitespace()
	{
	}

	[Token(Token = "0x6000E42")]
	[Address(RVA = "0x56298A0", Offset = "0x56288A0", VA = "0x56298A0")]
	private PathFilter ParseQuery(char indexerCloseChar, bool scan)
	{
		return null;
	}

	[Token(Token = "0x6000E43")]
	[Address(RVA = "0x562AAC0", Offset = "0x5629AC0", VA = "0x562AAC0")]
	private bool TryParseExpression(out List<PathFilter>? expressionPath)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E44")]
	[Address(RVA = "0x562ACC0", Offset = "0x5629CC0", VA = "0x562ACC0")]
	private JsonException CreateUnexpectedCharacterException()
	{
		return null;
	}

	[Token(Token = "0x6000E45")]
	[Address(RVA = "0x562AD80", Offset = "0x5629D80", VA = "0x562AD80")]
	private object ParseSide()
	{
		return null;
	}

	[Token(Token = "0x6000E46")]
	[Address(RVA = "0x562A3B0", Offset = "0x56293B0", VA = "0x562A3B0")]
	private QueryExpression ParseExpression()
	{
		return null;
	}

	[Token(Token = "0x6000E47")]
	[Address(RVA = "0x562AFD0", Offset = "0x5629FD0", VA = "0x562AFD0")]
	private bool TryParseValue(out object? value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E48")]
	[Address(RVA = "0x562B9B0", Offset = "0x562A9B0", VA = "0x562B9B0")]
	private string ReadQuotedString()
	{
		return null;
	}

	[Token(Token = "0x6000E49")]
	[Address(RVA = "0x562BCD0", Offset = "0x562ACD0", VA = "0x562BCD0")]
	private string ReadRegexString()
	{
		return null;
	}

	[Token(Token = "0x6000E4A")]
	[Address(RVA = "0x562B8A0", Offset = "0x562A8A0", VA = "0x562B8A0")]
	private bool Match(string s)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E4B")]
	[Address(RVA = "0x562B420", Offset = "0x562A420", VA = "0x562B420")]
	private QueryOperator ParseOperator()
	{
		return default(QueryOperator);
	}

	[Token(Token = "0x6000E4C")]
	[Address(RVA = "0x5629480", Offset = "0x5628480", VA = "0x5629480")]
	private PathFilter ParseQuotedField(char indexerCloseChar, bool scan)
	{
		return null;
	}

	[Token(Token = "0x6000E4D")]
	[Address(RVA = "0x5629420", Offset = "0x5628420", VA = "0x5629420")]
	private void EnsureLength(string message)
	{
	}

	[Token(Token = "0x6000E4E")]
	[Address(RVA = "0x562BE50", Offset = "0x562AE50", VA = "0x562BE50")]
	internal IEnumerable<JToken> Evaluate(JToken root, JToken t, JsonSelectSettings? settings)
	{
		return null;
	}

	[Token(Token = "0x6000E4F")]
	[Address(RVA = "0x562BEC0", Offset = "0x562AEC0", VA = "0x562BEC0")]
	internal static IEnumerable<JToken> Evaluate(List<PathFilter> filters, JToken root, JToken t, JsonSelectSettings? settings)
	{
		return null;
	}
}
