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
		[Address(RVA = "0x4197B20", Offset = "0x4197B20", VA = "0x4197B20", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BA")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x6000468")]
		[Address(RVA = "0x4197B70", Offset = "0x4197B70", VA = "0x4197B70", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x170000BB")]
	public Expression Body
	{
		[Token(Token = "0x6000469")]
		[Address(RVA = "0x4197B80", Offset = "0x4197B80", VA = "0x4197B80")]
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
		[Address(RVA = "0x4197B90", Offset = "0x4197B90", VA = "0x4197B90")]
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
		[Address(RVA = "0x4197BA0", Offset = "0x4197BA0", VA = "0x4197BA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x4197A90", Offset = "0x4197A90", VA = "0x4197A90")]
	internal LoopExpression(Expression body, LabelTarget @break, LabelTarget @continue)
	{
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x4197BB0", Offset = "0x4197BB0", VA = "0x4197BB0", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x4195650", Offset = "0x4195650", VA = "0x4195650")]
	public LoopExpression Update(LabelTarget breakLabel, LabelTarget continueLabel, Expression body)
	{
		return null;
	}
}
