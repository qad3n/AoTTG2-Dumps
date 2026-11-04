// ==================== AoTTG2 cross-reference ====================
// Type: System.Dynamic.Utils.ExpressionUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq.Expressions;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Dynamic.Utils;

[Token(Token = "0x2000282")]
internal static class ExpressionUtils
{
	[Token(Token = "0x6000C97")]
	public static ReadOnlyCollection<T> ReturnReadOnly<T>(ref IReadOnlyList<T> collection)
	{
		return null;
	}

	[Token(Token = "0x6000C98")]
	public static T ReturnObject<T>(object collectionOrT) where T : class
	{
		return null;
	}

	[Token(Token = "0x6000C99")]
	[Address(RVA = "0x2483F10", Offset = "0x2482510", VA = "0x182483F10")]
	public static void ValidateArgumentTypes(MethodBase method, ExpressionType nodeKind, ref ReadOnlyCollection<Expression> arguments, string methodParamName)
	{
	}

	[Token(Token = "0x6000C9A")]
	[Address(RVA = "0x2483E30", Offset = "0x2482430", VA = "0x182483E30")]
	public static void ValidateArgumentCount(MethodBase method, ExpressionType nodeKind, int count, ParameterInfo[] pis)
	{
	}

	[Token(Token = "0x6000C9B")]
	[Address(RVA = "0x2484310", Offset = "0x2482910", VA = "0x182484310")]
	public static Expression ValidateOneArgument(MethodBase method, ExpressionType nodeKind, Expression arguments, ParameterInfo pi, string methodParamName, string argumentParamName, int index = -1)
	{
		return null;
	}

	[Token(Token = "0x6000C9C")]
	[Address(RVA = "0x24839B0", Offset = "0x2481FB0", VA = "0x1824839B0")]
	public static void RequiresCanRead(Expression expression, string paramName)
	{
	}

	[Token(Token = "0x6000C9D")]
	[Address(RVA = "0x24839C0", Offset = "0x2481FC0", VA = "0x1824839C0")]
	public static void RequiresCanRead(Expression expression, string paramName, int idx)
	{
	}

	[Token(Token = "0x6000C9E")]
	[Address(RVA = "0x2483C10", Offset = "0x2482210", VA = "0x182483C10")]
	public static bool TryQuote(Type parameterType, ref Expression argument)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C9F")]
	[Address(RVA = "0x2483930", Offset = "0x2481F30", VA = "0x182483930")]
	internal static ParameterInfo[] GetParametersForValidation(MethodBase method, ExpressionType nodeKind)
	{
		return null;
	}

	[Token(Token = "0x6000CA0")]
	internal static bool SameElements<T>(ref IEnumerable<T> replacement, IReadOnlyList<T> current) where T : class
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA1")]
	private static bool SameElementsInCollection<T>(ICollection<T> replacement, IReadOnlyList<T> current) where T : class
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA2")]
	[Address(RVA = "0x2483DB0", Offset = "0x24823B0", VA = "0x182483DB0")]
	public static void ValidateArgumentCount(this LambdaExpression lambda)
	{
	}
}
