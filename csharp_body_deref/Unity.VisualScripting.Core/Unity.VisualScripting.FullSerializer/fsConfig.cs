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

[Token(Token = "0x2000202")]
public class fsConfig
{
	[Token(Token = "0x400098A")]
	[FieldOffset(Offset = "0x10")]
	public Type[] SerializeAttributes;

	[Token(Token = "0x400098B")]
	[FieldOffset(Offset = "0x18")]
	public Type[] IgnoreSerializeAttributes;

	[Token(Token = "0x400098C")]
	[FieldOffset(Offset = "0x20")]
	public fsMemberSerialization DefaultMemberSerialization;

	[Token(Token = "0x400098D")]
	[FieldOffset(Offset = "0x28")]
	public Func<string, MemberInfo, string> GetJsonNameFromMemberName;

	[Token(Token = "0x400098E")]
	[FieldOffset(Offset = "0x30")]
	public bool EnablePropertySerialization;

	[Token(Token = "0x400098F")]
	[FieldOffset(Offset = "0x31")]
	public bool SerializeNonAutoProperties;

	[Token(Token = "0x4000990")]
	[FieldOffset(Offset = "0x32")]
	public bool SerializeNonPublicSetProperties;

	[Token(Token = "0x4000991")]
	[FieldOffset(Offset = "0x38")]
	public string CustomDateTimeFormatString;

	[Token(Token = "0x4000992")]
	[FieldOffset(Offset = "0x40")]
	public bool Serialize64BitIntegerAsString;

	[Token(Token = "0x4000993")]
	[FieldOffset(Offset = "0x41")]
	public bool SerializeEnumsAsInteger;

	[Token(Token = "0x600123E")]
	[Address(RVA = "0x2E5EA90", Offset = "0x2E5D090", VA = "0x182E5EA90")]
	public fsConfig()
	{
	}
}
