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
		[Address(RVA = "0x4E83830", Offset = "0x4E83830", VA = "0x4E83830")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000005")]
	public PropertyPathPartKind Kind
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x4E83840", Offset = "0x4E83840", VA = "0x4E83840")]
		get
		{
			return default(PropertyPathPartKind);
		}
	}

	[Token(Token = "0x17000006")]
	public string Name
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x4E83850", Offset = "0x4E83850", VA = "0x4E83850")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4E838A0", Offset = "0x4E838A0", VA = "0x4E838A0")]
	public PropertyPathPart(string name)
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x4E838E0", Offset = "0x4E838E0", VA = "0x4E838E0")]
	public PropertyPathPart(int index)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4E83940", Offset = "0x4E83940", VA = "0x4E83940")]
	public PropertyPathPart(object key)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4E839A0", Offset = "0x4E839A0", VA = "0x4E839A0")]
	private void CheckKind(PropertyPathPartKind type)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4E839E0", Offset = "0x4E839E0", VA = "0x4E839E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4E83AE0", Offset = "0x4E83AE0", VA = "0x4E83AE0", Slot = "4")]
	public bool Equals(PropertyPathPart other)
	{
		return default(bool);
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4E83B30", Offset = "0x4E83B30", VA = "0x4E83B30", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4E83BC0", Offset = "0x4E83BC0", VA = "0x4E83BC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
