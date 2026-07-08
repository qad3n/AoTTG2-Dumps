using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000045")]
internal sealed class LogicalBinaryExpression : BinaryExpression
{
	[Token(Token = "0x1700004F")]
	public sealed override Type Type
	{
		[Token(Token = "0x60001CB")]
		[Address(RVA = "0x4171A60", Offset = "0x4171A60", VA = "0x4171A60", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000050")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x60001CC")]
		[Address(RVA = "0x4171AA0", Offset = "0x4171AA0", VA = "0x4171AA0", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x41719E0", Offset = "0x41719E0", VA = "0x41719E0")]
	internal LogicalBinaryExpression(ExpressionType nodeType, Expression left, Expression right)
	{
	}
}
