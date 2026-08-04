// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x200002B")]
internal class RenderGraphDebugData
{
	[Token(Token = "0x200002C")]
	[DebuggerDisplay("PassDebug: {name}")]
	public struct PassDebugData
	{
		[Token(Token = "0x4000097")]
		[FieldOffset(Offset = "0x0")]
		public string name;

		[Token(Token = "0x4000098")]
		[FieldOffset(Offset = "0x8")]
		public List<int>[] resourceReadLists;

		[Token(Token = "0x4000099")]
		[FieldOffset(Offset = "0x10")]
		public List<int>[] resourceWriteLists;

		[Token(Token = "0x400009A")]
		[FieldOffset(Offset = "0x18")]
		public bool culled;

		[Token(Token = "0x400009B")]
		[FieldOffset(Offset = "0x19")]
		public bool generateDebugData;
	}

	[Token(Token = "0x200002D")]
	[DebuggerDisplay("ResourceDebug: {name} [{creationPassIndex}:{releasePassIndex}]")]
	public struct ResourceDebugData
	{
		[Token(Token = "0x400009C")]
		[FieldOffset(Offset = "0x0")]
		public string name;

		[Token(Token = "0x400009D")]
		[FieldOffset(Offset = "0x8")]
		public bool imported;

		[Token(Token = "0x400009E")]
		[FieldOffset(Offset = "0xC")]
		public int creationPassIndex;

		[Token(Token = "0x400009F")]
		[FieldOffset(Offset = "0x10")]
		public int releasePassIndex;

		[Token(Token = "0x40000A0")]
		[FieldOffset(Offset = "0x18")]
		public List<int> consumerList;

		[Token(Token = "0x40000A1")]
		[FieldOffset(Offset = "0x20")]
		public List<int> producerList;
	}

	[Token(Token = "0x4000095")]
	[FieldOffset(Offset = "0x10")]
	public List<PassDebugData> passList;

	[Token(Token = "0x4000096")]
	[FieldOffset(Offset = "0x18")]
	public List<ResourceDebugData>[] resourceLists;

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x4B7BEE0", Offset = "0x4B7BEE0", VA = "0x4B7BEE0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000363")]
	[Address(RVA = "0x4B7C0E0", Offset = "0x4B7C0E0", VA = "0x4B7C0E0")]
	public RenderGraphDebugData()
	{
	}
}
