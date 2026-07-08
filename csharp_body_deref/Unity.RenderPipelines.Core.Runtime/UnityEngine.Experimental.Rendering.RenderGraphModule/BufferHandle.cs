using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x2000048")]
[DebuggerDisplay("Buffer ({handle.index})")]
public struct BufferHandle
{
	[Token(Token = "0x400011E")]
	[FieldOffset(Offset = "0x0")]
	private static BufferHandle s_NullHandle;

	[Token(Token = "0x400011F")]
	[FieldOffset(Offset = "0x0")]
	internal ResourceHandle handle;

	[Token(Token = "0x17000046")]
	public static BufferHandle nullHandle
	{
		[Token(Token = "0x6000488")]
		[Address(RVA = "0x48685D0", Offset = "0x48685D0", VA = "0x48685D0")]
		get
		{
			return default(BufferHandle);
		}
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x48651B0", Offset = "0x48651B0", VA = "0x48651B0")]
	internal BufferHandle(int handle, bool shared = false)
	{
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x48686B0", Offset = "0x48686B0", VA = "0x48686B0")]
	public static implicit operator GraphicsBuffer(BufferHandle buffer)
	{
		return null;
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x4868770", Offset = "0x4868770", VA = "0x4868770")]
	public bool IsValid()
	{
		return default(bool);
	}
}
