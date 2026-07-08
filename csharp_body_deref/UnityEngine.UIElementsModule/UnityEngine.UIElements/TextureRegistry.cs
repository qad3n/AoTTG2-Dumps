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
		[Address(RVA = "0x4D4E8B0", Offset = "0x4D4E8B0", VA = "0x4D4E8B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F96")]
	[Address(RVA = "0x4D4E920", Offset = "0x4D4E920", VA = "0x4D4E920")]
	public Texture GetTexture(TextureId id)
	{
		return null;
	}

	[Token(Token = "0x6000F97")]
	[Address(RVA = "0x4D4A690", Offset = "0x4D4A690", VA = "0x4D4A690")]
	public TextureId AllocAndAcquireDynamic()
	{
		return default(TextureId);
	}

	[Token(Token = "0x6000F98")]
	[Address(RVA = "0x4D4EDC0", Offset = "0x4D4EDC0", VA = "0x4D4EDC0")]
	public void UpdateDynamic(TextureId id, Texture texture)
	{
	}

	[Token(Token = "0x6000F99")]
	[Address(RVA = "0x4D4EAE0", Offset = "0x4D4EAE0", VA = "0x4D4EAE0")]
	private TextureId AllocAndAcquire(Texture texture, bool dynamic)
	{
		return default(TextureId);
	}

	[Token(Token = "0x6000F9A")]
	[Address(RVA = "0x4D4F010", Offset = "0x4D4F010", VA = "0x4D4F010")]
	public TextureId Acquire(Texture tex)
	{
		return default(TextureId);
	}

	[Token(Token = "0x6000F9B")]
	[Address(RVA = "0x4D4AA60", Offset = "0x4D4AA60", VA = "0x4D4AA60")]
	public void Release(TextureId id)
	{
	}

	[Token(Token = "0x6000F9C")]
	[Address(RVA = "0x4D4F180", Offset = "0x4D4F180", VA = "0x4D4F180")]
	public TextureRegistry()
	{
	}
}
