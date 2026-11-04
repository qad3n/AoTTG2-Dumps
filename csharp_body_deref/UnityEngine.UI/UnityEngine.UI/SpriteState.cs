// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.SpriteState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.UI;

[Serializable]
[Token(Token = "0x200006F")]
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

	[Token(Token = "0x17000133")]
	public Sprite highlightedSprite
	{
		[Token(Token = "0x600049D")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600049E")]
		[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
		set
		{
		}
	}

	[Token(Token = "0x17000134")]
	public Sprite pressedSprite
	{
		[Token(Token = "0x600049F")]
		[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004A0")]
		[Address(RVA = "0x1D69900", Offset = "0x1D67F00", VA = "0x181D69900")]
		set
		{
		}
	}

	[Token(Token = "0x17000135")]
	public Sprite selectedSprite
	{
		[Token(Token = "0x60004A1")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004A2")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x17000136")]
	public Sprite disabledSprite
	{
		[Token(Token = "0x60004A3")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004A4")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x32EA2B0", Offset = "0x32E88B0", VA = "0x1832EA2B0", Slot = "4")]
	public bool Equals(SpriteState other)
	{
		return default(bool);
	}
}
