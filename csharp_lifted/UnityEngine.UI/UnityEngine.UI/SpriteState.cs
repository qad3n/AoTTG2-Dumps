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
		[Address(RVA = "0x6CF7C00", Offset = "0x6CF6C00", VA = "0x6CF7C00")]
		get
		{
			return null;
		}
		[Token(Token = "0x600049E")]
		[Address(RVA = "0x6CF7C10", Offset = "0x6CF6C10", VA = "0x6CF7C10")]
		set
		{
		}
	}

	[Token(Token = "0x17000134")]
	public Sprite pressedSprite
	{
		[Token(Token = "0x600049F")]
		[Address(RVA = "0x6CF7C20", Offset = "0x6CF6C20", VA = "0x6CF7C20")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004A0")]
		[Address(RVA = "0x6CF7C30", Offset = "0x6CF6C30", VA = "0x6CF7C30")]
		set
		{
		}
	}

	[Token(Token = "0x17000135")]
	public Sprite selectedSprite
	{
		[Token(Token = "0x60004A1")]
		[Address(RVA = "0x6CF7C40", Offset = "0x6CF6C40", VA = "0x6CF7C40")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004A2")]
		[Address(RVA = "0x6CF7C50", Offset = "0x6CF6C50", VA = "0x6CF7C50")]
		set
		{
		}
	}

	[Token(Token = "0x17000136")]
	public Sprite disabledSprite
	{
		[Token(Token = "0x60004A3")]
		[Address(RVA = "0x6CF7C60", Offset = "0x6CF6C60", VA = "0x6CF7C60")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004A4")]
		[Address(RVA = "0x6CF7C70", Offset = "0x6CF6C70", VA = "0x6CF7C70")]
		set
		{
		}
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x6CF7C80", Offset = "0x6CF6C80", VA = "0x6CF7C80", Slot = "4")]
	public bool Equals(SpriteState other)
	{
		return default(bool);
	}
}
