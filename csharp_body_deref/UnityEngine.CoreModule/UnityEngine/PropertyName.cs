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

[Token(Token = "0x2000137")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct PropertyName : IEquatable<PropertyName>
{
	[Token(Token = "0x400052B")]
	[FieldOffset(Offset = "0x0")]
	internal int id;

	[Token(Token = "0x6000937")]
	[Address(RVA = "0x4DF2100", Offset = "0x4DF2100", VA = "0x4DF2100")]
	public PropertyName(string name)
	{
	}

	[Token(Token = "0x6000938")]
	[Address(RVA = "0x4DF2150", Offset = "0x4DF2150", VA = "0x4DF2150")]
	public PropertyName(PropertyName other)
	{
	}

	[Token(Token = "0x6000939")]
	[Address(RVA = "0x4DF2160", Offset = "0x4DF2160", VA = "0x4DF2160")]
	public static bool IsNullOrEmpty(PropertyName prop)
	{
		return default(bool);
	}

	[Token(Token = "0x600093A")]
	[Address(RVA = "0x4DF2170", Offset = "0x4DF2170", VA = "0x4DF2170")]
	public static bool operator ==(PropertyName lhs, PropertyName rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600093B")]
	[Address(RVA = "0x4DF2180", Offset = "0x4DF2180", VA = "0x4DF2180", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600093C")]
	[Address(RVA = "0x4DF2190", Offset = "0x4DF2190", VA = "0x4DF2190", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x600093D")]
	[Address(RVA = "0x4DF21F0", Offset = "0x4DF21F0", VA = "0x4DF21F0", Slot = "4")]
	public bool Equals(PropertyName other)
	{
		return default(bool);
	}

	[Token(Token = "0x600093E")]
	[Address(RVA = "0x4DF2200", Offset = "0x4DF2200", VA = "0x4DF2200")]
	public static implicit operator PropertyName(string name)
	{
		return default(PropertyName);
	}

	[Token(Token = "0x600093F")]
	[Address(RVA = "0x4DF2250", Offset = "0x4DF2250", VA = "0x4DF2250", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
