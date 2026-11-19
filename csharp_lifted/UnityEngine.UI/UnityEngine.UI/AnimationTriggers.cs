// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.AnimationTriggers
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
[Token(Token = "0x2000002")]
public class AnimationTriggers
{
	[Token(Token = "0x4000001")]
	private const string kDefaultNormalAnimName = "Normal";

	[Token(Token = "0x4000002")]
	private const string kDefaultHighlightedAnimName = "Highlighted";

	[Token(Token = "0x4000003")]
	private const string kDefaultPressedAnimName = "Pressed";

	[Token(Token = "0x4000004")]
	private const string kDefaultSelectedAnimName = "Selected";

	[Token(Token = "0x4000005")]
	private const string kDefaultDisabledAnimName = "Disabled";

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x10")]
	[FormerlySerializedAs("normalTrigger")]
	[SerializeField]
	private string m_NormalTrigger;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x18")]
	[FormerlySerializedAs("highlightedTrigger")]
	[SerializeField]
	private string m_HighlightedTrigger;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x20")]
	[FormerlySerializedAs("pressedTrigger")]
	[SerializeField]
	private string m_PressedTrigger;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x28")]
	[FormerlySerializedAs("m_HighlightedTrigger")]
	[SerializeField]
	private string m_SelectedTrigger;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x30")]
	[FormerlySerializedAs("disabledTrigger")]
	[SerializeField]
	private string m_DisabledTrigger;

	[Token(Token = "0x17000001")]
	public string normalTrigger
	{
		[Token(Token = "0x6000001")]
		[Address(RVA = "0x6A5D410", Offset = "0x6A5C410", VA = "0x6A5D410")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x6A5D420", Offset = "0x6A5C420", VA = "0x6A5D420")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public string highlightedTrigger
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x6A5D430", Offset = "0x6A5C430", VA = "0x6A5D430")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x6A5D440", Offset = "0x6A5C440", VA = "0x6A5D440")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public string pressedTrigger
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x6A5D450", Offset = "0x6A5C450", VA = "0x6A5D450")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x6A5D460", Offset = "0x6A5C460", VA = "0x6A5D460")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public string selectedTrigger
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x6A5D470", Offset = "0x6A5C470", VA = "0x6A5D470")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x6A5D480", Offset = "0x6A5C480", VA = "0x6A5D480")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public string disabledTrigger
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x6A5D490", Offset = "0x6A5C490", VA = "0x6A5D490")]
		get
		{
			return null;
		}
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x6A5D4A0", Offset = "0x6A5C4A0", VA = "0x6A5D4A0")]
		set
		{
		}
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x6A5D4B0", Offset = "0x6A5C4B0", VA = "0x6A5D4B0")]
	public AnimationTriggers()
	{
	}
}
