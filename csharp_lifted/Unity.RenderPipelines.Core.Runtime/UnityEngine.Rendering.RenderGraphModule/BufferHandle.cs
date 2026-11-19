// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.BufferHandle
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x657D9F0", Offset = "0x657C9F0", VA = "0x657D9F0")]
		get
		{
			return default(BufferHandle);
		}
	}

	[Token(Token = "0x6001223")]
	[Address(RVA = "0x657DA40", Offset = "0x657CA40", VA = "0x657DA40")]
	internal BufferHandle(in ResourceHandle h)
	{
	}

	[Token(Token = "0x6001224")]
	[Address(RVA = "0x657DA50", Offset = "0x657CA50", VA = "0x657DA50")]
	internal BufferHandle(int handle, bool shared = false)
	{
	}

	[Token(Token = "0x6001225")]
	[Address(RVA = "0x657DAE0", Offset = "0x657CAE0", VA = "0x657DAE0")]
	public static implicit operator GraphicsBuffer(BufferHandle buffer)
	{
		return null;
	}

	[Token(Token = "0x6001226")]
	[Address(RVA = "0x657DC70", Offset = "0x657CC70", VA = "0x657DC70")]
	public bool IsValid()
	{
		return default(bool);
	}
}
