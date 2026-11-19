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

[Token(Token = "0x2000283")]
internal static class ExpressionUtils
{
	[Token(Token = "0x6000CA2")]
	public static ReadOnlyCollection<T> ReturnReadOnly<T>(ref IReadOnlyList<T> collection)
	{
		return null;
	}

	[Token(Token = "0x6000CA3")]
	public static T ReturnObject<T>(object collectionOrT) where T : class
	{
		return null;
	}

	[Token(Token = "0x6000CA4")]
	[Address(RVA = "0x5E25FA0", Offset = "0x5E24FA0", VA = "0x5E25FA0")]
	public static void ValidateArgumentTypes(MethodBase method, ExpressionType nodeKind, ref ReadOnlyCollection<Expression> arguments, string methodParamName)
	{
	}

	[Token(Token = "0x6000CA5")]
	[Address(RVA = "0x5E26430", Offset = "0x5E25430", VA = "0x5E26430")]
	public static void ValidateArgumentCount(MethodBase method, ExpressionType nodeKind, int count, ParameterInfo[] pis)
	{
	}

	[Token(Token = "0x6000CA6")]
	[Address(RVA = "0x5E264B0", Offset = "0x5E254B0", VA = "0x5E264B0")]
	public static Expression ValidateOneArgument(MethodBase method, ExpressionType nodeKind, Expression arguments, ParameterInfo pi, string methodParamName, string argumentParamName, int index = -1)
	{
		return null;
	}

	[Token(Token = "0x6000CA7")]
	[Address(RVA = "0x5E26C20", Offset = "0x5E25C20", VA = "0x5E26C20")]
	public static void RequiresCanRead(Expression expression, string paramName)
	{
	}

	[Token(Token = "0x6000CA8")]
	[Address(RVA = "0x5E26750", Offset = "0x5E25750", VA = "0x5E26750")]
	public static void RequiresCanRead(Expression expression, string paramName, int idx)
	{
	}

	[Token(Token = "0x6000CA9")]
	[Address(RVA = "0x5E26B20", Offset = "0x5E25B20", VA = "0x5E26B20")]
	public static bool TryQuote(Type parameterType, ref Expression argument)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CAA")]
	[Address(RVA = "0x5E26390", Offset = "0x5E25390", VA = "0x5E26390")]
	internal static ParameterInfo[] GetParametersForValidation(MethodBase method, ExpressionType nodeKind)
	{
		return null;
	}

	[Token(Token = "0x6000CAB")]
	internal static bool SameElements<T>(ref IEnumerable<T> replacement, IReadOnlyList<T> current) where T : class
	{
		return default(bool);
	}

	[Token(Token = "0x6000CAC")]
	private static bool SameElementsInCollection<T>(ICollection<T> replacement, IReadOnlyList<T> current) where T : class
	{
		return default(bool);
	}

	[Token(Token = "0x6000CAD")]
	[Address(RVA = "0x5E26E50", Offset = "0x5E25E50", VA = "0x5E26E50")]
	public static void ValidateArgumentCount(this LambdaExpression lambda)
	{
	}
}
