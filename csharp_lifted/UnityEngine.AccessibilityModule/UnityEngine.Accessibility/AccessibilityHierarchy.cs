// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Accessibility.AccessibilityHierarchy
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6879F70", Offset = "0x6878F70", VA = "0x6879F70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x6879F80", Offset = "0x6878F80", VA = "0x6879F80")]
	public bool TryGetNode(int id, out AccessibilityNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x6879FD0", Offset = "0x6878FD0", VA = "0x6879FD0")]
	public bool TryGetNodeAt(float horizontalPosition, float verticalPosition, out AccessibilityNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x6876960", Offset = "0x6875960", VA = "0x6876960")]
	internal void RefreshNodeFramesWithoutResetting()
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x687A680", Offset = "0x6879680", VA = "0x687A680")]
	internal void AllocateNative()
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x687AD70", Offset = "0x6879D70", VA = "0x687AD70")]
	internal void FreeNative()
	{
	}
}
