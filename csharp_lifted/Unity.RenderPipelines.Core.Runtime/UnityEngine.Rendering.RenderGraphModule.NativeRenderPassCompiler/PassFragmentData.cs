// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.PassFragmentData
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x659C770", Offset = "0x659B770", VA = "0x659C770")]
	public PassFragmentData(in ResourceHandle handle, AccessFlags flags, int mipLevel, int depthSlice)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001394")]
	[Address(RVA = "0x659C790", Offset = "0x659B790", VA = "0x659C790", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001395")]
	[Address(RVA = "0x659C830", Offset = "0x659B830", VA = "0x659C830")]
	public static bool SameSubResource(in PassFragmentData x, in PassFragmentData y)
	{
		return default(bool);
	}
}
