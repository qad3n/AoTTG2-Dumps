// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchyPropertyId
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace Unity.Hierarchy;

[Token(Token = "0x2000023")]
[UnityEngine.Bindings.NativeHeader("Modules/HierarchyCore/Public/HierarchyPropertyId.h")]
internal readonly struct HierarchyPropertyId : IEquatable<HierarchyPropertyId>
{
	[Token(Token = "0x4000055")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HierarchyPropertyId s_Null;

	[Token(Token = "0x4000056")]
	[FieldOffset(Offset = "0x0")]
	private readonly int m_Id;

	[Token(Token = "0x1700001E")]
	public unsafe static ref readonly HierarchyPropertyId Null
	{
		[Token(Token = "0x60000C9")]
		[Address(RVA = "0x69746A0", Offset = "0x69736A0", VA = "0x69746A0")]
		get
		{
			return ref *(HierarchyPropertyId*)null;
		}
	}

	[Token(Token = "0x1700001F")]
	public int Id
	{
		[Token(Token = "0x60000CA")]
		[Address(RVA = "0x69746D0", Offset = "0x69736D0", VA = "0x69746D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x69746E0", Offset = "0x69736E0", VA = "0x69746E0")]
	public HierarchyPropertyId()
	{
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x69746F0", Offset = "0x69736F0", VA = "0x69746F0")]
	public static bool operator ==(in HierarchyPropertyId lhs, in HierarchyPropertyId rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x6974700", Offset = "0x6973700", VA = "0x6974700", Slot = "4")]
	public bool Equals(HierarchyPropertyId other)
	{
		return default(bool);
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x6974710", Offset = "0x6973710", VA = "0x6974710", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x69747D0", Offset = "0x69737D0", VA = "0x69747D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x6974830", Offset = "0x6973830", VA = "0x6974830", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
