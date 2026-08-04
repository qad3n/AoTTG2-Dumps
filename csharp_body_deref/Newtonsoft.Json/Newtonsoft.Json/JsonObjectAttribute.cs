// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.JsonObjectAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Newtonsoft.Json;

[Token(Token = "0x2000024")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Interface, AllowMultiple = false)]
public sealed class JsonObjectAttribute : JsonContainerAttribute
{
	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x68")]
	private MemberSerialization _memberSerialization;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x6C")]
	internal MissingMemberHandling? _missingMemberHandling;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x74")]
	internal Required? _itemRequired;

	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x7C")]
	internal NullValueHandling? _itemNullValueHandling;

	[Token(Token = "0x17000019")]
	public MemberSerialization MemberSerialization
	{
		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x3D5A300", Offset = "0x3D5A300", VA = "0x3D5A300")]
		get
		{
			return default(MemberSerialization);
		}
		[Token(Token = "0x60000A3")]
		[Address(RVA = "0x3D5A310", Offset = "0x3D5A310", VA = "0x3D5A310")]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public MissingMemberHandling MissingMemberHandling
	{
		[Token(Token = "0x60000A4")]
		[Address(RVA = "0x3D5A320", Offset = "0x3D5A320", VA = "0x3D5A320")]
		get
		{
			return default(MissingMemberHandling);
		}
		[Token(Token = "0x60000A5")]
		[Address(RVA = "0x3D5A350", Offset = "0x3D5A350", VA = "0x3D5A350")]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public NullValueHandling ItemNullValueHandling
	{
		[Token(Token = "0x60000A6")]
		[Address(RVA = "0x3D5A3A0", Offset = "0x3D5A3A0", VA = "0x3D5A3A0")]
		get
		{
			return default(NullValueHandling);
		}
		[Token(Token = "0x60000A7")]
		[Address(RVA = "0x3D5A3D0", Offset = "0x3D5A3D0", VA = "0x3D5A3D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public Required ItemRequired
	{
		[Token(Token = "0x60000A8")]
		[Address(RVA = "0x3D5A420", Offset = "0x3D5A420", VA = "0x3D5A420")]
		get
		{
			return default(Required);
		}
		[Token(Token = "0x60000A9")]
		[Address(RVA = "0x3D5A450", Offset = "0x3D5A450", VA = "0x3D5A450")]
		set
		{
		}
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x3D5A4A0", Offset = "0x3D5A4A0", VA = "0x3D5A4A0")]
	public JsonObjectAttribute()
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x3D5A4B0", Offset = "0x3D5A4B0", VA = "0x3D5A4B0")]
	public JsonObjectAttribute(MemberSerialization memberSerialization)
	{
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x3D5A4D0", Offset = "0x3D5A4D0", VA = "0x3D5A4D0")]
	public JsonObjectAttribute(string id)
	{
	}
}
