// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchyFlattenedNode
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6973FC0", Offset = "0x6972FC0", VA = "0x6973FC0")]
		get
		{
			return ref *(HierarchyFlattenedNode*)null;
		}
	}

	[Token(Token = "0x17000014")]
	public HierarchyNode Node
	{
		[Token(Token = "0x60000AC")]
		[Address(RVA = "0x6973FF0", Offset = "0x6972FF0", VA = "0x6973FF0")]
		get
		{
			return default(HierarchyNode);
		}
	}

	[Token(Token = "0x17000015")]
	public int NextSiblingOffset
	{
		[Token(Token = "0x60000AD")]
		[Address(RVA = "0x6974000", Offset = "0x6973000", VA = "0x6974000")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000016")]
	public int Depth
	{
		[Token(Token = "0x60000AE")]
		[Address(RVA = "0x6974010", Offset = "0x6973010", VA = "0x6974010")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x6974020", Offset = "0x6973020", VA = "0x6974020")]
	public HierarchyFlattenedNode()
	{
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x69740D0", Offset = "0x69730D0", VA = "0x69740D0")]
	[ExcludeFromDocs]
	public static bool operator ==(in HierarchyFlattenedNode lhs, in HierarchyFlattenedNode rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x69740E0", Offset = "0x69730E0", VA = "0x69740E0", Slot = "4")]
	[ExcludeFromDocs]
	public bool Equals(HierarchyFlattenedNode other)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x69740F0", Offset = "0x69730F0", VA = "0x69740F0", Slot = "3")]
	[ExcludeFromDocs]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x69741F0", Offset = "0x69731F0", VA = "0x69741F0", Slot = "0")]
	[ExcludeFromDocs]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x6974250", Offset = "0x6973250", VA = "0x6974250", Slot = "2")]
	[ExcludeFromDocs]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x6974320", Offset = "0x6973320", VA = "0x6974320")]
	internal unsafe static ref HierarchyNode GetNodeByRef(in HierarchyFlattenedNode hierarchyFlattenedNode)
	{
		return ref *(HierarchyNode*)null;
	}
}
