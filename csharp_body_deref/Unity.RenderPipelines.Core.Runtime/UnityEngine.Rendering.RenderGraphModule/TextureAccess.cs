// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.TextureAccess
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x200029B")]
internal readonly struct TextureAccess
{
	[Token(Token = "0x4000BA3")]
	[FieldOffset(Offset = "0x0")]
	public readonly TextureHandle textureHandle;

	[Token(Token = "0x4000BA4")]
	[FieldOffset(Offset = "0x10")]
	public readonly int mipLevel;

	[Token(Token = "0x4000BA5")]
	[FieldOffset(Offset = "0x14")]
	public readonly int depthSlice;

	[Token(Token = "0x4000BA6")]
	[FieldOffset(Offset = "0x18")]
	public readonly AccessFlags flags;

	[Token(Token = "0x60012C5")]
	[Address(RVA = "0x2BA6410", Offset = "0x2BA4A10", VA = "0x182BA6410")]
	public TextureAccess(in TextureHandle handle, AccessFlags flags, int mipLevel, int depthSlice)
	{
	}

	[Token(Token = "0x60012C6")]
	[Address(RVA = "0x2BA6430", Offset = "0x2BA4A30", VA = "0x182BA6430")]
	public TextureAccess(in TextureAccess access, in TextureHandle handle)
	{
	}
}
