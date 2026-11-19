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

[Token(Token = "0x20000C4")]
[DebuggerTypeProxy(typeof(TryExpressionProxy))]
public sealed class TryExpression : Expression
{
	[Token(Token = "0x1700012A")]
	public sealed override Type Type
	{
		[Token(Token = "0x600056D")]
		[Address(RVA = "0x5DD6150", Offset = "0x5DD5150", VA = "0x5DD6150", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012B")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x600056E")]
		[Address(RVA = "0x5DD6160", Offset = "0x5DD5160", VA = "0x5DD6160", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x1700012C")]
	public Expression Body
	{
		[Token(Token = "0x600056F")]
		[Address(RVA = "0x5DD6170", Offset = "0x5DD5170", VA = "0x5DD6170")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012D")]
	public ReadOnlyCollection<CatchBlock> Handlers
	{
		[Token(Token = "0x6000570")]
		[Address(RVA = "0x5DD6180", Offset = "0x5DD5180", VA = "0x5DD6180")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012E")]
	public Expression Finally
	{
		[Token(Token = "0x6000571")]
		[Address(RVA = "0x5DD6190", Offset = "0x5DD5190", VA = "0x5DD6190")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012F")]
	public Expression Fault
	{
		[Token(Token = "0x6000572")]
		[Address(RVA = "0x5DD61A0", Offset = "0x5DD51A0", VA = "0x5DD61A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x5DD6090", Offset = "0x5DD5090", VA = "0x5DD6090")]
	internal TryExpression(Type type, Expression body, Expression @finally, Expression fault, ReadOnlyCollection<CatchBlock> handlers)
	{
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x5DD61B0", Offset = "0x5DD51B0", VA = "0x5DD61B0", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x5DD0D50", Offset = "0x5DCFD50", VA = "0x5DD0D50")]
	public TryExpression Update(Expression body, IEnumerable<CatchBlock> handlers, Expression @finally, Expression fault)
	{
		return null;
	}
}
