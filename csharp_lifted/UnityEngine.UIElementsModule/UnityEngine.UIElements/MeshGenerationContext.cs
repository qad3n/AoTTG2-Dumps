// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MeshGenerationContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Jobs;
using Unity.Profiling;
using UnityEngine.UIElements.UIR;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002D3")]
public class MeshGenerationContext
{
	[Token(Token = "0x20002D4")]
	[Flags]
	internal enum MeshFlags
	{
		[Token(Token = "0x4000AFF")]
		None = 0,
		[Token(Token = "0x4000B00")]
		SkipDynamicAtlas = 2,
		[Token(Token = "0x4000B01")]
		IsUsingVectorImageGradients = 4,
		[Token(Token = "0x4000B02")]
		SliceTiled = 8
	}

	[Token(Token = "0x4000AF3")]
	[FieldOffset(Offset = "0x20")]
	private Painter2D m_Painter2D;

	[Token(Token = "0x4000AF4")]
	[FieldOffset(Offset = "0x28")]
	private MeshWriteDataPool m_MeshWriteDataPool;

	[Token(Token = "0x4000AF5")]
	[FieldOffset(Offset = "0x30")]
	private TempMeshAllocatorImpl m_Allocator;

	[Token(Token = "0x4000AF6")]
	[FieldOffset(Offset = "0x38")]
	private MeshGenerationDeferrer m_MeshGenerationDeferrer;

	[Token(Token = "0x4000AF7")]
	[FieldOffset(Offset = "0x40")]
	private MeshGenerationNodeManager m_MeshGenerationNodeManager;

	[Token(Token = "0x4000AFB")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ProfilerMarker k_AllocateMarker;

	[Token(Token = "0x4000AFC")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker k_DrawVectorImageMarker;

	[Token(Token = "0x170003E4")]
	public VisualElement visualElement
	{
		[Token(Token = "0x6001315")]
		[Address(RVA = "0x6CBDD20", Offset = "0x6CBCD20", VA = "0x6CBDD20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001316")]
		[Address(RVA = "0x6CBDD30", Offset = "0x6CBCD30", VA = "0x6CBDD30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170003E5")]
	internal RenderData renderData
	{
		[Token(Token = "0x6001317")]
		[Address(RVA = "0x6CBDD40", Offset = "0x6CBCD40", VA = "0x6CBDD40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001318")]
		[Address(RVA = "0x6CBDD50", Offset = "0x6CBCD50", VA = "0x6CBDD50")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170003E6")]
	public Painter2D painter2D
	{
		[Token(Token = "0x6001319")]
		[Address(RVA = "0x6CBDD60", Offset = "0x6CBCD60", VA = "0x6CBDD60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003E7")]
	internal bool hasPainter2D
	{
		[Token(Token = "0x600131A")]
		[Address(RVA = "0x6CBE020", Offset = "0x6CBD020", VA = "0x6CBE020")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003E8")]
	internal IMeshGenerator meshGenerator
	{
		[Token(Token = "0x600131B")]
		[Address(RVA = "0x6CBE030", Offset = "0x6CBD030", VA = "0x6CBE030")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600131C")]
		[Address(RVA = "0x6CBE040", Offset = "0x6CBD040", VA = "0x6CBE040")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003E9")]
	internal EntryRecorder entryRecorder
	{
		[Token(Token = "0x600131D")]
		[Address(RVA = "0x6CBE050", Offset = "0x6CBD050", VA = "0x6CBE050")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600131E")]
		[Address(RVA = "0x6CBE060", Offset = "0x6CBD060", VA = "0x6CBE060")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170003EA")]
	internal Entry parentEntry
	{
		[Token(Token = "0x600131F")]
		[Address(RVA = "0x6CBE070", Offset = "0x6CBD070", VA = "0x6CBE070")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001320")]
		[Address(RVA = "0x6CBE080", Offset = "0x6CBD080", VA = "0x6CBE080")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170003EB")]
	internal bool disposed
	{
		[Token(Token = "0x600132A")]
		[Address(RVA = "0x6CBE6C0", Offset = "0x6CBD6C0", VA = "0x6CBE6C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600132B")]
		[Address(RVA = "0x6CBE6D0", Offset = "0x6CBD6D0", VA = "0x6CBE6D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001321")]
	[Address(RVA = "0x6CBE090", Offset = "0x6CBD090", VA = "0x6CBE090")]
	internal MeshGenerationContext(MeshWriteDataPool meshWriteDataPool, EntryRecorder entryRecorder, TempMeshAllocatorImpl allocator, MeshGenerationDeferrer meshGenerationDeferrer, MeshGenerationNodeManager meshGenerationNodeManager)
	{
	}

	[Token(Token = "0x6001322")]
	[Address(RVA = "0x6CBE170", Offset = "0x6CBD170", VA = "0x6CBE170")]
	public void AllocateTempMesh(int vertexCount, int indexCount, out NativeSlice<Vertex> vertices, out NativeSlice<ushort> indices)
	{
	}

	[Token(Token = "0x6001323")]
	[Address(RVA = "0x6CBE190", Offset = "0x6CBD190", VA = "0x6CBE190")]
	public void GetTempMeshAllocator(out TempMeshAllocator allocator)
	{
	}

	[Token(Token = "0x6001324")]
	[Address(RVA = "0x6CBE1B0", Offset = "0x6CBD1B0", VA = "0x6CBE1B0")]
	public void InsertMeshGenerationNode(out MeshGenerationNode node)
	{
	}

	[Token(Token = "0x6001325")]
	[Address(RVA = "0x6CBE230", Offset = "0x6CBD230", VA = "0x6CBE230")]
	internal void InsertUnsafeMeshGenerationNode(out UnsafeMeshGenerationNode node)
	{
	}

	[Token(Token = "0x6001326")]
	[Address(RVA = "0x6CBE2A0", Offset = "0x6CBD2A0", VA = "0x6CBE2A0")]
	public void AddMeshGenerationJob(JobHandle jobHandle)
	{
	}

	[Token(Token = "0x6001327")]
	[Address(RVA = "0x6CBE2C0", Offset = "0x6CBD2C0", VA = "0x6CBE2C0")]
	internal void AddMeshGenerationCallback(MeshGenerationCallback callback, object userData, MeshGenerationCallbackType callbackType, bool isJobDependent)
	{
	}

	[Token(Token = "0x6001328")]
	[Address(RVA = "0x6CBE2E0", Offset = "0x6CBD2E0", VA = "0x6CBE2E0")]
	internal void Begin(Entry parentEntry, VisualElement ve, RenderData renderData)
	{
	}

	[Token(Token = "0x6001329")]
	[Address(RVA = "0x6CBE490", Offset = "0x6CBD490", VA = "0x6CBE490")]
	internal void End()
	{
	}

	[Token(Token = "0x600132C")]
	[Address(RVA = "0x6CBE6E0", Offset = "0x6CBD6E0", VA = "0x6CBE6E0")]
	internal void Dispose()
	{
	}

	[Token(Token = "0x600132D")]
	[Address(RVA = "0x6CBE740", Offset = "0x6CBD740", VA = "0x6CBE740")]
	private void Dispose(bool disposing)
	{
	}
}
