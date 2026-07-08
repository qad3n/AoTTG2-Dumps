using System;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.UI;

[Serializable]
[Token(Token = "0x2000071")]
public struct SpriteState : IEquatable<SpriteState>
{
	[Token(Token = "0x4000238")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private Sprite m_HighlightedSprite;

	[Token(Token = "0x4000239")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private Sprite m_PressedSprite;

	[Token(Token = "0x400023A")]
	[FieldOffset(Offset = "0x10")]
	[FormerlySerializedAs("m_HighlightedSprite")]
	[SerializeField]
	private Sprite m_SelectedSprite;

	[Token(Token = "0x400023B")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private Sprite m_DisabledSprite;

	[Token(Token = "0x17000132")]
	public Sprite highlightedSprite
	{
		[Token(Token = "0x6000491")]
		[Address(RVA = "0x4DC0190", Offset = "0x4DC0190", VA = "0x4DC0190")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000492")]
		[Address(RVA = "0x4DC01A0", Offset = "0x4DC01A0", VA = "0x4DC01A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000133")]
	public Sprite pressedSprite
	{
		[Token(Token = "0x6000493")]
		[Address(RVA = "0x4DC01B0", Offset = "0x4DC01B0", VA = "0x4DC01B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000494")]
		[Address(RVA = "0x4DC01C0", Offset = "0x4DC01C0", VA = "0x4DC01C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000134")]
	public Sprite selectedSprite
	{
		[Token(Token = "0x6000495")]
		[Address(RVA = "0x4DC01D0", Offset = "0x4DC01D0", VA = "0x4DC01D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000496")]
		[Address(RVA = "0x4DC01E0", Offset = "0x4DC01E0", VA = "0x4DC01E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000135")]
	public Sprite disabledSprite
	{
		[Token(Token = "0x6000497")]
		[Address(RVA = "0x4DC01F0", Offset = "0x4DC01F0", VA = "0x4DC01F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000498")]
		[Address(RVA = "0x4DC0200", Offset = "0x4DC0200", VA = "0x4DC0200")]
		set
		{
		}
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x4DC0210", Offset = "0x4DC0210", VA = "0x4DC0210", Slot = "4")]
	public bool Equals(SpriteState other)
	{
		return default(bool);
	}
}
