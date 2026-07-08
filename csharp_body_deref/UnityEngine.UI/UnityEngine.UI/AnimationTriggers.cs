using System;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.UI;

[Serializable]
[Token(Token = "0x2000004")]
public class AnimationTriggers
{
	[Token(Token = "0x4000006")]
	private const string kDefaultNormalAnimName = "Normal";

	[Token(Token = "0x4000007")]
	private const string kDefaultHighlightedAnimName = "Highlighted";

	[Token(Token = "0x4000008")]
	private const string kDefaultPressedAnimName = "Pressed";

	[Token(Token = "0x4000009")]
	private const string kDefaultSelectedAnimName = "Selected";

	[Token(Token = "0x400000A")]
	private const string kDefaultDisabledAnimName = "Disabled";

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x10")]
	[FormerlySerializedAs("normalTrigger")]
	[SerializeField]
	private string m_NormalTrigger;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x18")]
	[FormerlySerializedAs("highlightedTrigger")]
	[SerializeField]
	private string m_HighlightedTrigger;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x20")]
	[FormerlySerializedAs("pressedTrigger")]
	[SerializeField]
	private string m_PressedTrigger;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x28")]
	[FormerlySerializedAs("m_HighlightedTrigger")]
	[SerializeField]
	private string m_SelectedTrigger;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x30")]
	[FormerlySerializedAs("disabledTrigger")]
	[SerializeField]
	private string m_DisabledTrigger;

	[Token(Token = "0x17000001")]
	public string normalTrigger
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x4BC8990", Offset = "0x4BC8990", VA = "0x4BC8990")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x4BC89A0", Offset = "0x4BC89A0", VA = "0x4BC89A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public string highlightedTrigger
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x4BC89B0", Offset = "0x4BC89B0", VA = "0x4BC89B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x4BC89C0", Offset = "0x4BC89C0", VA = "0x4BC89C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public string pressedTrigger
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x4BC89D0", Offset = "0x4BC89D0", VA = "0x4BC89D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x4BC89E0", Offset = "0x4BC89E0", VA = "0x4BC89E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public string selectedTrigger
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x4BC89F0", Offset = "0x4BC89F0", VA = "0x4BC89F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x4BC8A00", Offset = "0x4BC8A00", VA = "0x4BC8A00")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public string disabledTrigger
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x4BC8A10", Offset = "0x4BC8A10", VA = "0x4BC8A10")]
		get
		{
			return null;
		}
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x4BC8A20", Offset = "0x4BC8A20", VA = "0x4BC8A20")]
		set
		{
		}
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x4BC8A30", Offset = "0x4BC8A30", VA = "0x4BC8A30")]
	public AnimationTriggers()
	{
	}
}
