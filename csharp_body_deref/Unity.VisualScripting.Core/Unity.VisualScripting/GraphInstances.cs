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
	[Token(Token = "0x40000F7")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object @lock;

	[Token(Token = "0x40000F8")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<IGraph, HashSet<GraphReference>> byGraph;

	[Token(Token = "0x40000F9")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Dictionary<IGraphParent, HashSet<GraphReference>> byParent;

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x4CAA470", Offset = "0x4CAA470", VA = "0x4CAA470")]
	public static void Instantiate(GraphReference instance)
	{
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x4CAB320", Offset = "0x4CAB320", VA = "0x4CAB320")]
	public static void Uninstantiate(GraphReference instance)
	{
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x4CABFE0", Offset = "0x4CABFE0", VA = "0x4CABFE0")]
	public static HashSet<GraphReference> OfPooled(IGraph graph)
	{
		return null;
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x4CAC2D0", Offset = "0x4CAC2D0", VA = "0x4CAC2D0")]
	public static HashSet<GraphReference> ChildrenOfPooled(IGraphParent parent)
	{
		return null;
	}
}
