using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000085")]
public interface IArgumentProvider
{
	[Token(Token = "0x1700008A")]
	int ArgumentCount
	{
		[Token(Token = "0x60003FB")]
		get;
	}

	[Token(Token = "0x60003FA")]
	Expression GetArgument(int index);
}
