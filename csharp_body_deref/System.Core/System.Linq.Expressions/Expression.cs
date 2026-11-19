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

[Token(Token = "0x200004C")]
public abstract class Expression
{
	[Token(Token = "0x200004D")]
	internal class BinaryExpressionProxy
	{
	}

	[Token(Token = "0x200004E")]
	internal class BlockExpressionProxy
	{
	}

	[Token(Token = "0x200004F")]
	internal class CatchBlockProxy
	{
	}

	[Token(Token = "0x2000050")]
	internal class ConditionalExpressionProxy
	{
	}

	[Token(Token = "0x2000051")]
	internal class ConstantExpressionProxy
	{
	}

	[Token(Token = "0x2000052")]
	internal class DebugInfoExpressionProxy
	{
	}

	[Token(Token = "0x2000053")]
	internal class DefaultExpressionProxy
	{
	}

	[Token(Token = "0x2000054")]
	internal class GotoExpressionProxy
	{
	}

	[Token(Token = "0x2000055")]
	internal class IndexExpressionProxy
	{
	}

	[Token(Token = "0x2000056")]
	internal class InvocationExpressionProxy
	{
	}

	[Token(Token = "0x2000057")]
	internal class LabelExpressionProxy
	{
	}

	[Token(Token = "0x2000058")]
	internal class LambdaExpressionProxy
	{
	}

	[Token(Token = "0x2000059")]
	internal class ListInitExpressionProxy
	{
	}

	[Token(Token = "0x200005A")]
	internal class LoopExpressionProxy
	{
	}

	[Token(Token = "0x200005B")]
	internal class MemberExpressionProxy
	{
	}

	[Token(Token = "0x200005C")]
	internal class MemberInitExpressionProxy
	{
	}

	[Token(Token = "0x200005D")]
	internal class MethodCallExpressionProxy
	{
	}

	[Token(Token = "0x200005E")]
	internal class NewArrayExpressionProxy
	{
	}

	[Token(Token = "0x200005F")]
	internal class NewExpressionProxy
	{
	}

	[Token(Token = "0x2000060")]
	internal class ParameterExpressionProxy
	{
	}

	[Token(Token = "0x2000061")]
	internal class RuntimeVariablesExpressionProxy
	{
	}

	[Token(Token = "0x2000062")]
	internal class SwitchCaseProxy
	{
	}

	[Token(Token = "0x2000063")]
	internal class SwitchExpressionProxy
	{
	}

	[Token(Token = "0x2000064")]
	internal class TryExpressionProxy
	{
	}

	[Token(Token = "0x2000065")]
	internal class TypeBinaryExpressionProxy
	{
	}

	[Token(Token = "0x2000066")]
	internal class UnaryExpressionProxy
	{
	}

	[Token(Token = "0x2000067")]
	private class ExtensionInfo
	{
		[Token(Token = "0x40000FC")]
		[FieldOffset(Offset = "0x10")]
		internal readonly ExpressionType NodeType;

		[Token(Token = "0x40000FD")]
		[FieldOffset(Offset = "0x18")]
		internal readonly Type Type;
	}

	[Token(Token = "0x40000F9")]
	[FieldOffset(Offset = "0x0")]
	private static readonly CacheDict<Type, MethodInfo> s_lambdaDelegateCache;

	[Token(Token = "0x40000FA")]
	[FieldOffset(Offset = "0x8")]
	private static CacheDict<Type, Func<Expression, string, bool, ReadOnlyCollection<ParameterExpression>, LambdaExpression>> s_lambdaFactories;

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0x10")]
	private static ConditionalWeakTable<Expression, ExtensionInfo> s_legacyCtorSupportTable;

