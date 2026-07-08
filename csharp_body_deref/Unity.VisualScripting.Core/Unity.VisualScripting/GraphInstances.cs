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
	[Address(RVA = "0x49858A0", Offset = "0x49858A0", VA = "0x49858A0")]
	public static void Instantiate(GraphReference instance)
	{
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x4986750", Offset = "0x4986750", VA = "0x4986750")]
	public static void Uninstantiate(GraphReference instance)
	{
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x4987410", Offset = "0x4987410", VA = "0x4987410")]
	public static HashSet<GraphReference> OfPooled(IGraph graph)
	{
		return null;
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x4987700", Offset = "0x4987700", VA = "0x4987700")]
	public static HashSet<GraphReference> ChildrenOfPooled(IGraphParent parent)
	{
		return null;
	}
}
