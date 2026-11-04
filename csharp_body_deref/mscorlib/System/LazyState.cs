// ==================== AoTTG2 cross-reference ====================
// Type: System.LazyState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000109")]
internal enum LazyState
{
	[Token(Token = "0x40003F9")]
	NoneViaConstructor,
	[Token(Token = "0x40003FA")]
	NoneViaFactory,
	[Token(Token = "0x40003FB")]
	NoneException,
	[Token(Token = "0x40003FC")]
	PublicationOnlyViaConstructor,
	[Token(Token = "0x40003FD")]
	PublicationOnlyViaFactory,
	[Token(Token = "0x40003FE")]
	PublicationOnlyWait,
	[Token(Token = "0x40003FF")]
	PublicationOnlyException,
	[Token(Token = "0x4000400")]
	ExecutionAndPublicationViaConstructor,
	[Token(Token = "0x4000401")]
	ExecutionAndPublicationViaFactory,
	[Token(Token = "0x4000402")]
	ExecutionAndPublicationException
}
