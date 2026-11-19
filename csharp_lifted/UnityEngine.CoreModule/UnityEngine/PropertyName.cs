// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.PropertyName
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000163")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct PropertyName : IEquatable<PropertyName>
{
	[Token(Token = "0x40005B1")]
	[FieldOffset(Offset = "0x0")]
	internal int id;

	[Token(Token = "0x6000C55")]
	[Address(RVA = "0x690E020", Offset = "0x690D020", VA = "0x690E020")]
	public PropertyName(string name)
	{
	}

	[Token(Token = "0x6000C56")]
	[Address(RVA = "0x690E030", Offset = "0x690D030", VA = "0x690E030")]
	public PropertyName(PropertyName other)
	{
	}

	[Token(Token = "0x6000C57")]
	[Address(RVA = "0x690E040", Offset = "0x690D040", VA = "0x690E040")]
	public static bool IsNullOrEmpty(PropertyName prop)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C58")]
	[Address(RVA = "0x690E050", Offset = "0x690D050", VA = "0x690E050")]
	public static bool operator ==(PropertyName lhs, PropertyName rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C59")]
	[Address(RVA = "0x690E060", Offset = "0x690D060", VA = "0x690E060", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C5A")]
	[Address(RVA = "0x690E070", Offset = "0x690D070", VA = "0x690E070", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C5B")]
	[Address(RVA = "0x690E0D0", Offset = "0x690D0D0", VA = "0x690E0D0", Slot = "4")]
	public bool Equals(PropertyName other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C5C")]
	[Address(RVA = "0x690E0E0", Offset = "0x690D0E0", VA = "0x690E0E0")]
	public static implicit operator PropertyName(string name)
	{
		return default(PropertyName);
	}

	[Token(Token = "0x6000C5D")]
	[Address(RVA = "0x690E0F0", Offset = "0x690D0F0", VA = "0x690E0F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
