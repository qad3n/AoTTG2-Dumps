// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.MemberExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000A0")]
[DebuggerTypeProxy(typeof(MemberExpressionProxy))]
public class MemberExpression : Expression
{
	[Token(Token = "0x170000C1")]
	public MemberInfo Member
	{
		[Token(Token = "0x6000471")]
		[Address(RVA = "0x44B82F0", Offset = "0x44B82F0", VA = "0x44B82F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C2")]
	public Expression Expression
	{
		[Token(Token = "0x6000472")]
		[Address(RVA = "0x44BCD10", Offset = "0x44BCD10", VA = "0x44BCD10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C3")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x6000476")]
		[Address(RVA = "0x44BCFF0", Offset = "0x44BCFF0", VA = "0x44BCFF0", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x44BCD20", Offset = "0x44BCD20", VA = "0x44BCD20")]
	internal MemberExpression(Expression expression)
	{
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x44BCD90", Offset = "0x44BCD90", VA = "0x44BCD90")]
	internal static PropertyExpression Make(Expression expression, PropertyInfo property)
	{
		return null;
	}

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x44BCEC0", Offset = "0x44BCEC0", VA = "0x44BCEC0")]
	internal static FieldExpression Make(Expression expression, FieldInfo field)
	{
		return null;
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x44BD000", Offset = "0x44BD000", VA = "0x44BD000", Slot = "10")]
	[ExcludeFromCodeCoverage]
	internal virtual MemberInfo GetMember()
	{
		return null;
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x44BD030", Offset = "0x44BD030", VA = "0x44BD030", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x44BA880", Offset = "0x44BA880", VA = "0x44BA880")]
	public MemberExpression Update(Expression expression)
	{
		return null;
	}
}
