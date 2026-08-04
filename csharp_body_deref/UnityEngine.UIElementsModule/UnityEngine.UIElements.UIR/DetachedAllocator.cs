// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.DetachedAllocator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x2000495")]
internal class DetachedAllocator
{
	[Token(Token = "0x4000DD3")]
	[FieldOffset(Offset = "0x10")]
	private TempAllocator<Vertex> m_VertsPool;

	[Token(Token = "0x4000DD4")]
	[FieldOffset(Offset = "0x18")]
	private TempAllocator<ushort> m_IndexPool;

	[Token(Token = "0x4000DD5")]
	[FieldOffset(Offset = "0x20")]
	private List<MeshWriteData> m_MeshWriteDataPool;

	[Token(Token = "0x4000DD6")]
	[FieldOffset(Offset = "0x28")]
	private int m_MeshWriteDataCount;

	[Token(Token = "0x4000DD7")]
	[FieldOffset(Offset = "0x2C")]
	private bool m_Disposed;

	[Token(Token = "0x6001C79")]
	[Address(RVA = "0x4F82950", Offset = "0x4F82950", VA = "0x4F82950", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001C7A")]
	[Address(RVA = "0x4F82A30", Offset = "0x4F82A30", VA = "0x4F82A30")]
	protected void Dispose(bool disposing)
	{
	}
}
