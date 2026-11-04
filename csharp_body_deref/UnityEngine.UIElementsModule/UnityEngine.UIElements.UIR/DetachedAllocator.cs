// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.DetachedAllocator
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x2000577")]
internal class DetachedAllocator : IDisposable
{
	[Token(Token = "0x40012A5")]
	[FieldOffset(Offset = "0x10")]
	private TempAllocator<Vertex> m_VertsPool;

	[Token(Token = "0x40012A6")]
	[FieldOffset(Offset = "0x18")]
	private TempAllocator<ushort> m_IndexPool;

	[Token(Token = "0x40012A7")]
	[FieldOffset(Offset = "0x20")]
	private List<MeshWriteData> m_MeshWriteDataPool;

	[Token(Token = "0x40012A8")]
	[FieldOffset(Offset = "0x28")]
	private List<int> m_FillGradientMeshIndices;

	[Token(Token = "0x40012A9")]
	[FieldOffset(Offset = "0x30")]
	private List<FillGradient> m_FillGradients;

	[Token(Token = "0x40012AA")]
	[FieldOffset(Offset = "0x38")]
	private int m_FillGradientDataCount;

	[Token(Token = "0x40012AB")]
	[FieldOffset(Offset = "0x40")]
	private List<int> m_FillTextureMeshIndices;

	[Token(Token = "0x40012AC")]
	[FieldOffset(Offset = "0x48")]
	private List<Texture> m_FillTextures;

	[Token(Token = "0x40012AD")]
	[FieldOffset(Offset = "0x50")]
	private int m_FillTextureDataCount;

	[Token(Token = "0x40012AE")]
	[FieldOffset(Offset = "0x54")]
	private int m_MeshWriteDataCount;

	[Token(Token = "0x40012AF")]
	[FieldOffset(Offset = "0x58")]
	private bool m_Disposed;

	[Token(Token = "0x6002914")]
	[Address(RVA = "0x317E740", Offset = "0x317CD40", VA = "0x18317E740")]
	public DetachedAllocator()
	{
	}

	[Token(Token = "0x6002915")]
	[Address(RVA = "0x317E600", Offset = "0x317CC00", VA = "0x18317E600", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002916")]
	[Address(RVA = "0x317E6B0", Offset = "0x317CCB0", VA = "0x18317E6B0")]
	protected void Dispose(bool disposing)
	{
	}
}
