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

[Token(Token = "0x2000162")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct PropertyName : IEquatable<PropertyName>
{
	[Token(Token = "0x40005AC")]
	[FieldOffset(Offset = "0x0")]
	internal int id;

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x2F24C80", Offset = "0x2F23280", VA = "0x182F24C80")]
	public PropertyName(string name)
	{
	}

	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
	public PropertyName(PropertyName other)
	{
	}

	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x2F24C10", Offset = "0x2F23210", VA = "0x182F24C10")]
	public static bool IsNullOrEmpty(PropertyName prop)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x2F24CA0", Offset = "0x2F232A0", VA = "0x182F24CA0")]
	public static bool operator ==(PropertyName lhs, PropertyName rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C47")]
	[Address(RVA = "0xD18930", Offset = "0xD16F30", VA = "0x180D18930", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C48")]
	[Address(RVA = "0x2F24B80", Offset = "0x2F23180", VA = "0x182F24B80", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x2ED9400", Offset = "0x2ED7A00", VA = "0x182ED9400", Slot = "4")]
	public bool Equals(PropertyName other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x2F24CB0", Offset = "0x2F232B0", VA = "0x182F24CB0")]
	public static implicit operator PropertyName(string name)
	{
		return default(PropertyName);
	}

	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x2F24C20", Offset = "0x2F23220", VA = "0x182F24C20", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
