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

[Token(Token = "0x200020C")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct)]
public class fsObjectAttribute : Attribute
{
	[Token(Token = "0x400099A")]
	[FieldOffset(Offset = "0x10")]
	public Type[] PreviousModels;

	[Token(Token = "0x400099B")]
	[FieldOffset(Offset = "0x18")]
	public string VersionString;

	[Token(Token = "0x400099C")]
	[FieldOffset(Offset = "0x20")]
	public fsMemberSerialization MemberSerialization;

	[Token(Token = "0x400099D")]
	[FieldOffset(Offset = "0x28")]
	public Type Converter;

	[Token(Token = "0x400099E")]
	[FieldOffset(Offset = "0x30")]
	public Type Processor;

	[Token(Token = "0x600126D")]
	[Address(RVA = "0x4D80C70", Offset = "0x4D80C70", VA = "0x4D80C70")]
	public fsObjectAttribute()
	{
	}

	[Token(Token = "0x600126E")]
	[Address(RVA = "0x4D80C80", Offset = "0x4D80C80", VA = "0x4D80C80")]
	public fsObjectAttribute(string versionString, params Type[] previousModels)
	{
	}
}
