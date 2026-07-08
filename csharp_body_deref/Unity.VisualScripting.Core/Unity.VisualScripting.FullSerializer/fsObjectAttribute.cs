using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x2000213")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct)]
public class fsObjectAttribute : Attribute
{
	[Token(Token = "0x40009AC")]
	[FieldOffset(Offset = "0x10")]
	public Type[] PreviousModels;

	[Token(Token = "0x40009AD")]
	[FieldOffset(Offset = "0x18")]
	public string VersionString;

	[Token(Token = "0x40009AE")]
	[FieldOffset(Offset = "0x20")]
	public fsMemberSerialization MemberSerialization;

	[Token(Token = "0x40009AF")]
	[FieldOffset(Offset = "0x28")]
	public Type Converter;

	[Token(Token = "0x40009B0")]
	[FieldOffset(Offset = "0x30")]
	public Type Processor;

	[Token(Token = "0x6001298")]
	[Address(RVA = "0x4A5B660", Offset = "0x4A5B660", VA = "0x4A5B660")]
	public fsObjectAttribute()
	{
	}

	[Token(Token = "0x6001299")]
	[Address(RVA = "0x4A5B670", Offset = "0x4A5B670", VA = "0x4A5B670")]
	public fsObjectAttribute(string versionString, params Type[] previousModels)
	{
	}
}
