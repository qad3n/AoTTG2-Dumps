using System;
using Il2CppDummyDll;

namespace Newtonsoft.Json;

[Token(Token = "0x2000017")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Interface, AllowMultiple = false)]
public sealed class JsonArrayAttribute : JsonContainerAttribute
{
	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x68")]
	private bool _allowNullItems;

	[Token(Token = "0x17000005")]
	public bool AllowNullItems
	{
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x3A5F5E0", Offset = "0x3A5F5E0", VA = "0x3A5F5E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x3A5F5F0", Offset = "0x3A5F5F0", VA = "0x3A5F5F0")]
		set
		{
		}
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x3A5F600", Offset = "0x3A5F600", VA = "0x3A5F600")]
	public JsonArrayAttribute()
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x3A5F620", Offset = "0x3A5F620", VA = "0x3A5F620")]
	public JsonArrayAttribute(bool allowNullItems)
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x3A5F640", Offset = "0x3A5F640", VA = "0x3A5F640")]
	public JsonArrayAttribute(string id)
	{
	}
}
