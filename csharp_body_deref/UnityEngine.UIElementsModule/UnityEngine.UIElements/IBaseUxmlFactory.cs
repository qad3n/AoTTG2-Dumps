using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000439")]
public interface IBaseUxmlFactory
{
	[Token(Token = "0x1700071B")]
	string uxmlQualifiedName
	{
		[Token(Token = "0x6001AE3")]
		get;
	}

	[Token(Token = "0x1700071C")]
	Type uxmlType
	{
		[Token(Token = "0x6001AE4")]
		get;
	}

	[Token(Token = "0x6001AE5")]
	bool AcceptsAttributeBag(IUxmlAttributes bag, CreationContext cc);
}
