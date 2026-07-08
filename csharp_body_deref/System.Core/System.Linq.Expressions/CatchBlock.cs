using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000073")]
[DebuggerTypeProxy(typeof(Expression.CatchBlockProxy))]
public sealed class CatchBlock
{
	[Token(Token = "0x1700006E")]
	public ParameterExpression Variable
	{
		[Token(Token = "0x6000300")]
		[Address(RVA = "0x418AF50", Offset = "0x418AF50", VA = "0x418AF50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006F")]
	public Type Test
	{
		[Token(Token = "0x6000301")]
		[Address(RVA = "0x418AF60", Offset = "0x418AF60", VA = "0x418AF60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000070")]
	public Expression Body
	{
		[Token(Token = "0x6000302")]
		[Address(RVA = "0x418AF70", Offset = "0x418AF70", VA = "0x418AF70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000071")]
	public Expression Filter
	{
		[Token(Token = "0x6000303")]
		[Address(RVA = "0x418AF80", Offset = "0x418AF80", VA = "0x418AF80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x418AEE0", Offset = "0x418AEE0", VA = "0x418AEE0")]
	internal CatchBlock(Type test, ParameterExpression variable, Expression body, Expression filter)
	{
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x418AF90", Offset = "0x418AF90", VA = "0x418AF90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x418B070", Offset = "0x418B070", VA = "0x418B070")]
	public CatchBlock Update(ParameterExpression variable, Expression filter, Expression body)
	{
		return null;
	}
}
