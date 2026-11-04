// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ATGTextJobSystem
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Jobs;
using Unity.Profiling;
using UnityEngine.Pool;
using UnityEngine.TextCore.LowLevel;
using UnityEngine.TextCore.Text;
using UnityEngine.UIElements.UIR;

namespace UnityEngine.UIElements;

[Token(Token = "0x200049A")]
internal class ATGTextJobSystem
{
	[Token(Token = "0x200049B")]
	private class ManagedJobData
	{
		[Token(Token = "0x4000F74")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public TextElement textElement;

		[Token(Token = "0x4000F75")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public MeshGenerationNode node;

		[Token(Token = "0x4000F76")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public UnityEngine.TextCore.Text.NativeTextInfo textInfo;

		[Token(Token = "0x4000F77")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public bool success;

		[Token(Token = "0x4000F78")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public List<Texture2D> atlases;

		[Token(Token = "0x4000F79")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public List<float> sdfScales;

		[Token(Token = "0x4000F7A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public List<NativeSlice<Vertex>> vertices;

		[Token(Token = "0x4000F7B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public List<NativeSlice<ushort>> indices;

		[Token(Token = "0x4000F7C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public List<GlyphRenderMode> renderModes;

		[Token(Token = "0x4000F7D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public List<List<List<int>>> textElementIndicesByMesh;

		[Token(Token = "0x4000F7E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		public List<bool> hasMultipleColorsByMesh;

		[Token(Token = "0x4000F7F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		public Dictionary<int, HashSet<uint>> missingGlyphsPerFontAsset;

		[Token(Token = "0x4000F80")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		public bool hasMissingGlyphs;

		[Token(Token = "0x600239F")]
		[Address(RVA = "0x312A7B0", Offset = "0x3128DB0", VA = "0x18312A7B0")]
		public void Clear()
		{
		}

		[Token(Token = "0x60023A0")]
		[Address(RVA = "0x312AC20", Offset = "0x3129220", VA = "0x18312AC20")]
		public ManagedJobData()
		{
		}
	}

	[Token(Token = "0x200049C")]
	private struct PrepareShapingJob : IJobFor
	{
		[Token(Token = "0x4000F81")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public GCHandle managedJobDataHandle;

		[Token(Token = "0x60023A1")]
		[Address(RVA = "0x312B020", Offset = "0x3129620", VA = "0x18312B020", Slot = "4")]
		public void Execute(int index)
		{
		}
	}

	[Token(Token = "0x200049D")]
	private struct GenerateTextJobData : IJobFor
	{
		[Token(Token = "0x4000F82")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public GCHandle managedJobDataHandle;

		[Token(Token = "0x4000F83")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		[ReadOnly]
		public TempMeshAllocator alloc;

		[Token(Token = "0x60023A2")]
		[Address(RVA = "0x312A170", Offset = "0x3128770", VA = "0x18312A170", Slot = "4")]
		public void Execute(int index)
		{
		}
	}

	[Token(Token = "0x200049E")]
	private struct ConvertToUIRVertexJobData : IJobFor
	{
		[Token(Token = "0x4000F84")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public GCHandle managedJobDataHandle;

		[Token(Token = "0x4000F85")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		[ReadOnly]
		public TempMeshAllocator alloc;

		[Token(Token = "0x60023A3")]
		[Address(RVA = "0x3129F70", Offset = "0x3128570", VA = "0x183129F70", Slot = "4")]
		public void Execute(int index)
		{
		}
	}

	[Token(Token = "0x4000F66")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private GCHandle textJobDatasHandle;

	[Token(Token = "0x4000F67")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private List<ManagedJobData> textJobDatas;

	[Token(Token = "0x4000F68")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private bool hasPendingTextWork;

	[Token(Token = "0x4000F69")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly UnityEngine.Pool.ObjectPool<ManagedJobData> s_JobDataPool;

	[Token(Token = "0x4000F6A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static UnityEngine.Pool.ObjectPool<Dictionary<int, HashSet<uint>>> s_AggregatedMissingGlyphsPool;

	[Token(Token = "0x4000F6B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal MeshGenerationCallback m_GenerateTextJobifiedCallback;

	[Token(Token = "0x4000F6C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal MeshGenerationCallback m_PopulateGlyphsCallback;

	[Token(Token = "0x4000F6D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal MeshGenerationCallback m_AddDrawEntriesCallback;

	[Token(Token = "0x4000F6E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly ProfilerMarker k_GenerateTextMarker;

	[Token(Token = "0x4000F6F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly ProfilerMarker k_ATGTextJobMarker;

	[Token(Token = "0x4000F70")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly ProfilerMarker k_PrepareShapingMarker;

	[Token(Token = "0x4000F71")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static readonly bool k_IsMultiThreaded;

	[Token(Token = "0x4000F72")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private List<TextElement> m_PrepareShapingDataList;

	[Token(Token = "0x4000F73")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static List<uint> s_GlyphsToAddBuffer;

	[Token(Token = "0x6002396")]
	[Address(RVA = "0x3129DE0", Offset = "0x31283E0", VA = "0x183129DE0")]
	public ATGTextJobSystem()
	{
	}

	[Token(Token = "0x6002397")]
	[Address(RVA = "0x3129810", Offset = "0x3127E10", VA = "0x183129810")]
	private static bool PrepareTextElementForJobsOnMainThread(TextElement textElement)
	{
		return default(bool);
	}

	[Token(Token = "0x6002398")]
	[Address(RVA = "0x3129310", Offset = "0x3127910", VA = "0x183129310")]
	internal void PrepareShapingBeforeLayout(BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6002399")]
	[Address(RVA = "0x31288B0", Offset = "0x3126EB0", VA = "0x1831288B0")]
	public void GenerateText(MeshGenerationContext mgc, TextElement textElement)
	{
	}

	[Token(Token = "0x600239A")]
	[Address(RVA = "0x3128630", Offset = "0x3126C30", VA = "0x183128630")]
	private void GenerateTextJobified(MeshGenerationContext mgc, object _)
	{
	}

	[Token(Token = "0x600239B")]
	[Address(RVA = "0x3128A80", Offset = "0x3127080", VA = "0x183128A80")]
	private void PopulateGlyphs(MeshGenerationContext mgc, object _)
	{
	}

	[Token(Token = "0x600239C")]
	[Address(RVA = "0x3127590", Offset = "0x3125B90", VA = "0x183127590")]
	private void AddDrawEntries(MeshGenerationContext mgc, object _)
	{
	}

	[Token(Token = "0x600239D")]
	[Address(RVA = "0x3127960", Offset = "0x3125F60", VA = "0x183127960")]
	private static void ConvertMeshInfoToUIRVertex(Span<UnityEngine.TextCore.Text.ATGMeshInfo> meshInfos, TempMeshAllocator alloc, TextElement visualElement, List<List<List<int>>> textElementIndicesByMesh, List<bool> hasMultipleColorsByMesh, ref List<Texture2D> atlases, ref List<NativeSlice<Vertex>> verticesArray, ref List<NativeSlice<ushort>> indicesArray, ref List<GlyphRenderMode> renderModes, ref List<float> sdfScales)
	{
	}
}
