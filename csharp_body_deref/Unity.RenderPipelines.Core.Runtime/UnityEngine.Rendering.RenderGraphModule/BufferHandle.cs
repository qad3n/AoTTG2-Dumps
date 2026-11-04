// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.BufferHandle
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x2000288")]
[DebuggerDisplay("Buffer ({handle.index})")]
[MovedFrom(true, "UnityEngine.Experimental.Rendering.RenderGraphModule", "UnityEngine.Rendering.RenderGraphModule", null)]
public readonly struct BufferHandle
{
	[Token(Token = "0x4000B67")]
	[FieldOffset(Offset = "0x0")]
	private static BufferHandle s_NullHandle;

	[Token(Token = "0x4000B68")]
	[FieldOffset(Offset = "0x0")]
	internal readonly ResourceHandle handle;

	[Token(Token = "0x17000255")]
	public static BufferHandle nullHandle
	{
		[Token(Token = "0x6001222")]
		[Address(RVA = "0x2B88AA0", Offset = "0x2B870A0", VA = "0x182B88AA0")]
		get
		{
			return default(BufferHandle);
		}
	}

	[Token(Token = "0x6001223")]
	[Address(RVA = "0x2B889E0", Offset = "0x2B86FE0", VA = "0x182B889E0")]
	internal BufferHandle(in ResourceHandle h)
	{
	}

	[Token(Token = "0x6001224")]
	[Address(RVA = "0x2B889F0", Offset = "0x2B86FF0", VA = "0x182B889F0")]
	internal BufferHandle(int handle, bool shared = false)
	{
	}

	[Token(Token = "0x6001225")]
	[Address(RVA = "0x2B88B10", Offset = "0x2B87110", VA = "0x182B88B10")]
	public static implicit operator GraphicsBuffer(BufferHandle buffer)
	{
		return null;
	}

	[Token(Token = "0x6001226")]
	[Address(RVA = "0x2B88990", Offset = "0x2B86F90", VA = "0x182B88990")]
	public bool IsValid()
	{
		return default(bool);
	}
}
