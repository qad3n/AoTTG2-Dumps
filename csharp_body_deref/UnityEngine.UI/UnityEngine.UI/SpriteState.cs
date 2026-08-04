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
		[Address(RVA = "0x50E7AE0", Offset = "0x50E7AE0", VA = "0x50E7AE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000492")]
		[Address(RVA = "0x50E7AF0", Offset = "0x50E7AF0", VA = "0x50E7AF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000133")]
	public Sprite pressedSprite
	{
		[Token(Token = "0x6000493")]
		[Address(RVA = "0x50E7B00", Offset = "0x50E7B00", VA = "0x50E7B00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000494")]
		[Address(RVA = "0x50E7B10", Offset = "0x50E7B10", VA = "0x50E7B10")]
		set
		{
		}
	}

	[Token(Token = "0x17000134")]
	public Sprite selectedSprite
	{
		[Token(Token = "0x6000495")]
		[Address(RVA = "0x50E7B20", Offset = "0x50E7B20", VA = "0x50E7B20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000496")]
		[Address(RVA = "0x50E7B30", Offset = "0x50E7B30", VA = "0x50E7B30")]
		set
		{
		}
	}

	[Token(Token = "0x17000135")]
	public Sprite disabledSprite
	{
		[Token(Token = "0x6000497")]
		[Address(RVA = "0x50E7B40", Offset = "0x50E7B40", VA = "0x50E7B40")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000498")]
		[Address(RVA = "0x50E7B50", Offset = "0x50E7B50", VA = "0x50E7B50")]
		set
		{
		}
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x50E7B60", Offset = "0x50E7B60", VA = "0x50E7B60", Slot = "4")]
	public bool Equals(SpriteState other)
	{
		return default(bool);
	}
}
