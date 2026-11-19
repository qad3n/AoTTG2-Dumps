// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.LoopExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200009D")]
[DebuggerTypeProxy(typeof(LoopExpressionProxy))]
public sealed class LoopExpression : Expression
{
	[Token(Token = "0x170000BB")]
	public sealed override Type Type
	{
		[Token(Token = "0x6000471")]
		[Address(RVA = "0x5DD2A90", Offset = "0x5DD1A90", VA = "0x5DD2A90", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BC")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x6000472")]
		[Address(RVA = "0x5DD2AE0", Offset = "0x5DD1AE0", VA = "0x5DD2AE0", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x170000BD")]
	public Expression Body
	{
		[Token(Token = "0x6000473")]
		[Address(RVA = "0x5DD2AF0", Offset = "0x5DD1AF0", VA = "0x5DD2AF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BE")]
	public LabelTarget BreakLabel
	{
		[Token(Token = "0x6000474")]
		[Address(RVA = "0x5DD2B00", Offset = "0x5DD1B00", VA = "0x5DD2B00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BF")]
	public LabelTarget ContinueLabel
	{
		[Token(Token = "0x6000475")]
		[Address(RVA = "0x5DD2B10", Offset = "0x5DD1B10", VA = "0x5DD2B10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x5DD2A00", Offset = "0x5DD1A00", VA = "0x5DD2A00")]
	internal LoopExpression(Expression body, LabelTarget @break, LabelTarget @continue)
	{
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x5DD2B20", Offset = "0x5DD1B20", VA = "0x5DD2B20", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x5DD0620", Offset = "0x5DCF620", VA = "0x5DD0620")]
	public LoopExpression Update(LabelTarget breakLabel, LabelTarget continueLabel, Expression body)
	{
		return null;
	}
}
