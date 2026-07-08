using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq.Expressions;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Dynamic.Utils;

[Token(Token = "0x2000282")]
internal static class ExpressionUtils
{
	[Token(Token = "0x6000C98")]
	public static ReadOnlyCollection<T> ReturnReadOnly<T>(ref IReadOnlyList<T> collection)
	{
		return null;
	}

	[Token(Token = "0x6000C99")]
	public static T ReturnObject<T>(object collectionOrT) where T : class
	{
		return null;
	}

	[Token(Token = "0x6000C9A")]
	[Address(RVA = "0x41EC2D0", Offset = "0x41EC2D0", VA = "0x41EC2D0")]
	public static void ValidateArgumentTypes(MethodBase method, ExpressionType nodeKind, ref ReadOnlyCollection<Expression> arguments, string methodParamName)
	{
	}

	[Token(Token = "0x6000C9B")]
	[Address(RVA = "0x41EC770", Offset = "0x41EC770", VA = "0x41EC770")]
	public static void ValidateArgumentCount(MethodBase method, ExpressionType nodeKind, int count, ParameterInfo[] pis)
	{
	}

	[Token(Token = "0x6000C9C")]
	[Address(RVA = "0x41EC7F0", Offset = "0x41EC7F0", VA = "0x41EC7F0")]
	public static Expression ValidateOneArgument(MethodBase method, ExpressionType nodeKind, Expression arguments, ParameterInfo pi, string methodParamName, string argumentParamName, int index = -1)
	{
		return null;
	}

	[Token(Token = "0x6000C9D")]
	[Address(RVA = "0x41ECF70", Offset = "0x41ECF70", VA = "0x41ECF70")]
	public static void RequiresCanRead(Expression expression, string paramName)
	{
	}

	[Token(Token = "0x6000C9E")]
	[Address(RVA = "0x41ECA90", Offset = "0x41ECA90", VA = "0x41ECA90")]
	public static void RequiresCanRead(Expression expression, string paramName, int idx)
	{
	}

	[Token(Token = "0x6000C9F")]
	[Address(RVA = "0x41ECE70", Offset = "0x41ECE70", VA = "0x41ECE70")]
	public static bool TryQuote(Type parameterType, ref Expression argument)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA0")]
	[Address(RVA = "0x41EC6D0", Offset = "0x41EC6D0", VA = "0x41EC6D0")]
	internal static ParameterInfo[] GetParametersForValidation(MethodBase method, ExpressionType nodeKind)
	{
		return null;
	}

	[Token(Token = "0x6000CA1")]
	internal static bool SameElements<T>(ref IEnumerable<T> replacement, IReadOnlyList<T> current) where T : class
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA2")]
	private static bool SameElementsInCollection<T>(ICollection<T> replacement, IReadOnlyList<T> current) where T : class
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA3")]
	[Address(RVA = "0x41ED1A0", Offset = "0x41ED1A0", VA = "0x41ED1A0")]
	public static void ValidateArgumentCount(this LambdaExpression lambda)
	{
	}
}
