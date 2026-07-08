using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000086")]
internal interface IParameterProvider
{
	[Token(Token = "0x1700008B")]
	int ParameterCount
	{
		[Token(Token = "0x60003FD")]
		get;
	}

	[Token(Token = "0x60003FC")]
	ParameterExpression GetParameter(int index);
}
