// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.BufferDesc
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4B8DAF0", Offset = "0x4B8DAF0", VA = "0x4B8DAF0")]
	public BufferDesc(int count, int stride)
	{
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x4B8DB10", Offset = "0x4B8DB10", VA = "0x4B8DB10")]
	public BufferDesc(int count, int stride, GraphicsBuffer.Target target)
	{
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x4B8DB30", Offset = "0x4B8DB30", VA = "0x4B8DB30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
