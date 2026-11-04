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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000002")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public string highlightedTrigger
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000004")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public string pressedTrigger
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000006")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public string selectedTrigger
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public string disabledTrigger
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		set
		{
		}
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x3061940", Offset = "0x305FF40", VA = "0x183061940")]
	public AnimationTriggers()
	{
	}
}
