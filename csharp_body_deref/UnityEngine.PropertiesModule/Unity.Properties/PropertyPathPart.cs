using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x200000B")]
public readonly struct PropertyPathPart : IEquatable<PropertyPathPart>
{
	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x0")]
	private readonly PropertyPathPartKind m_Kind;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x8")]
	private readonly string m_Name;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x10")]
	private readonly int m_Index;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x18")]
	private readonly object m_Key;

	[Token(Token = "0x17000004")]
	public bool IsName
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x4B5BF00", Offset = "0x4B5BF00", VA = "0x4B5BF00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000005")]
	public PropertyPathPartKind Kind
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x4B5BF10", Offset = "0x4B5BF10", VA = "0x4B5BF10")]
		get
		{
			return default(PropertyPathPartKind);
		}
	}

	[Token(Token = "0x17000006")]
	public string Name
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x4B5BF20", Offset = "0x4B5BF20", VA = "0x4B5BF20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4B5BF70", Offset = "0x4B5BF70", VA = "0x4B5BF70")]
	public PropertyPathPart(string name)
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x4B5BFB0", Offset = "0x4B5BFB0", VA = "0x4B5BFB0")]
	public PropertyPathPart(int index)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4B5C010", Offset = "0x4B5C010", VA = "0x4B5C010")]
	public PropertyPathPart(object key)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4B5C070", Offset = "0x4B5C070", VA = "0x4B5C070")]
	private void CheckKind(PropertyPathPartKind type)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4B5C0B0", Offset = "0x4B5C0B0", VA = "0x4B5C0B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4B5C1B0", Offset = "0x4B5C1B0", VA = "0x4B5C1B0", Slot = "4")]
	public bool Equals(PropertyPathPart other)
	{
		return default(bool);
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4B5C200", Offset = "0x4B5C200", VA = "0x4B5C200", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4B5C290", Offset = "0x4B5C290", VA = "0x4B5C290", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
