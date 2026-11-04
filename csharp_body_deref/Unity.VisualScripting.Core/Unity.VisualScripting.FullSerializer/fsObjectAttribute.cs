// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsObjectAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x2000213")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct)]
public class fsObjectAttribute : Attribute
{
	[Token(Token = "0x40009AA")]
	[FieldOffset(Offset = "0x10")]
	public Type[] PreviousModels;

	[Token(Token = "0x40009AB")]
	[FieldOffset(Offset = "0x18")]
	public string VersionString;

	[Token(Token = "0x40009AC")]
	[FieldOffset(Offset = "0x20")]
	public fsMemberSerialization MemberSerialization;

	[Token(Token = "0x40009AD")]
	[FieldOffset(Offset = "0x28")]
	public Type Converter;

	[Token(Token = "0x40009AE")]
	[FieldOffset(Offset = "0x30")]
	public Type Processor;

	[Token(Token = "0x60012A5")]
	[Address(RVA = "0x2E71070", Offset = "0x2E6F670", VA = "0x182E71070")]
	public fsObjectAttribute()
	{
	}

	[Token(Token = "0x60012A6")]
	[Address(RVA = "0x2E71010", Offset = "0x2E6F610", VA = "0x182E71010")]
	public fsObjectAttribute(string versionString, params Type[] previousModels)
	{
	}
}
