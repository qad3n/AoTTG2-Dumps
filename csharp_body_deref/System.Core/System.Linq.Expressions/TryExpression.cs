// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.TryExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000C3")]
[DebuggerTypeProxy(typeof(TryExpressionProxy))]
public sealed class TryExpression : Expression
{
	[Token(Token = "0x17000128")]
	public sealed override Type Type
	{
		[Token(Token = "0x6000562")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000129")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x6000563")]
		[Address(RVA = "0x2441870", Offset = "0x243FE70", VA = "0x182441870", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x1700012A")]
	public Expression Body
	{
		[Token(Token = "0x6000564")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012B")]
	public ReadOnlyCollection<CatchBlock> Handlers
	{
		[Token(Token = "0x6000565")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012C")]
	public Expression Finally
	{
		[Token(Token = "0x6000566")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012D")]
	public Expression Fault
	{
		[Token(Token = "0x6000567")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x24417C0", Offset = "0x243FDC0", VA = "0x1824417C0")]
	internal TryExpression(Type type, Expression body, Expression @finally, Expression fault, ReadOnlyCollection<CatchBlock> handlers)
	{
	}

	[Token(Token = "0x6000568")]
	[Address(RVA = "0x2441690", Offset = "0x243FC90", VA = "0x182441690", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x6000569")]
	[Address(RVA = "0x24416C0", Offset = "0x243FCC0", VA = "0x1824416C0")]
	public TryExpression Update(Expression body, IEnumerable<CatchBlock> handlers, Expression @finally, Expression fault)
	{
		return null;
	}
}
