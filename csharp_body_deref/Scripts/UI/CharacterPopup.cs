// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterPopup
// Update status: CHANGED in this game update
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

[Token(Token = "0x200076B")]
internal class CharacterPopup : BasePopup
{
	[Token(Token = "0x40024C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public string LocaleCategory;

	[Token(Token = "0x40024C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected List<string> _allowedCategories;

	[Token(Token = "0x40024CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected AottgInGameView View;

	[Token(Token = "0x40024CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private RectTransform _dropdownLayer;

	[Token(Token = "0x40024CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private readonly Dictionary<string, InGameCharacterSettings> _choices;

	[Token(Token = "0x17000CEE")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x600481D")]
		[Address(RVA = "0x565FB0", Offset = "0x5645B0", VA = "0x180565FB0", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000CEF")]
	protected override string Title
	{
		[Token(Token = "0x600481F")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CF0")]
	protected override float Width
	{
		[Token(Token = "0x6004820")]
		[Address(RVA = "0x210FA90", Offset = "0x210E090", VA = "0x18210FA90", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CF1")]
	protected override float Height
	{
		[Token(Token = "0x6004821")]
		[Address(RVA = "0x2227300", Offset = "0x2225900", VA = "0x182227300", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CF2")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004822")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000CF3")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x6004823")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CF4")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x6004824")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CF5")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x6004825")]
		[Address(RVA = "0x22272D0", Offset = "0x22258D0", VA = "0x1822272D0", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CF6")]
	public AottgCharacterPickerPopup Picker
	{
		[Token(Token = "0x6004826")]
		[Address(RVA = "0xC8FF80", Offset = "0xC8E580", VA = "0x180C8FF80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004827")]
		[Address(RVA = "0xC8FFC0", Offset = "0xC8E5C0", VA = "0x180C8FFC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000CF7")]
	public GisketchOverlayManager Dropdowns
	{
		[Token(Token = "0x6004828")]
		[Address(RVA = "0x187BC00", Offset = "0x187A200", VA = "0x18187BC00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004829")]
		[Address(RVA = "0x1C42420", Offset = "0x1C40A20", VA = "0x181C42420")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600481E")]
	[Address(RVA = "0x22258C0", Offset = "0x2223EC0", VA = "0x1822258C0", Slot = "57")]
	public override bool DismissFromEscape()
	{
		return default(bool);
	}

	[Token(Token = "0x600482A")]
	[Address(RVA = "0x2226C80", Offset = "0x2225280", VA = "0x182226C80", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600482B")]
	[Address(RVA = "0x2227250", Offset = "0x2225850", VA = "0x182227250", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x600482C")]
	[Address(RVA = "0x22265E0", Offset = "0x2224BE0", VA = "0x1822265E0", Slot = "28")]
	public override void SetCategoryPanel(string name)
	{
	}

	[Token(Token = "0x600482D")]
	[Address(RVA = "0x22263E0", Offset = "0x22249E0", VA = "0x1822263E0")]
	public void SelectCategory(string name)
	{
	}

	[Token(Token = "0x600482E")]
	[Address(RVA = "0x22260C0", Offset = "0x22246C0", VA = "0x1822260C0")]
	public bool RestoreChoices(string characterType)
	{
		return default(bool);
	}

	[Token(Token = "0x600482F")]
	[Address(RVA = "0x2225F80", Offset = "0x2224580", VA = "0x182225F80")]
	private void RememberChoices()
	{
	}

	[Token(Token = "0x6004830")]
	[Address(RVA = "0x2225940", Offset = "0x2223F40", VA = "0x182225940", Slot = "26")]
	protected override void HideAllPopups()
	{
	}

	[Token(Token = "0x6004831")]
	[Address(RVA = "0x2225E10", Offset = "0x2224410", VA = "0x182225E10", Slot = "59")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6004832")]
	[Address(RVA = "0x2225970", Offset = "0x2223F70", VA = "0x182225970")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6004833")]
	[Address(RVA = "0x2226450", Offset = "0x2224A50", VA = "0x182226450", Slot = "62")]
	protected virtual void SetAllowedCategories()
	{
	}

	[Token(Token = "0x6004834")]
	[Address(RVA = "0x2226A70", Offset = "0x2225070", VA = "0x182226A70", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x6004835")]
	[Address(RVA = "0x2226750", Offset = "0x2224D50", VA = "0x182226750", Slot = "43")]
	protected override void SetTopButton(string name)
	{
	}

	[Token(Token = "0x6004836")]
	[Address(RVA = "0x2225E40", Offset = "0x2224440", VA = "0x182225E40", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6004837")]
	[Address(RVA = "0x22268D0", Offset = "0x2224ED0", VA = "0x1822268D0", Slot = "63")]
	protected virtual void SetupBottomButtons()
	{
	}

	[Token(Token = "0x6004838")]
	[Address(RVA = "0x2225B60", Offset = "0x2224160", VA = "0x182225B60", Slot = "64")]
	public virtual void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6004839")]
	[Address(RVA = "0x2226170", Offset = "0x2224770", VA = "0x182226170")]
	protected void SaveLastCharacter()
	{
	}

	[Token(Token = "0x600483A")]
	[Address(RVA = "0x221E8F0", Offset = "0x221CEF0", VA = "0x18221E8F0")]
	public CharacterPopup()
	{
	}
}
