using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200019D")]
internal sealed class LightDelegateCreator
{
	[Token(Token = "0x400037D")]
	[FieldOffset(Offset = "0x10")]
	private readonly LambdaExpression _lambda;

	[Token(Token = "0x170001D3")]
	internal Interpreter Interpreter
	{
		[Token(Token = "0x60008F2")]
		[Address(RVA = "0x41CD240", Offset = "0x41CD240", VA = "0x41CD240")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008F1")]
	[Address(RVA = "0x41CD200", Offset = "0x41CD200", VA = "0x41CD200")]
	internal LightDelegateCreator(Interpreter interpreter, LambdaExpression lambda)
	{
	}

	[Token(Token = "0x60008F3")]
	[Address(RVA = "0x41CD250", Offset = "0x41CD250", VA = "0x41CD250")]
	public Delegate CreateDelegate()
	{
		return null;
	}

	[Token(Token = "0x60008F4")]
	[Address(RVA = "0x41CD260", Offset = "0x41CD260", VA = "0x41CD260")]
	internal Delegate CreateDelegate(IStrongBox[] closure)
	{
		return null;
	}
}
