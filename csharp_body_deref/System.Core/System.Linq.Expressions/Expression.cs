using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Diagnostics.CodeAnalysis;
using System.Dynamic.Utils;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200004B")]
public abstract class Expression
{
	[Token(Token = "0x200004C")]
	internal class BinaryExpressionProxy
	{
	}

	[Token(Token = "0x200004D")]
	internal class BlockExpressionProxy
	{
	}

	[Token(Token = "0x200004E")]
	internal class CatchBlockProxy
	{
	}

	[Token(Token = "0x200004F")]
	internal class ConditionalExpressionProxy
	{
	}

	[Token(Token = "0x2000050")]
	internal class ConstantExpressionProxy
	{
	}

	[Token(Token = "0x2000051")]
	internal class DebugInfoExpressionProxy
	{
	}

	[Token(Token = "0x2000052")]
	internal class DefaultExpressionProxy
	{
	}

	[Token(Token = "0x2000053")]
	internal class GotoExpressionProxy
	{
	}

	[Token(Token = "0x2000054")]
	internal class IndexExpressionProxy
	{
	}

	[Token(Token = "0x2000055")]
	internal class InvocationExpressionProxy
	{
	}

	[Token(Token = "0x2000056")]
	internal class LabelExpressionProxy
	{
	}

	[Token(Token = "0x2000057")]
	internal class LambdaExpressionProxy
	{
	}

	[Token(Token = "0x2000058")]
	internal class ListInitExpressionProxy
	{
	}

	[Token(Token = "0x2000059")]
	internal class LoopExpressionProxy
	{
	}

	[Token(Token = "0x200005A")]
	internal class MemberExpressionProxy
	{
	}

	[Token(Token = "0x200005B")]
	internal class MemberInitExpressionProxy
	{
	}

	[Token(Token = "0x200005C")]
	internal class MethodCallExpressionProxy
	{
	}

	[Token(Token = "0x200005D")]
	internal class NewArrayExpressionProxy
	{
	}

	[Token(Token = "0x200005E")]
	internal class NewExpressionProxy
	{
	}

	[Token(Token = "0x200005F")]
	internal class ParameterExpressionProxy
	{
	}

	[Token(Token = "0x2000060")]
	internal class RuntimeVariablesExpressionProxy
	{
	}

	[Token(Token = "0x2000061")]
	internal class SwitchCaseProxy
	{
	}

	[Token(Token = "0x2000062")]
	internal class SwitchExpressionProxy
	{
	}

	[Token(Token = "0x2000063")]
	internal class TryExpressionProxy
	{
	}

	[Token(Token = "0x2000064")]
	internal class TypeBinaryExpressionProxy
	{
	}

	[Token(Token = "0x2000065")]
	internal class UnaryExpressionProxy
	{
	}

	[Token(Token = "0x2000066")]
	private class ExtensionInfo
	{
		[Token(Token = "0x40000F3")]
		[FieldOffset(Offset = "0x10")]
		internal readonly ExpressionType NodeType;

		[Token(Token = "0x40000F4")]
		[FieldOffset(Offset = "0x18")]
		internal readonly Type Type;
	}

	[Token(Token = "0x40000F0")]
	[FieldOffset(Offset = "0x0")]
	private static readonly CacheDict<Type, MethodInfo> s_lambdaDelegateCache;

	[Token(Token = "0x40000F1")]
	[FieldOffset(Offset = "0x8")]
	private static CacheDict<Type, Func<Expression, string, bool, ReadOnlyCollection<ParameterExpression>, LambdaExpression>> s_lambdaFactories;

	[Token(Token = "0x40000F2")]
	[FieldOffset(Offset = "0x10")]
	private static ConditionalWeakTable<Expression, ExtensionInfo> s_legacyCtorSupportTable;

