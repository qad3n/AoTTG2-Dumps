// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Hierarchy.HierarchyPropertyUnmanaged
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Internal;

namespace Unity.Hierarchy;

[Token(Token = "0x200000E")]
public readonly struct HierarchyPropertyUnmanaged<T> : IEquatable<HierarchyPropertyUnmanaged<T>>, IHierarchyProperty<T> where T : struct
{
	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x0")]
	private readonly Hierarchy m_Hierarchy;

	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x0")]
	internal readonly HierarchyPropertyId m_Property;

	[Token(Token = "0x600003A")]
	internal HierarchyPropertyUnmanaged(Hierarchy hierarchy, in HierarchyPropertyId property)
	{
	}

	[Token(Token = "0x600003B")]
	public void SetValue(in HierarchyNode node, T value)
	{
	}

	[Token(Token = "0x600003C")]
	public T GetValue(in HierarchyNode node)
	{
		return (T)null;
	}

	[Token(Token = "0x600003D")]
	[ExcludeFromDocs]
	public bool Equals(HierarchyPropertyUnmanaged<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x600003E")]
	[ExcludeFromDocs]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600003F")]
	[ExcludeFromDocs]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000040")]
	[ExcludeFromDocs]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000041")]
	private T Unity_002EHierarchy_002EIHierarchyProperty_003CT_003E_002EGetValue(in HierarchyNode node)
	{
		return (T)null;
	}

	[Token(Token = "0x6000042")]
	private void Unity_002EHierarchy_002EIHierarchyProperty_003CT_003E_002ESetValue(in HierarchyNode node, T value)
	{
	}
}
