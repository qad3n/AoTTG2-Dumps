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
		[Address(RVA = "0x3D54F30", Offset = "0x3D54F30", VA = "0x3D54F30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x3D54F40", Offset = "0x3D54F40", VA = "0x3D54F40")]
		set
		{
		}
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x3D54F50", Offset = "0x3D54F50", VA = "0x3D54F50")]
	public JsonArrayAttribute()
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x3D54F70", Offset = "0x3D54F70", VA = "0x3D54F70")]
	public JsonArrayAttribute(bool allowNullItems)
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x3D54F90", Offset = "0x3D54F90", VA = "0x3D54F90")]
	public JsonArrayAttribute(string id)
	{
	}
}