	[Token(Token = "0x17000057")]
	public virtual ExpressionType NodeType
	{
		[Token(Token = "0x6000236")]
		[Address(RVA = "0x417D600", Offset = "0x417D600", VA = "0x417D600", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x17000058")]
	public virtual Type Type
	{
		[Token(Token = "0x6000237")]
		[Address(RVA = "0x417D6F0", Offset = "0x417D6F0", VA = "0x417D6F0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000059")]
	public virtual bool CanReduce
	{
		[Token(Token = "0x6000238")]
		[Address(RVA = "0x417D7E0", Offset = "0x417D7E0", VA = "0x417D7E0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x416FD00", Offset = "0x416FD00", VA = "0x416FD00")]
	public static BinaryExpression Assign(Expression left, Expression right)
	{
		return null;
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x4172040", Offset = "0x4172040", VA = "0x4172040")]
	private static BinaryExpression GetUserDefinedBinaryOperator(ExpressionType binaryType, string name, Expression left, Expression right, bool liftToNull)
	{
		return null;
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x4172650", Offset = "0x4172650", VA = "0x4172650")]
	private static BinaryExpression GetMethodBasedBinaryOperator(ExpressionType binaryType, Expression left, Expression right, MethodInfo method, bool liftToNull)
	{
		return null;
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x4172F70", Offset = "0x4172F70", VA = "0x4172F70")]
	private static BinaryExpression GetMethodBasedAssignOperator(ExpressionType binaryType, Expression left, Expression right, MethodInfo method, LambdaExpression conversion, bool liftToNull)
	{
		return null;
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x4173480", Offset = "0x4173480", VA = "0x4173480")]
	private static BinaryExpression GetUserDefinedBinaryOperatorOrThrow(ExpressionType binaryType, string name, Expression left, Expression right, bool liftToNull)
	{
		return null;
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x41736C0", Offset = "0x41736C0", VA = "0x41736C0")]
	private static BinaryExpression GetUserDefinedAssignOperatorOrThrow(ExpressionType binaryType, string name, Expression left, Expression right, LambdaExpression conversion, bool liftToNull)
	{
		return null;
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x41723F0", Offset = "0x41723F0", VA = "0x41723F0")]
	private static MethodInfo GetUserDefinedBinaryOperator(ExpressionType binaryType, Type leftType, Type rightType, string name)
	{
		return null;
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x4173940", Offset = "0x4173940", VA = "0x4173940")]
	private static bool IsLiftingConditionalLogicalOperator(Type left, Type right, MethodInfo method, ExpressionType binaryType)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x4172E00", Offset = "0x4172E00", VA = "0x4172E00")]
	internal static bool ParameterIsAssignable(ParameterInfo pi, Type argType)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x4172EA0", Offset = "0x4172EA0", VA = "0x4172EA0")]
	private static void ValidateParamswithOperandsOrThrow(Type paramType, Type operandType, ExpressionType exprType, string name)
	{
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x4172C50", Offset = "0x4172C50", VA = "0x4172C50")]
	private static void ValidateOperator(MethodInfo method)
	{
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x41739F0", Offset = "0x41739F0", VA = "0x41739F0")]
	private static void ValidateMethodInfo(MethodInfo method, string paramName)
	{
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x4173A70", Offset = "0x4173A70", VA = "0x4173A70")]
	private static bool IsNullComparison(Expression left, Expression right)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x4173C70", Offset = "0x4173C70", VA = "0x4173C70")]
	private static bool IsNullConstant(Expression e)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x4173CE0", Offset = "0x4173CE0", VA = "0x4173CE0")]
	private static void ValidateUserDefinedConditionalLogicOperator(ExpressionType nodeType, Type left, Type right, MethodInfo method)
	{
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x4174460", Offset = "0x4174460", VA = "0x4174460")]
	private static void VerifyOpTrueFalse(ExpressionType nodeType, Type left, MethodInfo opTrue, string paramName)
	{
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x4174370", Offset = "0x4174370", VA = "0x4174370")]
	private static bool IsValidLiftedConditionalLogicalOperator(Type left, Type right, ParameterInfo[] pms)
	{
		return default(bool);
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x416FB40", Offset = "0x416FB40", VA = "0x416FB40")]
	public static BinaryExpression MakeBinary(ExpressionType binaryType, Expression left, Expression right, bool liftToNull, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x416E390", Offset = "0x416E390", VA = "0x416E390")]
	public static BinaryExpression MakeBinary(ExpressionType binaryType, Expression left, Expression right, bool liftToNull, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x417A940", Offset = "0x417A940", VA = "0x417A940")]
	public static BinaryExpression Equal(Expression left, Expression right)
	{
		return null;
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x41772A0", Offset = "0x41772A0", VA = "0x41772A0")]
	public static BinaryExpression Equal(Expression left, Expression right, bool liftToNull, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x416DF50", Offset = "0x416DF50", VA = "0x416DF50")]
	public static BinaryExpression ReferenceEqual(Expression left, Expression right)
	{
		return null;
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x417AFA0", Offset = "0x417AFA0", VA = "0x417AFA0")]
	public static BinaryExpression NotEqual(Expression left, Expression right)
	{
		return null;
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x4177390", Offset = "0x4177390", VA = "0x4177390")]
	public static BinaryExpression NotEqual(Expression left, Expression right, bool liftToNull, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x416E130", Offset = "0x416E130", VA = "0x416E130")]
	public static BinaryExpression ReferenceNotEqual(Expression left, Expression right)
	{
		return null;
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x417A9A0", Offset = "0x417A9A0", VA = "0x417A9A0")]
	private static BinaryExpression GetEqualityComparisonOperator(ExpressionType binaryType, string opName, Expression left, Expression right, bool liftToNull)
	{
		return null;
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x41770C0", Offset = "0x41770C0", VA = "0x41770C0")]
	public static BinaryExpression GreaterThan(Expression left, Expression right, bool liftToNull, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x4176EE0", Offset = "0x4176EE0", VA = "0x4176EE0")]
	public static BinaryExpression LessThan(Expression left, Expression right, bool liftToNull, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x41771B0", Offset = "0x41771B0", VA = "0x41771B0")]
	public static BinaryExpression GreaterThanOrEqual(Expression left, Expression right, bool liftToNull, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x4176FD0", Offset = "0x4176FD0", VA = "0x4176FD0")]
	public static BinaryExpression LessThanOrEqual(Expression left, Expression right, bool liftToNull, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x417B000", Offset = "0x417B000", VA = "0x417B000")]
	private static BinaryExpression GetComparisonOperator(ExpressionType binaryType, string opName, Expression left, Expression right, bool liftToNull)
	{
		return null;
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x417B300", Offset = "0x417B300", VA = "0x417B300")]
	public static BinaryExpression AndAlso(Expression left, Expression right)
	{
		return null;
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x41760F0", Offset = "0x41760F0", VA = "0x41760F0")]
	public static BinaryExpression AndAlso(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x4176920", Offset = "0x4176920", VA = "0x4176920")]
	public static BinaryExpression OrElse(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x4177710", Offset = "0x4177710", VA = "0x4177710")]
	public static BinaryExpression Coalesce(Expression left, Expression right, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x417B360", Offset = "0x417B360", VA = "0x417B360")]
	private static Type ValidateCoalesceArgTypes(Type left, Type right)
	{
		return null;
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x4174610", Offset = "0x4174610", VA = "0x4174610")]
	public static BinaryExpression Add(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x4178360", Offset = "0x4178360", VA = "0x4178360")]
	public static BinaryExpression AddAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x41731F0", Offset = "0x41731F0", VA = "0x41731F0")]
	private static void ValidateOpAssignConversionLambda(LambdaExpression conversion, Expression left, MethodInfo method, ExpressionType nodeType)
	{
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x417A0D0", Offset = "0x417A0D0", VA = "0x417A0D0")]
	public static BinaryExpression AddAssignChecked(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x4174890", Offset = "0x4174890", VA = "0x4174890")]
	public static BinaryExpression AddChecked(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x4174B20", Offset = "0x4174B20", VA = "0x4174B20")]
	public static BinaryExpression Subtract(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x4179E00", Offset = "0x4179E00", VA = "0x4179E00")]
	public static BinaryExpression SubtractAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x417A3A0", Offset = "0x417A3A0", VA = "0x417A3A0")]
	public static BinaryExpression SubtractAssignChecked(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x4174DB0", Offset = "0x4174DB0", VA = "0x4174DB0")]
	public static BinaryExpression SubtractChecked(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x4175560", Offset = "0x4175560", VA = "0x4175560")]
	public static BinaryExpression Divide(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x4178900", Offset = "0x4178900", VA = "0x4178900")]
	public static BinaryExpression DivideAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x41757F0", Offset = "0x41757F0", VA = "0x41757F0")]
	public static BinaryExpression Modulo(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x4179150", Offset = "0x4179150", VA = "0x4179150")]
	public static BinaryExpression ModuloAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x4175040", Offset = "0x4175040", VA = "0x4175040")]
	public static BinaryExpression Multiply(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x4179420", Offset = "0x4179420", VA = "0x4179420")]
	public static BinaryExpression MultiplyAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x417A670", Offset = "0x417A670", VA = "0x417A670")]
	public static BinaryExpression MultiplyAssignChecked(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x41752D0", Offset = "0x41752D0", VA = "0x41752D0")]
	public static BinaryExpression MultiplyChecked(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x417B4C0", Offset = "0x417B4C0", VA = "0x417B4C0")]
	private static bool IsSimpleShift(Type left, Type right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x417B580", Offset = "0x417B580", VA = "0x417B580")]
	private static Type GetResultTypeOfShift(Type left, Type right)
	{
		return null;
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x4178100", Offset = "0x4178100", VA = "0x4178100")]
	public static BinaryExpression LeftShift(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x4178EA0", Offset = "0x4178EA0", VA = "0x4178EA0")]
	public static BinaryExpression LeftShiftAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x4177EA0", Offset = "0x4177EA0", VA = "0x4177EA0")]
	public static BinaryExpression RightShift(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x4179B50", Offset = "0x4179B50", VA = "0x4179B50")]
	public static BinaryExpression RightShiftAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x4175E60", Offset = "0x4175E60", VA = "0x4175E60")]
	public static BinaryExpression And(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x4178630", Offset = "0x4178630", VA = "0x4178630")]
	public static BinaryExpression AndAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x4176690", Offset = "0x4176690", VA = "0x4176690")]
	public static BinaryExpression Or(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x41796F0", Offset = "0x41796F0", VA = "0x41796F0")]
	public static BinaryExpression OrAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x4177480", Offset = "0x4177480", VA = "0x4177480")]
	public static BinaryExpression ExclusiveOr(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x4178BD0", Offset = "0x4178BD0", VA = "0x4178BD0")]
	public static BinaryExpression ExclusiveOrAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x4175A80", Offset = "0x4175A80", VA = "0x4175A80")]
	public static BinaryExpression Power(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x41799C0", Offset = "0x41799C0", VA = "0x41799C0")]
	public static BinaryExpression PowerAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x4177C70", Offset = "0x4177C70", VA = "0x4177C70")]
	public static BinaryExpression ArrayIndex(Expression array, Expression index)
	{
		return null;
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x417B6E0", Offset = "0x417B6E0", VA = "0x417B6E0")]
	public static BlockExpression Block(Expression arg0, Expression arg1)
	{
		return null;
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x417B780", Offset = "0x417B780", VA = "0x417B780")]
	public static BlockExpression Block(Expression arg0, Expression arg1, Expression arg2)
	{
		return null;
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x417B850", Offset = "0x417B850", VA = "0x417B850")]
	public static BlockExpression Block(Expression arg0, Expression arg1, Expression arg2, Expression arg3)
	{
		return null;
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x417B940", Offset = "0x417B940", VA = "0x417B940")]
	public static BlockExpression Block(Expression arg0, Expression arg1, Expression arg2, Expression arg3, Expression arg4)
	{
		return null;
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x417BA60", Offset = "0x417BA60", VA = "0x417BA60")]
	public static BlockExpression Block(IEnumerable<Expression> expressions)
	{
		return null;
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x417BAE0", Offset = "0x417BAE0", VA = "0x417BAE0")]
	public static BlockExpression Block(Type type, params Expression[] expressions)
	{
		return null;
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x417BBE0", Offset = "0x417BBE0", VA = "0x417BBE0")]
	public static BlockExpression Block(Type type, IEnumerable<Expression> expressions)
	{
		return null;
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x417BE70", Offset = "0x417BE70", VA = "0x417BE70")]
	public static BlockExpression Block(IEnumerable<ParameterExpression> variables, params Expression[] expressions)
	{
		return null;
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x417BEC0", Offset = "0x417BEC0", VA = "0x417BEC0")]
	public static BlockExpression Block(Type type, IEnumerable<ParameterExpression> variables, params Expression[] expressions)
	{
		return null;
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x4170130", Offset = "0x4170130", VA = "0x4170130")]
	public static BlockExpression Block(IEnumerable<ParameterExpression> variables, IEnumerable<Expression> expressions)
	{
		return null;
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x417BC60", Offset = "0x417BC60", VA = "0x417BC60")]
	public static BlockExpression Block(Type type, IEnumerable<ParameterExpression> variables, IEnumerable<Expression> expressions)
	{
		return null;
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x417C9A0", Offset = "0x417C9A0", VA = "0x417C9A0")]
	private static BlockExpression BlockCore(Type type, ReadOnlyCollection<ParameterExpression> variables, ReadOnlyCollection<Expression> expressions)
	{
		return null;
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x417CCF0", Offset = "0x417CCF0", VA = "0x417CCF0")]
	internal static void ValidateVariables(ReadOnlyCollection<ParameterExpression> varList, string collectionName)
	{
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x417C080", Offset = "0x417C080", VA = "0x417C080")]
	private static BlockExpression GetOptimizedBlockExpression(IReadOnlyList<Expression> expressions)
	{
		return null;
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x417CEC0", Offset = "0x417CEC0", VA = "0x417CEC0")]
	public static CatchBlock MakeCatchBlock(Type type, ParameterExpression variable, Expression body, Expression filter)
	{
		return null;
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x4171810", Offset = "0x4171810", VA = "0x4171810")]
	public static ConditionalExpression Condition(Expression test, Expression ifTrue, Expression ifFalse)
	{
		return null;
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x417D120", Offset = "0x417D120", VA = "0x417D120")]
	public static ConditionalExpression Condition(Expression test, Expression ifTrue, Expression ifFalse, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x417D360", Offset = "0x417D360", VA = "0x417D360")]
	public static ConditionalExpression IfThen(Expression test, Expression ifTrue)
	{
		return null;
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x417D510", Offset = "0x417D510", VA = "0x417D510")]
	public static ConstantExpression Constant(object value)
	{
		return null;
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x4171600", Offset = "0x4171600", VA = "0x4171600")]
	public static ConstantExpression Constant(object value, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x417D490", Offset = "0x417D490", VA = "0x417D490")]
	public static DefaultExpression Empty()
	{
		return null;
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x417D560", Offset = "0x417D560", VA = "0x417D560")]
	public static DefaultExpression Default(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x416DC40", Offset = "0x416DC40", VA = "0x416DC40")]
	protected Expression()
	{
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x417D7F0", Offset = "0x417D7F0", VA = "0x417D7F0", Slot = "7")]
	public virtual Expression Reduce()
	{
		return null;
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x417D830", Offset = "0x417D830", VA = "0x417D830", Slot = "8")]
	protected internal virtual Expression VisitChildren(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x417D9A0", Offset = "0x417D9A0", VA = "0x417D9A0", Slot = "9")]
	protected internal virtual Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x417D8B0", Offset = "0x417D8B0", VA = "0x417D8B0")]
	public Expression ReduceAndCheck()
	{
		return null;
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x417D9D0", Offset = "0x417D9D0", VA = "0x417D9D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x417BF20", Offset = "0x417BF20", VA = "0x417BF20")]
	private static void RequiresCanRead(IReadOnlyList<Expression> items, string paramName)
	{
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x4171E10", Offset = "0x4171E10", VA = "0x4171E10")]
	private static void RequiresCanWrite(Expression expression, string paramName)
	{
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x417D9E0", Offset = "0x417D9E0", VA = "0x417D9E0")]
	public static GotoExpression Break(LabelTarget target)
	{
		return null;
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x417DB50", Offset = "0x417DB50", VA = "0x417DB50")]
	public static GotoExpression Return(LabelTarget target)
	{
		return null;
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x417DBE0", Offset = "0x417DBE0", VA = "0x417DBE0")]
	public static GotoExpression Return(LabelTarget target, Expression value)
	{
		return null;
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x417DC70", Offset = "0x417DC70", VA = "0x417DC70")]
	public static GotoExpression Goto(LabelTarget target, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x417DCD0", Offset = "0x417DCD0", VA = "0x417DCD0")]
	public static GotoExpression Goto(LabelTarget target, Expression value)
	{
		return null;
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x417DA70", Offset = "0x417DA70", VA = "0x417DA70")]
	public static GotoExpression MakeGoto(GotoExpressionKind kind, LabelTarget target, Expression value, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x417DD60", Offset = "0x417DD60", VA = "0x417DD60")]
	private static void ValidateGoto(LabelTarget target, ref Expression value, string targetParameter, string valueParameter, Type type)
	{
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x417DEE0", Offset = "0x417DEE0", VA = "0x417DEE0")]
	private static void ValidateGotoType(Type expectedType, ref Expression value, string paramName)
	{
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x41702A0", Offset = "0x41702A0", VA = "0x41702A0")]
	public static IndexExpression MakeIndex(Expression instance, PropertyInfo indexer, IEnumerable<Expression> arguments)
	{
		return null;
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x417E5F0", Offset = "0x417E5F0", VA = "0x417E5F0")]
	public static IndexExpression ArrayAccess(Expression array, params Expression[] indexes)
	{
		return null;
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x417E0C0", Offset = "0x417E0C0", VA = "0x417E0C0")]
	public static IndexExpression ArrayAccess(Expression array, IEnumerable<Expression> indexes)
	{
		return null;
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x417E030", Offset = "0x417E030", VA = "0x417E030")]
	public static IndexExpression Property(Expression instance, PropertyInfo indexer, IEnumerable<Expression> arguments)
	{
		return null;
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x417E640", Offset = "0x417E640", VA = "0x417E640")]
	private static IndexExpression MakeIndexProperty(Expression instance, PropertyInfo indexer, string paramName, ReadOnlyCollection<Expression> argList)
	{
		return null;
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x417E6E0", Offset = "0x417E6E0", VA = "0x417E6E0")]
	private static void ValidateIndexedProperty(Expression instance, PropertyInfo indexer, string paramName, ref ReadOnlyCollection<Expression> argList)
	{
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x417EC70", Offset = "0x417EC70", VA = "0x417EC70")]
	private static void ValidateAccessor(Expression instance, MethodInfo method, ParameterInfo[] indexes, ref ReadOnlyCollection<Expression> arguments, string paramName)
	{
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x417EF10", Offset = "0x417EF10", VA = "0x417EF10")]
	private static void ValidateAccessorArgumentTypes(MethodInfo method, ParameterInfo[] indexes, ref ReadOnlyCollection<Expression> arguments, string paramName)
	{
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x417F400", Offset = "0x417F400", VA = "0x417F400")]
	internal static InvocationExpression Invoke(Expression expression)
	{
		return null;
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x416FBB0", Offset = "0x416FBB0", VA = "0x416FBB0")]
	internal static InvocationExpression Invoke(Expression expression, Expression arg0)
	{
		return null;
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x417F720", Offset = "0x417F720", VA = "0x417F720")]
	internal static InvocationExpression Invoke(Expression expression, Expression arg0, Expression arg1)
	{
		return null;
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x417F8C0", Offset = "0x417F8C0", VA = "0x417F8C0")]
	internal static InvocationExpression Invoke(Expression expression, Expression arg0, Expression arg1, Expression arg2)
	{
		return null;
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x417FAB0", Offset = "0x417FAB0", VA = "0x417FAB0")]
	internal static InvocationExpression Invoke(Expression expression, Expression arg0, Expression arg1, Expression arg2, Expression arg3)
	{
		return null;
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x417FCF0", Offset = "0x417FCF0", VA = "0x417FCF0")]
	internal static InvocationExpression Invoke(Expression expression, Expression arg0, Expression arg1, Expression arg2, Expression arg3, Expression arg4)
	{
		return null;
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x417FFA0", Offset = "0x417FFA0", VA = "0x417FFA0")]
	public static InvocationExpression Invoke(Expression expression, IEnumerable<Expression> arguments)
	{
		return null;
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x417F4F0", Offset = "0x417F4F0", VA = "0x417F4F0")]
	internal static MethodInfo GetInvokeMethod(Expression expression)
	{
		return null;
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x4180930", Offset = "0x4180930", VA = "0x4180930")]
	public static LabelExpression Label(LabelTarget target)
	{
		return null;
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x4180990", Offset = "0x4180990", VA = "0x4180990")]
	public static LabelExpression Label(LabelTarget target, Expression defaultValue)
	{
		return null;
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x4180A60", Offset = "0x4180A60", VA = "0x4180A60")]
	public static LabelTarget Label()
	{
		return null;
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x4180B90", Offset = "0x4180B90", VA = "0x4180B90")]
	public static LabelTarget Label(string name)
	{
		return null;
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x4180C10", Offset = "0x4180C10", VA = "0x4180C10")]
	public static LabelTarget Label(Type type)
	{
		return null;
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x4180AE0", Offset = "0x4180AE0", VA = "0x4180AE0")]
	public static LabelTarget Label(Type type, string name)
	{
		return null;
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x4180C80", Offset = "0x4180C80", VA = "0x4180C80")]
	internal static LambdaExpression CreateLambda(Type delegateType, Expression body, string name, bool tailCall, ReadOnlyCollection<ParameterExpression> parameters)
	{
		return null;
	}

	[Token(Token = "0x600025F")]
	public static Expression<TDelegate> Lambda<TDelegate>(Expression body, params ParameterExpression[] parameters)
	{
		return null;
	}

	[Token(Token = "0x6000260")]
	public static Expression<TDelegate> Lambda<TDelegate>(Expression body, IEnumerable<ParameterExpression> parameters)
	{
		return null;
	}

	[Token(Token = "0x6000261")]
	public static Expression<TDelegate> Lambda<TDelegate>(Expression body, bool tailCall, IEnumerable<ParameterExpression> parameters)
	{
		return null;
	}

	[Token(Token = "0x6000262")]
	public static Expression<TDelegate> Lambda<TDelegate>(Expression body, string name, bool tailCall, IEnumerable<ParameterExpression> parameters)
	{
		return null;
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x4181170", Offset = "0x4181170", VA = "0x4181170")]
	public static LambdaExpression Lambda(Type delegateType, Expression body, params ParameterExpression[] parameters)
	{
		return null;
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x41811D0", Offset = "0x41811D0", VA = "0x41811D0")]
	public static LambdaExpression Lambda(Type delegateType, Expression body, string name, bool tailCall, IEnumerable<ParameterExpression> parameters)
	{
		return null;
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x4181290", Offset = "0x4181290", VA = "0x4181290")]
	private static void ValidateLambdaArgs(Type delegateType, ref Expression body, ReadOnlyCollection<ParameterExpression> parameters, string paramName)
	{
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x4181A20", Offset = "0x4181A20", VA = "0x4181A20")]
	public static LoopExpression Loop(Expression body, LabelTarget @break, LabelTarget @continue)
	{
		return null;
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x4181B20", Offset = "0x4181B20", VA = "0x4181B20")]
	public static MemberExpression Field(Expression expression, FieldInfo field)
	{
		return null;
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x4181CD0", Offset = "0x4181CD0", VA = "0x4181CD0")]
	public static MemberExpression Field(Expression expression, string fieldName)
	{
		return null;
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x4170FB0", Offset = "0x4170FB0", VA = "0x4170FB0")]
	public static MemberExpression Property(Expression expression, string propertyName)
	{
		return null;
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x4181E40", Offset = "0x4181E40", VA = "0x4181E40")]
	public static MemberExpression Property(Expression expression, PropertyInfo property)
	{
		return null;
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x416FFB0", Offset = "0x416FFB0", VA = "0x416FFB0")]
	public static MemberExpression MakeMemberAccess(Expression expression, MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x4182140", Offset = "0x4182140", VA = "0x4182140")]
	internal static MethodCallExpression Call(MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x41712E0", Offset = "0x41712E0", VA = "0x41712E0")]
	public static MethodCallExpression Call(MethodInfo method, Expression arg0)
	{
		return null;
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x4171410", Offset = "0x4171410", VA = "0x4171410")]
	public static MethodCallExpression Call(MethodInfo method, Expression arg0, Expression arg1)
	{
		return null;
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x41822F0", Offset = "0x41822F0", VA = "0x41822F0")]
	public static MethodCallExpression Call(MethodInfo method, Expression arg0, Expression arg1, Expression arg2)
	{
		return null;
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x41824E0", Offset = "0x41824E0", VA = "0x41824E0")]
	public static MethodCallExpression Call(MethodInfo method, Expression arg0, Expression arg1, Expression arg2, Expression arg3)
	{
		return null;
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x4182740", Offset = "0x4182740", VA = "0x4182740")]
	public static MethodCallExpression Call(MethodInfo method, Expression arg0, Expression arg1, Expression arg2, Expression arg3, Expression arg4)
	{
		return null;
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x4182A10", Offset = "0x4182A10", VA = "0x4182A10")]
	public static MethodCallExpression Call(MethodInfo method, params Expression[] arguments)
	{
		return null;
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x4182B20", Offset = "0x4182B20", VA = "0x4182B20")]
	public static MethodCallExpression Call(MethodInfo method, IEnumerable<Expression> arguments)
	{
		return null;
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x41835A0", Offset = "0x41835A0", VA = "0x41835A0")]
	public static MethodCallExpression Call(Expression instance, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x4182AC0", Offset = "0x4182AC0", VA = "0x4182AC0")]
	public static MethodCallExpression Call(Expression instance, MethodInfo method, params Expression[] arguments)
	{
		return null;
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x4183690", Offset = "0x4183690", VA = "0x4183690")]
	internal static MethodCallExpression Call(Expression instance, MethodInfo method, Expression arg0)
	{
		return null;
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x4183800", Offset = "0x4183800", VA = "0x4183800")]
	public static MethodCallExpression Call(Expression instance, MethodInfo method, Expression arg0, Expression arg1)
	{
		return null;
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x41839E0", Offset = "0x41839E0", VA = "0x41839E0")]
	public static MethodCallExpression Call(Expression instance, MethodInfo method, Expression arg0, Expression arg1, Expression arg2)
	{
		return null;
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x4171110", Offset = "0x4171110", VA = "0x4171110")]
	public static MethodCallExpression Call(Expression instance, string methodName, Type[] typeArguments, params Expression[] arguments)
	{
		return null;
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x4182B70", Offset = "0x4182B70", VA = "0x4182B70")]
	public static MethodCallExpression Call(Expression instance, MethodInfo method, IEnumerable<Expression> arguments)
	{
		return null;
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x41821F0", Offset = "0x41821F0", VA = "0x41821F0")]
	private static ParameterInfo[] ValidateMethodAndGetParameters(Expression instance, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x4183ED0", Offset = "0x4183ED0", VA = "0x4183ED0")]
	private static void ValidateStaticOrInstanceMethod(Expression instance, MethodInfo method)
	{
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x417EE70", Offset = "0x417EE70", VA = "0x417EE70")]
	private static void ValidateCallInstanceType(Type instanceType, MethodInfo method)
	{
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x4180920", Offset = "0x4180920", VA = "0x4180920")]
	private static void ValidateArgumentTypes(MethodBase method, ExpressionType nodeKind, ref ReadOnlyCollection<Expression> arguments, string methodParamName)
	{
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x417F6F0", Offset = "0x417F6F0", VA = "0x417F6F0")]
	private static ParameterInfo[] GetParametersForValidation(MethodBase method, ExpressionType nodeKind)
	{
		return null;
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x417F700", Offset = "0x417F700", VA = "0x417F700")]
	private static void ValidateArgumentCount(MethodBase method, ExpressionType nodeKind, int count, ParameterInfo[] pis)
	{
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x417F710", Offset = "0x417F710", VA = "0x417F710")]
	private static Expression ValidateOneArgument(MethodBase method, ExpressionType nodeKind, Expression arg, ParameterInfo pi, string methodParamName, string argumentParamName)
	{
		return null;
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x417E020", Offset = "0x417E020", VA = "0x417E020")]
	private static bool TryQuote(Type parameterType, ref Expression argument)
	{
		return default(bool);
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x4183C30", Offset = "0x4183C30", VA = "0x4183C30")]
	private static MethodInfo FindMethod(Type type, string methodName, Type[] typeArgs, Expression[] args, BindingFlags flags)
	{
		return null;
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x4184060", Offset = "0x4184060", VA = "0x4184060")]
	private static bool IsCompatible(MethodBase m, Expression[] arguments)
	{
		return default(bool);
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x4183FB0", Offset = "0x4183FB0", VA = "0x4183FB0")]
	private static MethodInfo ApplyTypeArgs(MethodInfo m, Type[] typeArgs)
	{
		return null;
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x41842A0", Offset = "0x41842A0", VA = "0x41842A0")]
	public static NewArrayExpression NewArrayInit(Type type, params Expression[] initializers)
	{
		return null;
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x41842F0", Offset = "0x41842F0", VA = "0x41842F0")]
	public static NewArrayExpression NewArrayInit(Type type, IEnumerable<Expression> initializers)
	{
		return null;
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x4184760", Offset = "0x4184760", VA = "0x4184760")]
	public static NewArrayExpression NewArrayBounds(Type type, IEnumerable<Expression> bounds)
	{
		return null;
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x41849E0", Offset = "0x41849E0", VA = "0x41849E0")]
	public static ParameterExpression Parameter(Type type)
	{
		return null;
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x4170F20", Offset = "0x4170F20", VA = "0x4170F20")]
	public static ParameterExpression Parameter(Type type, string name)
	{
		return null;
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x416FF50", Offset = "0x416FF50", VA = "0x416FF50")]
	public static ParameterExpression Variable(Type type, string name)
	{
		return null;
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x4184A50", Offset = "0x4184A50", VA = "0x4184A50")]
	private static void Validate(Type type, bool allowByRef)
	{
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x4184B40", Offset = "0x4184B40", VA = "0x4184B40")]
	public static TryExpression TryFinally(Expression body, Expression @finally)
	{
		return null;
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x4184BA0", Offset = "0x4184BA0", VA = "0x4184BA0")]
	public static TryExpression MakeTry(Type type, Expression body, Expression @finally, Expression fault, IEnumerable<CatchBlock> handlers)
	{
		return null;
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x4184DC0", Offset = "0x4184DC0", VA = "0x4184DC0")]
	private static void ValidateTryAndCatchHaveSameType(Type type, Expression tryBody, ReadOnlyCollection<CatchBlock> handlers)
	{
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x41859D0", Offset = "0x41859D0", VA = "0x41859D0")]
	public static TypeBinaryExpression TypeIs(Expression expression, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x4185AB0", Offset = "0x4185AB0", VA = "0x4185AB0")]
	public static TypeBinaryExpression TypeEqual(Expression expression, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x4185B90", Offset = "0x4185B90", VA = "0x4185B90")]
	public static UnaryExpression MakeUnary(ExpressionType unaryType, Expression operand, Type type, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x4187BF0", Offset = "0x4187BF0", VA = "0x4187BF0")]
	private static UnaryExpression GetUserDefinedUnaryOperatorOrThrow(ExpressionType unaryType, string name, Expression operand)
	{
		return null;
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x4187D80", Offset = "0x4187D80", VA = "0x4187D80")]
	private static UnaryExpression GetUserDefinedUnaryOperator(ExpressionType unaryType, string name, Expression operand)
	{
		return null;
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x41880B0", Offset = "0x41880B0", VA = "0x41880B0")]
	private static UnaryExpression GetMethodBasedUnaryOperator(ExpressionType unaryType, Expression operand, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x4188480", Offset = "0x4188480", VA = "0x4188480")]
	private static UnaryExpression GetUserDefinedCoercionOrThrow(ExpressionType coercionType, Expression expression, Type convertToType)
	{
		return null;
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x4188520", Offset = "0x4188520", VA = "0x4188520")]
	private static UnaryExpression GetUserDefinedCoercion(ExpressionType coercionType, Expression expression, Type convertToType)
	{
		return null;
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x41885F0", Offset = "0x41885F0", VA = "0x41885F0")]
	private static UnaryExpression GetMethodBasedCoercionOperator(ExpressionType unaryType, Expression operand, Type convertToType, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x4186170", Offset = "0x4186170", VA = "0x4186170")]
	public static UnaryExpression Negate(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x4187430", Offset = "0x4187430", VA = "0x4187430")]
	public static UnaryExpression UnaryPlus(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x4186320", Offset = "0x4186320", VA = "0x4186320")]
	public static UnaryExpression NegateChecked(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x41889A0", Offset = "0x41889A0", VA = "0x41889A0")]
	public static UnaryExpression Not(Expression expression)
	{
		return null;
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x41864D0", Offset = "0x41864D0", VA = "0x41864D0")]
	public static UnaryExpression Not(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x4186690", Offset = "0x4186690", VA = "0x4186690")]
	public static UnaryExpression IsFalse(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600029F")]
	[Address(RVA = "0x4186810", Offset = "0x4186810", VA = "0x4186810")]
	public static UnaryExpression IsTrue(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x4186990", Offset = "0x4186990", VA = "0x4186990")]
	public static UnaryExpression OnesComplement(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x41871E0", Offset = "0x41871E0", VA = "0x41871E0")]
	public static UnaryExpression TypeAs(Expression expression, Type type)
	{
		return null;
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x41875B0", Offset = "0x41875B0", VA = "0x41875B0")]
	public static UnaryExpression Unbox(Expression expression, Type type)
	{
		return null;
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x41715A0", Offset = "0x41715A0", VA = "0x41715A0")]
	public static UnaryExpression Convert(Expression expression, Type type)
	{
		return null;
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x4186CD0", Offset = "0x4186CD0", VA = "0x4186CD0")]
	public static UnaryExpression Convert(Expression expression, Type type, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x4186EB0", Offset = "0x4186EB0", VA = "0x4186EB0")]
	public static UnaryExpression ConvertChecked(Expression expression, Type type, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x4186B10", Offset = "0x4186B10", VA = "0x4186B10")]
	public static UnaryExpression ArrayLength(Expression array)
	{
		return null;
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x4187330", Offset = "0x4187330", VA = "0x4187330")]
	public static UnaryExpression Quote(Expression expression)
	{
		return null;
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x41870B0", Offset = "0x41870B0", VA = "0x41870B0")]
	public static UnaryExpression Throw(Expression value, Type type)
	{
		return null;
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x4187770", Offset = "0x4187770", VA = "0x4187770")]
	public static UnaryExpression Increment(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x41878F0", Offset = "0x41878F0", VA = "0x41878F0")]
	public static UnaryExpression Decrement(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x4188A10", Offset = "0x4188A10", VA = "0x4188A10")]
	public static UnaryExpression PreIncrementAssign(Expression expression)
	{
		return null;
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x4187A70", Offset = "0x4187A70", VA = "0x4187A70")]
	public static UnaryExpression PreIncrementAssign(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x4187B30", Offset = "0x4187B30", VA = "0x4187B30")]
	public static UnaryExpression PreDecrementAssign(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x4187AD0", Offset = "0x4187AD0", VA = "0x4187AD0")]
	public static UnaryExpression PostIncrementAssign(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x4187B90", Offset = "0x4187B90", VA = "0x4187B90")]
	public static UnaryExpression PostDecrementAssign(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x4188A60", Offset = "0x4188A60", VA = "0x4188A60")]
	private static UnaryExpression MakeOpAssignUnary(ExpressionType kind, Expression expression, MethodInfo method)
	{
		return null;
	}
}
[Token(Token = "0x2000093")]
public class Expression<TDelegate> : LambdaExpression
{
	[Token(Token = "0x170000AE")]
	internal sealed override Type TypeCore
	{
		[Token(Token = "0x6000446")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AF")]
	internal override Type PublicType
	{
		[Token(Token = "0x6000447")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000445")]
	internal Expression(Expression body)
	{
	}

	[Token(Token = "0x6000448")]
	public TDelegate Compile()
	{
		return (TDelegate)null;
	}

	[Token(Token = "0x6000449")]
	public TDelegate Compile(bool preferInterpretation)
	{
		return (TDelegate)null;
	}

	[Token(Token = "0x600044A")]
	[ExcludeFromCodeCoverage]
	internal virtual Expression<TDelegate> Rewrite(Expression body, ParameterExpression[] parameters)
	{
		return null;
	}

	[Token(Token = "0x600044B")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}
}
