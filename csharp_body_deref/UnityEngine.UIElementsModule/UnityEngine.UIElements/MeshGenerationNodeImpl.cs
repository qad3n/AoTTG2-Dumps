// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MeshGenerationNodeImpl
// Update status: NEW in this game update
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
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600133F")]
		[Address(RVA = "0xF1D940", Offset = "0xF1BF40", VA = "0x180F1D940")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001336")]
	[Address(RVA = "0x32B0360", Offset = "0x32AE960", VA = "0x1832B0360")]
	public MeshGenerationNodeImpl()
	{
	}

	[Token(Token = "0x6001337")]
	[Address(RVA = "0x32B0230", Offset = "0x32AE830", VA = "0x1832B0230")]
	public void Init(Entry parentEntry, EntryRecorder entryRecorder, bool safe)
	{
	}

	[Token(Token = "0x6001338")]
	[Address(RVA = "0x32B02D0", Offset = "0x32AE8D0", VA = "0x1832B02D0")]
	public void Reset()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001339")]
	[Address(RVA = "0x32B0220", Offset = "0x32AE820", VA = "0x1832B0220")]
	public void GetNode(out MeshGenerationNode node)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600133A")]
	[Address(RVA = "0x32B0220", Offset = "0x32AE820", VA = "0x1832B0220")]
	public void GetUnsafeNode(out UnsafeMeshGenerationNode node)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600133B")]
	[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
	public Entry GetParentEntry()
	{
		return null;
	}

	[Token(Token = "0x600133C")]
	[Address(RVA = "0x32B0160", Offset = "0x32AE760", VA = "0x1832B0160")]
	public void DrawMesh(NativeSlice<Vertex> vertices, NativeSlice<ushort> indices, [Optional] Texture texture, TextureOptions textureOptions = TextureOptions.None)
	{
	}

	[Token(Token = "0x600133D")]
	[Address(RVA = "0x32B0080", Offset = "0x32AE680", VA = "0x1832B0080")]
	public void DrawGradients(NativeSlice<Vertex> vertices, NativeSlice<ushort> indices, VectorImage gradientsOwner)
	{
	}

	[Token(Token = "0x6001340")]
	[Address(RVA = "0x32B0010", Offset = "0x32AE610", VA = "0x1832B0010", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001341")]
	[Address(RVA = "0x32AFFD0", Offset = "0x32AE5D0", VA = "0x1832AFFD0")]
	protected void Dispose(bool disposing)
	{
	}
}
