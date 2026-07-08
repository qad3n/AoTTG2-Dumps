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
		[Address(RVA = "0x3A649B0", Offset = "0x3A649B0", VA = "0x3A649B0")]
		get
		{
			return default(MemberSerialization);
		}
		[Token(Token = "0x60000A3")]
		[Address(RVA = "0x3A649C0", Offset = "0x3A649C0", VA = "0x3A649C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public MissingMemberHandling MissingMemberHandling
	{
		[Token(Token = "0x60000A4")]
		[Address(RVA = "0x3A649D0", Offset = "0x3A649D0", VA = "0x3A649D0")]
		get
		{
			return default(MissingMemberHandling);
		}
		[Token(Token = "0x60000A5")]
		[Address(RVA = "0x3A64A00", Offset = "0x3A64A00", VA = "0x3A64A00")]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public NullValueHandling ItemNullValueHandling
	{
		[Token(Token = "0x60000A6")]
		[Address(RVA = "0x3A64A50", Offset = "0x3A64A50", VA = "0x3A64A50")]
		get
		{
			return default(NullValueHandling);
		}
		[Token(Token = "0x60000A7")]
		[Address(RVA = "0x3A64A80", Offset = "0x3A64A80", VA = "0x3A64A80")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public Required ItemRequired
	{
		[Token(Token = "0x60000A8")]
		[Address(RVA = "0x3A64AD0", Offset = "0x3A64AD0", VA = "0x3A64AD0")]
		get
		{
			return default(Required);
		}
		[Token(Token = "0x60000A9")]
		[Address(RVA = "0x3A64B00", Offset = "0x3A64B00", VA = "0x3A64B00")]
		set
		{
		}
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x3A64B50", Offset = "0x3A64B50", VA = "0x3A64B50")]
	public JsonObjectAttribute()
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x3A64B60", Offset = "0x3A64B60", VA = "0x3A64B60")]
	public JsonObjectAttribute(MemberSerialization memberSerialization)
	{
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x3A64B80", Offset = "0x3A64B80", VA = "0x3A64B80")]
	public JsonObjectAttribute(string id)
	{
	}
}
