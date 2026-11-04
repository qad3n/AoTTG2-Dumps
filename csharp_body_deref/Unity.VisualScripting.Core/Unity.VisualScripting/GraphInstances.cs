// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.GraphInstances
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000070")]
public static class GraphInstances
{
	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object @lock;

	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<IGraph, HashSet<GraphReference>> byGraph;

	[Token(Token = "0x40000F6")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Dictionary<IGraphParent, HashSet<GraphReference>> byParent;

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x2DA8840", Offset = "0x2DA6E40", VA = "0x182DA8840")]
	public static void Instantiate(GraphReference instance)
	{
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x2DA9120", Offset = "0x2DA7720", VA = "0x182DA9120")]
	public static void Uninstantiate(GraphReference instance)
	{
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x2DA8EF0", Offset = "0x2DA74F0", VA = "0x182DA8EF0")]
	public static HashSet<GraphReference> OfPooled(IGraph graph)
	{
		return null;
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x2DA8610", Offset = "0x2DA6C10", VA = "0x182DA8610")]
	public static HashSet<GraphReference> ChildrenOfPooled(IGraphParent parent)
	{
		return null;
	}
}
