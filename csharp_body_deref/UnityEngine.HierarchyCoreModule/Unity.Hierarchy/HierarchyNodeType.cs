// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchyNodeType
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;

namespace Unity.Hierarchy;

[Token(Token = "0x2000021")]
[UnityEngine.Bindings.NativeHeader("Modules/HierarchyCore/Public/HierarchyNodeType.h")]
public readonly struct HierarchyNodeType : IEquatable<HierarchyNodeType>
{
	[Token(Token = "0x4000051")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HierarchyNodeType s_Null;

	[Token(Token = "0x4000052")]
	[FieldOffset(Offset = "0x0")]
	private readonly int m_Id;

	[Token(Token = "0x1700001A")]
	public unsafe static ref readonly HierarchyNodeType Null
	{
		[Token(Token = "0x60000C0")]
		[Address(RVA = "0x2F7EBD0", Offset = "0x2F7D1D0", VA = "0x182F7EBD0")]
		get
		{
			return ref *(HierarchyNodeType*)null;
		}
	}

	[Token(Token = "0x1700001B")]
	public int Id
	{
		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x2F001A0", Offset = "0x2EFE7A0", VA = "0x182F001A0")]
	[ExcludeFromDocs]
	public static bool operator ==(in HierarchyNodeType lhs, in HierarchyNodeType rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x2F7EA40", Offset = "0x2F7D040", VA = "0x182F7EA40", Slot = "4")]
	[ExcludeFromDocs]
	public bool Equals(HierarchyNodeType other)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x2F7EB00", Offset = "0x2F7D100", VA = "0x182F7EB00", Slot = "3")]
	[ExcludeFromDocs]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x2F7EA50", Offset = "0x2F7D050", VA = "0x182F7EA50", Slot = "0")]
	[ExcludeFromDocs]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x2F7EAE0", Offset = "0x2F7D0E0", VA = "0x182F7EAE0", Slot = "2")]
	[ExcludeFromDocs]
	public override int GetHashCode()
	{
		return default(int);
	}
}
