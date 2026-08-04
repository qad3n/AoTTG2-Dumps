// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Expression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x44A2700", Offset = "0x44A2700", VA = "0x44A2700", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x17000058")]
	public virtual Type Type
	{
		[Token(Token = "0x6000237")]
		[Address(RVA = "0x44A27F0", Offset = "0x44A27F0", VA = "0x44A27F0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000059")]
	public virtual bool CanReduce
	{
		[Token(Token = "0x6000238")]
		[Address(RVA = "0x44A28E0", Offset = "0x44A28E0", VA = "0x44A28E0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x4494E00", Offset = "0x4494E00", VA = "0x4494E00")]
	public static BinaryExpression Assign(Expression left, Expression right)
	{
		return null;
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x4497140", Offset = "0x4497140", VA = "0x4497140")]
	private static BinaryExpression GetUserDefinedBinaryOperator(ExpressionType binaryType, string name, Expression left, Expression right, bool liftToNull)
	{
		return null;
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x4497750", Offset = "0x4497750", VA = "0x4497750")]
	private static BinaryExpression GetMethodBasedBinaryOperator(ExpressionType binaryType, Expression left, Expression right, MethodInfo method, bool liftToNull)
	{
		return null;
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x4498070", Offset = "0x4498070", VA = "0x4498070")]
	private static BinaryExpression GetMethodBasedAssignOperator(ExpressionType binaryType, Expression left, Expression right, MethodInfo method, LambdaExpression conversion, bool liftToNull)
	{
		return null;
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x4498580", Offset = "0x4498580", VA = "0x4498580")]
	private static BinaryExpression GetUserDefinedBinaryOperatorOrThrow(ExpressionType binaryType, string name, Expression left, Expression right, bool liftToNull)
	{
		return null;
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x44987C0", Offset = "0x44987C0", VA = "0x44987C0")]
	private static BinaryExpression GetUserDefinedAssignOperatorOrThrow(ExpressionType binaryType, string name, Expression left, Expression right, LambdaExpression conversion, bool liftToNull)
	{
		return null;
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x44974F0", Offset = "0x44974F0", VA = "0x44974F0")]
	private static MethodInfo GetUserDefinedBinaryOperator(ExpressionType binaryType, Type leftType, Type rightType, string name)
	{
		return null;
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x4498A40", Offset = "0x4498A40", VA = "0x4498A40")]
	private static bool IsLiftingConditionalLogicalOperator(Type left, Type right, MethodInfo method, ExpressionType binaryType)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x4497F00", Offset = "0x4497F00", VA = "0x4497F00")]
	internal static bool ParameterIsAssignable(ParameterInfo pi, Type argType)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x4497FA0", Offset = "0x4497FA0", VA = "0x4497FA0")]
	private static void ValidateParamswithOperandsOrThrow(Type paramType, Type operandType, ExpressionType exprType, string name)
	{
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x4497D50", Offset = "0x4497D50", VA = "0x4497D50")]
	private static void ValidateOperator(MethodInfo method)
	{
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x4498AF0", Offset = "0x4498AF0", VA = "0x4498AF0")]
	private static void ValidateMethodInfo(MethodInfo method, string paramName)
	{
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x4498B70", Offset = "0x4498B70", VA = "0x4498B70")]
	private static bool IsNullComparison(Expression left, Expression right)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x4498D70", Offset = "0x4498D70", VA = "0x4498D70")]
	private static bool IsNullConstant(Expression e)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x4498DE0", Offset = "0x4498DE0", VA = "0x4498DE0")]
	private static void ValidateUserDefinedConditionalLogicOperator(ExpressionType nodeType, Type left, Type right, MethodInfo method)
	{
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x4499560", Offset = "0x4499560", VA = "0x4499560")]
	private static void VerifyOpTrueFalse(ExpressionType nodeType, Type left, MethodInfo opTrue, string paramName)
	{
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x4499470", Offset = "0x4499470", VA = "0x4499470")]
	private static bool IsValidLiftedConditionalLogicalOperator(Type left, Type right, ParameterInfo[] pms)
	{
		return default(bool);
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x4494C40", Offset = "0x4494C40", VA = "0x4494C40")]
	public static BinaryExpression MakeBinary(ExpressionType binaryType, Expression left, Expression right, bool liftToNull, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x4493490", Offset = "0x4493490", VA = "0x4493490")]
	public static BinaryExpression MakeBinary(ExpressionType binaryType, Expression left, Expression right, bool liftToNull, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x449FA40", Offset = "0x449FA40", VA = "0x449FA40")]
	public static BinaryExpression Equal(Expression left, Expression right)
	{
		return null;
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x449C3A0", Offset = "0x449C3A0", VA = "0x449C3A0")]
	public static BinaryExpression Equal(Expression left, Expression right, bool liftToNull, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x4493050", Offset = "0x4493050", VA = "0x4493050")]
	public static BinaryExpression ReferenceEqual(Expression left, Expression right)
	{
		return null;
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x44A00A0", Offset = "0x44A00A0", VA = "0x44A00A0")]
	public static BinaryExpression NotEqual(Expression left, Expression right)
	{
		return null;
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x449C490", Offset = "0x449C490", VA = "0x449C490")]
	public static BinaryExpression NotEqual(Expression left, Expression right, bool liftToNull, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x4493230", Offset = "0x4493230", VA = "0x4493230")]
	public static BinaryExpression ReferenceNotEqual(Expression left, Expression right)
	{
		return null;
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x449FAA0", Offset = "0x449FAA0", VA = "0x449FAA0")]
	private static BinaryExpression GetEqualityComparisonOperator(ExpressionType binaryType, string opName, Expression left, Expression right, bool liftToNull)
	{
		return null;
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x449C1C0", Offset = "0x449C1C0", VA = "0x449C1C0")]
	public static BinaryExpression GreaterThan(Expression left, Expression right, bool liftToNull, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x449BFE0", Offset = "0x449BFE0", VA = "0x449BFE0")]
	public static BinaryExpression LessThan(Expression left, Expression right, bool liftToNull, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x449C2B0", Offset = "0x449C2B0", VA = "0x449C2B0")]
	public static BinaryExpression GreaterThanOrEqual(Expression left, Expression right, bool liftToNull, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x449C0D0", Offset = "0x449C0D0", VA = "0x449C0D0")]
	public static BinaryExpression LessThanOrEqual(Expression left, Expression right, bool liftToNull, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x44A0100", Offset = "0x44A0100", VA = "0x44A0100")]
	private static BinaryExpression GetComparisonOperator(ExpressionType binaryType, string opName, Expression left, Expression right, bool liftToNull)
	{
		return null;
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x44A0400", Offset = "0x44A0400", VA = "0x44A0400")]
	public static BinaryExpression AndAlso(Expression left, Expression right)
	{
		return null;
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x449B1F0", Offset = "0x449B1F0", VA = "0x449B1F0")]
	public static BinaryExpression AndAlso(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x449BA20", Offset = "0x449BA20", VA = "0x449BA20")]
	public static BinaryExpression OrElse(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x449C810", Offset = "0x449C810", VA = "0x449C810")]
	public static BinaryExpression Coalesce(Expression left, Expression right, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x44A0460", Offset = "0x44A0460", VA = "0x44A0460")]
	private static Type ValidateCoalesceArgTypes(Type left, Type right)
	{
		return null;
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x4499710", Offset = "0x4499710", VA = "0x4499710")]
	public static BinaryExpression Add(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x449D460", Offset = "0x449D460", VA = "0x449D460")]
	public static BinaryExpression AddAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x44982F0", Offset = "0x44982F0", VA = "0x44982F0")]
	private static void ValidateOpAssignConversionLambda(LambdaExpression conversion, Expression left, MethodInfo method, ExpressionType nodeType)
	{
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x449F1D0", Offset = "0x449F1D0", VA = "0x449F1D0")]
	public static BinaryExpression AddAssignChecked(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x4499990", Offset = "0x4499990", VA = "0x4499990")]
	public static BinaryExpression AddChecked(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x4499C20", Offset = "0x4499C20", VA = "0x4499C20")]
	public static BinaryExpression Subtract(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x449EF00", Offset = "0x449EF00", VA = "0x449EF00")]
	public static BinaryExpression SubtractAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x449F4A0", Offset = "0x449F4A0", VA = "0x449F4A0")]
	public static BinaryExpression SubtractAssignChecked(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x4499EB0", Offset = "0x4499EB0", VA = "0x4499EB0")]
	public static BinaryExpression SubtractChecked(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x449A660", Offset = "0x449A660", VA = "0x449A660")]
	public static BinaryExpression Divide(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x449DA00", Offset = "0x449DA00", VA = "0x449DA00")]
	public static BinaryExpression DivideAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x449A8F0", Offset = "0x449A8F0", VA = "0x449A8F0")]
	public static BinaryExpression Modulo(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x449E250", Offset = "0x449E250", VA = "0x449E250")]
	public static BinaryExpression ModuloAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x449A140", Offset = "0x449A140", VA = "0x449A140")]
	public static BinaryExpression Multiply(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x449E520", Offset = "0x449E520", VA = "0x449E520")]
	public static BinaryExpression MultiplyAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x449F770", Offset = "0x449F770", VA = "0x449F770")]
	public static BinaryExpression MultiplyAssignChecked(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x449A3D0", Offset = "0x449A3D0", VA = "0x449A3D0")]
	public static BinaryExpression MultiplyChecked(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x44A05C0", Offset = "0x44A05C0", VA = "0x44A05C0")]
	private static bool IsSimpleShift(Type left, Type right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x44A0680", Offset = "0x44A0680", VA = "0x44A0680")]
	private static Type GetResultTypeOfShift(Type left, Type right)
	{
		return null;
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x449D200", Offset = "0x449D200", VA = "0x449D200")]
	public static BinaryExpression LeftShift(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x449DFA0", Offset = "0x449DFA0", VA = "0x449DFA0")]
	public static BinaryExpression LeftShiftAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x449CFA0", Offset = "0x449CFA0", VA = "0x449CFA0")]
	public static BinaryExpression RightShift(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x449EC50", Offset = "0x449EC50", VA = "0x449EC50")]
	public static BinaryExpression RightShiftAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x449AF60", Offset = "0x449AF60", VA = "0x449AF60")]
	public static BinaryExpression And(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x449D730", Offset = "0x449D730", VA = "0x449D730")]
	public static BinaryExpression AndAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x449B790", Offset = "0x449B790", VA = "0x449B790")]
	public static BinaryExpression Or(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x449E7F0", Offset = "0x449E7F0", VA = "0x449E7F0")]
	public static BinaryExpression OrAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x449C580", Offset = "0x449C580", VA = "0x449C580")]
	public static BinaryExpression ExclusiveOr(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x449DCD0", Offset = "0x449DCD0", VA = "0x449DCD0")]
	public static BinaryExpression ExclusiveOrAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x449AB80", Offset = "0x449AB80", VA = "0x449AB80")]
	public static BinaryExpression Power(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x449EAC0", Offset = "0x449EAC0", VA = "0x449EAC0")]
	public static BinaryExpression PowerAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x449CD70", Offset = "0x449CD70", VA = "0x449CD70")]
	public static BinaryExpression ArrayIndex(Expression array, Expression index)
	{
		return null;
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x44A07E0", Offset = "0x44A07E0", VA = "0x44A07E0")]
	public static BlockExpression Block(Expression arg0, Expression arg1)
	{
		return null;
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x44A0880", Offset = "0x44A0880", VA = "0x44A0880")]
	public static BlockExpression Block(Expression arg0, Expression arg1, Expression arg2)
	{
		return null;
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x44A0950", Offset = "0x44A0950", VA = "0x44A0950")]
	public static BlockExpression Block(Expression arg0, Expression arg1, Expression arg2, Expression arg3)
	{
		return null;
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x44A0A40", Offset = "0x44A0A40", VA = "0x44A0A40")]
	public static BlockExpression Block(Expression arg0, Expression arg1, Expression arg2, Expression arg3, Expression arg4)
	{
		return null;
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x44A0B60", Offset = "0x44A0B60", VA = "0x44A0B60")]
	public static BlockExpression Block(IEnumerable<Expression> expressions)
	{
		return null;
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x44A0BE0", Offset = "0x44A0BE0", VA = "0x44A0BE0")]
	public static BlockExpression Block(Type type, params Expression[] expressions)
	{
		return null;
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x44A0CE0", Offset = "0x44A0CE0", VA = "0x44A0CE0")]
	public static BlockExpression Block(Type type, IEnumerable<Expression> expressions)
	{
		return null;
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x44A0F70", Offset = "0x44A0F70", VA = "0x44A0F70")]
	public static BlockExpression Block(IEnumerable<ParameterExpression> variables, params Expression[] expressions)
	{
		return null;
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x44A0FC0", Offset = "0x44A0FC0", VA = "0x44A0FC0")]
	public static BlockExpression Block(Type type, IEnumerable<ParameterExpression> variables, params Expression[] expressions)
	{
		return null;
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x4495230", Offset = "0x4495230", VA = "0x4495230")]
	public static BlockExpression Block(IEnumerable<ParameterExpression> variables, IEnumerable<Expression> expressions)
	{
		return null;
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x44A0D60", Offset = "0x44A0D60", VA = "0x44A0D60")]
	public static BlockExpression Block(Type type, IEnumerable<ParameterExpression> variables, IEnumerable<Expression> expressions)
	{
		return null;
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x44A1AA0", Offset = "0x44A1AA0", VA = "0x44A1AA0")]
	private static BlockExpression BlockCore(Type type, ReadOnlyCollection<ParameterExpression> variables, ReadOnlyCollection<Expression> expressions)
	{
		return null;
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x44A1DF0", Offset = "0x44A1DF0", VA = "0x44A1DF0")]
	internal static void ValidateVariables(ReadOnlyCollection<ParameterExpression> varList, string collectionName)
	{
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x44A1180", Offset = "0x44A1180", VA = "0x44A1180")]
	private static BlockExpression GetOptimizedBlockExpression(IReadOnlyList<Expression> expressions)
	{
		return null;
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x44A1FC0", Offset = "0x44A1FC0", VA = "0x44A1FC0")]
	public static CatchBlock MakeCatchBlock(Type type, ParameterExpression variable, Expression body, Expression filter)
	{
		return null;
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x4496910", Offset = "0x4496910", VA = "0x4496910")]
	public static ConditionalExpression Condition(Expression test, Expression ifTrue, Expression ifFalse)
	{
		return null;
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x44A2220", Offset = "0x44A2220", VA = "0x44A2220")]
	public static ConditionalExpression Condition(Expression test, Expression ifTrue, Expression ifFalse, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x44A2460", Offset = "0x44A2460", VA = "0x44A2460")]
	public static ConditionalExpression IfThen(Expression test, Expression ifTrue)
	{
		return null;
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x44A2610", Offset = "0x44A2610", VA = "0x44A2610")]
	public static ConstantExpression Constant(object value)
	{
		return null;
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x4496700", Offset = "0x4496700", VA = "0x4496700")]
	public static ConstantExpression Constant(object value, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x44A2590", Offset = "0x44A2590", VA = "0x44A2590")]
	public static DefaultExpression Empty()
	{
		return null;
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x44A2660", Offset = "0x44A2660", VA = "0x44A2660")]
	public static DefaultExpression Default(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x4492D40", Offset = "0x4492D40", VA = "0x4492D40")]
	protected Expression()
	{
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x44A28F0", Offset = "0x44A28F0", VA = "0x44A28F0", Slot = "7")]
	public virtual Expression Reduce()
	{
		return null;
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x44A2930", Offset = "0x44A2930", VA = "0x44A2930", Slot = "8")]
	protected internal virtual Expression VisitChildren(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x44A2AA0", Offset = "0x44A2AA0", VA = "0x44A2AA0", Slot = "9")]
	protected internal virtual Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x44A29B0", Offset = "0x44A29B0", VA = "0x44A29B0")]
	public Expression ReduceAndCheck()
	{
		return null;
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x44A2AD0", Offset = "0x44A2AD0", VA = "0x44A2AD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x44A1020", Offset = "0x44A1020", VA = "0x44A1020")]
	private static void RequiresCanRead(IReadOnlyList<Expression> items, string paramName)
	{
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x4496F10", Offset = "0x4496F10", VA = "0x4496F10")]
	private static void RequiresCanWrite(Expression expression, string paramName)
	{
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x44A2AE0", Offset = "0x44A2AE0", VA = "0x44A2AE0")]
	public static GotoExpression Break(LabelTarget target)
	{
		return null;
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x44A2C50", Offset = "0x44A2C50", VA = "0x44A2C50")]
	public static GotoExpression Return(LabelTarget target)
	{
		return null;
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x44A2CE0", Offset = "0x44A2CE0", VA = "0x44A2CE0")]
	public static GotoExpression Return(LabelTarget target, Expression value)
	{
		return null;
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x44A2D70", Offset = "0x44A2D70", VA = "0x44A2D70")]
	public static GotoExpression Goto(LabelTarget target, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x44A2DD0", Offset = "0x44A2DD0", VA = "0x44A2DD0")]
	public static GotoExpression Goto(LabelTarget target, Expression value)
	{
		return null;
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x44A2B70", Offset = "0x44A2B70", VA = "0x44A2B70")]
	public static GotoExpression MakeGoto(GotoExpressionKind kind, LabelTarget target, Expression value, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x44A2E60", Offset = "0x44A2E60", VA = "0x44A2E60")]
	private static void ValidateGoto(LabelTarget target, ref Expression value, string targetParameter, string valueParameter, Type type)
	{
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x44A2FE0", Offset = "0x44A2FE0", VA = "0x44A2FE0")]
	private static void ValidateGotoType(Type expectedType, ref Expression value, string paramName)
	{
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x44953A0", Offset = "0x44953A0", VA = "0x44953A0")]
	public static IndexExpression MakeIndex(Expression instance, PropertyInfo indexer, IEnumerable<Expression> arguments)
	{
		return null;
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x44A36F0", Offset = "0x44A36F0", VA = "0x44A36F0")]
	public static IndexExpression ArrayAccess(Expression array, params Expression[] indexes)
	{
		return null;
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x44A31C0", Offset = "0x44A31C0", VA = "0x44A31C0")]
	public static IndexExpression ArrayAccess(Expression array, IEnumerable<Expression> indexes)
	{
		return null;
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x44A3130", Offset = "0x44A3130", VA = "0x44A3130")]
	public static IndexExpression Property(Expression instance, PropertyInfo indexer, IEnumerable<Expression> arguments)
	{
		return null;
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x44A3740", Offset = "0x44A3740", VA = "0x44A3740")]
	private static IndexExpression MakeIndexProperty(Expression instance, PropertyInfo indexer, string paramName, ReadOnlyCollection<Expression> argList)
	{
		return null;
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x44A37E0", Offset = "0x44A37E0", VA = "0x44A37E0")]
	private static void ValidateIndexedProperty(Expression instance, PropertyInfo indexer, string paramName, ref ReadOnlyCollection<Expression> argList)
	{
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x44A3D70", Offset = "0x44A3D70", VA = "0x44A3D70")]
	private static void ValidateAccessor(Expression instance, MethodInfo method, ParameterInfo[] indexes, ref ReadOnlyCollection<Expression> arguments, string paramName)
	{
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x44A4010", Offset = "0x44A4010", VA = "0x44A4010")]
	private static void ValidateAccessorArgumentTypes(MethodInfo method, ParameterInfo[] indexes, ref ReadOnlyCollection<Expression> arguments, string paramName)
	{
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x44A4500", Offset = "0x44A4500", VA = "0x44A4500")]
	internal static InvocationExpression Invoke(Expression expression)
	{
		return null;
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x4494CB0", Offset = "0x4494CB0", VA = "0x4494CB0")]
	internal static InvocationExpression Invoke(Expression expression, Expression arg0)
	{
		return null;
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x44A4820", Offset = "0x44A4820", VA = "0x44A4820")]
	internal static InvocationExpression Invoke(Expression expression, Expression arg0, Expression arg1)
	{
		return null;
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x44A49C0", Offset = "0x44A49C0", VA = "0x44A49C0")]
	internal static InvocationExpression Invoke(Expression expression, Expression arg0, Expression arg1, Expression arg2)
	{
		return null;
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x44A4BB0", Offset = "0x44A4BB0", VA = "0x44A4BB0")]
	internal static InvocationExpression Invoke(Expression expression, Expression arg0, Expression arg1, Expression arg2, Expression arg3)
	{
		return null;
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x44A4DF0", Offset = "0x44A4DF0", VA = "0x44A4DF0")]
	internal static InvocationExpression Invoke(Expression expression, Expression arg0, Expression arg1, Expression arg2, Expression arg3, Expression arg4)
	{
		return null;
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x44A50A0", Offset = "0x44A50A0", VA = "0x44A50A0")]
	public static InvocationExpression Invoke(Expression expression, IEnumerable<Expression> arguments)
	{
		return null;
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x44A45F0", Offset = "0x44A45F0", VA = "0x44A45F0")]
	internal static MethodInfo GetInvokeMethod(Expression expression)
	{
		return null;
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x44A5A30", Offset = "0x44A5A30", VA = "0x44A5A30")]
	public static LabelExpression Label(LabelTarget target)
	{
		return null;
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x44A5A90", Offset = "0x44A5A90", VA = "0x44A5A90")]
	public static LabelExpression Label(LabelTarget target, Expression defaultValue)
	{
		return null;
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x44A5B60", Offset = "0x44A5B60", VA = "0x44A5B60")]
	public static LabelTarget Label()
	{
		return null;
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x44A5C90", Offset = "0x44A5C90", VA = "0x44A5C90")]
	public static LabelTarget Label(string name)
	{
		return null;
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x44A5D10", Offset = "0x44A5D10", VA = "0x44A5D10")]
	public static LabelTarget Label(Type type)
	{
		return null;
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x44A5BE0", Offset = "0x44A5BE0", VA = "0x44A5BE0")]
	public static LabelTarget Label(Type type, string name)
	{
		return null;
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x44A5D80", Offset = "0x44A5D80", VA = "0x44A5D80")]
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
	[Address(RVA = "0x44A6270", Offset = "0x44A6270", VA = "0x44A6270")]
	public static LambdaExpression Lambda(Type delegateType, Expression body, params ParameterExpression[] parameters)
	{
		return null;
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x44A62D0", Offset = "0x44A62D0", VA = "0x44A62D0")]
	public static LambdaExpression Lambda(Type delegateType, Expression body, string name, bool tailCall, IEnumerable<ParameterExpression> parameters)
	{
		return null;
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x44A6390", Offset = "0x44A6390", VA = "0x44A6390")]
	private static void ValidateLambdaArgs(Type delegateType, ref Expression body, ReadOnlyCollection<ParameterExpression> parameters, string paramName)
	{
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x44A6B20", Offset = "0x44A6B20", VA = "0x44A6B20")]
	public static LoopExpression Loop(Expression body, LabelTarget @break, LabelTarget @continue)
	{
		return null;
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x44A6C20", Offset = "0x44A6C20", VA = "0x44A6C20")]
	public static MemberExpression Field(Expression expression, FieldInfo field)
	{
		return null;
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x44A6DD0", Offset = "0x44A6DD0", VA = "0x44A6DD0")]
	public static MemberExpression Field(Expression expression, string fieldName)
	{
		return null;
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x44960B0", Offset = "0x44960B0", VA = "0x44960B0")]
	public static MemberExpression Property(Expression expression, string propertyName)
	{
		return null;
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x44A6F40", Offset = "0x44A6F40", VA = "0x44A6F40")]
	public static MemberExpression Property(Expression expression, PropertyInfo property)
	{
		return null;
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x44950B0", Offset = "0x44950B0", VA = "0x44950B0")]
	public static MemberExpression MakeMemberAccess(Expression expression, MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x44A7240", Offset = "0x44A7240", VA = "0x44A7240")]
	internal static MethodCallExpression Call(MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x44963E0", Offset = "0x44963E0", VA = "0x44963E0")]
	public static MethodCallExpression Call(MethodInfo method, Expression arg0)
	{
		return null;
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x4496510", Offset = "0x4496510", VA = "0x4496510")]
	public static MethodCallExpression Call(MethodInfo method, Expression arg0, Expression arg1)
	{
		return null;
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x44A73F0", Offset = "0x44A73F0", VA = "0x44A73F0")]
	public static MethodCallExpression Call(MethodInfo method, Expression arg0, Expression arg1, Expression arg2)
	{
		return null;
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x44A75E0", Offset = "0x44A75E0", VA = "0x44A75E0")]
	public static MethodCallExpression Call(MethodInfo method, Expression arg0, Expression arg1, Expression arg2, Expression arg3)
	{
		return null;
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x44A7840", Offset = "0x44A7840", VA = "0x44A7840")]
	public static MethodCallExpression Call(MethodInfo method, Expression arg0, Expression arg1, Expression arg2, Expression arg3, Expression arg4)
	{
		return null;
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x44A7B10", Offset = "0x44A7B10", VA = "0x44A7B10")]
	public static MethodCallExpression Call(MethodInfo method, params Expression[] arguments)
	{
		return null;
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x44A7C20", Offset = "0x44A7C20", VA = "0x44A7C20")]
	public static MethodCallExpression Call(MethodInfo method, IEnumerable<Expression> arguments)
	{
		return null;
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x44A86A0", Offset = "0x44A86A0", VA = "0x44A86A0")]
	public static MethodCallExpression Call(Expression instance, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x44A7BC0", Offset = "0x44A7BC0", VA = "0x44A7BC0")]
	public static MethodCallExpression Call(Expression instance, MethodInfo method, params Expression[] arguments)
	{
		return null;
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x44A8790", Offset = "0x44A8790", VA = "0x44A8790")]
	internal static MethodCallExpression Call(Expression instance, MethodInfo method, Expression arg0)
	{
		return null;
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x44A8900", Offset = "0x44A8900", VA = "0x44A8900")]
	public static MethodCallExpression Call(Expression instance, MethodInfo method, Expression arg0, Expression arg1)
	{
		return null;
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x44A8AE0", Offset = "0x44A8AE0", VA = "0x44A8AE0")]
	public static MethodCallExpression Call(Expression instance, MethodInfo method, Expression arg0, Expression arg1, Expression arg2)
	{
		return null;
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x4496210", Offset = "0x4496210", VA = "0x4496210")]
	public static MethodCallExpression Call(Expression instance, string methodName, Type[] typeArguments, params Expression[] arguments)
	{
		return null;
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x44A7C70", Offset = "0x44A7C70", VA = "0x44A7C70")]
	public static MethodCallExpression Call(Expression instance, MethodInfo method, IEnumerable<Expression> arguments)
	{
		return null;
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x44A72F0", Offset = "0x44A72F0", VA = "0x44A72F0")]
	private static ParameterInfo[] ValidateMethodAndGetParameters(Expression instance, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x44A8FD0", Offset = "0x44A8FD0", VA = "0x44A8FD0")]
	private static void ValidateStaticOrInstanceMethod(Expression instance, MethodInfo method)
	{
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x44A3F70", Offset = "0x44A3F70", VA = "0x44A3F70")]
	private static void ValidateCallInstanceType(Type instanceType, MethodInfo method)
	{
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x44A5A20", Offset = "0x44A5A20", VA = "0x44A5A20")]
	private static void ValidateArgumentTypes(MethodBase method, ExpressionType nodeKind, ref ReadOnlyCollection<Expression> arguments, string methodParamName)
	{
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x44A47F0", Offset = "0x44A47F0", VA = "0x44A47F0")]
	private static ParameterInfo[] GetParametersForValidation(MethodBase method, ExpressionType nodeKind)
	{
		return null;
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x44A4800", Offset = "0x44A4800", VA = "0x44A4800")]
	private static void ValidateArgumentCount(MethodBase method, ExpressionType nodeKind, int count, ParameterInfo[] pis)
	{
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x44A4810", Offset = "0x44A4810", VA = "0x44A4810")]
	private static Expression ValidateOneArgument(MethodBase method, ExpressionType nodeKind, Expression arg, ParameterInfo pi, string methodParamName, string argumentParamName)
	{
		return null;
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x44A3120", Offset = "0x44A3120", VA = "0x44A3120")]
	private static bool TryQuote(Type parameterType, ref Expression argument)
	{
		return default(bool);
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x44A8D30", Offset = "0x44A8D30", VA = "0x44A8D30")]
	private static MethodInfo FindMethod(Type type, string methodName, Type[] typeArgs, Expression[] args, BindingFlags flags)
	{
		return null;
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x44A9160", Offset = "0x44A9160", VA = "0x44A9160")]
	private static bool IsCompatible(MethodBase m, Expression[] arguments)
	{
		return default(bool);
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x44A90B0", Offset = "0x44A90B0", VA = "0x44A90B0")]
	private static MethodInfo ApplyTypeArgs(MethodInfo m, Type[] typeArgs)
	{
		return null;
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x44A93A0", Offset = "0x44A93A0", VA = "0x44A93A0")]
	public static NewArrayExpression NewArrayInit(Type type, params Expression[] initializers)
	{
		return null;
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x44A93F0", Offset = "0x44A93F0", VA = "0x44A93F0")]
	public static NewArrayExpression NewArrayInit(Type type, IEnumerable<Expression> initializers)
	{
		return null;
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x44A9860", Offset = "0x44A9860", VA = "0x44A9860")]
	public static NewArrayExpression NewArrayBounds(Type type, IEnumerable<Expression> bounds)
	{
		return null;
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x44A9AE0", Offset = "0x44A9AE0", VA = "0x44A9AE0")]
	public static ParameterExpression Parameter(Type type)
	{
		return null;
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x4496020", Offset = "0x4496020", VA = "0x4496020")]
	public static ParameterExpression Parameter(Type type, string name)
	{
		return null;
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x4495050", Offset = "0x4495050", VA = "0x4495050")]
	public static ParameterExpression Variable(Type type, string name)
	{
		return null;
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x44A9B50", Offset = "0x44A9B50", VA = "0x44A9B50")]
	private static void Validate(Type type, bool allowByRef)
	{
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x44A9C40", Offset = "0x44A9C40", VA = "0x44A9C40")]
	public static TryExpression TryFinally(Expression body, Expression @finally)
	{
		return null;
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x44A9CA0", Offset = "0x44A9CA0", VA = "0x44A9CA0")]
	public static TryExpression MakeTry(Type type, Expression body, Expression @finally, Expression fault, IEnumerable<CatchBlock> handlers)
	{
		return null;
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x44A9EC0", Offset = "0x44A9EC0", VA = "0x44A9EC0")]
	private static void ValidateTryAndCatchHaveSameType(Type type, Expression tryBody, ReadOnlyCollection<CatchBlock> handlers)
	{
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x44AAAD0", Offset = "0x44AAAD0", VA = "0x44AAAD0")]
	public static TypeBinaryExpression TypeIs(Expression expression, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x44AABB0", Offset = "0x44AABB0", VA = "0x44AABB0")]
	public static TypeBinaryExpression TypeEqual(Expression expression, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x44AAC90", Offset = "0x44AAC90", VA = "0x44AAC90")]
	public static UnaryExpression MakeUnary(ExpressionType unaryType, Expression operand, Type type, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x44ACCF0", Offset = "0x44ACCF0", VA = "0x44ACCF0")]
	private static UnaryExpression GetUserDefinedUnaryOperatorOrThrow(ExpressionType unaryType, string name, Expression operand)
	{
		return null;
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x44ACE80", Offset = "0x44ACE80", VA = "0x44ACE80")]
	private static UnaryExpression GetUserDefinedUnaryOperator(ExpressionType unaryType, string name, Expression operand)
	{
		return null;
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x44AD1B0", Offset = "0x44AD1B0", VA = "0x44AD1B0")]
	private static UnaryExpression GetMethodBasedUnaryOperator(ExpressionType unaryType, Expression operand, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x44AD580", Offset = "0x44AD580", VA = "0x44AD580")]
	private static UnaryExpression GetUserDefinedCoercionOrThrow(ExpressionType coercionType, Expression expression, Type convertToType)
	{
		return null;
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x44AD620", Offset = "0x44AD620", VA = "0x44AD620")]
	private static UnaryExpression GetUserDefinedCoercion(ExpressionType coercionType, Expression expression, Type convertToType)
	{
		return null;
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x44AD6F0", Offset = "0x44AD6F0", VA = "0x44AD6F0")]
	private static UnaryExpression GetMethodBasedCoercionOperator(ExpressionType unaryType, Expression operand, Type convertToType, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x44AB270", Offset = "0x44AB270", VA = "0x44AB270")]
	public static UnaryExpression Negate(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x44AC530", Offset = "0x44AC530", VA = "0x44AC530")]
	public static UnaryExpression UnaryPlus(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x44AB420", Offset = "0x44AB420", VA = "0x44AB420")]
	public static UnaryExpression NegateChecked(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x44ADAA0", Offset = "0x44ADAA0", VA = "0x44ADAA0")]
	public static UnaryExpression Not(Expression expression)
	{
		return null;
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x44AB5D0", Offset = "0x44AB5D0", VA = "0x44AB5D0")]
	public static UnaryExpression Not(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x44AB790", Offset = "0x44AB790", VA = "0x44AB790")]
	public static UnaryExpression IsFalse(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600029F")]
	[Address(RVA = "0x44AB910", Offset = "0x44AB910", VA = "0x44AB910")]
	public static UnaryExpression IsTrue(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x44ABA90", Offset = "0x44ABA90", VA = "0x44ABA90")]
	public static UnaryExpression OnesComplement(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x44AC2E0", Offset = "0x44AC2E0", VA = "0x44AC2E0")]
	public static UnaryExpression TypeAs(Expression expression, Type type)
	{
		return null;
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x44AC6B0", Offset = "0x44AC6B0", VA = "0x44AC6B0")]
	public static UnaryExpression Unbox(Expression expression, Type type)
	{
		return null;
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x44966A0", Offset = "0x44966A0", VA = "0x44966A0")]
	public static UnaryExpression Convert(Expression expression, Type type)
	{
		return null;
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x44ABDD0", Offset = "0x44ABDD0", VA = "0x44ABDD0")]
	public static UnaryExpression Convert(Expression expression, Type type, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x44ABFB0", Offset = "0x44ABFB0", VA = "0x44ABFB0")]
	public static UnaryExpression ConvertChecked(Expression expression, Type type, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x44ABC10", Offset = "0x44ABC10", VA = "0x44ABC10")]
	public static UnaryExpression ArrayLength(Expression array)
	{
		return null;
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x44AC430", Offset = "0x44AC430", VA = "0x44AC430")]
	public static UnaryExpression Quote(Expression expression)
	{
		return null;
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x44AC1B0", Offset = "0x44AC1B0", VA = "0x44AC1B0")]
	public static UnaryExpression Throw(Expression value, Type type)
	{
		return null;
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x44AC870", Offset = "0x44AC870", VA = "0x44AC870")]
	public static UnaryExpression Increment(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x44AC9F0", Offset = "0x44AC9F0", VA = "0x44AC9F0")]
	public static UnaryExpression Decrement(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x44ADB10", Offset = "0x44ADB10", VA = "0x44ADB10")]
	public static UnaryExpression PreIncrementAssign(Expression expression)
	{
		return null;
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x44ACB70", Offset = "0x44ACB70", VA = "0x44ACB70")]
	public static UnaryExpression PreIncrementAssign(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x44ACC30", Offset = "0x44ACC30", VA = "0x44ACC30")]
	public static UnaryExpression PreDecrementAssign(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x44ACBD0", Offset = "0x44ACBD0", VA = "0x44ACBD0")]
	public static UnaryExpression PostIncrementAssign(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x44ACC90", Offset = "0x44ACC90", VA = "0x44ACC90")]
	public static UnaryExpression PostDecrementAssign(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x44ADB60", Offset = "0x44ADB60", VA = "0x44ADB60")]
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
