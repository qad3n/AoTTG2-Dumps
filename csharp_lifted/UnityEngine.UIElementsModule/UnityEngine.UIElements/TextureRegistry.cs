// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TextureRegistry
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002E0")]
internal class TextureRegistry
{
	[Token(Token = "0x20002E1")]
	private struct TextureInfo
	{
		[Token(Token = "0x4000B38")]
		[FieldOffset(Offset = "0x0")]
		public Texture texture;

		[Token(Token = "0x4000B39")]
		[FieldOffset(Offset = "0x8")]
		public bool dynamic;

		[Token(Token = "0x4000B3A")]
		[FieldOffset(Offset = "0xC")]
		public int refCount;
	}

	[Token(Token = "0x4000B33")]
	[FieldOffset(Offset = "0x10")]
	private List<TextureInfo> m_Textures;

	[Token(Token = "0x4000B34")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<Texture, TextureId> m_TextureToId;

	[Token(Token = "0x4000B35")]
	[FieldOffset(Offset = "0x20")]
	private Stack<TextureId> m_FreeIds;

	[Token(Token = "0x4000B36")]
	internal const int maxTextures = 2048;

	[Token(Token = "0x170003FA")]
	public static TextureRegistry instance
	{
		[Token(Token = "0x6001385")]
		[Address(RVA = "0x6CC1A70", Offset = "0x6CC0A70", VA = "0x6CC1A70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001386")]
	[Address(RVA = "0x6CC1AE0", Offset = "0x6CC0AE0", VA = "0x6CC1AE0")]
	public Texture GetTexture(TextureId id)
	{
		return null;
	}

	[Token(Token = "0x6001387")]
	[Address(RVA = "0x6CBCC00", Offset = "0x6CBBC00", VA = "0x6CBCC00")]
	public TextureId AllocAndAcquireDynamic()
	{
		return default(TextureId);
	}

	[Token(Token = "0x6001388")]
	[Address(RVA = "0x6CC1F50", Offset = "0x6CC0F50", VA = "0x6CC1F50")]
	public void UpdateDynamic(TextureId id, Texture texture)
	{
	}

	[Token(Token = "0x6001389")]
	[Address(RVA = "0x6CC1C80", Offset = "0x6CC0C80", VA = "0x6CC1C80")]
	private TextureId AllocAndAcquire(Texture texture, bool dynamic)
	{
		return default(TextureId);
	}

	[Token(Token = "0x600138A")]
	[Address(RVA = "0x6CC21B0", Offset = "0x6CC11B0", VA = "0x6CC21B0")]
	public TextureId Acquire(Texture tex)
	{
		return default(TextureId);
	}

	[Token(Token = "0x600138B")]
	[Address(RVA = "0x6CBCFA0", Offset = "0x6CBBFA0", VA = "0x6CBCFA0")]
	public void Release(TextureId id)
	{
	}

	[Token(Token = "0x600138C")]
	[Address(RVA = "0x6CC2310", Offset = "0x6CC1310", VA = "0x6CC2310")]
	public TextureRegistry()
	{
	}
}
