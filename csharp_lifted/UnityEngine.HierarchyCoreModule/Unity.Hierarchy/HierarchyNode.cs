// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchyNode
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
		[Address(RVA = "0x696F910", Offset = "0x696E910", VA = "0x696F910")]
		get
		{
			return ref *(HierarchyNode*)null;
		}
	}

	[Token(Token = "0x17000018")]
	public int Id
	{
		[Token(Token = "0x60000B7")]
		[Address(RVA = "0x6974330", Offset = "0x6973330", VA = "0x6974330")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000019")]
	public int Version
	{
		[Token(Token = "0x60000B8")]
		[Address(RVA = "0x6974340", Offset = "0x6973340", VA = "0x6974340")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x6974350", Offset = "0x6973350", VA = "0x6974350")]
	public HierarchyNode()
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x696F940", Offset = "0x696E940", VA = "0x696F940")]
	[ExcludeFromDocs]
	public static bool operator ==(in HierarchyNode lhs, in HierarchyNode rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x696FEC0", Offset = "0x696EEC0", VA = "0x696FEC0")]
	[ExcludeFromDocs]
	public static bool operator !=(in HierarchyNode lhs, in HierarchyNode rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x6974360", Offset = "0x6973360", VA = "0x6974360", Slot = "4")]
	[ExcludeFromDocs]
	public bool Equals(HierarchyNode other)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x6974380", Offset = "0x6973380", VA = "0x6974380", Slot = "3")]
	[ExcludeFromDocs]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x69744A0", Offset = "0x69734A0", VA = "0x69744A0", Slot = "0")]
	[ExcludeFromDocs]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x69742B0", Offset = "0x69732B0", VA = "0x69742B0", Slot = "2")]
	[ExcludeFromDocs]
	public override int GetHashCode()
	{
		return default(int);
	}
}
