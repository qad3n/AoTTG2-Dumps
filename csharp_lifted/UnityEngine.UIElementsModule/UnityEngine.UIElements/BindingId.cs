// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BindingId
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x200053C")]
public readonly struct BindingId : IEquatable<BindingId>
{
	[Token(Token = "0x40011C2")]
	[FieldOffset(Offset = "0x0")]
	public static readonly BindingId Invalid;

	[Token(Token = "0x40011C3")]
	[FieldOffset(Offset = "0x0")]
	private readonly PropertyPath m_PropertyPath;

	[Token(Token = "0x40011C4")]
	[FieldOffset(Offset = "0x90")]
	private readonly string m_Path;

	[Token(Token = "0x60027D6")]
	[Address(RVA = "0x6B6B650", Offset = "0x6B6A650", VA = "0x6B6B650")]
	public BindingId(string path)
	{
	}

	[Token(Token = "0x60027D7")]
	[Address(RVA = "0x6B6B6F0", Offset = "0x6B6A6F0", VA = "0x6B6B6F0")]
	public BindingId(in PropertyPath path)
	{
	}

	[Token(Token = "0x60027D8")]
	[Address(RVA = "0x6B6B740", Offset = "0x6B6A740", VA = "0x6B6B740")]
	public static implicit operator PropertyPath(in BindingId vep)
	{
		return default(PropertyPath);
	}

	[Token(Token = "0x60027D9")]
	[Address(RVA = "0x6B6B760", Offset = "0x6B6A760", VA = "0x6B6B760")]
	public static implicit operator string(in BindingId vep)
	{
		return null;
	}

	[Token(Token = "0x60027DA")]
	[Address(RVA = "0x6B6B770", Offset = "0x6B6A770", VA = "0x6B6B770")]
	public static implicit operator BindingId(string name)
	{
		return default(BindingId);
	}

	[Token(Token = "0x60027DB")]
	[Address(RVA = "0x6B6B840", Offset = "0x6B6A840", VA = "0x6B6B840")]
	public static implicit operator BindingId(in PropertyPath path)
	{
		return default(BindingId);
	}

	[Token(Token = "0x60027DC")]
	[Address(RVA = "0x6B6B8D0", Offset = "0x6B6A8D0", VA = "0x6B6B8D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60027DD")]
	[Address(RVA = "0x6B6B8E0", Offset = "0x6B6A8E0", VA = "0x6B6B8E0", Slot = "4")]
	public bool Equals(BindingId other)
	{
		return default(bool);
	}

	[Token(Token = "0x60027DE")]
	[Address(RVA = "0x6B6B920", Offset = "0x6B6A920", VA = "0x6B6B920", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60027DF")]
	[Address(RVA = "0x6B6B9D0", Offset = "0x6B6A9D0", VA = "0x6B6B9D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60027E0")]
	[Address(RVA = "0x6B6B9E0", Offset = "0x6B6A9E0", VA = "0x6B6B9E0")]
	public static bool operator ==(in BindingId lhs, in BindingId rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60027E1")]
	[Address(RVA = "0x6B6BA20", Offset = "0x6B6AA20", VA = "0x6B6BA20")]
	public static bool operator !=(in BindingId lhs, in BindingId rhs)
	{
		return default(bool);
	}
}
