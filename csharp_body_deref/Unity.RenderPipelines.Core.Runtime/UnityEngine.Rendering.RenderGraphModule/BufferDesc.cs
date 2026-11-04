// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.BufferDesc
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x2000289")]
public struct BufferDesc
{
	[Token(Token = "0x4000B69")]
	[FieldOffset(Offset = "0x0")]
	public int count;

	[Token(Token = "0x4000B6A")]
	[FieldOffset(Offset = "0x4")]
	public int stride;

	[Token(Token = "0x4000B6B")]
	[FieldOffset(Offset = "0x8")]
	public string name;

	[Token(Token = "0x4000B6C")]
	[FieldOffset(Offset = "0x10")]
	public GraphicsBuffer.Target target;

	[Token(Token = "0x4000B6D")]
	[FieldOffset(Offset = "0x14")]
	public GraphicsBuffer.UsageFlags usageFlags;

	[Token(Token = "0x6001228")]
	[Address(RVA = "0x2B88950", Offset = "0x2B86F50", VA = "0x182B88950")]
	public BufferDesc(int count, int stride)
	{
	}

	[Token(Token = "0x6001229")]
	[Address(RVA = "0x2B88970", Offset = "0x2B86F70", VA = "0x182B88970")]
	public BufferDesc(int count, int stride, GraphicsBuffer.Target target)
	{
	}

	[Token(Token = "0x600122A")]
	[Address(RVA = "0x2B88910", Offset = "0x2B86F10", VA = "0x182B88910", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
