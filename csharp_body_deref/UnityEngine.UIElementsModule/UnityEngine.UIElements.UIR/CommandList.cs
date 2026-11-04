// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.CommandList
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x2000574")]
internal class CommandList : IDisposable
{
	[Token(Token = "0x400128E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly MemoryLabel k_MemoryLabel;

	[Token(Token = "0x400128F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public VisualElement m_Owner;

	[Token(Token = "0x4001290")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public UIRenderer m_Renderer;

	[Token(Token = "0x4001291")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly IntPtr m_VertexDecl;

	[Token(Token = "0x4001292")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly IntPtr m_StencilState;

	[Token(Token = "0x4001293")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public MaterialPropertyBlock constantProps;

	[Token(Token = "0x4001294")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public GCHandle handle;

	[Token(Token = "0x4001295")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public Material m_Material;

	[Token(Token = "0x4001296")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	public CommandFlags flags;

	[Token(Token = "0x4001297")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private List<SerializedCommand> m_Commands;

	[Token(Token = "0x4001298")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private Vector4[] m_GpuTextureData;

	[Token(Token = "0x4001299")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private NativeList<DrawBufferRange> m_DrawRanges;

	[Token(Token = "0x17000A4B")]
	protected bool disposed
	{
		[Token(Token = "0x60028FA")]
		[Address(RVA = "0x12BF1A0", Offset = "0x12BD7A0", VA = "0x1812BF1A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60028FB")]
		[Address(RVA = "0x12BF400", Offset = "0x12BDA00", VA = "0x1812BF400")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60028F2")]
	[Address(RVA = "0x3179D10", Offset = "0x3178310", VA = "0x183179D10")]
	public CommandList(IntPtr vertexDecl, IntPtr stencilState)
	{
	}

	[Token(Token = "0x60028F3")]
	[Address(RVA = "0x3179AA0", Offset = "0x31780A0", VA = "0x183179AA0")]
	public void Reset()
	{
	}

	[Token(Token = "0x60028F4")]
	[Address(RVA = "0x3179940", Offset = "0x3177F40", VA = "0x183179940")]
	public void Init(VisualElement owner, Material material, CommandFlags commandFlags)
	{
	}

	[Token(Token = "0x60028F5")]
	[Address(RVA = "0x31794A0", Offset = "0x3177AA0", VA = "0x1831794A0")]
	public void Execute()
	{
	}

	[Token(Token = "0x60028F6")]
	[Address(RVA = "0x3179B60", Offset = "0x3178160", VA = "0x183179B60")]
	public void SetTexture(int name, Texture texture, int gpuDataOffset, Vector4 gpuData0, Vector4 gpuData1)
	{
	}

	[Token(Token = "0x60028F7")]
	[Address(RVA = "0x3179120", Offset = "0x3177720", VA = "0x183179120")]
	public void ApplyUserProps(MaterialPropertyBlock userProps)
	{
	}

	[Token(Token = "0x60028F8")]
	[Address(RVA = "0x3179050", Offset = "0x3177650", VA = "0x183179050")]
	public void ApplyBatchProps()
	{
	}

	[Token(Token = "0x60028F9")]
	[Address(RVA = "0x3179320", Offset = "0x3177920", VA = "0x183179320")]
	public void DrawRanges(Utility.GPUBuffer<ushort> ib, Utility.GPUBuffer<Vertex> vb, NativeSlice<DrawBufferRange> ranges)
	{
	}

	[Token(Token = "0x60028FC")]
	[Address(RVA = "0x31792A0", Offset = "0x31778A0", VA = "0x1831792A0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60028FD")]
	[Address(RVA = "0x3179210", Offset = "0x3177810", VA = "0x183179210")]
	protected void Dispose(bool disposing)
	{
	}
}
