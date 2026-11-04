// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.PassFragmentData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler;

[Token(Token = "0x20002BD")]
[DebuggerDisplay("PassFragmentData: Res({resource.index}):{accessFlags}")]
internal readonly struct PassFragmentData
{
	[Token(Token = "0x4000C7E")]
	[FieldOffset(Offset = "0x0")]
	public readonly ResourceHandle resource;

	[Token(Token = "0x4000C7F")]
	[FieldOffset(Offset = "0xC")]
	public readonly AccessFlags accessFlags;

	[Token(Token = "0x4000C80")]
	[FieldOffset(Offset = "0x10")]
	public readonly int mipLevel;

	[Token(Token = "0x4000C81")]
	[FieldOffset(Offset = "0x14")]
	public readonly int depthSlice;

	[Token(Token = "0x6001393")]
	[Address(RVA = "0x2BB9520", Offset = "0x2BB7B20", VA = "0x182BB9520")]
	public PassFragmentData(in ResourceHandle handle, AccessFlags flags, int mipLevel, int depthSlice)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001394")]
	[Address(RVA = "0x2BB9410", Offset = "0x2BB7A10", VA = "0x182BB9410", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001395")]
	[Address(RVA = "0x2BB94A0", Offset = "0x2BB7AA0", VA = "0x182BB94A0")]
	public static bool SameSubResource(in PassFragmentData x, in PassFragmentData y)
	{
		return default(bool);
	}
}
