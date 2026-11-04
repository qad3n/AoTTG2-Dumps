// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000425")]
internal enum BinaryHeaderEnum
{
	[Token(Token = "0x4001045")]
	SerializedStreamHeader,
	[Token(Token = "0x4001046")]
	Object,
	[Token(Token = "0x4001047")]
	ObjectWithMap,
	[Token(Token = "0x4001048")]
	ObjectWithMapAssemId,
	[Token(Token = "0x4001049")]
	ObjectWithMapTyped,
	[Token(Token = "0x400104A")]
	ObjectWithMapTypedAssemId,
	[Token(Token = "0x400104B")]
	ObjectString,
	[Token(Token = "0x400104C")]
	Array,
	[Token(Token = "0x400104D")]
	MemberPrimitiveTyped,
	[Token(Token = "0x400104E")]
	MemberReference,
	[Token(Token = "0x400104F")]
	ObjectNull,
	[Token(Token = "0x4001050")]
	MessageEnd,
	[Token(Token = "0x4001051")]
	Assembly,
	[Token(Token = "0x4001052")]
	ObjectNullMultiple256,
	[Token(Token = "0x4001053")]
	ObjectNullMultiple,
	[Token(Token = "0x4001054")]
	ArraySinglePrimitive,
	[Token(Token = "0x4001055")]
	ArraySingleObject,
	[Token(Token = "0x4001056")]
	ArraySingleString,
	[Token(Token = "0x4001057")]
	CrossAppDomainMap,
	[Token(Token = "0x4001058")]
	CrossAppDomainString,
	[Token(Token = "0x4001059")]
	CrossAppDomainAssembly,
	[Token(Token = "0x400105A")]
	MethodCall,
	[Token(Token = "0x400105B")]
	MethodReturn
}
