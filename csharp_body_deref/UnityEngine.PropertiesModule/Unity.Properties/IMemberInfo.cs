using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x200000E")]
internal interface IMemberInfo
{
	[Token(Token = "0x17000009")]
	string Name
	{
		[Token(Token = "0x600002C")]
		get;
	}

	[Token(Token = "0x1700000A")]
	bool IsReadOnly
	{
		[Token(Token = "0x600002D")]
		get;
	}

	[Token(Token = "0x1700000B")]
	Type ValueType
	{
		[Token(Token = "0x600002E")]
		get;
	}

	[Token(Token = "0x600002F")]
	IEnumerable<Attribute> GetCustomAttributes();
}
