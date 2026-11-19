// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UITKTextJobSystem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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

[Token(Token = "0x20004AC")]
internal class UITKTextJobSystem
{
	[Token(Token = "0x20004AD")]
	private class ManagedJobData
	{
		[Token(Token = "0x400100B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public TextElement visualElement;

		[Token(Token = "0x400100C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public MeshGenerationNode node;

		[Token(Token = "0x400100D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public List<Material> materials;

		[Token(Token = "0x400100E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public List<GlyphRenderMode> renderModes;

		[Token(Token = "0x400100F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public List<NativeSlice<Vertex>> vertices;

		[Token(Token = "0x4001010")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public List<NativeSlice<ushort>> indices;

		[Token(Token = "0x4001011")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public bool prepareSuccess;

		[Token(Token = "0x60024A7")]
		[Address(RVA = "0x6B454B0", Offset = "0x6B444B0", VA = "0x6B454B0")]
		public void Release()
		{
		}

		[Token(Token = "0x60024A8")]
		[Address(RVA = "0x6B45CF0", Offset = "0x6B44CF0", VA = "0x6B45CF0")]
		public ManagedJobData()
		{
		}
	}

	[Token(Token = "0x20004AE")]
	private struct PrepareTextJobData : IJobParallelFor
	{
		[Token(Token = "0x4001012")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public GCHandle managedJobDataHandle;

		[Token(Token = "0x60024A9")]
		[Address(RVA = "0x6B45D00", Offset = "0x6B44D00", VA = "0x6B45D00", Slot = "4")]
		public void Execute(int index)
		{
		}
	}

	[Token(Token = "0x20004AF")]
	private struct GenerateTextJobData : IJobParallelFor
	{
		[Token(Token = "0x4001013")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public GCHandle managedJobDataHandle;

		[Token(Token = "0x4001014")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		[ReadOnly]
		public TempMeshAllocator alloc;

		[Token(Token = "0x60024AA")]
		[Address(RVA = "0x6B45EB0", Offset = "0x6B44EB0", VA = "0x6B45EB0", Slot = "4")]
		public void Execute(int index)
		{
		}
	}

	[Token(Token = "0x4000FFC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly ProfilerMarker k_ExecuteMarker;

	[Token(Token = "0x4000FFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker k_UpdateMainThreadMarker;

	[Token(Token = "0x4000FFE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly ProfilerMarker k_PrepareMainThreadMarker;

	[Token(Token = "0x4000FFF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly ProfilerMarker k_PrepareJobifiedMarker;

	[Token(Token = "0x4001000")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private GCHandle textJobDatasHandle;

	[Token(Token = "0x4001001")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private List<ManagedJobData> textJobDatas;

	[Token(Token = "0x4001002")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private bool hasPendingTextWork;

	[Token(Token = "0x4001003")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static UnityEngine.Pool.ObjectPool<ManagedJobData> s_JobDataPool;

	[Token(Token = "0x4001004")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static UnityEngine.Pool.ObjectPool<List<Material>> s_MaterialsPool;

	[Token(Token = "0x4001005")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static UnityEngine.Pool.ObjectPool<List<GlyphRenderMode>> s_RenderModesPool;

	[Token(Token = "0x4001006")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static UnityEngine.Pool.ObjectPool<List<NativeSlice<Vertex>>> s_VerticesPool;

	[Token(Token = "0x4001007")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static UnityEngine.Pool.ObjectPool<List<NativeSlice<ushort>>> s_IndicesPool;

	[Token(Token = "0x4001008")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal MeshGenerationCallback m_PrepareTextJobifiedCallback;

	[Token(Token = "0x4001009")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal MeshGenerationCallback m_GenerateTextJobifiedCallback;

	[Token(Token = "0x400100A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal MeshGenerationCallback m_AddDrawEntriesCallback;

	[Token(Token = "0x600249F")]
	[Address(RVA = "0x6B40E80", Offset = "0x6B3FE80", VA = "0x6B40E80")]
	public UITKTextJobSystem()
	{
	}

	[Token(Token = "0x60024A0")]
	[Address(RVA = "0x6B436D0", Offset = "0x6B426D0", VA = "0x6B436D0")]
	private static void OnGetManagedJob(ManagedJobData managedJobData)
	{
	}

	[Token(Token = "0x60024A1")]
	[Address(RVA = "0x6B40FD0", Offset = "0x6B3FFD0", VA = "0x6B40FD0")]
	internal void GenerateText(MeshGenerationContext mgc, TextElement textElement)
	{
	}

	[Token(Token = "0x60024A2")]
	[Address(RVA = "0x6B43730", Offset = "0x6B42730", VA = "0x6B43730")]
	internal void PrepareTextJobified(MeshGenerationContext mgc, object _)
	{
	}

	[Token(Token = "0x60024A3")]
	[Address(RVA = "0x6B43890", Offset = "0x6B42890", VA = "0x6B43890")]
	private void GenerateTextJobified(MeshGenerationContext mgc, object _)
	{
	}

	[Token(Token = "0x60024A4")]
	[Address(RVA = "0x6B43CD0", Offset = "0x6B42CD0", VA = "0x6B43CD0")]
	private static void ConvertMeshInfoToUIRVertex(UnityEngine.TextCore.Text.MeshInfo[] meshInfos, TempMeshAllocator alloc, TextElement visualElement, ref List<Material> materials, ref List<NativeSlice<Vertex>> verticesArray, ref List<NativeSlice<ushort>> indicesArray, ref List<GlyphRenderMode> renderModes)
	{
	}

	[Token(Token = "0x60024A5")]
	[Address(RVA = "0x6B45070", Offset = "0x6B44070", VA = "0x6B45070")]
	private void AddDrawEntries(MeshGenerationContext mgc, object _)
	{
	}
}
