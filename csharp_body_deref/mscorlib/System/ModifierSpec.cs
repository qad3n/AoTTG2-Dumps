using System.Text;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20001AC")]
internal interface ModifierSpec
{
	[Token(Token = "0x600106F")]
	Type Resolve(Type type);

	[Token(Token = "0x6001070")]
	StringBuilder Append(StringBuilder sb);
}
