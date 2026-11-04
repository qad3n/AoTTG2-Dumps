// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.PropertyPathPart
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x200001A")]
public readonly struct PropertyPathPart : IEquatable<PropertyPathPart>
{
	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x0")]
	private readonly PropertyPathPartKind m_Kind;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x8")]
	private readonly string m_Name;

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x10")]
	private readonly int m_Index;

	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0x18")]
	private readonly object m_Key;

	[Token(Token = "0x1700000C")]
	public bool IsName
	{
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x2372150", Offset = "0x2370750", VA = "0x182372150")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000D")]
	public bool IsIndex
	{
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x2FEDBD0", Offset = "0x2FEC1D0", VA = "0x182FEDBD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000E")]
	public PropertyPathPartKind Kind
	{
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		get
		{
			return default(PropertyPathPartKind);
		}
	}

	[Token(Token = "0x1700000F")]
	public string Name
	{
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x2FEDC40", Offset = "0x2FEC240", VA = "0x182FEDC40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000010")]
	public int Index
	{
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x2FEDB70", Offset = "0x2FEC170", VA = "0x182FEDB70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000011")]
	public object Key
	{
		[Token(Token = "0x6000046")]
		[Address(RVA = "0x2FEDBE0", Offset = "0x2FEC1E0", VA = "0x182FEDBE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x2FEDB30", Offset = "0x2FEC130", VA = "0x182FEDB30")]
	public PropertyPathPart(string name)
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x2FEDAD0", Offset = "0x2FEC0D0", VA = "0x182FEDAD0")]
	public PropertyPathPart(int index)
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x2FEDA70", Offset = "0x2FEC070", VA = "0x182FEDA70")]
	public PropertyPathPart(object key)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600004A")]
	[Address(RVA = "0x2FED730", Offset = "0x2FEBD30", VA = "0x182FED730")]
	private void CheckKind(PropertyPathPartKind type)
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x2FED960", Offset = "0x2FEBF60", VA = "0x182FED960", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x2FED850", Offset = "0x2FEBE50", VA = "0x182FED850", Slot = "4")]
	public bool Equals(PropertyPathPart other)
	{
		return default(bool);
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x2FED780", Offset = "0x2FEBD80", VA = "0x182FED780", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x2FED8B0", Offset = "0x2FEBEB0", VA = "0x182FED8B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
