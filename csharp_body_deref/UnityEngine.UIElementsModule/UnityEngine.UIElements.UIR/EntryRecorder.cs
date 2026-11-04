// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.EntryRecorder
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x2000598")]
internal class EntryRecorder
{
	[Token(Token = "0x40013D1")]
	[FieldOffset(Offset = "0x10")]
	private EntryPool m_EntryPool;

	[Token(Token = "0x60029B4")]
	[Address(RVA = "0x318EC60", Offset = "0x318D260", VA = "0x18318EC60")]
	public EntryRecorder(EntryPool entryPool)
	{
	}

	[Token(Token = "0x60029B5")]
	[Address(RVA = "0x318E680", Offset = "0x318CC80", VA = "0x18318E680")]
	public void DrawMesh(Entry parentEntry, NativeSlice<Vertex> vertices, NativeSlice<ushort> indices, Texture texture, TextureOptions textureOptions = TextureOptions.None)
	{
	}

	[Token(Token = "0x60029B6")]
	[Address(RVA = "0x318E740", Offset = "0x318CD40", VA = "0x18318E740")]
	public void DrawMesh(Entry parentEntry, NativeSlice<Vertex> vertices, NativeSlice<ushort> indices, TextureId textureId, bool isPremultiplied = false)
	{
	}

	[Token(Token = "0x60029B7")]
	[Address(RVA = "0x318E820", Offset = "0x318CE20", VA = "0x18318E820")]
	public void DrawRasterText(Entry parentEntry, NativeSlice<Vertex> vertices, NativeSlice<ushort> indices, Texture texture, bool multiChannel)
	{
	}

	[Token(Token = "0x60029B8")]
	[Address(RVA = "0x318E8B0", Offset = "0x318CEB0", VA = "0x18318E8B0")]
	public void DrawSdfText(Entry parentEntry, NativeSlice<Vertex> vertices, NativeSlice<ushort> indices, Texture texture, float scale, float sharpness)
	{
	}

	[Token(Token = "0x60029B9")]
	[Address(RVA = "0x318E5B0", Offset = "0x318CBB0", VA = "0x18318E5B0")]
	public void DrawGradients(Entry parentEntry, NativeSlice<Vertex> vertices, NativeSlice<ushort> indices, VectorImage gradientsOwner)
	{
	}

	[Token(Token = "0x60029BA")]
	[Address(RVA = "0x318E620", Offset = "0x318CC20", VA = "0x18318E620")]
	public void DrawImmediate(Entry parentEntry, Action callback, bool cullingEnabled)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60029BB")]
	[Address(RVA = "0x318E570", Offset = "0x318CB70", VA = "0x18318E570")]
	public void DrawChildren(Entry parentEntry)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60029BC")]
	[Address(RVA = "0x318E4F0", Offset = "0x318CAF0", VA = "0x18318E4F0")]
	public void BeginStencilMask(Entry parentEntry)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60029BD")]
	[Address(RVA = "0x318E940", Offset = "0x318CF40", VA = "0x18318E940")]
	public void EndStencilMask(Entry parentEntry)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60029BE")]
	[Address(RVA = "0x318EAD0", Offset = "0x318D0D0", VA = "0x18318EAD0")]
	public void PopStencilMask(Entry parentEntry)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60029BF")]
	[Address(RVA = "0x318EB10", Offset = "0x318D110", VA = "0x18318EB10")]
	public void PushClippingRect(Entry parentEntry)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60029C0")]
	[Address(RVA = "0x318E9D0", Offset = "0x318CFD0", VA = "0x18318E9D0")]
	public void PopClippingRect(Entry parentEntry)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60029C1")]
	[Address(RVA = "0x318EC20", Offset = "0x318D220", VA = "0x18318EC20")]
	public void PushScissors(Entry parentEntry)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60029C2")]
	[Address(RVA = "0x318EA90", Offset = "0x318D090", VA = "0x18318EA90")]
	public void PopScissors(Entry parentEntry)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60029C3")]
	[Address(RVA = "0x318EBE0", Offset = "0x318D1E0", VA = "0x18318EBE0")]
	public void PushGroupMatrix(Entry parentEntry)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60029C4")]
	[Address(RVA = "0x318EA50", Offset = "0x318D050", VA = "0x18318EA50")]
	public void PopGroupMatrix(Entry parentEntry)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60029C5")]
	[Address(RVA = "0x318EB50", Offset = "0x318D150", VA = "0x18318EB50")]
	public void PushDefaultMaterial(Entry parentEntry, MaterialDefinition matDef)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60029C6")]
	[Address(RVA = "0x318EA10", Offset = "0x318D010", VA = "0x18318EA10")]
	public void PopDefaultMaterial(Entry parentEntry)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60029C7")]
	[Address(RVA = "0x318E530", Offset = "0x318CB30", VA = "0x18318E530")]
	public void CutRenderChain(Entry parentEntry)
	{
	}

	[Token(Token = "0x60029C8")]
	[Address(RVA = "0x318E980", Offset = "0x318CF80", VA = "0x18318E980")]
	public Entry InsertPlaceholder(Entry parentEntry)
	{
		return null;
	}

	[Token(Token = "0x60029C9")]
	[Address(RVA = "0x318E230", Offset = "0x318C830", VA = "0x18318E230")]
	private static void AppendMeshEntry(Entry parentEntry, Entry entry)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60029CA")]
	[Address(RVA = "0x318E410", Offset = "0x318CA10", VA = "0x18318E410")]
	private static void Append(Entry parentEntry, Entry entry)
	{
	}
}
