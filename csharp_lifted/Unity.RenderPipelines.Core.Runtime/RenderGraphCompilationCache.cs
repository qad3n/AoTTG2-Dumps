// ==================== AoTTG2 cross-reference ====================
// Type: RenderGraphCompilationCache
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Rendering;
using UnityEngine.Rendering.RenderGraphModule;
using UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler;

[Token(Token = "0x2000004")]
internal class RenderGraphCompilationCache
{
	[Token(Token = "0x2000005")]
	private struct HashEntry<T>
	{
		[Token(Token = "0x4000009")]
		[FieldOffset(Offset = "0x0")]
		public int hash;

		[Token(Token = "0x400000A")]
		[FieldOffset(Offset = "0x0")]
		public int lastFrameUsed;

		[Token(Token = "0x400000B")]
		[FieldOffset(Offset = "0x0")]
		public T compiledGraph;
	}

	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x10")]
	private DynamicArray<HashEntry<RenderGraph.CompiledGraph>> m_HashEntries;

	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x18")]
	private DynamicArray<HashEntry<CompilerContextData>> m_NativeHashEntries;

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x20")]
	private Stack<RenderGraph.CompiledGraph> m_CompiledGraphPool;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x28")]
	private Stack<CompilerContextData> m_NativeCompiledGraphPool;

	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x0")]
	private static DynamicArray<HashEntry<RenderGraph.CompiledGraph>>.SortComparer s_EntryComparer;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x8")]
	private static DynamicArray<HashEntry<CompilerContextData>>.SortComparer s_NativeEntryComparer;

	[Token(Token = "0x4000007")]
	private const int k_CachedGraphCount = 20;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x10")]
	private static int s_Hash;

	[Token(Token = "0x6000003")]
	private static int HashEntryComparer<T>(HashEntry<T> a, HashEntry<T> b)
	{
		return default(int);
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x64A4AC0", Offset = "0x64A3AC0", VA = "0x64A4AC0")]
	public RenderGraphCompilationCache()
	{
	}

	[Token(Token = "0x6000005")]
	private bool GetCompilationCache<T>(int hash, int frameIndex, out T outGraph, DynamicArray<HashEntry<T>> hashEntries, Stack<T> pool, DynamicArray<HashEntry<T>>.SortComparer comparer) where T : RenderGraph.ICompiledGraph
	{
		return default(bool);
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x64A4CF0", Offset = "0x64A3CF0", VA = "0x64A4CF0")]
	public bool GetCompilationCache(int hash, int frameIndex, out RenderGraph.CompiledGraph outGraph)
	{
		return default(bool);
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x64A4DA0", Offset = "0x64A3DA0", VA = "0x64A4DA0")]
	public bool GetCompilationCache(int hash, int frameIndex, out CompilerContextData outGraph)
	{
		return default(bool);
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x64A4E50", Offset = "0x64A3E50", VA = "0x64A4E50")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x64A5000", Offset = "0x64A4000", VA = "0x64A5000")]
	public void Cleanup()
	{
	}
}
