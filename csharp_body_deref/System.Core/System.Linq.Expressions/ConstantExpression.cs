using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200007A")]
[DebuggerTypeProxy(typeof(ConstantExpressionProxy))]
public class ConstantExpression : Expression
{
	[Token(Token = "0x17000078")]
	public override Type Type
	{
		[Token(Token = "0x6000318")]
		[Address(RVA = "0x418B960", Offset = "0x418B960", VA = "0x418B960", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000079")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x6000319")]
		[Address(RVA = "0x418B9B0", Offset = "0x418B9B0", VA = "0x418B9B0", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x1700007A")]
	public object Value
	{
		[Token(Token = "0x600031A")]
		[Address(RVA = "0x418B9C0", Offset = "0x418B9C0", VA = "0x418B9C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x418B8F0", Offset = "0x418B8F0", VA = "0x418B8F0")]
	internal ConstantExpression(object value)
	{
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x418B9D0", Offset = "0x418B9D0", VA = "0x418B9D0", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}
}
