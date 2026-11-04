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

[Token(Token = "0x200009C")]
[DebuggerTypeProxy(typeof(LoopExpressionProxy))]
public sealed class LoopExpression : Expression
{
	[Token(Token = "0x170000B9")]
	public sealed override Type Type
	{
		[Token(Token = "0x6000466")]
		[Address(RVA = "0x243C1F0", Offset = "0x243A7F0", VA = "0x18243C1F0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BA")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x6000467")]
		[Address(RVA = "0x232BB20", Offset = "0x232A120", VA = "0x18232BB20", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x170000BB")]
	public Expression Body
	{
		[Token(Token = "0x6000468")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BC")]
	public LabelTarget BreakLabel
	{
		[Token(Token = "0x6000469")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BD")]
	public LabelTarget ContinueLabel
	{
		[Token(Token = "0x600046A")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x243C160", Offset = "0x243A760", VA = "0x18243C160")]
	internal LoopExpression(Expression body, LabelTarget @break, LabelTarget @continue)
	{
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x243C0B0", Offset = "0x243A6B0", VA = "0x18243C0B0", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x243C0E0", Offset = "0x243A6E0", VA = "0x18243C0E0")]
	public LoopExpression Update(LabelTarget breakLabel, LabelTarget continueLabel, Expression body)
	{
		return null;
	}
}
