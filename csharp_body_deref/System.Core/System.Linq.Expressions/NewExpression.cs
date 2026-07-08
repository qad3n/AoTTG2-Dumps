using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000B7")]
[DebuggerTypeProxy(typeof(NewExpressionProxy))]
public class NewExpression : Expression
{
	[Token(Token = "0x40001D3")]
	[FieldOffset(Offset = "0x10")]
	private IReadOnlyList<Expression> _arguments;

	[Token(Token = "0x170000DF")]
	public ConstructorInfo Constructor
	{
		[Token(Token = "0x60004CA")]
		[Address(RVA = "0x419A660", Offset = "0x419A660", VA = "0x419A660")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x419A670", Offset = "0x419A670", VA = "0x419A670", Slot = "10")]
	public Expression GetArgument(int index)
	{
		return null;
	}
}
