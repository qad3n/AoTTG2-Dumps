// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Game;
using Gisketch.Aottg2UI.Overlays;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000815")]
internal class CharacterPopup : BasePopup
{
	[Token(Token = "0x400283D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public string LocaleCategory;

	[Token(Token = "0x400283E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected List<string> _allowedCategories;

	[Token(Token = "0x400283F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected AottgInGameView View;

	[Token(Token = "0x4002842")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private RectTransform _dropdownLayer;

	[Token(Token = "0x4002843")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private readonly Dictionary<string, InGameCharacterSettings> _choices;

	[Token(Token = "0x17000D6A")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004D3D")]
		[Address(RVA = "0x5C05400", Offset = "0x5C04400", VA = "0x5C05400", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000D6B")]
	protected override string Title
	{
		[Token(Token = "0x6004D3F")]
		[Address(RVA = "0x5C05480", Offset = "0x5C04480", VA = "0x5C05480", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D6C")]
	protected override float Width
	{
		[Token(Token = "0x6004D40")]
		[Address(RVA = "0x5C054A0", Offset = "0x5C044A0", VA = "0x5C054A0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D6D")]
	protected override float Height
	{
		[Token(Token = "0x6004D41")]
		[Address(RVA = "0x5C054B0", Offset = "0x5C044B0", VA = "0x5C054B0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D6E")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004D42")]
		[Address(RVA = "0x5C05530", Offset = "0x5C04530", VA = "0x5C05530", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000D6F")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x6004D43")]
		[Address(RVA = "0x5C05540", Offset = "0x5C04540", VA = "0x5C05540", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D70")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x6004D44")]
		[Address(RVA = "0x5C05550", Offset = "0x5C04550", VA = "0x5C05550", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D71")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x6004D45")]
		[Address(RVA = "0x5C05560", Offset = "0x5C04560", VA = "0x5C05560", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D72")]
	public AottgCharacterPickerPopup Picker
	{
		[Token(Token = "0x6004D46")]
		[Address(RVA = "0x5C05590", Offset = "0x5C04590", VA = "0x5C05590")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004D47")]
		[Address(RVA = "0x5C055A0", Offset = "0x5C045A0", VA = "0x5C055A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000D73")]
	public GisketchOverlayManager Dropdowns
	{
		[Token(Token = "0x6004D48")]
		[Address(RVA = "0x5C055C0", Offset = "0x5C045C0", VA = "0x5C055C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004D49")]
		[Address(RVA = "0x5C055D0", Offset = "0x5C045D0", VA = "0x5C055D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6004D3E")]
	[Address(RVA = "0x5C05410", Offset = "0x5C04410", VA = "0x5C05410", Slot = "57")]
	public override bool DismissFromEscape()
	{
		return default(bool);
	}

	[Token(Token = "0x6004D4A")]
	[Address(RVA = "0x5C055F0", Offset = "0x5C045F0", VA = "0x5C055F0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004D4B")]
	[Address(RVA = "0x5C05BB0", Offset = "0x5C04BB0", VA = "0x5C05BB0", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6004D4C")]
	[Address(RVA = "0x5C05C30", Offset = "0x5C04C30", VA = "0x5C05C30", Slot = "28")]
	public override void SetCategoryPanel(string name)
	{
	}

	[Token(Token = "0x6004D4D")]
	[Address(RVA = "0x5C05DA0", Offset = "0x5C04DA0", VA = "0x5C05DA0")]
	public void SelectCategory(string name)
	{
	}

	[Token(Token = "0x6004D4E")]
	[Address(RVA = "0x5C05E10", Offset = "0x5C04E10", VA = "0x5C05E10")]
	public bool RestoreChoices(string characterType)
	{
		return default(bool);
	}

	[Token(Token = "0x6004D4F")]
	[Address(RVA = "0x5C05C70", Offset = "0x5C04C70", VA = "0x5C05C70")]
	private void RememberChoices()
	{
	}

	[Token(Token = "0x6004D50")]
	[Address(RVA = "0x5C05EB0", Offset = "0x5C04EB0", VA = "0x5C05EB0", Slot = "26")]
	protected override void HideAllPopups()
	{
	}

	[Token(Token = "0x6004D51")]
	[Address(RVA = "0x5C05EE0", Offset = "0x5C04EE0", VA = "0x5C05EE0", Slot = "59")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6004D52")]
	[Address(RVA = "0x5C05F10", Offset = "0x5C04F10", VA = "0x5C05F10")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6004D53")]
	[Address(RVA = "0x5C060A0", Offset = "0x5C050A0", VA = "0x5C060A0", Slot = "62")]
	protected virtual void SetAllowedCategories()
	{
	}

	[Token(Token = "0x6004D54")]
	[Address(RVA = "0x5C06360", Offset = "0x5C05360", VA = "0x5C06360", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x6004D55")]
	[Address(RVA = "0x5C06580", Offset = "0x5C05580", VA = "0x5C06580", Slot = "43")]
	protected override void SetTopButton(string name)
	{
	}

	[Token(Token = "0x6004D56")]
	[Address(RVA = "0x5C06710", Offset = "0x5C05710", VA = "0x5C06710", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6004D57")]
	[Address(RVA = "0x5C06850", Offset = "0x5C05850", VA = "0x5C06850", Slot = "63")]
	protected virtual void SetupBottomButtons()
	{
	}

	[Token(Token = "0x6004D58")]
	[Address(RVA = "0x5C069D0", Offset = "0x5C059D0", VA = "0x5C069D0", Slot = "64")]
	public virtual void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6004D59")]
	[Address(RVA = "0x5C06CA0", Offset = "0x5C05CA0", VA = "0x5C06CA0")]
	protected void SaveLastCharacter()
	{
	}

	[Token(Token = "0x6004D5A")]
	[Address(RVA = "0x5C06EF0", Offset = "0x5C05EF0", VA = "0x5C06EF0")]
	public CharacterPopup()
	{
	}
}
