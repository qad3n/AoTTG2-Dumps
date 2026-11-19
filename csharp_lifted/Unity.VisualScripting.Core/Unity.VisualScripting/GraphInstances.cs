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
	[Address(RVA = "0x67995F0", Offset = "0x67985F0", VA = "0x67995F0")]
	public static void Instantiate(GraphReference instance)
	{
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x679A350", Offset = "0x6799350", VA = "0x679A350")]
	public static void Uninstantiate(GraphReference instance)
	{
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x679AEB0", Offset = "0x6799EB0", VA = "0x679AEB0")]
	public static HashSet<GraphReference> OfPooled(IGraph graph)
	{
		return null;
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x679B180", Offset = "0x679A180", VA = "0x679B180")]
	public static HashSet<GraphReference> ChildrenOfPooled(IGraphParent parent)
	{
		return null;
	}
}
