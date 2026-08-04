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
		[Token(Token = "0x6000467")]
		[Address(RVA = "0x44BCC20", Offset = "0x44BCC20", VA = "0x44BCC20", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BA")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x6000468")]
		[Address(RVA = "0x44BCC70", Offset = "0x44BCC70", VA = "0x44BCC70", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x170000BB")]
	public Expression Body
	{
		[Token(Token = "0x6000469")]
		[Address(RVA = "0x44BCC80", Offset = "0x44BCC80", VA = "0x44BCC80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BC")]
	public LabelTarget BreakLabel
	{
		[Token(Token = "0x600046A")]
		[Address(RVA = "0x44BCC90", Offset = "0x44BCC90", VA = "0x44BCC90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BD")]
	public LabelTarget ContinueLabel
	{
		[Token(Token = "0x600046B")]
		[Address(RVA = "0x44BCCA0", Offset = "0x44BCCA0", VA = "0x44BCCA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x44BCB90", Offset = "0x44BCB90", VA = "0x44BCB90")]
	internal LoopExpression(Expression body, LabelTarget @break, LabelTarget @continue)
	{
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x44BCCB0", Offset = "0x44BCCB0", VA = "0x44BCCB0", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x44BA750", Offset = "0x44BA750", VA = "0x44BA750")]
	public LoopExpression Update(LabelTarget breakLabel, LabelTarget continueLabel, Expression body)
	{
		return null;
	}
}
