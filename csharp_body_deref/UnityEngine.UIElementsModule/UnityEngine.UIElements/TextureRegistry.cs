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

[Token(Token = "0x200025C")]
internal class TextureRegistry
{
	[Token(Token = "0x200025D")]
	private struct TextureInfo
	{
		[Token(Token = "0x40008CA")]
		[FieldOffset(Offset = "0x0")]
		public Texture texture;

		[Token(Token = "0x40008CB")]
		[FieldOffset(Offset = "0x8")]
		public bool dynamic;

		[Token(Token = "0x40008CC")]
		[FieldOffset(Offset = "0xC")]
		public int refCount;
	}

	[Token(Token = "0x40008C5")]
	[FieldOffset(Offset = "0x10")]
	private List<TextureInfo> m_Textures;

	[Token(Token = "0x40008C6")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<Texture, TextureId> m_TextureToId;

	[Token(Token = "0x40008C7")]
	[FieldOffset(Offset = "0x20")]
	private Stack<TextureId> m_FreeIds;

	[Token(Token = "0x40008C8")]
	internal const int maxTextures = 2048;

	[Token(Token = "0x17000304")]
	public static TextureRegistry instance
	{
		[Token(Token = "0x6000F95")]
		[Address(RVA = "0x50761E0", Offset = "0x50761E0", VA = "0x50761E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F96")]
	[Address(RVA = "0x5076250", Offset = "0x5076250", VA = "0x5076250")]
	public Texture GetTexture(TextureId id)
	{
		return null;
	}

	[Token(Token = "0x6000F97")]
	[Address(RVA = "0x5071FC0", Offset = "0x5071FC0", VA = "0x5071FC0")]
	public TextureId AllocAndAcquireDynamic()
	{
		return default(TextureId);
	}

	[Token(Token = "0x6000F98")]
	[Address(RVA = "0x50766F0", Offset = "0x50766F0", VA = "0x50766F0")]
	public void UpdateDynamic(TextureId id, Texture texture)
	{
	}

	[Token(Token = "0x6000F99")]
	[Address(RVA = "0x5076410", Offset = "0x5076410", VA = "0x5076410")]
	private TextureId AllocAndAcquire(Texture texture, bool dynamic)
	{
		return default(TextureId);
	}

	[Token(Token = "0x6000F9A")]
	[Address(RVA = "0x5076940", Offset = "0x5076940", VA = "0x5076940")]
	public TextureId Acquire(Texture tex)
	{
		return default(TextureId);
	}

	[Token(Token = "0x6000F9B")]
	[Address(RVA = "0x5072390", Offset = "0x5072390", VA = "0x5072390")]
	public void Release(TextureId id)
	{
	}

	[Token(Token = "0x6000F9C")]
	[Address(RVA = "0x5076AB0", Offset = "0x5076AB0", VA = "0x5076AB0")]
	public TextureRegistry()
	{
	}
}
