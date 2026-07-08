using System;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x2000202")]
public class fsConfig
{
	[Token(Token = "0x400098C")]
	[FieldOffset(Offset = "0x10")]
	public Type[] SerializeAttributes;

	[Token(Token = "0x400098D")]
	[FieldOffset(Offset = "0x18")]
	public Type[] IgnoreSerializeAttributes;

	[Token(Token = "0x400098E")]
	[FieldOffset(Offset = "0x20")]
	public fsMemberSerialization DefaultMemberSerialization;

	[Token(Token = "0x400098F")]
	[FieldOffset(Offset = "0x28")]
	public Func<string, MemberInfo, string> GetJsonNameFromMemberName;

	[Token(Token = "0x4000990")]
	[FieldOffset(Offset = "0x30")]
	public bool EnablePropertySerialization;

	[Token(Token = "0x4000991")]
	[FieldOffset(Offset = "0x31")]
	public bool SerializeNonAutoProperties;

	[Token(Token = "0x4000992")]
	[FieldOffset(Offset = "0x32")]
	public bool SerializeNonPublicSetProperties;

	[Token(Token = "0x4000993")]
	[FieldOffset(Offset = "0x38")]
	public string CustomDateTimeFormatString;

	[Token(Token = "0x4000994")]
	[FieldOffset(Offset = "0x40")]
	public bool Serialize64BitIntegerAsString;

	[Token(Token = "0x4000995")]
	[FieldOffset(Offset = "0x41")]
	public bool SerializeEnumsAsInteger;

	[Token(Token = "0x6001231")]
	[Address(RVA = "0x4A55530", Offset = "0x4A55530", VA = "0x4A55530")]
	public fsConfig()
	{
	}
}
