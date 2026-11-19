// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.PropertyPathPart
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x69E4E70", Offset = "0x69E3E70", VA = "0x69E4E70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000D")]
	public bool IsIndex
	{
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x69E4E80", Offset = "0x69E3E80", VA = "0x69E4E80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000E")]
	public PropertyPathPartKind Kind
	{
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x69E4E90", Offset = "0x69E3E90", VA = "0x69E4E90")]
		get
		{
			return default(PropertyPathPartKind);
		}
	}

	[Token(Token = "0x1700000F")]
	public string Name
	{
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x69E4EA0", Offset = "0x69E3EA0", VA = "0x69E4EA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000010")]
	public int Index
	{
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x69E4EF0", Offset = "0x69E3EF0", VA = "0x69E4EF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000011")]
	public object Key
	{
		[Token(Token = "0x6000046")]
		[Address(RVA = "0x69E4F40", Offset = "0x69E3F40", VA = "0x69E4F40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x69E4F90", Offset = "0x69E3F90", VA = "0x69E4F90")]
	public PropertyPathPart(string name)
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x69E4FD0", Offset = "0x69E3FD0", VA = "0x69E4FD0")]
	public PropertyPathPart(int index)
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x69E5030", Offset = "0x69E4030", VA = "0x69E5030")]
	public PropertyPathPart(object key)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600004A")]
	[Address(RVA = "0x69E5090", Offset = "0x69E4090", VA = "0x69E5090")]
	private void CheckKind(PropertyPathPartKind type)
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x69E50D0", Offset = "0x69E40D0", VA = "0x69E50D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x69E51D0", Offset = "0x69E41D0", VA = "0x69E51D0", Slot = "4")]
	public bool Equals(PropertyPathPart other)
	{
		return default(bool);
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x69E5220", Offset = "0x69E4220", VA = "0x69E5220", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x69E52B0", Offset = "0x69E42B0", VA = "0x69E52B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
