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

[Token(Token = "0x20000C5")]
[DebuggerTypeProxy(typeof(TypeBinaryExpressionProxy))]
public sealed class TypeBinaryExpression : Expression
{
	[Token(Token = "0x17000130")]
	public sealed override Type Type
	{
		[Token(Token = "0x6000576")]
		[Address(RVA = "0x5DD6260", Offset = "0x5DD5260", VA = "0x5DD6260", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000131")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x6000577")]
		[Address(RVA = "0x5DD6290", Offset = "0x5DD5290", VA = "0x5DD6290", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x17000132")]
	public Expression Expression
	{
		[Token(Token = "0x6000578")]
		[Address(RVA = "0x5DD62A0", Offset = "0x5DD52A0", VA = "0x5DD62A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000133")]
	public Type TypeOperand
	{
		[Token(Token = "0x6000579")]
		[Address(RVA = "0x5DD62B0", Offset = "0x5DD52B0", VA = "0x5DD62B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x5DD61E0", Offset = "0x5DD51E0", VA = "0x5DD61E0")]
	internal TypeBinaryExpression(Expression expression, Type typeOperand, ExpressionType nodeType)
	{
	}

	[Token(Token = "0x600057A")]
	[Address(RVA = "0x5DD62C0", Offset = "0x5DD52C0", VA = "0x5DD62C0", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x600057B")]
	[Address(RVA = "0x5DD0E60", Offset = "0x5DCFE60", VA = "0x5DD0E60")]
	public TypeBinaryExpression Update(Expression expression)
	{
		return null;
	}
}
