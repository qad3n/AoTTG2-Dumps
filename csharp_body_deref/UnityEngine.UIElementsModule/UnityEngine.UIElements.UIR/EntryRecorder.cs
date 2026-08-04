// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.EntryRecorder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4F8A7B0", Offset = "0x4F8A7B0", VA = "0x4F8A7B0")]
	public EntryRecorder(EntryPool entryPool)
	{
	}

	[Token(Token = "0x6001CAF")]
	[Address(RVA = "0x4F8A830", Offset = "0x4F8A830", VA = "0x4F8A830")]
	public void Begin(Entry parent)
	{
	}

	[Token(Token = "0x6001CB0")]
	[Address(RVA = "0x4F8A8D0", Offset = "0x4F8A8D0", VA = "0x4F8A8D0")]
	public void End()
	{
	}

	[Token(Token = "0x6001CB1")]
	[Address(RVA = "0x4F8A960", Offset = "0x4F8A960", VA = "0x4F8A960")]
	public void DrawMesh(NativeSlice<Vertex> vertices, NativeSlice<ushort> indices, Texture texture, bool skipAtlas)
	{
	}

	[Token(Token = "0x6001CB2")]
	[Address(RVA = "0x4F8AC70", Offset = "0x4F8AC70", VA = "0x4F8AC70")]
	public void DrawSdfText(NativeSlice<Vertex> vertices, NativeSlice<ushort> indices, Texture texture, float scale, float sharpness)
	{
	}

	[Token(Token = "0x6001CB3")]
	[Address(RVA = "0x4F8AD40", Offset = "0x4F8AD40", VA = "0x4F8AD40")]
	public void DrawGradients(NativeSlice<Vertex> vertices, NativeSlice<ushort> indices, VectorImage gradientsOwner)
	{
	}

	[Token(Token = "0x6001CB4")]
	[Address(RVA = "0x4F8ADF0", Offset = "0x4F8ADF0", VA = "0x4F8ADF0")]
	public void DrawImmediate(Action callback, bool cullingEnabled)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CB5")]
	[Address(RVA = "0x4F8AEC0", Offset = "0x4F8AEC0", VA = "0x4F8AEC0")]
	public void DrawChildren()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CB6")]
	[Address(RVA = "0x4F8AF60", Offset = "0x4F8AF60", VA = "0x4F8AF60")]
	public void BeginStencilMask()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CB7")]
	[Address(RVA = "0x4F8B000", Offset = "0x4F8B000", VA = "0x4F8B000")]
	public void EndStencilMask()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CB8")]
	[Address(RVA = "0x4F8B0A0", Offset = "0x4F8B0A0", VA = "0x4F8B0A0")]
	public void PopStencilMask()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CB9")]
	[Address(RVA = "0x4F8B140", Offset = "0x4F8B140", VA = "0x4F8B140")]
	public void PushClippingRect()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CBA")]
	[Address(RVA = "0x4F8B1E0", Offset = "0x4F8B1E0", VA = "0x4F8B1E0")]
	public void PopClippingRect()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CBB")]
	[Address(RVA = "0x4F8B280", Offset = "0x4F8B280", VA = "0x4F8B280")]
	public void PushScissors()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CBC")]
	[Address(RVA = "0x4F8B320", Offset = "0x4F8B320", VA = "0x4F8B320")]
	public void PopScissors()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CBD")]
	[Address(RVA = "0x4F8B3C0", Offset = "0x4F8B3C0", VA = "0x4F8B3C0")]
	public void PushGroupMatrix()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CBE")]
	[Address(RVA = "0x4F8B460", Offset = "0x4F8B460", VA = "0x4F8B460")]
	public void PopGroupMatrix()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CBF")]
	[Address(RVA = "0x4F8B500", Offset = "0x4F8B500", VA = "0x4F8B500")]
	public void PushRenderTexture()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CC0")]
	[Address(RVA = "0x4F8B5A0", Offset = "0x4F8B5A0", VA = "0x4F8B5A0")]
	public void BlitAndPopRenderTexture()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CC1")]
	[Address(RVA = "0x4F8B640", Offset = "0x4F8B640", VA = "0x4F8B640")]
	public void PushDefaultMaterial(Material material)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CC2")]
	[Address(RVA = "0x4F8B700", Offset = "0x4F8B700", VA = "0x4F8B700")]
	public void PopDefaultMaterial()
	{
	}

	[Token(Token = "0x6001CC3")]
	[Address(RVA = "0x4F8AA50", Offset = "0x4F8AA50", VA = "0x4F8AA50")]
	private void AppendMeshEntry(Entry entry)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CC4")]
	[Address(RVA = "0x4F8B7A0", Offset = "0x4F8B7A0", VA = "0x4F8B7A0")]
	private void Append(Entry entry)
	{
	}
}
