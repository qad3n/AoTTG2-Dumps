// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchyNodeType
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x69740A0", Offset = "0x69730A0", VA = "0x69740A0")]
		get
		{
			return ref *(HierarchyNodeType*)null;
		}
	}

	[Token(Token = "0x1700001B")]
	public int Id
	{
		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x6974510", Offset = "0x6973510", VA = "0x6974510")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x6974520", Offset = "0x6973520", VA = "0x6974520")]
	[ExcludeFromDocs]
	public static bool operator ==(in HierarchyNodeType lhs, in HierarchyNodeType rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x6974530", Offset = "0x6973530", VA = "0x6974530", Slot = "4")]
	[ExcludeFromDocs]
	public bool Equals(HierarchyNodeType other)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x6974540", Offset = "0x6973540", VA = "0x6974540", Slot = "3")]
	[ExcludeFromDocs]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x6974600", Offset = "0x6973600", VA = "0x6974600", Slot = "0")]
	[ExcludeFromDocs]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x6974660", Offset = "0x6973660", VA = "0x6974660", Slot = "2")]
	[ExcludeFromDocs]
	public override int GetHashCode()
	{
		return default(int);
	}
}
