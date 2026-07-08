using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000084")]
[DebuggerTypeProxy(typeof(GotoExpressionProxy))]
public sealed class GotoExpression : Expression
{
	[Token(Token = "0x17000085")]
	public sealed override Type Type
	{
		[Token(Token = "0x60003F3")]
		[Address(RVA = "0x4196360", Offset = "0x4196360", VA = "0x4196360", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000086")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x60003F4")]
		[Address(RVA = "0x4196370", Offset = "0x4196370", VA = "0x4196370", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x17000087")]
	public Expression Value
	{
		[Token(Token = "0x60003F5")]
		[Address(RVA = "0x4196380", Offset = "0x4196380", VA = "0x4196380")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000088")]
	public LabelTarget Target
	{
		[Token(Token = "0x60003F6")]
		[Address(RVA = "0x4196390", Offset = "0x4196390", VA = "0x4196390")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000089")]
	public GotoExpressionKind Kind
	{
		[Token(Token = "0x60003F7")]
		[Address(RVA = "0x41963A0", Offset = "0x41963A0", VA = "0x41963A0")]
		[CompilerGenerated]
		get
		{
			return default(GotoExpressionKind);
		}
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x41962C0", Offset = "0x41962C0", VA = "0x41962C0")]
	internal GotoExpression(GotoExpressionKind kind, LabelTarget target, Expression value, Type type)
	{
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x41963B0", Offset = "0x41963B0", VA = "0x41963B0", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x4195320", Offset = "0x4195320", VA = "0x4195320")]
	public GotoExpression Update(LabelTarget target, Expression value)
	{
		return null;
	}
}
