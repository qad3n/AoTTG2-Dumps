// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchyNode
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

[Token(Token = "0x200001F")]
[UnityEngine.Bindings.NativeHeader("Modules/HierarchyCore/Public/HierarchyNode.h")]
public readonly struct HierarchyNode : IEquatable<HierarchyNode>
{
	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HierarchyNode s_Null;

	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x0")]
	private readonly int m_Id;

	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x4")]
	private readonly int m_Version;

	[Token(Token = "0x17000017")]
	public unsafe static ref readonly HierarchyNode Null
	{
		[Token(Token = "0x60000B6")]
		[Address(RVA = "0x2F7EE50", Offset = "0x2F7D450", VA = "0x182F7EE50")]
		get
		{
			return ref *(HierarchyNode*)null;
		}
	}

	[Token(Token = "0x17000018")]
	public int Id
	{
		[Token(Token = "0x60000B7")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000019")]
	public int Version
	{
		[Token(Token = "0x60000B8")]
		[Address(RVA = "0x57AEC0", Offset = "0x5794C0", VA = "0x18057AEC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x2F7EE40", Offset = "0x2F7D440", VA = "0x182F7EE40")]
	public HierarchyNode()
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x2F0A600", Offset = "0x2F08C00", VA = "0x182F0A600")]
	[ExcludeFromDocs]
	public static bool operator ==(in HierarchyNode lhs, in HierarchyNode rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x2F7EE90", Offset = "0x2F7D490", VA = "0x182F7EE90")]
	[ExcludeFromDocs]
	public static bool operator !=(in HierarchyNode lhs, in HierarchyNode rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x2F7ECA0", Offset = "0x2F7D2A0", VA = "0x182F7ECA0", Slot = "4")]
	[ExcludeFromDocs]
	public bool Equals(HierarchyNode other)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x2F7ED30", Offset = "0x2F7D330", VA = "0x182F7ED30", Slot = "3")]
	[ExcludeFromDocs]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x2F7EC10", Offset = "0x2F7D210", VA = "0x182F7EC10", Slot = "0")]
	[ExcludeFromDocs]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x2F7ECC0", Offset = "0x2F7D2C0", VA = "0x182F7ECC0", Slot = "2")]
	[ExcludeFromDocs]
	public override int GetHashCode()
	{
		return default(int);
	}
}
