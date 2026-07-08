using System;
using Il2CppDummyDll;

namespace JetBrains.Annotations;

[Token(Token = "0x200006E")]
[Flags]
public enum CollectionAccessType
{
	[Token(Token = "0x40000E6")]
	None = 0,
	[Token(Token = "0x40000E7")]
	Read = 1,
	[Token(Token = "0x40000E8")]
	ModifyExistingContent = 2,
	[Token(Token = "0x40000E9")]
	UpdatedContent = 6
}
