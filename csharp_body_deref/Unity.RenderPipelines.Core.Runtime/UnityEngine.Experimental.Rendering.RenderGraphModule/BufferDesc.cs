using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x2000049")]
public struct BufferDesc
{
	[Token(Token = "0x4000120")]
	[FieldOffset(Offset = "0x0")]
	public int count;

	[Token(Token = "0x4000121")]
	[FieldOffset(Offset = "0x4")]
	public int stride;

	[Token(Token = "0x4000122")]
	[FieldOffset(Offset = "0x8")]
	public string name;

	[Token(Token = "0x4000123")]
	[FieldOffset(Offset = "0x10")]
	public GraphicsBuffer.Target target;

	[Token(Token = "0x4000124")]
	[FieldOffset(Offset = "0x14")]
	public GraphicsBuffer.UsageFlags usageFlags;

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x4868A00", Offset = "0x4868A00", VA = "0x4868A00")]
	public BufferDesc(int count, int stride)
	{
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x4868A20", Offset = "0x4868A20", VA = "0x4868A20")]
	public BufferDesc(int count, int stride, GraphicsBuffer.Target target)
	{
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x4868A40", Offset = "0x4868A40", VA = "0x4868A40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
