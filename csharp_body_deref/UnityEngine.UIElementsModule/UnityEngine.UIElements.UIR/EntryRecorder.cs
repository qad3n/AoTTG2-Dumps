using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x200049F")]
internal class EntryRecorder
{
	[Token(Token = "0x4000E36")]
	[FieldOffset(Offset = "0x10")]
	private Entry m_Parent;

	[Token(Token = "0x4000E37")]
	[FieldOffset(Offset = "0x18")]
	private Entry m_Previous;

	[Token(Token = "0x4000E38")]
	[FieldOffset(Offset = "0x20")]
	private bool m_PreviousAsPlaceholder;

	[Token(Token = "0x4000E39")]
	[FieldOffset(Offset = "0x28")]
	private EntryPool m_EntryPool;

	[Token(Token = "0x6001CAE")]
	[Address(RVA = "0x4C62E80", Offset = "0x4C62E80", VA = "0x4C62E80")]
	public EntryRecorder(EntryPool entryPool)
	{
	}

	[Token(Token = "0x6001CAF")]
	[Address(RVA = "0x4C62F00", Offset = "0x4C62F00", VA = "0x4C62F00")]
	public void Begin(Entry parent)
	{
	}

	[Token(Token = "0x6001CB0")]
	[Address(RVA = "0x4C62FA0", Offset = "0x4C62FA0", VA = "0x4C62FA0")]
	public void End()
	{
	}

	[Token(Token = "0x6001CB1")]
	[Address(RVA = "0x4C63030", Offset = "0x4C63030", VA = "0x4C63030")]
	public void DrawMesh(NativeSlice<Vertex> vertices, NativeSlice<ushort> indices, Texture texture, bool skipAtlas)
	{
	}

	[Token(Token = "0x6001CB2")]
	[Address(RVA = "0x4C63340", Offset = "0x4C63340", VA = "0x4C63340")]
	public void DrawSdfText(NativeSlice<Vertex> vertices, NativeSlice<ushort> indices, Texture texture, float scale, float sharpness)
	{
	}

	[Token(Token = "0x6001CB3")]
	[Address(RVA = "0x4C63410", Offset = "0x4C63410", VA = "0x4C63410")]
	public void DrawGradients(NativeSlice<Vertex> vertices, NativeSlice<ushort> indices, VectorImage gradientsOwner)
	{
	}

	[Token(Token = "0x6001CB4")]
	[Address(RVA = "0x4C634C0", Offset = "0x4C634C0", VA = "0x4C634C0")]
	public void DrawImmediate(Action callback, bool cullingEnabled)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CB5")]
	[Address(RVA = "0x4C63590", Offset = "0x4C63590", VA = "0x4C63590")]
	public void DrawChildren()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CB6")]
	[Address(RVA = "0x4C63630", Offset = "0x4C63630", VA = "0x4C63630")]
	public void BeginStencilMask()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CB7")]
	[Address(RVA = "0x4C636D0", Offset = "0x4C636D0", VA = "0x4C636D0")]
	public void EndStencilMask()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CB8")]
	[Address(RVA = "0x4C63770", Offset = "0x4C63770", VA = "0x4C63770")]
	public void PopStencilMask()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CB9")]
	[Address(RVA = "0x4C63810", Offset = "0x4C63810", VA = "0x4C63810")]
	public void PushClippingRect()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CBA")]
	[Address(RVA = "0x4C638B0", Offset = "0x4C638B0", VA = "0x4C638B0")]
	public void PopClippingRect()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CBB")]
	[Address(RVA = "0x4C63950", Offset = "0x4C63950", VA = "0x4C63950")]
	public void PushScissors()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CBC")]
	[Address(RVA = "0x4C639F0", Offset = "0x4C639F0", VA = "0x4C639F0")]
	public void PopScissors()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CBD")]
	[Address(RVA = "0x4C63A90", Offset = "0x4C63A90", VA = "0x4C63A90")]
	public void PushGroupMatrix()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CBE")]
	[Address(RVA = "0x4C63B30", Offset = "0x4C63B30", VA = "0x4C63B30")]
	public void PopGroupMatrix()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CBF")]
	[Address(RVA = "0x4C63BD0", Offset = "0x4C63BD0", VA = "0x4C63BD0")]
	public void PushRenderTexture()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CC0")]
	[Address(RVA = "0x4C63C70", Offset = "0x4C63C70", VA = "0x4C63C70")]
	public void BlitAndPopRenderTexture()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CC1")]
	[Address(RVA = "0x4C63D10", Offset = "0x4C63D10", VA = "0x4C63D10")]
	public void PushDefaultMaterial(Material material)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CC2")]
	[Address(RVA = "0x4C63DD0", Offset = "0x4C63DD0", VA = "0x4C63DD0")]
	public void PopDefaultMaterial()
	{
	}

	[Token(Token = "0x6001CC3")]
	[Address(RVA = "0x4C63120", Offset = "0x4C63120", VA = "0x4C63120")]
	private void AppendMeshEntry(Entry entry)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CC4")]
	[Address(RVA = "0x4C63E70", Offset = "0x4C63E70", VA = "0x4C63E70")]
	private void Append(Entry entry)
	{
	}
}
