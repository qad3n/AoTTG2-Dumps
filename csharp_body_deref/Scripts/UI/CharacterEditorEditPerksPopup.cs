// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorEditPerksPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorEditPerksPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorEditPerksPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000710")]
internal class CharacterEditorEditPerksPopup : BasePopup
{
	[Token(Token = "0x4002362")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _pointsLeftLabel;

	[Token(Token = "0x4002363")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Dictionary<string, GameObject> _perkButtons;

	[Token(Token = "0x4002364")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Dictionary<string, string> _perkDescriptions;

	[Token(Token = "0x17000C71")]
	protected override string Title
	{
		[Token(Token = "0x6004558")]
		[Address(RVA = "0x21D8210", Offset = "0x21D6810", VA = "0x1821D8210", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C72")]
	protected override float Width
	{
		[Token(Token = "0x6004559")]
		[Address(RVA = "0x21D82B0", Offset = "0x21D68B0", VA = "0x1821D82B0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C73")]
	protected override float Height
	{
		[Token(Token = "0x600455A")]
		[Address(RVA = "0x21D8200", Offset = "0x21D6800", VA = "0x1821D8200", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C74")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600455B")]
		[Address(RVA = "0x2160800", Offset = "0x215EE00", VA = "0x182160800", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C75")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600455C")]
		[Address(RVA = "0x847000", Offset = "0x845600", VA = "0x180847000", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C76")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600455D")]
		[Address(RVA = "0x21BB430", Offset = "0x21B9A30", VA = "0x1821BB430", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600455E")]
	[Address(RVA = "0x21D7AF0", Offset = "0x21D60F0", VA = "0x1821D7AF0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600455F")]
	[Address(RVA = "0x21D6F40", Offset = "0x21D5540", VA = "0x1821D6F40")]
	protected void CreatePerkButton(Transform group, ElementStyle style, string name, string desc)
	{
	}

	[Token(Token = "0x6004560")]
	[Address(RVA = "0x21D6EE0", Offset = "0x21D54E0", VA = "0x1821D6EE0")]
	protected void CreateArrow(Transform group, ElementStyle style)
	{
	}

	[Token(Token = "0x6004561")]
	[Address(RVA = "0x21D70E0", Offset = "0x21D56E0", VA = "0x1821D70E0")]
	protected void OnButtonClick(string button)
	{
	}

	[Token(Token = "0x6004562")]
	[Address(RVA = "0x21D73A0", Offset = "0x21D59A0", VA = "0x1821D73A0")]
	protected void OnPerkChanged(string perkName)
	{
	}

	[Token(Token = "0x6004563")]
	[Address(RVA = "0x21D8130", Offset = "0x21D6730", VA = "0x1821D8130")]
	public CharacterEditorEditPerksPopup()
	{
	}
}
