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
		[Token(Token = "0x6000235")]
		[Address(RVA = "0x2424570", Offset = "0x2422B70", VA = "0x182424570", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x17000058")]
	public virtual Type Type
	{
		[Token(Token = "0x6000236")]
		[Address(RVA = "0x2424660", Offset = "0x2422C60", VA = "0x182424660", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000059")]
	public virtual bool CanReduce
	{
		[Token(Token = "0x6000237")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x240C1E0", Offset = "0x240A7E0", VA = "0x18240C1E0")]
	public static BinaryExpression Assign(Expression left, Expression right)
	{
		return null;
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x24142D0", Offset = "0x24128D0", VA = "0x1824142D0")]
	private static BinaryExpression GetUserDefinedBinaryOperator(ExpressionType binaryType, string name, Expression left, Expression right, bool liftToNull)
	{
		return null;
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x24129A0", Offset = "0x2410FA0", VA = "0x1824129A0")]
	private static BinaryExpression GetMethodBasedBinaryOperator(ExpressionType binaryType, Expression left, Expression right, MethodInfo method, bool liftToNull)
	{
		return null;
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x2412700", Offset = "0x2410D00", VA = "0x182412700")]
	private static BinaryExpression GetMethodBasedAssignOperator(ExpressionType binaryType, Expression left, Expression right, MethodInfo method, LambdaExpression conversion, bool liftToNull)
	{
		return null;
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x2414080", Offset = "0x2412680", VA = "0x182414080")]
	private static BinaryExpression GetUserDefinedBinaryOperatorOrThrow(ExpressionType binaryType, string name, Expression left, Expression right, bool liftToNull)
	{
		return null;
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x2413DE0", Offset = "0x24123E0", VA = "0x182413DE0")]
	private static BinaryExpression GetUserDefinedAssignOperatorOrThrow(ExpressionType binaryType, string name, Expression left, Expression right, LambdaExpression conversion, bool liftToNull)
	{
		return null;
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x24146C0", Offset = "0x2412CC0", VA = "0x1824146C0")]
	private static MethodInfo GetUserDefinedBinaryOperator(ExpressionType binaryType, Type leftType, Type rightType, string name)
	{
		return null;
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x2416EC0", Offset = "0x24154C0", VA = "0x182416EC0")]
	private static bool IsLiftingConditionalLogicalOperator(Type left, Type right, MethodInfo method, ExpressionType binaryType)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x241DB50", Offset = "0x241C150", VA = "0x18241DB50")]
	internal static bool ParameterIsAssignable(ParameterInfo pi, Type argType)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x2422DE0", Offset = "0x24213E0", VA = "0x182422DE0")]
	private static void ValidateParamswithOperandsOrThrow(Type paramType, Type operandType, ExpressionType exprType, string name)
	{
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x2422C30", Offset = "0x2421230", VA = "0x182422C30")]
	private static void ValidateOperator(MethodInfo method)
	{
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x24228A0", Offset = "0x2420EA0", VA = "0x1824228A0")]
	private static void ValidateMethodInfo(MethodInfo method, string paramName)
	{
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x2416F80", Offset = "0x2415580", VA = "0x182416F80")]
	private static bool IsNullComparison(Expression left, Expression right)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x24171A0", Offset = "0x24157A0", VA = "0x1824171A0")]
	private static bool IsNullConstant(Expression e)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x24235B0", Offset = "0x2421BB0", VA = "0x1824235B0")]
	private static void ValidateUserDefinedConditionalLogicOperator(ExpressionType nodeType, Type left, Type right, MethodInfo method)
	{
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x2424150", Offset = "0x2422750", VA = "0x182424150")]
	private static void VerifyOpTrueFalse(ExpressionType nodeType, Type left, MethodInfo opTrue, string paramName)
	{
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x2417460", Offset = "0x2415A60", VA = "0x182417460")]
	private static bool IsValidLiftedConditionalLogicalOperator(Type left, Type right, ParameterInfo[] pms)
	{
		return default(bool);
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x2419280", Offset = "0x2417880", VA = "0x182419280")]
	public static BinaryExpression MakeBinary(ExpressionType binaryType, Expression left, Expression right, bool liftToNull, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x2418330", Offset = "0x2416930", VA = "0x182418330")]
	public static BinaryExpression MakeBinary(ExpressionType binaryType, Expression left, Expression right, bool liftToNull, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x24111B0", Offset = "0x240F7B0", VA = "0x1824111B0")]
	public static BinaryExpression Equal(Expression left, Expression right)
	{
		return null;
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x2411220", Offset = "0x240F820", VA = "0x182411220")]
	public static BinaryExpression Equal(Expression left, Expression right, bool liftToNull, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x241ED70", Offset = "0x241D370", VA = "0x18241ED70")]
	public static BinaryExpression ReferenceEqual(Expression left, Expression right)
	{
		return null;
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x241CC10", Offset = "0x241B210", VA = "0x18241CC10")]
	public static BinaryExpression NotEqual(Expression left, Expression right)
	{
		return null;
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x241CC80", Offset = "0x241B280", VA = "0x18241CC80")]
	public static BinaryExpression NotEqual(Expression left, Expression right, bool liftToNull, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x241EEF0", Offset = "0x241D4F0", VA = "0x18241EEF0")]
	public static BinaryExpression ReferenceNotEqual(Expression left, Expression right)
	{
		return null;
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x24120B0", Offset = "0x24106B0", VA = "0x1824120B0")]
	private static BinaryExpression GetEqualityComparisonOperator(ExpressionType binaryType, string opName, Expression left, Expression right, bool liftToNull)
	{
		return null;
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x24152E0", Offset = "0x24138E0", VA = "0x1824152E0")]
	public static BinaryExpression GreaterThan(Expression left, Expression right, bool liftToNull, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x2418100", Offset = "0x2416700", VA = "0x182418100")]
	public static BinaryExpression LessThan(Expression left, Expression right, bool liftToNull, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x24151D0", Offset = "0x24137D0", VA = "0x1824151D0")]
	public static BinaryExpression GreaterThanOrEqual(Expression left, Expression right, bool liftToNull, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x2417FF0", Offset = "0x24165F0", VA = "0x182417FF0")]
	public static BinaryExpression LessThanOrEqual(Expression left, Expression right, bool liftToNull, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x2411E80", Offset = "0x2410480", VA = "0x182411E80")]
	private static BinaryExpression GetComparisonOperator(ExpressionType binaryType, string opName, Expression left, Expression right, bool liftToNull)
	{
		return null;
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x240B3C0", Offset = "0x24099C0", VA = "0x18240B3C0")]
	public static BinaryExpression AndAlso(Expression left, Expression right)
	{
		return null;
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x240AEA0", Offset = "0x24094A0", VA = "0x18240AEA0")]
	public static BinaryExpression AndAlso(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x241D3D0", Offset = "0x241B9D0", VA = "0x18241D3D0")]
	public static BinaryExpression OrElse(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x240F2A0", Offset = "0x240D8A0", VA = "0x18240F2A0")]
	public static BinaryExpression Coalesce(Expression left, Expression right, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x2421410", Offset = "0x241FA10", VA = "0x182421410")]
	private static Type ValidateCoalesceArgTypes(Type left, Type right)
	{
		return null;
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x240AC60", Offset = "0x2409260", VA = "0x18240AC60")]
	public static BinaryExpression Add(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x240A790", Offset = "0x2408D90", VA = "0x18240A790")]
	public static BinaryExpression AddAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x2422970", Offset = "0x2420F70", VA = "0x182422970")]
	private static void ValidateOpAssignConversionLambda(LambdaExpression conversion, Expression left, MethodInfo method, ExpressionType nodeType)
	{
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x240A500", Offset = "0x2408B00", VA = "0x18240A500")]
	public static BinaryExpression AddAssignChecked(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x240AA20", Offset = "0x2409020", VA = "0x18240AA20")]
	public static BinaryExpression AddChecked(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x2420160", Offset = "0x241E760", VA = "0x182420160")]
	public static BinaryExpression Subtract(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x241FC90", Offset = "0x241E290", VA = "0x18241FC90")]
	public static BinaryExpression SubtractAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x241FA00", Offset = "0x241E000", VA = "0x18241FA00")]
	public static BinaryExpression SubtractAssignChecked(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x241FF20", Offset = "0x241E520", VA = "0x18241FF20")]
	public static BinaryExpression SubtractChecked(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x2410EF0", Offset = "0x240F4F0", VA = "0x182410EF0")]
	public static BinaryExpression Divide(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x2410C60", Offset = "0x240F260", VA = "0x182410C60")]
	public static BinaryExpression DivideAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x241B550", Offset = "0x2419B50", VA = "0x18241B550")]
	public static BinaryExpression Modulo(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x241B2C0", Offset = "0x24198C0", VA = "0x18241B2C0")]
	public static BinaryExpression ModuloAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x241BEF0", Offset = "0x241A4F0", VA = "0x18241BEF0")]
	public static BinaryExpression Multiply(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x241BA20", Offset = "0x241A020", VA = "0x18241BA20")]
	public static BinaryExpression MultiplyAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x241B790", Offset = "0x2419D90", VA = "0x18241B790")]
	public static BinaryExpression MultiplyAssignChecked(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x241BCB0", Offset = "0x241A2B0", VA = "0x18241BCB0")]
	public static BinaryExpression MultiplyChecked(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x2417210", Offset = "0x2415810", VA = "0x182417210")]
	private static bool IsSimpleShift(Type left, Type right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x2413C80", Offset = "0x2412280", VA = "0x182413C80")]
	private static Type GetResultTypeOfShift(Type left, Type right)
	{
		return null;
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x2417DB0", Offset = "0x24163B0", VA = "0x182417DB0")]
	public static BinaryExpression LeftShift(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x2417B20", Offset = "0x2416120", VA = "0x182417B20")]
	public static BinaryExpression LeftShiftAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x241F7C0", Offset = "0x241DDC0", VA = "0x18241F7C0")]
	public static BinaryExpression RightShift(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x241F530", Offset = "0x241DB30", VA = "0x18241F530")]
	public static BinaryExpression RightShiftAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x240B6B0", Offset = "0x2409CB0", VA = "0x18240B6B0")]
	public static BinaryExpression And(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x240B420", Offset = "0x2409A20", VA = "0x18240B420")]
	public static BinaryExpression AndAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x241D910", Offset = "0x241BF10", VA = "0x18241D910")]
	public static BinaryExpression Or(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x241D140", Offset = "0x241B740", VA = "0x18241D140")]
	public static BinaryExpression OrAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x24115C0", Offset = "0x240FBC0", VA = "0x1824115C0")]
	public static BinaryExpression ExclusiveOr(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x2411330", Offset = "0x240F930", VA = "0x182411330")]
	public static BinaryExpression ExclusiveOrAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x241DFD0", Offset = "0x241C5D0", VA = "0x18241DFD0")]
	public static BinaryExpression Power(Expression left, Expression right, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x241DE40", Offset = "0x241C440", VA = "0x18241DE40")]
	public static BinaryExpression PowerAssign(Expression left, Expression right, MethodInfo method, LambdaExpression conversion)
	{
		return null;
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x240BDD0", Offset = "0x240A3D0", VA = "0x18240BDD0")]
	public static BinaryExpression ArrayIndex(Expression array, Expression index)
	{
		return null;
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x240CDA0", Offset = "0x240B3A0", VA = "0x18240CDA0")]
	public static BlockExpression Block(Expression arg0, Expression arg1)
	{
		return null;
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x240CFD0", Offset = "0x240B5D0", VA = "0x18240CFD0")]
	public static BlockExpression Block(Expression arg0, Expression arg1, Expression arg2)
	{
		return null;
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x240CCB0", Offset = "0x240B2B0", VA = "0x18240CCB0")]
	public static BlockExpression Block(Expression arg0, Expression arg1, Expression arg2, Expression arg3)
	{
		return null;
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x240CEB0", Offset = "0x240B4B0", VA = "0x18240CEB0")]
	public static BlockExpression Block(Expression arg0, Expression arg1, Expression arg2, Expression arg3, Expression arg4)
	{
		return null;
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x240D200", Offset = "0x240B800", VA = "0x18240D200")]
	public static BlockExpression Block(IEnumerable<Expression> expressions)
	{
		return null;
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x240CBC0", Offset = "0x240B1C0", VA = "0x18240CBC0")]
	public static BlockExpression Block(Type type, params Expression[] expressions)
	{
		return null;
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x240CB20", Offset = "0x240B120", VA = "0x18240CB20")]
	public static BlockExpression Block(Type type, IEnumerable<Expression> expressions)
	{
		return null;
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x240D290", Offset = "0x240B890", VA = "0x18240D290")]
	public static BlockExpression Block(IEnumerable<ParameterExpression> variables, params Expression[] expressions)
	{
		return null;
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x240CE40", Offset = "0x240B440", VA = "0x18240CE40")]
	public static BlockExpression Block(Type type, IEnumerable<ParameterExpression> variables, params Expression[] expressions)
	{
		return null;
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x240D090", Offset = "0x240B690", VA = "0x18240D090")]
	public static BlockExpression Block(IEnumerable<ParameterExpression> variables, IEnumerable<Expression> expressions)
	{
		return null;
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x240C900", Offset = "0x240AF00", VA = "0x18240C900")]
	public static BlockExpression Block(Type type, IEnumerable<ParameterExpression> variables, IEnumerable<Expression> expressions)
	{
		return null;
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x240C3E0", Offset = "0x240A9E0", VA = "0x18240C3E0")]
	private static BlockExpression BlockCore(Type type, ReadOnlyCollection<ParameterExpression> variables, ReadOnlyCollection<Expression> expressions)
	{
		return null;
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x2423E30", Offset = "0x2422430", VA = "0x182423E30")]
	internal static void ValidateVariables(ReadOnlyCollection<ParameterExpression> varList, string collectionName)
	{
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x2413810", Offset = "0x2411E10", VA = "0x182413810")]
	private static BlockExpression GetOptimizedBlockExpression(IReadOnlyList<Expression> expressions)
	{
		return null;
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x2419300", Offset = "0x2417900", VA = "0x182419300")]
	public static CatchBlock MakeCatchBlock(Type type, ParameterExpression variable, Expression body, Expression filter)
	{
		return null;
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x240FBA0", Offset = "0x240E1A0", VA = "0x18240FBA0")]
	public static ConditionalExpression Condition(Expression test, Expression ifTrue, Expression ifFalse)
	{
		return null;
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x240F930", Offset = "0x240DF30", VA = "0x18240F930")]
	public static ConditionalExpression Condition(Expression test, Expression ifTrue, Expression ifFalse, Type type)
	{
		return null;
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x24153F0", Offset = "0x24139F0", VA = "0x1824153F0")]
	public static ConditionalExpression IfThen(Expression test, Expression ifTrue)
	{
		return null;
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x240FFE0", Offset = "0x240E5E0", VA = "0x18240FFE0")]
	public static ConstantExpression Constant(object value)
	{
		return null;
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x240FDA0", Offset = "0x240E3A0", VA = "0x18240FDA0")]
	public static ConstantExpression Constant(object value, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x2411130", Offset = "0x240F730", VA = "0x182411130")]
	public static DefaultExpression Empty()
	{
		return null;
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x2410BB0", Offset = "0x240F1B0", VA = "0x182410BB0")]
	public static DefaultExpression Default(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected Expression()
	{
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x241ED20", Offset = "0x241D320", VA = "0x18241ED20", Slot = "7")]
	public virtual Expression Reduce()
	{
		return null;
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x2424330", Offset = "0x2422930", VA = "0x182424330", Slot = "8")]
	protected internal virtual Expression VisitChildren(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x240A4D0", Offset = "0x2408AD0", VA = "0x18240A4D0", Slot = "9")]
	protected internal virtual Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x241EBE0", Offset = "0x241D1E0", VA = "0x18241EBE0")]
	public Expression ReduceAndCheck()
	{
		return null;
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x24204F0", Offset = "0x241EAF0", VA = "0x1824204F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x241F070", Offset = "0x241D670", VA = "0x18241F070")]
	private static void RequiresCanRead(IReadOnlyList<Expression> items, string paramName)
	{
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x241F170", Offset = "0x241D770", VA = "0x18241F170")]
	private static void RequiresCanWrite(Expression expression, string paramName)
	{
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x240D2F0", Offset = "0x240B8F0", VA = "0x18240D2F0")]
	public static GotoExpression Break(LabelTarget target)
	{
		return null;
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x241F400", Offset = "0x241DA00", VA = "0x18241F400")]
	public static GotoExpression Return(LabelTarget target)
	{
		return null;
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x241F490", Offset = "0x241DA90", VA = "0x18241F490")]
	public static GotoExpression Return(LabelTarget target, Expression value)
	{
		return null;
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x2415160", Offset = "0x2413760", VA = "0x182415160")]
	public static GotoExpression Goto(LabelTarget target, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x24150C0", Offset = "0x24136C0", VA = "0x1824150C0")]
	public static GotoExpression Goto(LabelTarget target, Expression value)
	{
		return null;
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x2419580", Offset = "0x2417B80", VA = "0x182419580")]
	public static GotoExpression MakeGoto(GotoExpressionKind kind, LabelTarget target, Expression value, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x2421710", Offset = "0x241FD10", VA = "0x182421710")]
	private static void ValidateGoto(LabelTarget target, ref Expression value, string targetParameter, string valueParameter, Type type)
	{
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x24215C0", Offset = "0x241FBC0", VA = "0x1824215C0")]
	private static void ValidateGotoType(Type expectedType, ref Expression value, string paramName)
	{
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x2419720", Offset = "0x2417D20", VA = "0x182419720")]
	public static IndexExpression MakeIndex(Expression instance, PropertyInfo indexer, IEnumerable<Expression> arguments)
	{
		return null;
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x240B9B0", Offset = "0x2409FB0", VA = "0x18240B9B0")]
	public static IndexExpression ArrayAccess(Expression array, params Expression[] indexes)
	{
		return null;
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x240BA10", Offset = "0x240A010", VA = "0x18240BA10")]
	public static IndexExpression ArrayAccess(Expression array, IEnumerable<Expression> indexes)
	{
		return null;
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x241E9B0", Offset = "0x241CFB0", VA = "0x18241E9B0")]
	public static IndexExpression Property(Expression instance, PropertyInfo indexer, IEnumerable<Expression> arguments)
	{
		return null;
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x2419670", Offset = "0x2417C70", VA = "0x182419670")]
	private static IndexExpression MakeIndexProperty(Expression instance, PropertyInfo indexer, string paramName, ReadOnlyCollection<Expression> argList)
	{
		return null;
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x24219A0", Offset = "0x241FFA0", VA = "0x1824219A0")]
	private static void ValidateIndexedProperty(Expression instance, PropertyInfo indexer, string paramName, ref ReadOnlyCollection<Expression> argList)
	{
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x2421100", Offset = "0x241F700", VA = "0x182421100")]
	private static void ValidateAccessor(Expression instance, MethodInfo method, ParameterInfo[] indexes, ref ReadOnlyCollection<Expression> arguments, string paramName)
	{
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x2420C60", Offset = "0x241F260", VA = "0x182420C60")]
	private static void ValidateAccessorArgumentTypes(MethodInfo method, ParameterInfo[] indexes, ref ReadOnlyCollection<Expression> arguments, string paramName)
	{
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x2415EF0", Offset = "0x24144F0", VA = "0x182415EF0")]
	internal static InvocationExpression Invoke(Expression expression)
	{
		return null;
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x2416700", Offset = "0x2414D00", VA = "0x182416700")]
	internal static InvocationExpression Invoke(Expression expression, Expression arg0)
	{
		return null;
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x2415FF0", Offset = "0x24145F0", VA = "0x182415FF0")]
	internal static InvocationExpression Invoke(Expression expression, Expression arg0, Expression arg1)
	{
		return null;
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x24161C0", Offset = "0x24147C0", VA = "0x1824161C0")]
	internal static InvocationExpression Invoke(Expression expression, Expression arg0, Expression arg1, Expression arg2)
	{
		return null;
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x2416870", Offset = "0x2414E70", VA = "0x182416870")]
	internal static InvocationExpression Invoke(Expression expression, Expression arg0, Expression arg1, Expression arg2, Expression arg3)
	{
		return null;
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x2416400", Offset = "0x2414A00", VA = "0x182416400")]
	internal static InvocationExpression Invoke(Expression expression, Expression arg0, Expression arg1, Expression arg2, Expression arg3, Expression arg4)
	{
		return null;
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x2415670", Offset = "0x2413C70", VA = "0x182415670")]
	public static InvocationExpression Invoke(Expression expression, IEnumerable<Expression> arguments)
	{
		return null;
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x2412500", Offset = "0x2410B00", VA = "0x182412500")]
	internal static MethodInfo GetInvokeMethod(Expression expression)
	{
		return null;
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x24176C0", Offset = "0x2415CC0", VA = "0x1824176C0")]
	public static LabelExpression Label(LabelTarget target)
	{
		return null;
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x24175F0", Offset = "0x2415BF0", VA = "0x1824175F0")]
	public static LabelExpression Label(LabelTarget target, Expression defaultValue)
	{
		return null;
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x24177C0", Offset = "0x2415DC0", VA = "0x1824177C0")]
	public static LabelTarget Label()
	{
		return null;
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x2417570", Offset = "0x2415B70", VA = "0x182417570")]
	public static LabelTarget Label(string name)
	{
		return null;
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x2417900", Offset = "0x2415F00", VA = "0x182417900")]
	public static LabelTarget Label(Type type)
	{
		return null;
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x2417840", Offset = "0x2415E40", VA = "0x182417840")]
	public static LabelTarget Label(Type type, string name)
	{
		return null;
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x24104D0", Offset = "0x240EAD0", VA = "0x1824104D0")]
	internal static LambdaExpression CreateLambda(Type delegateType, Expression body, string name, bool tailCall, ReadOnlyCollection<ParameterExpression> parameters)
	{
		return null;
	}

	[Token(Token = "0x600025E")]
	public static Expression<TDelegate> Lambda<TDelegate>(Expression body, params ParameterExpression[] parameters)
	{
		return null;
	}

	[Token(Token = "0x600025F")]
	public static Expression<TDelegate> Lambda<TDelegate>(Expression body, IEnumerable<ParameterExpression> parameters)
	{
		return null;
	}

	[Token(Token = "0x6000260")]
	public static Expression<TDelegate> Lambda<TDelegate>(Expression body, bool tailCall, IEnumerable<ParameterExpression> parameters)
	{
		return null;
	}

	[Token(Token = "0x6000261")]
	public static Expression<TDelegate> Lambda<TDelegate>(Expression body, string name, bool tailCall, IEnumerable<ParameterExpression> parameters)
	{
		return null;
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x2417950", Offset = "0x2415F50", VA = "0x182417950")]
	public static LambdaExpression Lambda(Type delegateType, Expression body, params ParameterExpression[] parameters)
	{
		return null;
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x2417A50", Offset = "0x2416050", VA = "0x182417A50")]
	public static LambdaExpression Lambda(Type delegateType, Expression body, string name, bool tailCall, IEnumerable<ParameterExpression> parameters)
	{
		return null;
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x2421FF0", Offset = "0x24205F0", VA = "0x182421FF0")]
	private static void ValidateLambdaArgs(Type delegateType, ref Expression body, ReadOnlyCollection<ParameterExpression> parameters, string paramName)
	{
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x2418210", Offset = "0x2416810", VA = "0x182418210")]
	public static LoopExpression Loop(Expression body, LabelTarget @break, LabelTarget @continue)
	{
		return null;
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x2411980", Offset = "0x240FF80", VA = "0x182411980")]
	public static MemberExpression Field(Expression expression, FieldInfo field)
	{
		return null;
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x2411800", Offset = "0x240FE00", VA = "0x182411800")]
	public static MemberExpression Field(Expression expression, string fieldName)
	{
		return null;
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x241E830", Offset = "0x241CE30", VA = "0x18241E830")]
	public static MemberExpression Property(Expression expression, string propertyName)
	{
		return null;
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x241E4D0", Offset = "0x241CAD0", VA = "0x18241E4D0")]
	public static MemberExpression Property(Expression expression, PropertyInfo property)
	{
		return null;
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x24198B0", Offset = "0x2417EB0", VA = "0x1824198B0")]
	public static MemberExpression MakeMemberAccess(Expression expression, MemberInfo member)
	{
		return null;
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x240E7D0", Offset = "0x240CDD0", VA = "0x18240E7D0")]
	internal static MethodCallExpression Call(MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x240EB40", Offset = "0x240D140", VA = "0x18240EB40")]
	public static MethodCallExpression Call(MethodInfo method, Expression arg0)
	{
		return null;
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x240EC90", Offset = "0x240D290", VA = "0x18240EC90")]
	public static MethodCallExpression Call(MethodInfo method, Expression arg0, Expression arg1)
	{
		return null;
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x240DCE0", Offset = "0x240C2E0", VA = "0x18240DCE0")]
	public static MethodCallExpression Call(MethodInfo method, Expression arg0, Expression arg1, Expression arg2)
	{
		return null;
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x240E890", Offset = "0x240CE90", VA = "0x18240E890")]
	public static MethodCallExpression Call(MethodInfo method, Expression arg0, Expression arg1, Expression arg2, Expression arg3)
	{
		return null;
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x240E120", Offset = "0x240C720", VA = "0x18240E120")]
	public static MethodCallExpression Call(MethodInfo method, Expression arg0, Expression arg1, Expression arg2, Expression arg3, Expression arg4)
	{
		return null;
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x240EE60", Offset = "0x240D460", VA = "0x18240EE60")]
	public static MethodCallExpression Call(MethodInfo method, params Expression[] arguments)
	{
		return null;
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x240F240", Offset = "0x240D840", VA = "0x18240F240")]
	public static MethodCallExpression Call(MethodInfo method, IEnumerable<Expression> arguments)
	{
		return null;
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x240E6C0", Offset = "0x240CCC0", VA = "0x18240E6C0")]
	public static MethodCallExpression Call(Expression instance, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x240EEF0", Offset = "0x240D4F0", VA = "0x18240EEF0")]
	public static MethodCallExpression Call(Expression instance, MethodInfo method, params Expression[] arguments)
	{
		return null;
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x240EF60", Offset = "0x240D560", VA = "0x18240EF60")]
	internal static MethodCallExpression Call(Expression instance, MethodInfo method, Expression arg0)
	{
		return null;
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x240DF10", Offset = "0x240C510", VA = "0x18240DF10")]
	public static MethodCallExpression Call(Expression instance, MethodInfo method, Expression arg0, Expression arg1)
	{
		return null;
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x240E440", Offset = "0x240CA40", VA = "0x18240E440")]
	public static MethodCallExpression Call(Expression instance, MethodInfo method, Expression arg0, Expression arg1, Expression arg2)
	{
		return null;
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x240F0F0", Offset = "0x240D6F0", VA = "0x18240F0F0")]
	public static MethodCallExpression Call(Expression instance, string methodName, Type[] typeArguments, params Expression[] arguments)
	{
		return null;
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x240D380", Offset = "0x240B980", VA = "0x18240D380")]
	public static MethodCallExpression Call(Expression instance, MethodInfo method, IEnumerable<Expression> arguments)
	{
		return null;
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x24226E0", Offset = "0x2420CE0", VA = "0x1824226E0")]
	private static ParameterInfo[] ValidateMethodAndGetParameters(Expression instance, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x2422EB0", Offset = "0x24214B0", VA = "0x182422EB0")]
	private static void ValidateStaticOrInstanceMethod(Expression instance, MethodInfo method)
	{
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x2421370", Offset = "0x241F970", VA = "0x182421370")]
	private static void ValidateCallInstanceType(Type instanceType, MethodInfo method)
	{
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x2421360", Offset = "0x241F960", VA = "0x182421360")]
	private static void ValidateArgumentTypes(MethodBase method, ExpressionType nodeKind, ref ReadOnlyCollection<Expression> arguments, string methodParamName)
	{
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x2413C70", Offset = "0x2412270", VA = "0x182413C70")]
	private static ParameterInfo[] GetParametersForValidation(MethodBase method, ExpressionType nodeKind)
	{
		return null;
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x2421350", Offset = "0x241F950", VA = "0x182421350")]
	private static void ValidateArgumentCount(MethodBase method, ExpressionType nodeKind, int count, ParameterInfo[] pis)
	{
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x2422930", Offset = "0x2420F30", VA = "0x182422930")]
	private static Expression ValidateOneArgument(MethodBase method, ExpressionType nodeKind, Expression arg, ParameterInfo pi, string methodParamName, string argumentParamName)
	{
		return null;
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x2420570", Offset = "0x241EB70", VA = "0x182420570")]
	private static bool TryQuote(Type parameterType, ref Expression argument)
	{
		return default(bool);
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x2411B70", Offset = "0x2410170", VA = "0x182411B70")]
	private static MethodInfo FindMethod(Type type, string methodName, Type[] typeArgs, Expression[] args, BindingFlags flags)
	{
		return null;
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x2416B10", Offset = "0x2415110", VA = "0x182416B10")]
	private static bool IsCompatible(MethodBase m, Expression[] arguments)
	{
		return default(bool);
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x240B8F0", Offset = "0x2409EF0", VA = "0x18240B8F0")]
	private static MethodInfo ApplyTypeArgs(MethodInfo m, Type[] typeArgs)
	{
		return null;
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x241CBB0", Offset = "0x241B1B0", VA = "0x18241CBB0")]
	public static NewArrayExpression NewArrayInit(Type type, params Expression[] initializers)
	{
		return null;
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x241C790", Offset = "0x241AD90", VA = "0x18241C790")]
	public static NewArrayExpression NewArrayInit(Type type, IEnumerable<Expression> initializers)
	{
		return null;
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x241C4D0", Offset = "0x241AAD0", VA = "0x18241C4D0")]
	public static NewArrayExpression NewArrayBounds(Type type, IEnumerable<Expression> bounds)
	{
		return null;
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x241DC00", Offset = "0x241C200", VA = "0x18241DC00")]
	public static ParameterExpression Parameter(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x241DCD0", Offset = "0x241C2D0", VA = "0x18241DCD0")]
	public static ParameterExpression Parameter(Type type, string name)
	{
		return null;
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x24240E0", Offset = "0x24226E0", VA = "0x1824240E0")]
	public static ParameterExpression Variable(Type type, string name)
	{
		return null;
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x2423FE0", Offset = "0x24225E0", VA = "0x182423FE0")]
	private static void Validate(Type type, bool allowByRef)
	{
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x2420500", Offset = "0x241EB00", VA = "0x182420500")]
	public static TryExpression TryFinally(Expression body, Expression @finally)
	{
		return null;
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x2419CF0", Offset = "0x24182F0", VA = "0x182419CF0")]
	public static TryExpression MakeTry(Type type, Expression body, Expression @finally, Expression fault, IEnumerable<CatchBlock> handlers)
	{
		return null;
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x2422FB0", Offset = "0x24215B0", VA = "0x182422FB0")]
	private static void ValidateTryAndCatchHaveSameType(Type type, Expression tryBody, ReadOnlyCollection<CatchBlock> handlers)
	{
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x24207E0", Offset = "0x241EDE0", VA = "0x1824207E0")]
	public static TypeBinaryExpression TypeIs(Expression expression, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x24206E0", Offset = "0x241ECE0", VA = "0x1824206E0")]
	public static TypeBinaryExpression TypeEqual(Expression expression, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x2419F40", Offset = "0x2418540", VA = "0x182419F40")]
	public static UnaryExpression MakeUnary(ExpressionType unaryType, Expression operand, Type type, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x2414BF0", Offset = "0x24131F0", VA = "0x182414BF0")]
	private static UnaryExpression GetUserDefinedUnaryOperatorOrThrow(ExpressionType unaryType, string name, Expression operand)
	{
		return null;
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x2414D80", Offset = "0x2413380", VA = "0x182414D80")]
	private static UnaryExpression GetUserDefinedUnaryOperator(ExpressionType unaryType, string name, Expression operand)
	{
		return null;
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x2413400", Offset = "0x2411A00", VA = "0x182413400")]
	private static UnaryExpression GetMethodBasedUnaryOperator(ExpressionType unaryType, Expression operand, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x2414980", Offset = "0x2412F80", VA = "0x182414980")]
	private static UnaryExpression GetUserDefinedCoercionOrThrow(ExpressionType coercionType, Expression expression, Type convertToType)
	{
		return null;
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x2414AF0", Offset = "0x24130F0", VA = "0x182414AF0")]
	private static UnaryExpression GetUserDefinedCoercion(ExpressionType coercionType, Expression expression, Type convertToType)
	{
		return null;
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x2413000", Offset = "0x2411600", VA = "0x182413000")]
	private static UnaryExpression GetMethodBasedCoercionOperator(ExpressionType unaryType, Expression operand, Type convertToType, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x241C300", Offset = "0x241A900", VA = "0x18241C300")]
	public static UnaryExpression Negate(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x24208E0", Offset = "0x241EEE0", VA = "0x1824208E0")]
	public static UnaryExpression UnaryPlus(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x241C130", Offset = "0x241A730", VA = "0x18241C130")]
	public static UnaryExpression NegateChecked(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x241CD90", Offset = "0x241B390", VA = "0x18241CD90")]
	public static UnaryExpression Not(Expression expression)
	{
		return null;
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x241CDE0", Offset = "0x241B3E0", VA = "0x18241CDE0")]
	public static UnaryExpression Not(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x2416D30", Offset = "0x2415330", VA = "0x182416D30")]
	public static UnaryExpression IsFalse(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x24172D0", Offset = "0x24158D0", VA = "0x1824172D0")]
	public static UnaryExpression IsTrue(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600029F")]
	[Address(RVA = "0x241CFB0", Offset = "0x241B5B0", VA = "0x18241CFB0")]
	public static UnaryExpression OnesComplement(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x2420580", Offset = "0x241EB80", VA = "0x182420580")]
	public static UnaryExpression TypeAs(Expression expression, Type type)
	{
		return null;
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x2420A70", Offset = "0x241F070", VA = "0x182420A70")]
	public static UnaryExpression Unbox(Expression expression, Type type)
	{
		return null;
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x2410470", Offset = "0x240EA70", VA = "0x182410470")]
	public static UnaryExpression Convert(Expression expression, Type type)
	{
		return null;
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x2410270", Offset = "0x240E870", VA = "0x182410270")]
	public static UnaryExpression Convert(Expression expression, Type type, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x2410040", Offset = "0x240E640", VA = "0x182410040")]
	public static UnaryExpression ConvertChecked(Expression expression, Type type, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x240BFF0", Offset = "0x240A5F0", VA = "0x18240BFF0")]
	public static UnaryExpression ArrayLength(Expression array)
	{
		return null;
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x241EAC0", Offset = "0x241D0C0", VA = "0x18241EAC0")]
	public static UnaryExpression Quote(Expression expression)
	{
		return null;
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x24203A0", Offset = "0x241E9A0", VA = "0x1824203A0")]
	public static UnaryExpression Throw(Expression value, Type type)
	{
		return null;
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x24154E0", Offset = "0x2413AE0", VA = "0x1824154E0")]
	public static UnaryExpression Increment(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x2410A20", Offset = "0x240F020", VA = "0x182410A20")]
	public static UnaryExpression Decrement(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x241E470", Offset = "0x241CA70", VA = "0x18241E470")]
	public static UnaryExpression PreIncrementAssign(Expression expression)
	{
		return null;
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x241E410", Offset = "0x241CA10", VA = "0x18241E410")]
	public static UnaryExpression PreIncrementAssign(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x241E3B0", Offset = "0x241C9B0", VA = "0x18241E3B0")]
	public static UnaryExpression PreDecrementAssign(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x241DDE0", Offset = "0x241C3E0", VA = "0x18241DDE0")]
	public static UnaryExpression PostIncrementAssign(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x241DD80", Offset = "0x241C380", VA = "0x18241DD80")]
	public static UnaryExpression PostDecrementAssign(Expression expression, MethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x2419A50", Offset = "0x2418050", VA = "0x182419A50")]
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
		[Token(Token = "0x6000445")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AF")]
	internal override Type PublicType
	{
		[Token(Token = "0x6000446")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000444")]
	internal Expression(Expression body)
	{
	}

	[Token(Token = "0x6000447")]
	public TDelegate Compile()
	{
		return (TDelegate)null;
	}

	[Token(Token = "0x6000448")]
	public TDelegate Compile(bool preferInterpretation)
	{
		return (TDelegate)null;
	}

	[Token(Token = "0x6000449")]
	[ExcludeFromCodeCoverage]
	internal virtual Expression<TDelegate> Rewrite(Expression body, ParameterExpression[] parameters)
	{
		return null;
	}

	[Token(Token = "0x600044A")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}
}
