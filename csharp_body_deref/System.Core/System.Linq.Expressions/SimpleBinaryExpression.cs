using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000049")]
internal class SimpleBinaryExpression : BinaryExpression
{
	[Token(Token = "0x17000055")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x60001D7")]
		[Address(RVA = "0x4171DE0", Offset = "0x4171DE0", VA = "0x4171DE0", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x17000056")]
	public sealed override Type Type
	{
		[Token(Token = "0x60001D8")]
		[Address(RVA = "0x4171DF0", Offset = "0x4171DF0", VA = "0x4171DF0", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x4171D40", Offset = "0x4171D40", VA = "0x4171D40")]
	internal SimpleBinaryExpression(ExpressionType nodeType, Expression left, Expression right, Type type)
	{
	}
}
