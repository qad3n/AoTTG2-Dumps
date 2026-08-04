// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x20003F6")]
internal enum BinaryHeaderEnum
{
	[Token(Token = "0x4001043")]
	SerializedStreamHeader,
	[Token(Token = "0x4001044")]
	Object,
	[Token(Token = "0x4001045")]
	ObjectWithMap,
	[Token(Token = "0x4001046")]
	ObjectWithMapAssemId,
	[Token(Token = "0x4001047")]
	ObjectWithMapTyped,
	[Token(Token = "0x4001048")]
	ObjectWithMapTypedAssemId,
	[Token(Token = "0x4001049")]
	ObjectString,
	[Token(Token = "0x400104A")]
	Array,
	[Token(Token = "0x400104B")]
	MemberPrimitiveTyped,
	[Token(Token = "0x400104C")]
	MemberReference,
	[Token(Token = "0x400104D")]
	ObjectNull,
	[Token(Token = "0x400104E")]
	MessageEnd,
	[Token(Token = "0x400104F")]
	Assembly,
	[Token(Token = "0x4001050")]
	ObjectNullMultiple256,
	[Token(Token = "0x4001051")]
	ObjectNullMultiple,
	[Token(Token = "0x4001052")]
	ArraySinglePrimitive,
	[Token(Token = "0x4001053")]
	ArraySingleObject,
	[Token(Token = "0x4001054")]
	ArraySingleString,
	[Token(Token = "0x4001055")]
	CrossAppDomainMap,
	[Token(Token = "0x4001056")]
	CrossAppDomainString,
	[Token(Token = "0x4001057")]
	CrossAppDomainAssembly,
	[Token(Token = "0x4001058")]
	MethodCall,
	[Token(Token = "0x4001059")]
	MethodReturn
}
