using System.Collections.ObjectModel;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000B5")]
internal sealed class NewArrayInitExpression : NewArrayExpression
{
	[Token(Token = "0x170000DD")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x60004C7")]
		[Address(RVA = "0x419A640", Offset = "0x419A640", VA = "0x419A640", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x419A4F0", Offset = "0x419A4F0", VA = "0x419A4F0")]
	internal NewArrayInitExpression(Type type, ReadOnlyCollection<Expression> expressions)
	{
	}
}
