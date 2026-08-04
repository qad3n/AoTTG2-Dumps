// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Serialization.ReflectionAttributeProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x2000137")]
public class ReflectionAttributeProvider : IAttributeProvider
{
	[Token(Token = "0x40005BC")]
	[FieldOffset(Offset = "0x10")]
	private readonly object _attributeProvider;

	[Token(Token = "0x600098E")]
	[Address(RVA = "0x3DF4F00", Offset = "0x3DF4F00", VA = "0x3DF4F00")]
	public ReflectionAttributeProvider(object attributeProvider)
	{
	}

	[Token(Token = "0x600098F")]
	[Address(RVA = "0x3DF4F60", Offset = "0x3DF4F60", VA = "0x3DF4F60", Slot = "4")]
	public IList<Attribute> GetAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6000990")]
	[Address(RVA = "0x3DF4FC0", Offset = "0x3DF4FC0", VA = "0x3DF4FC0", Slot = "5")]
	public IList<Attribute> GetAttributes(Type attributeType, bool inherit)
	{
		return null;
	}
}
