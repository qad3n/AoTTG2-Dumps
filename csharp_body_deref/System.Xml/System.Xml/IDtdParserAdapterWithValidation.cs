using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200002D")]
internal interface IDtdParserAdapterWithValidation : IDtdParserAdapter
{
	[Token(Token = "0x1700003D")]
	bool DtdValidation
	{
		[Token(Token = "0x6000171")]
		get;
	}

	[Token(Token = "0x1700003E")]
	IValidationEventHandling ValidationEventHandling
	{
		[Token(Token = "0x6000172")]
		get;
	}
}
