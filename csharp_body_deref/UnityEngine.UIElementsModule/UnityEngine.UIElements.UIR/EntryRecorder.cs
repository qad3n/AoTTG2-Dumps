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

[Token(Token = "0x2000583")]
internal class EntryRecorder
{
	[Token(Token = "0x4001313")]
	[FieldOffset(Offset = "0x10")]
	private EntryPool m_EntryPool;

	[Token(Token = "0x6002953")]
	[Address(RVA = "0x6B85440", Offset = "0x6B84440", VA = "0x6B85440")]
	public EntryRecorder(EntryPool entryPool)
	{
	}

	[Token(Token = "0x6002954")]
	[Address(RVA = "0x6B854C0", Offset = "0x6B844C0", VA = "0x6B854C0")]
	public void DrawMesh(Entry parentEntry, NativeSlice<Vertex> vertices, NativeSlice<ushort> indices, Texture texture, TextureOptions textureOptions = TextureOptions.None)
	{
	}

	[Token(Token = "0x6002955")]
	[Address(RVA = "0x6B7DFA0", Offset = "0x6B7CFA0", VA = "0x6B7DFA0")]
	public void DrawMesh(Entry parentEntry, NativeSlice<Vertex> vertices, NativeSlice<ushort> indices, TextureId textureId, bool isPremultiplied = false)
	{
	}

	[Token(Token = "0x6002956")]
	[Address(RVA = "0x6B85810", Offset = "0x6B84810", VA = "0x6B85810")]
	public void DrawRasterText(Entry parentEntry, NativeSlice<Vertex> vertices, NativeSlice<ushort> indices, Texture texture, bool multiChannel)
	{
	}

	[Token(Token = "0x6002957")]
	[Address(RVA = "0x6B858D0", Offset = "0x6B848D0", VA = "0x6B858D0")]
	public void DrawSdfText(Entry parentEntry, NativeSlice<Vertex> vertices, NativeSlice<ushort> indices, Texture texture, float scale, float sharpness)
	{
	}

	[Token(Token = "0x6002958")]
	[Address(RVA = "0x6B85980", Offset = "0x6B84980", VA = "0x6B85980")]
	public void DrawGradients(Entry parentEntry, NativeSlice<Vertex> vertices, NativeSlice<ushort> indices, VectorImage gradientsOwner)
	{
	}

	[Token(Token = "0x6002959")]
	[Address(RVA = "0x6B85A00", Offset = "0x6B84A00", VA = "0x6B85A00")]
	public void DrawImmediate(Entry parentEntry, Action callback, bool cullingEnabled)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600295A")]
	[Address(RVA = "0x6B85AF0", Offset = "0x6B84AF0", VA = "0x6B85AF0")]
	public void DrawChildren(Entry parentEntry)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600295B")]
	[Address(RVA = "0x6B85BC0", Offset = "0x6B84BC0", VA = "0x6B85BC0")]
	public void BeginStencilMask(Entry parentEntry)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600295C")]
	[Address(RVA = "0x6B85C90", Offset = "0x6B84C90", VA = "0x6B85C90")]
	public void EndStencilMask(Entry parentEntry)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600295D")]
	[Address(RVA = "0x6B85D60", Offset = "0x6B84D60", VA = "0x6B85D60")]
	public void PopStencilMask(Entry parentEntry)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600295E")]
	[Address(RVA = "0x6B85E30", Offset = "0x6B84E30", VA = "0x6B85E30")]
	public void PushClippingRect(Entry parentEntry)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600295F")]
	[Address(RVA = "0x6B85F00", Offset = "0x6B84F00", VA = "0x6B85F00")]
	public void PopClippingRect(Entry parentEntry)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002960")]
	[Address(RVA = "0x6B85FD0", Offset = "0x6B84FD0", VA = "0x6B85FD0")]
	public void PushScissors(Entry parentEntry)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002961")]
	[Address(RVA = "0x6B860A0", Offset = "0x6B850A0", VA = "0x6B860A0")]
	public void PopScissors(Entry parentEntry)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002962")]
	[Address(RVA = "0x6B86170", Offset = "0x6B85170", VA = "0x6B86170")]
	public void PushGroupMatrix(Entry parentEntry)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002963")]
	[Address(RVA = "0x6B86240", Offset = "0x6B85240", VA = "0x6B86240")]
	public void PopGroupMatrix(Entry parentEntry)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002964")]
	[Address(RVA = "0x6B86310", Offset = "0x6B85310", VA = "0x6B86310")]
	public void PushDefaultMaterial(Entry parentEntry, MaterialDefinition matDef)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002965")]
	[Address(RVA = "0x6B86430", Offset = "0x6B85430", VA = "0x6B86430")]
	public void PopDefaultMaterial(Entry parentEntry)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002966")]
	[Address(RVA = "0x6B86500", Offset = "0x6B85500", VA = "0x6B86500")]
	public void CutRenderChain(Entry parentEntry)
	{
	}

	[Token(Token = "0x6002967")]
	[Address(RVA = "0x6B865D0", Offset = "0x6B855D0", VA = "0x6B865D0")]
	public Entry InsertPlaceholder(Entry parentEntry)
	{
		return null;
	}

	[Token(Token = "0x6002968")]
	[Address(RVA = "0x6B855A0", Offset = "0x6B845A0", VA = "0x6B855A0")]
	private static void AppendMeshEntry(Entry parentEntry, Entry entry)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002969")]
	[Address(RVA = "0x6B866A0", Offset = "0x6B856A0", VA = "0x6B866A0")]
	private static void Append(Entry parentEntry, Entry entry)
	{
	}
}
