// ==================== AoTTG2 cross-reference ====================
// Type: System.LazyState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000E1")]
internal enum LazyState
{
	[Token(Token = "0x4000354")]
	NoneViaConstructor,
	[Token(Token = "0x4000355")]
	NoneViaFactory,
	[Token(Token = "0x4000356")]
	NoneException,
	[Token(Token = "0x4000357")]
	PublicationOnlyViaConstructor,
	[Token(Token = "0x4000358")]
	PublicationOnlyViaFactory,
	[Token(Token = "0x4000359")]
	PublicationOnlyWait,
	[Token(Token = "0x400035A")]
	PublicationOnlyException,
	[Token(Token = "0x400035B")]
	ExecutionAndPublicationViaConstructor,
	[Token(Token = "0x400035C")]
	ExecutionAndPublicationViaFactory,
	[Token(Token = "0x400035D")]
	ExecutionAndPublicationException
}
