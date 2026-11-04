// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Accessibility.AccessibilityHierarchy
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Accessibility;

[Token(Token = "0x2000011")]
public class AccessibilityHierarchy
{
	[Token(Token = "0x400004C")]
	[FieldOffset(Offset = "0x10")]
	internal readonly Dictionary<int, AccessibilityNode> nodes;

	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x18")]
	private List<AccessibilityNode> m_RootNodes;

	[Token(Token = "0x400004E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly List<WeakReference<AccessibilityHierarchy>> s_LiveHierarchies;

	[Token(Token = "0x1700001B")]
	public IReadOnlyList<AccessibilityNode> rootNodes
	{
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x2E7C360", Offset = "0x2E7A960", VA = "0x182E7C360")]
	public bool TryGetNode(int id, out AccessibilityNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x2E7C2C0", Offset = "0x2E7A8C0", VA = "0x182E7C2C0")]
	public bool TryGetNodeAt(float horizontalPosition, float verticalPosition, out AccessibilityNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x2E7C000", Offset = "0x2E7A600", VA = "0x182E7C000")]
	internal void RefreshNodeFramesWithoutResetting()
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x2E7BDE0", Offset = "0x2E7A3E0", VA = "0x182E7BDE0")]
	internal void AllocateNative()
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x2E7BEF0", Offset = "0x2E7A4F0", VA = "0x182E7BEF0")]
	internal void FreeNative()
	{
	}
}
