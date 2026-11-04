// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MeshGenerationContext
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001316")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170003E5")]
	internal RenderData renderData
	{
		[Token(Token = "0x6001317")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001318")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170003E6")]
	public Painter2D painter2D
	{
		[Token(Token = "0x6001319")]
		[Address(RVA = "0x32AFD40", Offset = "0x32AE340", VA = "0x1832AFD40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003E7")]
	internal bool hasPainter2D
	{
		[Token(Token = "0x600131A")]
		[Address(RVA = "0x2450AE0", Offset = "0x244F0E0", VA = "0x182450AE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003E8")]
	internal IMeshGenerator meshGenerator
	{
		[Token(Token = "0x600131B")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600131C")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170003E9")]
	internal EntryRecorder entryRecorder
	{
		[Token(Token = "0x600131D")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600131E")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170003EA")]
	internal Entry parentEntry
	{
		[Token(Token = "0x600131F")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001320")]
		[Address(RVA = "0xA37140", Offset = "0xA35740", VA = "0x180A37140")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170003EB")]
	internal bool disposed
	{
		[Token(Token = "0x600132A")]
		[Address(RVA = "0x198C740", Offset = "0x198AD40", VA = "0x18198C740")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600132B")]
		[Address(RVA = "0x1D1FF10", Offset = "0x1D1E510", VA = "0x181D1FF10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001321")]
	[Address(RVA = "0x32AFC70", Offset = "0x32AE270", VA = "0x1832AFC70")]
	internal MeshGenerationContext(MeshWriteDataPool meshWriteDataPool, EntryRecorder entryRecorder, TempMeshAllocatorImpl allocator, MeshGenerationDeferrer meshGenerationDeferrer, MeshGenerationNodeManager meshGenerationNodeManager)
	{
	}

	[Token(Token = "0x6001322")]
	[Address(RVA = "0x32AF590", Offset = "0x32ADB90", VA = "0x1832AF590")]
	public void AllocateTempMesh(int vertexCount, int indexCount, out NativeSlice<Vertex> vertices, out NativeSlice<ushort> indices)
	{
	}

	[Token(Token = "0x6001323")]
	[Address(RVA = "0x32AFAF0", Offset = "0x32AE0F0", VA = "0x1832AFAF0")]
	public void GetTempMeshAllocator(out TempMeshAllocator allocator)
	{
	}

	[Token(Token = "0x6001324")]
	[Address(RVA = "0x32AFB10", Offset = "0x32AE110", VA = "0x1832AFB10")]
	public void InsertMeshGenerationNode(out MeshGenerationNode node)
	{
	}

	[Token(Token = "0x6001325")]
	[Address(RVA = "0x32AFB70", Offset = "0x32AE170", VA = "0x1832AFB70")]
	internal void InsertUnsafeMeshGenerationNode(out UnsafeMeshGenerationNode node)
	{
	}

	[Token(Token = "0x6001326")]
	[Address(RVA = "0x32AF560", Offset = "0x32ADB60", VA = "0x1832AF560")]
	public void AddMeshGenerationJob(JobHandle jobHandle)
	{
	}

	[Token(Token = "0x6001327")]
	[Address(RVA = "0x32AF530", Offset = "0x32ADB30", VA = "0x1832AF530")]
	internal void AddMeshGenerationCallback(MeshGenerationCallback callback, object userData, MeshGenerationCallbackType callbackType, bool isJobDependent)
	{
	}

	[Token(Token = "0x6001328")]
	[Address(RVA = "0x32AF5C0", Offset = "0x32ADBC0", VA = "0x1832AF5C0")]
	internal void Begin(Entry parentEntry, VisualElement ve, RenderData renderData)
	{
	}

	[Token(Token = "0x6001329")]
	[Address(RVA = "0x32AFA10", Offset = "0x32AE010", VA = "0x1832AFA10")]
	internal void End()
	{
	}

	[Token(Token = "0x600132C")]
	[Address(RVA = "0x32AF740", Offset = "0x32ADD40", VA = "0x1832AF740")]
	internal void Dispose()
	{
	}

	[Token(Token = "0x600132D")]
	[Address(RVA = "0x32AF8C0", Offset = "0x32ADEC0", VA = "0x1832AF8C0")]
	private void Dispose(bool disposing)
	{
	}
}
