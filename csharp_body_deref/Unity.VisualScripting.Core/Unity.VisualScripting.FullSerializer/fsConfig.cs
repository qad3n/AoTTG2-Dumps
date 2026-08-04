// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsConfig
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001FB")]
public class fsConfig
{
	[Token(Token = "0x400097A")]
	[FieldOffset(Offset = "0x10")]
	public Type[] SerializeAttributes;

	[Token(Token = "0x400097B")]
	[FieldOffset(Offset = "0x18")]
	public Type[] IgnoreSerializeAttributes;

	[Token(Token = "0x400097C")]
	[FieldOffset(Offset = "0x20")]
	public fsMemberSerialization DefaultMemberSerialization;

	[Token(Token = "0x400097D")]
	[FieldOffset(Offset = "0x28")]
	public Func<string, MemberInfo, string> GetJsonNameFromMemberName;

	[Token(Token = "0x400097E")]
	[FieldOffset(Offset = "0x30")]
	public bool EnablePropertySerialization;

	[Token(Token = "0x400097F")]
	[FieldOffset(Offset = "0x31")]
	public bool SerializeNonAutoProperties;

	[Token(Token = "0x4000980")]
	[FieldOffset(Offset = "0x32")]
	public bool SerializeNonPublicSetProperties;

	[Token(Token = "0x4000981")]
	[FieldOffset(Offset = "0x38")]
	public string CustomDateTimeFormatString;

	[Token(Token = "0x4000982")]
	[FieldOffset(Offset = "0x40")]
	public bool Serialize64BitIntegerAsString;

	[Token(Token = "0x4000983")]
	[FieldOffset(Offset = "0x41")]
	public bool SerializeEnumsAsInteger;

	[Token(Token = "0x6001206")]
	[Address(RVA = "0x4D7A9F0", Offset = "0x4D7A9F0", VA = "0x4D7A9F0")]
	public fsConfig()
	{
	}
}
