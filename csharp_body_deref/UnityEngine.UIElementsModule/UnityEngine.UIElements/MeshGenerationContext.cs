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
using Unity.Profiling;
using UnityEngine.UIElements.UIR;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000257")]
public class MeshGenerationContext
{
	[Token(Token = "0x2000258")]
	[Flags]
	internal enum MeshFlags
	{
		[Token(Token = "0x40008B3")]
		None = 0,
		[Token(Token = "0x40008B4")]
		SkipDynamicAtlas = 2
	}

	[Token(Token = "0x40008A8")]
	[FieldOffset(Offset = "0x18")]
	private Painter2D m_Painter2D;

	[Token(Token = "0x40008A9")]
	[FieldOffset(Offset = "0x20")]
	private MeshWriteDataPool m_MeshWriteDataPool;

	[Token(Token = "0x40008AA")]
	[FieldOffset(Offset = "0x28")]
	private TempAllocator<Vertex> m_VertexPool;

	[Token(Token = "0x40008AB")]
	[FieldOffset(Offset = "0x30")]
	private TempAllocator<ushort> m_IndexPool;

	[Token(Token = "0x40008AE")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ProfilerMarker k_AllocateMarker;

	[Token(Token = "0x40008AF")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker k_DrawVectorImageMarker;

	[Token(Token = "0x40008B0")]
	[FieldOffset(Offset = "0x48")]
	private bool m_HasTarget;

	[Token(Token = "0x170002FA")]
	public VisualElement visualElement
	{
		[Token(Token = "0x6000F63")]
		[Address(RVA = "0x5074560", Offset = "0x5074560", VA = "0x5074560")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F64")]
		[Address(RVA = "0x5074570", Offset = "0x5074570", VA = "0x5074570")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170002FB")]
	internal IMeshGenerator meshGenerator
	{
		[Token(Token = "0x6000F65")]
		[Address(RVA = "0x5074580", Offset = "0x5074580", VA = "0x5074580")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F66")]
		[Address(RVA = "0x5074590", Offset = "0x5074590", VA = "0x5074590")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002FC")]
	internal EntryRecorder entryRecorder
	{
		[Token(Token = "0x6000F67")]
		[Address(RVA = "0x50745A0", Offset = "0x50745A0", VA = "0x50745A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F68")]
		[Address(RVA = "0x50745B0", Offset = "0x50745B0", VA = "0x50745B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170002FD")]
	internal bool disposed
	{
		[Token(Token = "0x6000F6D")]
		[Address(RVA = "0x5074B60", Offset = "0x5074B60", VA = "0x5074B60")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F6E")]
		[Address(RVA = "0x5074B70", Offset = "0x5074B70", VA = "0x5074B70")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000F69")]
	[Address(RVA = "0x50745C0", Offset = "0x50745C0", VA = "0x50745C0")]
	internal MeshGenerationContext(MeshWriteDataPool meshWriteDataPool, EntryPool entryPool, TempAllocator<Vertex> vertexPool, TempAllocator<ushort> indexPool)
	{
	}

	[Token(Token = "0x6000F6A")]
	[Address(RVA = "0x50746B0", Offset = "0x50746B0", VA = "0x50746B0")]
	internal void AllocateTempMesh(int vertexCount, int indexCount, out NativeSlice<Vertex> vertices, out NativeSlice<ushort> indices)
	{
	}

	[Token(Token = "0x6000F6B")]
	[Address(RVA = "0x5074850", Offset = "0x5074850", VA = "0x5074850")]
	internal void Begin(MeshGenerationNode node, VisualElement ve)
	{
	}

	[Token(Token = "0x6000F6C")]
	[Address(RVA = "0x50749A0", Offset = "0x50749A0", VA = "0x50749A0")]
	internal void End()
	{
	}

	[Token(Token = "0x6000F6F")]
	[Address(RVA = "0x5074B80", Offset = "0x5074B80", VA = "0x5074B80")]
	internal void Dispose()
	{
	}

	[Token(Token = "0x6000F70")]
	[Address(RVA = "0x5074BE0", Offset = "0x5074BE0", VA = "0x5074BE0")]
	private void Dispose(bool disposing)
	{
	}
}
