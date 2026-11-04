// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.JsonArrayAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x12BF1A0", Offset = "0x12BD7A0", VA = "0x1812BF1A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x12BF400", Offset = "0x12BDA00", VA = "0x1812BF400")]
		set
		{
		}
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public JsonArrayAttribute()
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x1BC8260", Offset = "0x1BC6860", VA = "0x181BC8260")]
	public JsonArrayAttribute(bool allowNullItems)
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	public JsonArrayAttribute(string id)
	{
	}
}
