using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000134")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct PropertyName : IEquatable<PropertyName>
{
	[Token(Token = "0x400052B")]
	[FieldOffset(Offset = "0x0")]
	internal int id;

	[Token(Token = "0x6000935")]
	[Address(RVA = "0x4ACA7D0", Offset = "0x4ACA7D0", VA = "0x4ACA7D0")]
	public PropertyName(string name)
	{
	}

	[Token(Token = "0x6000936")]
	[Address(RVA = "0x4ACA820", Offset = "0x4ACA820", VA = "0x4ACA820")]
	public PropertyName(PropertyName other)
	{
	}

	[Token(Token = "0x6000937")]
	[Address(RVA = "0x4ACA830", Offset = "0x4ACA830", VA = "0x4ACA830")]
	public static bool IsNullOrEmpty(PropertyName prop)
	{
		return default(bool);
	}

	[Token(Token = "0x6000938")]
	[Address(RVA = "0x4ACA840", Offset = "0x4ACA840", VA = "0x4ACA840")]
	public static bool operator ==(PropertyName lhs, PropertyName rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000939")]
	[Address(RVA = "0x4ACA850", Offset = "0x4ACA850", VA = "0x4ACA850", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600093A")]
	[Address(RVA = "0x4ACA860", Offset = "0x4ACA860", VA = "0x4ACA860", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x600093B")]
	[Address(RVA = "0x4ACA8C0", Offset = "0x4ACA8C0", VA = "0x4ACA8C0", Slot = "4")]
	public bool Equals(PropertyName other)
	{
		return default(bool);
	}

	[Token(Token = "0x600093C")]
	[Address(RVA = "0x4ACA8D0", Offset = "0x4ACA8D0", VA = "0x4ACA8D0")]
	public static implicit operator PropertyName(string name)
	{
		return default(PropertyName);
	}

	[Token(Token = "0x600093D")]
	[Address(RVA = "0x4ACA920", Offset = "0x4ACA920", VA = "0x4ACA920", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
