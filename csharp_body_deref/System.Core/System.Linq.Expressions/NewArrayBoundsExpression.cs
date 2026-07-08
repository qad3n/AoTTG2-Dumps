using System.Collections.ObjectModel;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000B6")]
internal sealed class NewArrayBoundsExpression : NewArrayExpression
{
	[Token(Token = "0x170000DE")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x60004C9")]
		[Address(RVA = "0x419A650", Offset = "0x419A650", VA = "0x419A650", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x419A570", Offset = "0x419A570", VA = "0x419A570")]
	internal NewArrayBoundsExpression(Type type, ReadOnlyCollection<Expression> expressions)
	{
	}
}
