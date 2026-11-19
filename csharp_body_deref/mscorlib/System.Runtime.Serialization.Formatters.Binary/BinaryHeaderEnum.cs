// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x20003FE")]
internal enum BinaryHeaderEnum
{
	[Token(Token = "0x4000FA5")]
	SerializedStreamHeader,
	[Token(Token = "0x4000FA6")]
	Object,
	[Token(Token = "0x4000FA7")]
	ObjectWithMap,
	[Token(Token = "0x4000FA8")]
	ObjectWithMapAssemId,
	[Token(Token = "0x4000FA9")]
	ObjectWithMapTyped,
	[Token(Token = "0x4000FAA")]
	ObjectWithMapTypedAssemId,
	[Token(Token = "0x4000FAB")]
	ObjectString,
	[Token(Token = "0x4000FAC")]
	Array,
	[Token(Token = "0x4000FAD")]
	MemberPrimitiveTyped,
	[Token(Token = "0x4000FAE")]
	MemberReference,
	[Token(Token = "0x4000FAF")]
	ObjectNull,
	[Token(Token = "0x4000FB0")]
	MessageEnd,
	[Token(Token = "0x4000FB1")]
	Assembly,
	[Token(Token = "0x4000FB2")]
	ObjectNullMultiple256,
	[Token(Token = "0x4000FB3")]
	ObjectNullMultiple,
	[Token(Token = "0x4000FB4")]
	ArraySinglePrimitive,
	[Token(Token = "0x4000FB5")]
	ArraySingleObject,
	[Token(Token = "0x4000FB6")]
	ArraySingleString,
	[Token(Token = "0x4000FB7")]
	CrossAppDomainMap,
	[Token(Token = "0x4000FB8")]
	CrossAppDomainString,
	[Token(Token = "0x4000FB9")]
	CrossAppDomainAssembly,
	[Token(Token = "0x4000FBA")]
	MethodCall,
	[Token(Token = "0x4000FBB")]
	MethodReturn
}