	[Token(Token = "0x17000059")]
	public virtual ExpressionType NodeType
	{
		[Token(Token = "0x6000240")]
		[Address(RVA = "0x5DB8CE0", Offset = "0x5DB7CE0", VA = "0x5DB8CE0", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x1700005A")]
	public virtual Type Type
	{
		[Token(Token = "0x6000241")]
		[Address(RVA = "0x5DB8DD0", Offset = "0x5DB7DD0", VA = "0x5DB8DD0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005B")]
	public virtual bool CanReduce
	{
		[Token(Token = "0x6000242")]
		[Address(RVA = "0x5DB8EC0", Offset = "0x5DB7EC0", VA = "0x5DB8EC0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x5DAB2D0", Offset = "0x5DAA2D0", VA = "0x5DAB2D0")]
	public static BinaryExpression Assign(Expression left, Expression right)
	{
		return null;
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x5DAD610", Offset = "0x5DAC610", VA = "0x5DAD610")]
	private static BinaryExpression GetUserDefinedBinaryOperator(ExpressionType binaryType, string name, Expression left, Expression right, bool liftToNull)
	{
		return null;
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x5DADC10", Offset = "0x5DACC10", VA = "0x5DADC10")]
	private static BinaryExpression GetMethodBasedBinaryOperator(ExpressionType binaryType, Expression left, Expression right, MethodInfo method, bool liftToNull)
	{
		return null;
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x5DAE550", Offset = "0x5DAD550", VA = "0x5DAE550")]
	private static BinaryExpression GetMethodBasedAssignOperator(ExpressionType binaryType, Expression left, Expression right, MethodInfo method, LambdaExpression conversion, bool liftToNull)
	{
		return null;
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x5DAEA60", Offset = "0x5DADA60", VA = "0x5DAEA60")]
	private static BinaryExpression GetUserDefinedBinaryOperatorOrThrow(ExpressionType binaryType, string name, Expression left, Expression right, bool liftToNull)
	{
		return null;
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x5DAECA0", Offset = "0x5DADCA0", VA = "0x5DAECA0")]
	private static BinaryExpression GetUserDefinedAssignOperatorOrThrow(ExpressionType binaryType, string name, Expression left, Expression right, LambdaExpression conversion, bool liftToNull)
	{
		return null;
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x5DAD9C0", Offset = "0x5DAC9C0", VA = "0x5DAD9C0")]
	private static MethodInfo GetUserDefinedBinaryOperator(ExpressionType binaryType, Type leftType, Type rightType, string name)
	{
		return null;
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x5DAEF20", Offset = "0x5DADF20", VA = "0x5DAEF20")]
	private static bool IsLiftingConditionalLogicalOperator(Type left, Type right, MethodInfo method, ExpressionType binaryType)
	{
		return default(bool);
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x5DAE3E0", Offset = "0x5DAD3E0", VA = "0x5DAE3E0")]
	internal static bool ParameterIsAssignable(ParameterInfo pi, Type argType)
	{
		return default(bool);
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x5DAE480", Offset = "0x5DAD480", VA = "0x5DAE480")]
	private static void ValidateParamswithOperandsOrThrow(Type paramType, Type operandType, ExpressionType exprType, string name)
	{
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x5DAE240", Offset = "0x5DAD240", VA = "0x5DAE240")]
	private static void ValidateOperator(MethodInfo method)
	{
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x5DAEFE0", Offset = "0x5DADFE0", VA = "0x5DAEFE0")]
	private static void ValidateMethodInfo(MethodInfo method, string paramName)
	{
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x5DAF060", Offset = "0x5DAE060", VA = "0x5DAF060")]
	private static bool IsNullComparison(Expression left, Expression right)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x5DAF260", Offset = "0x5DAE260", VA = "0x5DAF260")]
	private static bool IsNullConstant(Expression e)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x5DAF2C0", Offset = "0x5DAE2C0", VA = "0x5DAF2C0")]
	private static void ValidateUserDefinedConditionalLogicOperator(ExpressionType nodeType, Type left, Type right, MethodInfo method)
	{
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x5DAFA50", Offset = "0x5DAEA50", VA = "0x5DAFA50")]
	private static void VerifyOpTrueFalse(ExpressionType nodeType, Type left, MethodInfo opTrue, string paramName)
	{
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x5DAF960", Offset = "0x5DAE960", VA = "0x5DAF960")]
	private static bool IsValidLiftedConditionalLogicalOperator(Type left, Type right, ParameterInfo[] pms)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x5DAB110", Offset = "0x5DAA110", VA = "0x5DAB110")]
	public static BinaryExpression MakeBinary(ExpressionType binaryType, Expression left, Expression right, bool liftToNull, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x5DA9960", Offset = "0x5DA8960", VA = "0x5DA9960")]
	public static BinaryExpression MakeBinary(ExpressionType binaryType, Expression left, Expression right, bool liftToNull, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x5DB6000", Offset = "0x5DB5000", VA = "0x5DB6000")]
	public static BinaryExpression Equal(Expression left, Expression right)
	{
		return null;
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x5DB2940", Offset = "0x5DB1940", VA = "0x5DB2940")]
	public static BinaryExpression Equal(Expression left, Expression right, bool liftToNull, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x5DA9540", Offset = "0x5DA8540", VA = "0x5DA9540")]
	public static BinaryExpression ReferenceEqual(Expression left, Expression right)
	{
		return null;
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x5DB6650", Offset = "0x5DB5650", VA = "0x5DB6650")]
	public static BinaryExpression NotEqual(Expression left, Expression right)
	{
		return null;
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x5DB2A40", Offset = "0x5DB1A40", VA = "0x5DB2A40")]
	public static BinaryExpression NotEqual(Expression left, Expression right, bool liftToNull, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x5DA9710", Offset = "0x5DA8710", VA = "0x5DA9710")]
	public static BinaryExpression ReferenceNotEqual(Expression left, Expression right)
	{
		return null;
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x5DB6060", Offset = "0x5DB5060", VA = "0x5DB6060")]
	private static BinaryExpression GetEqualityComparisonOperator(ExpressionType binaryType, string opName, Expression left, Expression right, bool liftToNull)
	{
		return null;
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x5DB2740", Offset = "0x5DB1740", VA = "0x5DB2740")]
	public static BinaryExpression GreaterThan(Expression left, Expression right, bool liftToNull, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x5DB2540", Offset = "0x5DB1540", VA = "0x5DB2540")]
	public static BinaryExpression LessThan(Expression left, Expression right, bool liftToNull, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x5DB2840", Offset = "0x5DB1840", VA = "0x5DB2840")]
	public static BinaryExpression GreaterThanOrEqual(Expression left, Expression right, bool liftToNull, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x5DB2640", Offset = "0x5DB1640", VA = "0x5DB2640")]
	public static BinaryExpression LessThanOrEqual(Expression left, Expression right, bool liftToNull, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x5DB66B0", Offset = "0x5DB56B0", VA = "0x5DB66B0")]
	private static BinaryExpression GetComparisonOperator(ExpressionType binaryType, string opName, Expression left, Expression right, bool liftToNull)
	{
		return null;
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x5DB69A0", Offset = "0x5DB59A0", VA = "0x5DB69A0")]
	public static BinaryExpression AndAlso(Expression left, Expression right)
	{
		return null;
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x5DB16F0", Offset = "0x5DB06F0", VA = "0x5DB16F0")]
	public static BinaryExpression AndAlso(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x5DB1F50", Offset = "0x5DB0F50", VA = "0x5DB1F50")]
	public static BinaryExpression OrElse(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x5DB2DD0", Offset = "0x5DB1DD0", VA = "0x5DB2DD0")]
	public static BinaryExpression Coalesce(Expression left, Expression right, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x5DB6A00", Offset = "0x5DB5A00", VA = "0x5DB6A00")]
	private static Type ValidateCoalesceArgTypes(Type left, Type right)
	{
		return null;
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x5DAFC00", Offset = "0x5DAEC00", VA = "0x5DAFC00")]
	public static BinaryExpression Add(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x5DB3A40", Offset = "0x5DB2A40", VA = "0x5DB3A40")]
	public static BinaryExpression AddAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x5DAE7D0", Offset = "0x5DAD7D0", VA = "0x5DAE7D0")]
	private static void ValidateOpAssignConversionLambda(LambdaExpression conversion, Expression left, MethodInfo method, ExpressionType nodeType)
	{
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x5DB5790", Offset = "0x5DB4790", VA = "0x5DB5790")]
	public static BinaryExpression AddAssignChecked(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x5DAFE90", Offset = "0x5DAEE90", VA = "0x5DAFE90")]
	public static BinaryExpression AddChecked(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x5DB0120", Offset = "0x5DAF120", VA = "0x5DB0120")]
	public static BinaryExpression Subtract(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x5DB54C0", Offset = "0x5DB44C0", VA = "0x5DB54C0")]
	public static BinaryExpression SubtractAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x5DB5A60", Offset = "0x5DB4A60", VA = "0x5DB5A60")]
	public static BinaryExpression SubtractAssignChecked(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x5DB03B0", Offset = "0x5DAF3B0", VA = "0x5DB03B0")]
	public static BinaryExpression SubtractChecked(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x5DB0B60", Offset = "0x5DAFB60", VA = "0x5DB0B60")]
	public static BinaryExpression Divide(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x5DB3FE0", Offset = "0x5DB2FE0", VA = "0x5DB3FE0")]
	public static BinaryExpression DivideAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x5DB0DF0", Offset = "0x5DAFDF0", VA = "0x5DB0DF0")]
	public static BinaryExpression Modulo(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x5DB4820", Offset = "0x5DB3820", VA = "0x5DB4820")]
	public static BinaryExpression ModuloAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x5DB0640", Offset = "0x5DAF640", VA = "0x5DB0640")]
	public static BinaryExpression Multiply(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x5DB4AF0", Offset = "0x5DB3AF0", VA = "0x5DB4AF0")]
	public static BinaryExpression MultiplyAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x5DB5D30", Offset = "0x5DB4D30", VA = "0x5DB5D30")]
	public static BinaryExpression MultiplyAssignChecked(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x5DB08D0", Offset = "0x5DAF8D0", VA = "0x5DB08D0")]
	public static BinaryExpression MultiplyChecked(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x5DB6B60", Offset = "0x5DB5B60", VA = "0x5DB6B60")]
	private static bool IsSimpleShift(Type left, Type right)
	{
		return default(bool);
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x5DB6C20", Offset = "0x5DB5C20", VA = "0x5DB6C20")]
	private static Type GetResultTypeOfShift(Type left, Type right)
	{
		return null;
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x5DB37E0", Offset = "0x5DB27E0", VA = "0x5DB37E0")]
	public static BinaryExpression LeftShift(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x5DB4580", Offset = "0x5DB3580", VA = "0x5DB4580")]
	public static BinaryExpression LeftShiftAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x5DB3580", Offset = "0x5DB2580", VA = "0x5DB3580")]
	public static BinaryExpression RightShift(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x5DB5220", Offset = "0x5DB4220", VA = "0x5DB5220")]
	public static BinaryExpression RightShiftAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x5DB1460", Offset = "0x5DB0460", VA = "0x5DB1460")]
	public static BinaryExpression And(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x5DB3D10", Offset = "0x5DB2D10", VA = "0x5DB3D10")]
	public static BinaryExpression AndAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x5DB1CC0", Offset = "0x5DB0CC0", VA = "0x5DB1CC0")]
	public static BinaryExpression Or(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x5DB4DC0", Offset = "0x5DB3DC0", VA = "0x5DB4DC0")]
	public static BinaryExpression OrAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x5DB2B40", Offset = "0x5DB1B40", VA = "0x5DB2B40")]
	public static BinaryExpression ExclusiveOr(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x5DB42B0", Offset = "0x5DB32B0", VA = "0x5DB42B0")]
	public static BinaryExpression ExclusiveOrAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x5DB1080", Offset = "0x5DB0080", VA = "0x5DB1080")]
	public static BinaryExpression Power(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x5DB5090", Offset = "0x5DB4090", VA = "0x5DB5090")]
	public static BinaryExpression PowerAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x5DB3350", Offset = "0x5DB2350", VA = "0x5DB3350")]
	public static BinaryExpression ArrayIndex(Expression array, Expression index)
	{
		return null;
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x5DB6D80", Offset = "0x5DB5D80", VA = "0x5DB6D80")]
	public static BlockExpression Block(Expression arg0, Expression arg1)
	{
		return null;
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x5DB6E20", Offset = "0x5DB5E20", VA = "0x5DB6E20")]
	public static BlockExpression Block(Expression arg0, Expression arg1, Expression arg2)
	{
		return null;
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x5DB6EF0", Offset = "0x5DB5EF0", VA = "0x5DB6EF0")]
	public static BlockExpression Block(Expression arg0, Expression arg1, Expression arg2, Expression arg3)
	{
		return null;
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x5DB6FE0", Offset = "0x5DB5FE0", VA = "0x5DB6FE0")]
	public static BlockExpression Block(Expression arg0, Expression arg1, Expression arg2, Expression arg3, Expression arg4)
	{
		return null;
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x5DB7100", Offset = "0x5DB6100", VA = "0x5DB7100")]
	public static BlockExpression Block(IEnumerable<Expression> expressions)
	{
		return null;
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x5DB7180", Offset = "0x5DB6180", VA = "0x5DB7180")]
	public static BlockExpression Block(Type type, params Expression[] expressions)
	{
		return null;
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x5DB7280", Offset = "0x5DB6280", VA = "0x5DB7280")]
	public static BlockExpression Block(Type type, IEnumerable<Expression> expressions)
	{
		return null;
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x5DB7520", Offset = "0x5DB6520", VA = "0x5DB7520")]
	public static BlockExpression Block(IEnumerable<ParameterExpression> variables, params Expression[] expressions)
	{
		return null;
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x5DB7570", Offset = "0x5DB6570", VA = "0x5DB7570")]
	public static BlockExpression Block(Type type, IEnumerable<ParameterExpression> variables, params Expression[] expressions)
	{
		return null;
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x5DAB700", Offset = "0x5DAA700", VA = "0x5DAB700")]
	public static BlockExpression Block(IEnumerable<ParameterExpression> variables, IEnumerable<Expression> expressions)
	{
		return null;
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x5DB7310", Offset = "0x5DB6310", VA = "0x5DB7310")]
	public static BlockExpression Block(Type type, IEnumerable<ParameterExpression> variables, IEnumerable<Expression> expressions)
	{
		return null;
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x5DB8080", Offset = "0x5DB7080", VA = "0x5DB8080")]
	private static BlockExpression BlockCore(Type type, ReadOnlyCollection<ParameterExpression> variables, ReadOnlyCollection<Expression> expressions)
	{
		return null;
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x5DB83D0", Offset = "0x5DB73D0", VA = "0x5DB83D0")]
	internal static void ValidateVariables(ReadOnlyCollection<ParameterExpression> varList, string collectionName)
	{
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x5DB7730", Offset = "0x5DB6730", VA = "0x5DB7730")]
	private static BlockExpression GetOptimizedBlockExpression(IReadOnlyList<Expression> expressions)
	{
		return null;
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x5DB85A0", Offset = "0x5DB75A0", VA = "0x5DB85A0")]
	public static CatchBlock MakeCatchBlock(Type type, ParameterExpression variable, Expression body, Expression filter)
	{
		return null;
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x5DACDF0", Offset = "0x5DABDF0", VA = "0x5DACDF0")]
	public static ConditionalExpression Condition(Expression test, Expression ifTrue, Expression ifFalse)
	{
		return null;
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x5DB8800", Offset = "0x5DB7800", VA = "0x5DB8800")]
	public static ConditionalExpression Condition(Expression test, Expression ifTrue, Expression ifFalse, Type type)
	{
		return null;
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x5DB8A40", Offset = "0x5DB7A40", VA = "0x5DB8A40")]
	public static ConditionalExpression IfThen(Expression test, Expression ifTrue)
	{
		return null;
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x5DB8BF0", Offset = "0x5DB7BF0", VA = "0x5DB8BF0")]
	public static ConstantExpression Constant(object value)
	{
		return null;
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x5DACBE0", Offset = "0x5DABBE0", VA = "0x5DACBE0")]
	public static ConstantExpression Constant(object value, Type type)
	{
		return null;
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x5DB8B70", Offset = "0x5DB7B70", VA = "0x5DB8B70")]
	public static DefaultExpression Empty()
	{
		return null;
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x5DB8C40", Offset = "0x5DB7C40", VA = "0x5DB8C40")]
	public static DefaultExpression Default(Type type)
	{
		return null;
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x5DA9210", Offset = "0x5DA8210", VA = "0x5DA9210")]
	protected Expression()
	{
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x5DB8ED0", Offset = "0x5DB7ED0", VA = "0x5DB8ED0", Slot = "7")]
	public virtual Expression Reduce()
	{
		return null;
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x5DB8F10", Offset = "0x5DB7F10", VA = "0x5DB8F10", Slot = "8")]
	protected internal virtual Expression VisitChildren(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x5DB9080", Offset = "0x5DB8080", VA = "0x5DB9080", Slot = "9")]
	protected internal virtual Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x5DB8F90", Offset = "0x5DB7F90", VA = "0x5DB8F90")]
	public Expression ReduceAndCheck()
	{
		return null;
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x5DB90B0", Offset = "0x5DB80B0", VA = "0x5DB90B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x5DB75D0", Offset = "0x5DB65D0", VA = "0x5DB75D0")]
	private static void RequiresCanRead(IReadOnlyList<Expression> items, string paramName)
	{
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x5DAD3E0", Offset = "0x5DAC3E0", VA = "0x5DAD3E0")]
	private static void RequiresCanWrite(Expression expression, string paramName)
	{
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x5DB90C0", Offset = "0x5DB80C0", VA = "0x5DB90C0")]
	public static GotoExpression Break(LabelTarget target)
	{
		return null;
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x5DB9230", Offset = "0x5DB8230", VA = "0x5DB9230")]
	public static GotoExpression Return(LabelTarget target)
	{
		return null;
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x5DB92C0", Offset = "0x5DB82C0", VA = "0x5DB92C0")]
	public static GotoExpression Return(LabelTarget target, Expression value)
	{
		return null;
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x5DB9350", Offset = "0x5DB8350", VA = "0x5DB9350")]
	public static GotoExpression Goto(LabelTarget target, Type type)
	{
		return null;
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x5DB93B0", Offset = "0x5DB83B0", VA = "0x5DB93B0")]
	public static GotoExpression Goto(LabelTarget target, Expression value)
	{
		return null;
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x5DB9150", Offset = "0x5DB8150", VA = "0x5DB9150")]
	public static GotoExpression MakeGoto(GotoExpressionKind kind, LabelTarget target, Expression value, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x5DB9440", Offset = "0x5DB8440", VA = "0x5DB9440")]
	private static void ValidateGoto(LabelTarget target, ref Expression value, string targetParameter, string valueParameter, Type type)
	{
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x5DB95D0", Offset = "0x5DB85D0", VA = "0x5DB95D0")]
	private static void ValidateGotoType(Type expectedType, ref Expression value, string paramName)
	{
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x5DAB870", Offset = "0x5DAA870", VA = "0x5DAB870")]
	public static IndexExpression MakeIndex(Expression instance, PropertyInfo indexer, IEnumerable<Expression> arguments)
	{
		return null;
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x5DB9C50", Offset = "0x5DB8C50", VA = "0x5DB9C50")]
	public static IndexExpression ArrayAccess(Expression array, params Expression[] indexes)
	{
		return null;
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x5DB97B0", Offset = "0x5DB87B0", VA = "0x5DB97B0")]
	public static IndexExpression ArrayAccess(Expression array, IEnumerable<Expression> indexes)
	{
		return null;
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x5DB9720", Offset = "0x5DB8720", VA = "0x5DB9720")]
	public static IndexExpression Property(Expression instance, PropertyInfo indexer, IEnumerable<Expression> arguments)
	{
		return null;
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x5DB9CA0", Offset = "0x5DB8CA0", VA = "0x5DB9CA0")]
	private static IndexExpression MakeIndexProperty(Expression instance, PropertyInfo indexer, string paramName, ReadOnlyCollection<Expression> argList)
	{
		return null;
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x5DB9D40", Offset = "0x5DB8D40", VA = "0x5DB9D40")]
	private static void ValidateIndexedProperty(Expression instance, PropertyInfo indexer, string paramName, ref ReadOnlyCollection<Expression> argList)
	{
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x5DBA2B0", Offset = "0x5DB92B0", VA = "0x5DBA2B0")]
	private static void ValidateAccessor(Expression instance, MethodInfo method, ParameterInfo[] indexes, ref ReadOnlyCollection<Expression> arguments, string paramName)
	{
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x5DBA540", Offset = "0x5DB9540", VA = "0x5DBA540")]
	private static void ValidateAccessorArgumentTypes(MethodInfo method, ParameterInfo[] indexes, ref ReadOnlyCollection<Expression> arguments, string paramName)
	{
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x5DBAA20", Offset = "0x5DB9A20", VA = "0x5DBAA20")]
	internal static InvocationExpression Invoke(Expression expression)
	{
		return null;
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x5DAB180", Offset = "0x5DAA180", VA = "0x5DAB180")]
	internal static InvocationExpression Invoke(Expression expression, Expression arg0)
	{
		return null;
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x5DBAD40", Offset = "0x5DB9D40", VA = "0x5DBAD40")]
	internal static InvocationExpression Invoke(Expression expression, Expression arg0, Expression arg1)
	{
		return null;
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x5DBAEE0", Offset = "0x5DB9EE0", VA = "0x5DBAEE0")]
	internal static InvocationExpression Invoke(Expression expression, Expression arg0, Expression arg1, Expression arg2)
	{
		return null;
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x5DBB0D0", Offset = "0x5DBA0D0", VA = "0x5DBB0D0")]
	internal static InvocationExpression Invoke(Expression expression, Expression arg0, Expression arg1, Expression arg2, Expression arg3)
	{
		return null;
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x5DBB320", Offset = "0x5DBA320", VA = "0x5DBB320")]
	internal static InvocationExpression Invoke(Expression expression, Expression arg0, Expression arg1, Expression arg2, Expression arg3, Expression arg4)
	{
		return null;
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x5DBB5D0", Offset = "0x5DBA5D0", VA = "0x5DBB5D0")]
	public static InvocationExpression Invoke(Expression expression, IEnumerable<Expression> arguments)
	{
		return null;
	}

	[Token(Token = "0x6000261")]
	[Address(RVA = "0x5DBAB10", Offset = "0x5DB9B10", VA = "0x5DBAB10")]
	internal static MethodInfo GetInvokeMethod(Expression expression)
	{
		return null;
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x5DBBFB0", Offset = "0x5DBAFB0", VA = "0x5DBBFB0")]
	public static LabelExpression Label(LabelTarget target)
	{
		return null;
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x5DBC020", Offset = "0x5DBB020", VA = "0x5DBC020")]
	public static LabelExpression Label(LabelTarget target, Expression defaultValue)
	{
		return null;
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x5DBC0F0", Offset = "0x5DBB0F0", VA = "0x5DBC0F0")]
	public static LabelTarget Label()
	{
		return null;
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x5DBC220", Offset = "0x5DBB220", VA = "0x5DBC220")]
	public static LabelTarget Label(string name)
	{
		return null;
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x5DBC2A0", Offset = "0x5DBB2A0", VA = "0x5DBC2A0")]
	public static LabelTarget Label(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x5DBC170", Offset = "0x5DBB170", VA = "0x5DBC170")]
	public static LabelTarget Label(Type type, string name)
	{
		return null;
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x5DBC310", Offset = "0x5DBB310", VA = "0x5DBC310")]
	internal static LambdaExpression CreateLambda(Type delegateType, Expression body, string name, bool tailCall, ReadOnlyCollection<ParameterExpression> parameters)
	{
		return null;
	}

	[Token(Token = "0x6000269")]
	public static Expression<TDelegate> Lambda<TDelegate>(Expression body, params ParameterExpression[] parameters)
	{
		return null;
	}

	[Token(Token = "0x600026A")]
	public static Expression<TDelegate> Lambda<TDelegate>(Expression body, IEnumerable<ParameterExpression> parameters)
	{
		return null;
	}

	[Token(Token = "0x600026B")]
	public static Expression<TDelegate> Lambda<TDelegate>(Expression body, bool tailCall, IEnumerable<ParameterExpression> parameters)
	{
		return null;
	}

	[Token(Token = "0x600026C")]
	public static Expression<TDelegate> Lambda<TDelegate>(Expression body, string name, bool tailCall, IEnumerable<ParameterExpression> parameters)
	{
		return null;
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x5DBC810", Offset = "0x5DBB810", VA = "0x5DBC810")]
	public static LambdaExpression Lambda(Type delegateType, Expression body, params ParameterExpression[] parameters)
	{
		return null;
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x5DBC870", Offset = "0x5DBB870", VA = "0x5DBC870")]
	public static LambdaExpression Lambda(Type delegateType, Expression body, string name, bool tailCall, IEnumerable<ParameterExpression> parameters)
	{
		return null;
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x5DBC930", Offset = "0x5DBB930", VA = "0x5DBC930")]
	private static void ValidateLambdaArgs(Type delegateType, ref Expression body, ReadOnlyCollection<ParameterExpression> parameters, string paramName)
	{
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x5DBCFE0", Offset = "0x5DBBFE0", VA = "0x5DBCFE0")]
	public static LoopExpression Loop(Expression body, LabelTarget @break, LabelTarget @continue)
	{
		return null;
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x5DBD0E0", Offset = "0x5DBC0E0", VA = "0x5DBD0E0")]
	public static MemberExpression Field(Expression expression, FieldInfo field)
	{
		return null;
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x5DBD290", Offset = "0x5DBC290", VA = "0x5DBD290")]
	public static MemberExpression Field(Expression expression, string fieldName)
	{
		return null;
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x5DAC590", Offset = "0x5DAB590", VA = "0x5DAC590")]
	public static MemberExpression Property(Expression expression, string propertyName)
	{
		return null;
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x5DBD400", Offset = "0x5DBC400", VA = "0x5DBD400")]
	public static MemberExpression Property(Expression expression, PropertyInfo property)
	{
		return null;
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x5DAB580", Offset = "0x5DAA580", VA = "0x5DAB580")]
	public static MemberExpression MakeMemberAccess(Expression expression, MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x5DBD6F0", Offset = "0x5DBC6F0", VA = "0x5DBD6F0")]
	internal static MethodCallExpression Call(MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x5DAC8C0", Offset = "0x5DAB8C0", VA = "0x5DAC8C0")]
	public static MethodCallExpression Call(MethodInfo method, Expression arg0)
	{
		return null;
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x5DAC9F0", Offset = "0x5DAB9F0", VA = "0x5DAC9F0")]
	public static MethodCallExpression Call(MethodInfo method, Expression arg0, Expression arg1)
	{
		return null;
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x5DBD8A0", Offset = "0x5DBC8A0", VA = "0x5DBD8A0")]
	public static MethodCallExpression Call(MethodInfo method, Expression arg0, Expression arg1, Expression arg2)
	{
		return null;
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x5DBDA90", Offset = "0x5DBCA90", VA = "0x5DBDA90")]
	public static MethodCallExpression Call(MethodInfo method, Expression arg0, Expression arg1, Expression arg2, Expression arg3)
	{
		return null;
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x5DBDCF0", Offset = "0x5DBCCF0", VA = "0x5DBDCF0")]
	public static MethodCallExpression Call(MethodInfo method, Expression arg0, Expression arg1, Expression arg2, Expression arg3, Expression arg4)
	{
		return null;
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x5DBDFC0", Offset = "0x5DBCFC0", VA = "0x5DBDFC0")]
	public static MethodCallExpression Call(MethodInfo method, params Expression[] arguments)
	{
		return null;
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x5DBE0D0", Offset = "0x5DBD0D0", VA = "0x5DBE0D0")]
	public static MethodCallExpression Call(MethodInfo method, IEnumerable<Expression> arguments)
	{
		return null;
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x5DBEB70", Offset = "0x5DBDB70", VA = "0x5DBEB70")]
	public static MethodCallExpression Call(Expression instance, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x5DBE070", Offset = "0x5DBD070", VA = "0x5DBE070")]
	public static MethodCallExpression Call(Expression instance, MethodInfo method, params Expression[] arguments)
	{
		return null;
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x5DBEC60", Offset = "0x5DBDC60", VA = "0x5DBEC60")]
	internal static MethodCallExpression Call(Expression instance, MethodInfo method, Expression arg0)
	{
		return null;
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x5DBEDD0", Offset = "0x5DBDDD0", VA = "0x5DBEDD0")]
	public static MethodCallExpression Call(Expression instance, MethodInfo method, Expression arg0, Expression arg1)
	{
		return null;
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x5DBEFB0", Offset = "0x5DBDFB0", VA = "0x5DBEFB0")]
	public static MethodCallExpression Call(Expression instance, MethodInfo method, Expression arg0, Expression arg1, Expression arg2)
	{
		return null;
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x5DAC6F0", Offset = "0x5DAB6F0", VA = "0x5DAC6F0")]
	public static MethodCallExpression Call(Expression instance, string methodName, Type[] typeArguments, params Expression[] arguments)
	{
		return null;
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x5DBE130", Offset = "0x5DBD130", VA = "0x5DBE130")]
	public static MethodCallExpression Call(Expression instance, MethodInfo method, IEnumerable<Expression> arguments)
	{
		return null;
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x5DBD7A0", Offset = "0x5DBC7A0", VA = "0x5DBD7A0")]
	private static ParameterInfo[] ValidateMethodAndGetParameters(Expression instance, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x5DBF490", Offset = "0x5DBE490", VA = "0x5DBF490")]
	private static void ValidateStaticOrInstanceMethod(Expression instance, MethodInfo method)
	{
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x5DBA4A0", Offset = "0x5DB94A0", VA = "0x5DBA4A0")]
	private static void ValidateCallInstanceType(Type instanceType, MethodInfo method)
	{
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x5DBBFA0", Offset = "0x5DBAFA0", VA = "0x5DBBFA0")]
	private static void ValidateArgumentTypes(MethodBase method, ExpressionType nodeKind, ref ReadOnlyCollection<Expression> arguments, string methodParamName)
	{
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x5DBAD10", Offset = "0x5DB9D10", VA = "0x5DBAD10")]
	private static ParameterInfo[] GetParametersForValidation(MethodBase method, ExpressionType nodeKind)
	{
		return null;
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x5DBAD20", Offset = "0x5DB9D20", VA = "0x5DBAD20")]
	private static void ValidateArgumentCount(MethodBase method, ExpressionType nodeKind, int count, ParameterInfo[] pis)
	{
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x5DBAD30", Offset = "0x5DB9D30", VA = "0x5DBAD30")]
	private static Expression ValidateOneArgument(MethodBase method, ExpressionType nodeKind, Expression arg, ParameterInfo pi, string methodParamName, string argumentParamName)
	{
		return null;
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x5DB9710", Offset = "0x5DB8710", VA = "0x5DB9710")]
	private static bool TryQuote(Type parameterType, ref Expression argument)
	{
		return default(bool);
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x5DBF200", Offset = "0x5DBE200", VA = "0x5DBF200")]
	private static MethodInfo FindMethod(Type type, string methodName, Type[] typeArgs, Expression[] args, BindingFlags flags)
	{
		return null;
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x5DBF620", Offset = "0x5DBE620", VA = "0x5DBF620")]
	private static bool IsCompatible(MethodBase m, Expression[] arguments)
	{
		return default(bool);
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x5DBF570", Offset = "0x5DBE570", VA = "0x5DBF570")]
	private static MethodInfo ApplyTypeArgs(MethodInfo m, Type[] typeArgs)
	{
		return null;
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x5DBF860", Offset = "0x5DBE860", VA = "0x5DBF860")]
	public static NewArrayExpression NewArrayInit(Type type, params Expression[] initializers)
	{
		return null;
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x5DBF8B0", Offset = "0x5DBE8B0", VA = "0x5DBF8B0")]
	public static NewArrayExpression NewArrayInit(Type type, IEnumerable<Expression> initializers)
	{
		return null;
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x5DBFD20", Offset = "0x5DBED20", VA = "0x5DBFD20")]
	public static NewArrayExpression NewArrayBounds(Type type, IEnumerable<Expression> bounds)
	{
		return null;
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x5DBFFB0", Offset = "0x5DBEFB0", VA = "0x5DBFFB0")]
	public static ParameterExpression Parameter(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x5DAC500", Offset = "0x5DAB500", VA = "0x5DAC500")]
	public static ParameterExpression Parameter(Type type, string name)
	{
		return null;
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x5DAB520", Offset = "0x5DAA520", VA = "0x5DAB520")]
	public static ParameterExpression Variable(Type type, string name)
	{
		return null;
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x5DC0020", Offset = "0x5DBF020", VA = "0x5DC0020")]
	private static void Validate(Type type, bool allowByRef)
	{
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x5DC0110", Offset = "0x5DBF110", VA = "0x5DC0110")]
	public static TryExpression TryFinally(Expression body, Expression @finally)
	{
		return null;
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x5DC0170", Offset = "0x5DBF170", VA = "0x5DC0170")]
	public static TryExpression MakeTry(Type type, Expression body, Expression @finally, Expression fault, IEnumerable<CatchBlock> handlers)
	{
		return null;
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x5DC0390", Offset = "0x5DBF390", VA = "0x5DC0390")]
	private static void ValidateTryAndCatchHaveSameType(Type type, Expression tryBody, ReadOnlyCollection<CatchBlock> handlers)
	{
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x5DC0D20", Offset = "0x5DBFD20", VA = "0x5DC0D20")]
	public static TypeBinaryExpression TypeIs(Expression expression, Type type)
	{
		return null;
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x5DC0E00", Offset = "0x5DBFE00", VA = "0x5DC0E00")]
	public static TypeBinaryExpression TypeEqual(Expression expression, Type type)
	{
		return null;
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x5DC0EE0", Offset = "0x5DBFEE0", VA = "0x5DC0EE0")]
	public static UnaryExpression MakeUnary(ExpressionType unaryType, Expression operand, Type type, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x5DC2E00", Offset = "0x5DC1E00", VA = "0x5DC2E00")]
	private static UnaryExpression GetUserDefinedUnaryOperatorOrThrow(ExpressionType unaryType, string name, Expression operand)
	{
		return null;
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x5DC2F90", Offset = "0x5DC1F90", VA = "0x5DC2F90")]
	private static UnaryExpression GetUserDefinedUnaryOperator(ExpressionType unaryType, string name, Expression operand)
	{
		return null;
	}

	[Token(Token = "0x600029F")]
	[Address(RVA = "0x5DC32D0", Offset = "0x5DC22D0", VA = "0x5DC32D0")]
	private static UnaryExpression GetMethodBasedUnaryOperator(ExpressionType unaryType, Expression operand, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x5DC36A0", Offset = "0x5DC26A0", VA = "0x5DC36A0")]
	private static UnaryExpression GetUserDefinedCoercionOrThrow(ExpressionType coercionType, Expression expression, Type convertToType)
	{
		return null;
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x5DC3740", Offset = "0x5DC2740", VA = "0x5DC3740")]
	private static UnaryExpression GetUserDefinedCoercion(ExpressionType coercionType, Expression expression, Type convertToType)
	{
		return null;
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x5DC3810", Offset = "0x5DC2810", VA = "0x5DC3810")]
	private static UnaryExpression GetMethodBasedCoercionOperator(ExpressionType unaryType, Expression operand, Type convertToType, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x5DC1380", Offset = "0x5DC0380", VA = "0x5DC1380")]
	public static UnaryExpression Negate(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x5DC2640", Offset = "0x5DC1640", VA = "0x5DC2640")]
	public static UnaryExpression UnaryPlus(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x5DC1530", Offset = "0x5DC0530", VA = "0x5DC1530")]
	public static UnaryExpression NegateChecked(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x5DC3BB0", Offset = "0x5DC2BB0", VA = "0x5DC3BB0")]
	public static UnaryExpression Not(Expression expression)
	{
		return null;
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x5DC16E0", Offset = "0x5DC06E0", VA = "0x5DC16E0")]
	public static UnaryExpression Not(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x5DC18A0", Offset = "0x5DC08A0", VA = "0x5DC18A0")]
	public static UnaryExpression IsFalse(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x5DC1A20", Offset = "0x5DC0A20", VA = "0x5DC1A20")]
	public static UnaryExpression IsTrue(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x5DC1BA0", Offset = "0x5DC0BA0", VA = "0x5DC1BA0")]
	public static UnaryExpression OnesComplement(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x5DC23F0", Offset = "0x5DC13F0", VA = "0x5DC23F0")]
	public static UnaryExpression TypeAs(Expression expression, Type type)
	{
		return null;
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x5DC27C0", Offset = "0x5DC17C0", VA = "0x5DC27C0")]
	public static UnaryExpression Unbox(Expression expression, Type type)
	{
		return null;
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x5DACB80", Offset = "0x5DABB80", VA = "0x5DACB80")]
	public static UnaryExpression Convert(Expression expression, Type type)
	{
		return null;
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x5DC1EE0", Offset = "0x5DC0EE0", VA = "0x5DC1EE0")]
	public static UnaryExpression Convert(Expression expression, Type type, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x5DC20C0", Offset = "0x5DC10C0", VA = "0x5DC20C0")]
	public static UnaryExpression ConvertChecked(Expression expression, Type type, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x5DC1D20", Offset = "0x5DC0D20", VA = "0x5DC1D20")]
	public static UnaryExpression ArrayLength(Expression array)
	{
		return null;
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x5DC2540", Offset = "0x5DC1540", VA = "0x5DC2540")]
	public static UnaryExpression Quote(Expression expression)
	{
		return null;
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x5DC22C0", Offset = "0x5DC12C0", VA = "0x5DC22C0")]
	public static UnaryExpression Throw(Expression value, Type type)
	{
		return null;
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x5DC2980", Offset = "0x5DC1980", VA = "0x5DC2980")]
	public static UnaryExpression Increment(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x5DC2B00", Offset = "0x5DC1B00", VA = "0x5DC2B00")]
	public static UnaryExpression Decrement(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x5DC3C20", Offset = "0x5DC2C20", VA = "0x5DC3C20")]
	public static UnaryExpression PreIncrementAssign(Expression expression)
	{
		return null;
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x5DC2C80", Offset = "0x5DC1C80", VA = "0x5DC2C80")]
	public static UnaryExpression PreIncrementAssign(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x5DC2D40", Offset = "0x5DC1D40", VA = "0x5DC2D40")]
	public static UnaryExpression PreDecrementAssign(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x5DC2CE0", Offset = "0x5DC1CE0", VA = "0x5DC2CE0")]
	public static UnaryExpression PostIncrementAssign(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x5DC2DA0", Offset = "0x5DC1DA0", VA = "0x5DC2DA0")]
	public static UnaryExpression PostDecrementAssign(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x5DC3C70", Offset = "0x5DC2C70", VA = "0x5DC3C70")]
	private static UnaryExpression MakeOpAssignUnary(ExpressionType kind, Expression expression, MethodInfo method)
	{
		return null;
	}
}
[Token(Token = "0x2000094")]
public class Expression<TDelegate> : LambdaExpression
{
	[Token(Token = "0x170000B0")]
	internal sealed override Type TypeCore
	{
		[Token(Token = "0x6000450")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B1")]
	internal override Type PublicType
	{
		[Token(Token = "0x6000451")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600044F")]
	internal Expression(Expression body)
	{
	}

	[Token(Token = "0x6000452")]
	public TDelegate Compile()
	{
		return (TDelegate)null;
	}

	[Token(Token = "0x6000453")]
	public TDelegate Compile(bool preferInterpretation)
	{
		return (TDelegate)null;
	}

	[Token(Token = "0x6000454")]
	[ExcludeFromCodeCoverage]
	internal virtual Expression<TDelegate> Rewrite(Expression body, ParameterExpression[] parameters)
	{
		return null;
	}

	[Token(Token = "0x6000455")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}
}
