// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.ResourceUnversionedData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler;

[Token(Token = "0x20002CA")]
internal struct ResourceUnversionedData
{
	[Token(Token = "0x4000D00")]
	[FieldOffset(Offset = "0x0")]
	public readonly bool isImported;

	[Token(Token = "0x4000D01")]
	[FieldOffset(Offset = "0x1")]
	public bool isShared;

	[Token(Token = "0x4000D02")]
	[FieldOffset(Offset = "0x4")]
	public int tag;

	[Token(Token = "0x4000D03")]
	[FieldOffset(Offset = "0x8")]
	public int lastUsePassID;

	[Token(Token = "0x4000D04")]
	[FieldOffset(Offset = "0xC")]
	public int lastWritePassID;

	[Token(Token = "0x4000D05")]
	[FieldOffset(Offset = "0x10")]
	public int firstUsePassID;

	[Token(Token = "0x4000D06")]
	[FieldOffset(Offset = "0x14")]
	public bool memoryLess;

	[Token(Token = "0x4000D07")]
	[FieldOffset(Offset = "0x18")]
	public readonly int width;

	[Token(Token = "0x4000D08")]
	[FieldOffset(Offset = "0x1C")]
	public readonly int height;

	[Token(Token = "0x4000D09")]
	[FieldOffset(Offset = "0x20")]
	public readonly int volumeDepth;

	[Token(Token = "0x4000D0A")]
	[FieldOffset(Offset = "0x24")]
	public readonly int msaaSamples;

	[Token(Token = "0x4000D0B")]
	[FieldOffset(Offset = "0x28")]
	public readonly GraphicsFormat graphicsFormat;

	[Token(Token = "0x4000D0C")]
	[FieldOffset(Offset = "0x2C")]
	public int latestVersionNumber;

	[Token(Token = "0x4000D0D")]
	[FieldOffset(Offset = "0x30")]
	public readonly bool clear;

	[Token(Token = "0x4000D0E")]
	[FieldOffset(Offset = "0x31")]
	public readonly bool discard;

	[Token(Token = "0x4000D0F")]
	[FieldOffset(Offset = "0x32")]
	public readonly bool bindMS;

	[Token(Token = "0x4000D10")]
	[FieldOffset(Offset = "0x34")]
	public TextureUVOriginSelection textureUVOrigin;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013C5")]
	[Address(RVA = "0x2BB95D0", Offset = "0x2BB7BD0", VA = "0x182BB95D0")]
	public string GetName(CompilerContextData ctx, in ResourceHandle h)
	{
		return null;
	}

	[Token(Token = "0x60013C6")]
	[Address(RVA = "0x2BB9690", Offset = "0x2BB7C90", VA = "0x182BB9690")]
	public ResourceUnversionedData(TextureResource rll, ref RenderTargetInfo info, ref TextureDesc desc, bool isResourceShared)
	{
	}

	[Token(Token = "0x60013C7")]
	[Address(RVA = "0x2BB9620", Offset = "0x2BB7C20", VA = "0x182BB9620")]
	public ResourceUnversionedData(IRenderGraphResource rll, ref BufferDesc _, bool isResourceShared)
	{
	}

	[Token(Token = "0x60013C8")]
	[Address(RVA = "0x2BB9620", Offset = "0x2BB7C20", VA = "0x182BB9620")]
	public ResourceUnversionedData(IRenderGraphResource rll, ref RayTracingAccelerationStructureDesc _, bool isResourceShared)
	{
	}

	[Token(Token = "0x60013C9")]
	[Address(RVA = "0x2BB9600", Offset = "0x2BB7C00", VA = "0x182BB9600")]
	public void InitializeNullResource()
	{
	}
}
