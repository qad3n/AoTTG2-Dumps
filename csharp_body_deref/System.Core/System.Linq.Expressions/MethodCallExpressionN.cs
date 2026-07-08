using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000A8")]
internal sealed class MethodCallExpressionN : MethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x40001BA")]
	[FieldOffset(Offset = "0x18")]
	private IReadOnlyList<Expression> _arguments;

	[Token(Token = "0x170000CF")]
	public override int ArgumentCount
	{
		[Token(Token = "0x6000492")]
		[Address(RVA = "0x4198370", Offset = "0x4198370", VA = "0x4198370", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x4198240", Offset = "0x4198240", VA = "0x4198240")]
	public MethodCallExpressionN(MethodInfo method, IReadOnlyList<Expression> args)
	{
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x41982C0", Offset = "0x41982C0", VA = "0x41982C0", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x4198400", Offset = "0x4198400", VA = "0x4198400", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
