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
	[Address(RVA = "0x4C5B020", Offset = "0x4C5B020", VA = "0x4C5B020", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001C7A")]
	[Address(RVA = "0x4C5B100", Offset = "0x4C5B100", VA = "0x4C5B100")]
	protected void Dispose(bool disposing)
	{
	}
}
