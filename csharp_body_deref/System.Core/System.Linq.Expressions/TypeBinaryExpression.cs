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
		[Token(Token = "0x600056B")]
		[Address(RVA = "0x2424790", Offset = "0x2422D90", VA = "0x182424790", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012F")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x600056C")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x17000130")]
	public Expression Expression
	{
		[Token(Token = "0x600056D")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000131")]
	public Type TypeOperand
	{
		[Token(Token = "0x600056E")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x2441960", Offset = "0x243FF60", VA = "0x182441960")]
	internal TypeBinaryExpression(Expression expression, Type typeOperand, ExpressionType nodeType)
	{
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x2441880", Offset = "0x243FE80", VA = "0x182441880", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x24418B0", Offset = "0x243FEB0", VA = "0x1824418B0")]
	public TypeBinaryExpression Update(Expression expression)
	{
		return null;
	}
}
