// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MeshGenerationNodeImpl
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.UIElements.UIR;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002D7")]
internal class MeshGenerationNodeImpl : IDisposable
{
	[Token(Token = "0x4000B05")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private GCHandle m_SelfHandle;

	[Token(Token = "0x4000B06")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private Entry m_ParentEntry;

	[Token(Token = "0x4000B07")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private EntryRecorder m_EntryRecorder;

	[Token(Token = "0x170003EC")]
	protected bool disposed
	{
		[Token(Token = "0x600133E")]
		[Address(RVA = "0x6CBEEE0", Offset = "0x6CBDEE0", VA = "0x6CBEEE0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600133F")]
		[Address(RVA = "0x6CBEEF0", Offset = "0x6CBDEF0", VA = "0x6CBEEF0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001336")]
	[Address(RVA = "0x6CBED40", Offset = "0x6CBDD40", VA = "0x6CBED40")]
	public MeshGenerationNodeImpl()
	{
	}

	[Token(Token = "0x6001337")]
	[Address(RVA = "0x6CBED60", Offset = "0x6CBDD60", VA = "0x6CBED60")]
	public void Init(Entry parentEntry, EntryRecorder entryRecorder, bool safe)
	{
	}

	[Token(Token = "0x6001338")]
	[Address(RVA = "0x6CBEE10", Offset = "0x6CBDE10", VA = "0x6CBEE10")]
	public void Reset()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001339")]
	[Address(RVA = "0x6CBEEB0", Offset = "0x6CBDEB0", VA = "0x6CBEEB0")]
	public void GetNode(out MeshGenerationNode node)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600133A")]
	[Address(RVA = "0x6CBEEC0", Offset = "0x6CBDEC0", VA = "0x6CBEEC0")]
	public void GetUnsafeNode(out UnsafeMeshGenerationNode node)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600133B")]
	[Address(RVA = "0x6CBEED0", Offset = "0x6CBDED0", VA = "0x6CBEED0")]
	public Entry GetParentEntry()
	{
		return null;
	}

	[Token(Token = "0x600133C")]
	[Address(RVA = "0x6CBEB10", Offset = "0x6CBDB10", VA = "0x6CBEB10")]
	public void DrawMesh(NativeSlice<Vertex> vertices, NativeSlice<ushort> indices, [Optional] Texture texture, TextureOptions textureOptions = TextureOptions.None)
	{
	}

	[Token(Token = "0x600133D")]
	[Address(RVA = "0x6CBEC30", Offset = "0x6CBDC30", VA = "0x6CBEC30")]
	public void DrawGradients(NativeSlice<Vertex> vertices, NativeSlice<ushort> indices, VectorImage gradientsOwner)
	{
	}

	[Token(Token = "0x6001340")]
	[Address(RVA = "0x6CBEF00", Offset = "0x6CBDF00", VA = "0x6CBEF00", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001341")]
	[Address(RVA = "0x6CBEF90", Offset = "0x6CBDF90", VA = "0x6CBEF90")]
	protected void Dispose(bool disposing)
	{
	}
}
