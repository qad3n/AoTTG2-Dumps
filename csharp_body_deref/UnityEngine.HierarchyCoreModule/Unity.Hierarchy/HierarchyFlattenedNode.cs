// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchyFlattenedNode
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;

namespace Unity.Hierarchy;

[Token(Token = "0x200001E")]
[UnityEngine.Bindings.NativeHeader("Modules/HierarchyCore/Public/HierarchyFlattenedNode.h")]
public readonly struct HierarchyFlattenedNode : IEquatable<HierarchyFlattenedNode>
{
	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HierarchyFlattenedNode s_Null;

	[Token(Token = "0x4000040")]
	[FieldOffset(Offset = "0x0")]
	private readonly HierarchyNode m_Node;

	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x8")]
	private readonly HierarchyNodeType m_Type;

	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0xC")]
	private readonly int m_Version;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x10")]
	private readonly int m_ParentOffset;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x14")]
	private readonly int m_NextSiblingOffset;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x18")]
	private readonly int m_ChildIndex;

	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x1C")]
	private readonly int m_ChildrenCount;

	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x20")]
	private readonly int m_Depth;

	[Token(Token = "0x17000013")]
	public unsafe static ref readonly HierarchyFlattenedNode Null
	{
		[Token(Token = "0x60000AB")]
		[Address(RVA = "0x2F7CE30", Offset = "0x2F7B430", VA = "0x182F7CE30")]
		get
		{
			return ref *(HierarchyFlattenedNode*)null;
		}
	}

	[Token(Token = "0x17000014")]
	public HierarchyNode Node
	{
		[Token(Token = "0x60000AC")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			return default(HierarchyNode);
		}
	}

	[Token(Token = "0x17000015")]
	public int NextSiblingOffset
	{
		[Token(Token = "0x60000AD")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000016")]
	public int Depth
	{
		[Token(Token = "0x60000AE")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x2F7CDB0", Offset = "0x2F7B3B0", VA = "0x182F7CDB0")]
	public HierarchyFlattenedNode()
	{
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x2F7CE70", Offset = "0x2F7B470", VA = "0x182F7CE70")]
	[ExcludeFromDocs]
	public static bool operator ==(in HierarchyFlattenedNode lhs, in HierarchyFlattenedNode rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x2F7CB50", Offset = "0x2F7B150", VA = "0x182F7CB50", Slot = "4")]
	[ExcludeFromDocs]
	public bool Equals(HierarchyFlattenedNode other)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x2F7CC90", Offset = "0x2F7B290", VA = "0x182F7CC90", Slot = "3")]
	[ExcludeFromDocs]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x2F7CB70", Offset = "0x2F7B170", VA = "0x182F7CB70", Slot = "0")]
	[ExcludeFromDocs]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x2F7CC20", Offset = "0x2F7B220", VA = "0x182F7CC20", Slot = "2")]
	[ExcludeFromDocs]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510")]
	internal unsafe static ref HierarchyNode GetNodeByRef(in HierarchyFlattenedNode hierarchyFlattenedNode)
	{
		return ref *(HierarchyNode*)null;
	}
}
