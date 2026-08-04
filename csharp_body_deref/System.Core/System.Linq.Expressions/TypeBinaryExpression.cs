// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.TypeBinaryExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000C4")]
[DebuggerTypeProxy(typeof(TypeBinaryExpressionProxy))]
public sealed class TypeBinaryExpression : Expression
{
	[Token(Token = "0x1700012E")]
	public sealed override Type Type
	{
		[Token(Token = "0x600056C")]
		[Address(RVA = "0x44C0490", Offset = "0x44C0490", VA = "0x44C0490", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012F")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x600056D")]
		[Address(RVA = "0x44C04D0", Offset = "0x44C04D0", VA = "0x44C04D0", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x17000130")]
	public Expression Expression
	{
		[Token(Token = "0x600056E")]
		[Address(RVA = "0x44C04E0", Offset = "0x44C04E0", VA = "0x44C04E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000131")]
	public Type TypeOperand
	{
		[Token(Token = "0x600056F")]
		[Address(RVA = "0x44C04F0", Offset = "0x44C04F0", VA = "0x44C04F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x44C0410", Offset = "0x44C0410", VA = "0x44C0410")]
	internal TypeBinaryExpression(Expression expression, Type typeOperand, ExpressionType nodeType)
	{
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x44C0500", Offset = "0x44C0500", VA = "0x44C0500", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x44BB000", Offset = "0x44BB000", VA = "0x44BB000")]
	public TypeBinaryExpression Update(Expression expression)
	{
		return null;
	}
}
