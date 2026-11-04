// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchyPropertyId
// Update status: NEW in this game update
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
		[Address(RVA = "0x2F7F010", Offset = "0x2F7D610", VA = "0x182F7F010")]
		get
		{
			return ref *(HierarchyPropertyId*)null;
		}
	}

	[Token(Token = "0x1700001F")]
	public int Id
	{
		[Token(Token = "0x60000CA")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0xB47950", Offset = "0xB45F50", VA = "0x180B47950")]
	public HierarchyPropertyId()
	{
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x2F001A0", Offset = "0x2EFE7A0", VA = "0x182F001A0")]
	public static bool operator ==(in HierarchyPropertyId lhs, in HierarchyPropertyId rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x2F7EA40", Offset = "0x2F7D040", VA = "0x182F7EA40", Slot = "4")]
	public bool Equals(HierarchyPropertyId other)
	{
		return default(bool);
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x2F7EF40", Offset = "0x2F7D540", VA = "0x182F7EF40", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x2F7EEB0", Offset = "0x2F7D4B0", VA = "0x182F7EEB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x2F7EAE0", Offset = "0x2F7D0E0", VA = "0x182F7EAE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
