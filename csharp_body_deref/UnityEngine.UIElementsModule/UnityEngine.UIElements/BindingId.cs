// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BindingId
// Update status: NEW in this game update
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
	[Address(RVA = "0x315B700", Offset = "0x3159D00", VA = "0x18315B700")]
	public BindingId(string path)
	{
	}

	[Token(Token = "0x60027D7")]
	[Address(RVA = "0x315B7E0", Offset = "0x3159DE0", VA = "0x18315B7E0")]
	public BindingId(in PropertyPath path)
	{
	}

	[Token(Token = "0x60027D8")]
	[Address(RVA = "0x315BA70", Offset = "0x315A070", VA = "0x18315BA70")]
	public static implicit operator PropertyPath(in BindingId vep)
	{
		return default(PropertyPath);
	}

	[Token(Token = "0x60027D9")]
	[Address(RVA = "0x1CCD7A0", Offset = "0x1CCBDA0", VA = "0x181CCD7A0")]
	public static implicit operator string(in BindingId vep)
	{
		return null;
	}

	[Token(Token = "0x60027DA")]
	[Address(RVA = "0x315BAC0", Offset = "0x315A0C0", VA = "0x18315BAC0")]
	public static implicit operator BindingId(string name)
	{
		return default(BindingId);
	}

	[Token(Token = "0x60027DB")]
	[Address(RVA = "0x315B970", Offset = "0x3159F70", VA = "0x18315B970")]
	public static implicit operator BindingId(in PropertyPath path)
	{
		return default(BindingId);
	}

	[Token(Token = "0x60027DC")]
	[Address(RVA = "0x1CCD7A0", Offset = "0x1CCBDA0", VA = "0x181CCD7A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60027DD")]
	[Address(RVA = "0x315B370", Offset = "0x3159970", VA = "0x18315B370", Slot = "4")]
	public bool Equals(BindingId other)
	{
		return default(bool);
	}

	[Token(Token = "0x60027DE")]
	[Address(RVA = "0x315B490", Offset = "0x3159A90", VA = "0x18315B490", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60027DF")]
	[Address(RVA = "0x315B680", Offset = "0x3159C80", VA = "0x18315B680", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60027E0")]
	[Address(RVA = "0x315B8A0", Offset = "0x3159EA0", VA = "0x18315B8A0")]
	public static bool operator ==(in BindingId lhs, in BindingId rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60027E1")]
	[Address(RVA = "0x315BBC0", Offset = "0x315A1C0", VA = "0x18315BBC0")]
	public static bool operator !=(in BindingId lhs, in BindingId rhs)
	{
		return default(bool);
	}
}
