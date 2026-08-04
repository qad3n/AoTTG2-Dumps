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
	[Token(Token = "0x4000374")]
	NoneViaConstructor,
	[Token(Token = "0x4000375")]
	NoneViaFactory,
	[Token(Token = "0x4000376")]
	NoneException,
	[Token(Token = "0x4000377")]
	PublicationOnlyViaConstructor,
	[Token(Token = "0x4000378")]
	PublicationOnlyViaFactory,
	[Token(Token = "0x4000379")]
	PublicationOnlyWait,
	[Token(Token = "0x400037A")]
	PublicationOnlyException,
	[Token(Token = "0x400037B")]
	ExecutionAndPublicationViaConstructor,
	[Token(Token = "0x400037C")]
	ExecutionAndPublicationViaFactory,
	[Token(Token = "0x400037D")]
	ExecutionAndPublicationException
}
