// ==================== AoTTG2 cross-reference ====================
// Type: UI.QuestPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/QuestPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/QuestPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000888")]
internal class QuestPopup : BasePopup
{
	[Token(Token = "0x4002B1B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public StringSetting TierSelection;

	[Token(Token = "0x4002B1C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public StringSetting CompletedSelection;

	[Token(Token = "0x17000E38")]
	protected override string Title
	{
		[Token(Token = "0x600513A")]
		[Address(RVA = "0x5C5B020", Offset = "0x5C5A020", VA = "0x5C5B020", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E39")]
	protected override float Width
	{
		[Token(Token = "0x600513B")]
		[Address(RVA = "0x5C5B040", Offset = "0x5C5A040", VA = "0x5C5B040", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E3A")]
	protected override float Height
	{
		[Token(Token = "0x600513C")]
		[Address(RVA = "0x5C5B050", Offset = "0x5C5A050", VA = "0x5C5B050", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E3B")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x600513D")]
		[Address(RVA = "0x5C5B060", Offset = "0x5C5A060", VA = "0x5C5B060", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E3C")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x600513E")]
		[Address(RVA = "0x5C5B070", Offset = "0x5C5A070", VA = "0x5C5B070", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E3D")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x600513F")]
		[Address(RVA = "0x5C5B080", Offset = "0x5C5A080", VA = "0x5C5B080", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E3E")]
	protected override bool UseSound
	{
		[Token(Token = "0x6005140")]
		[Address(RVA = "0x5C5B0B0", Offset = "0x5C5A0B0", VA = "0x5C5B0B0", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6005141")]
	[Address(RVA = "0x5C5B0C0", Offset = "0x5C5A0C0", VA = "0x5C5B0C0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6005142")]
	[Address(RVA = "0x5C59110", Offset = "0x5C58110", VA = "0x5C59110")]
	public void CreateAchievementDropdowns(Transform panel)
	{
	}

	[Token(Token = "0x6005143")]
	[Address(RVA = "0x5C5B320", Offset = "0x5C5A320", VA = "0x5C5B320", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x6005144")]
	[Address(RVA = "0x5C5B6B0", Offset = "0x5C5A6B0", VA = "0x5C5B6B0", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6005145")]
	[Address(RVA = "0x5C5B7F0", Offset = "0x5C5A7F0", VA = "0x5C5B7F0", Slot = "25")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6005146")]
	[Address(RVA = "0x5C5B0E0", Offset = "0x5C5A0E0", VA = "0x5C5B0E0")]
	private void SetupBottomButtons()
	{
	}

	[Token(Token = "0x6005147")]
	[Address(RVA = "0x5C5B810", Offset = "0x5C5A810", VA = "0x5C5B810")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6005148")]
	[Address(RVA = "0x5C5B880", Offset = "0x5C5A880", VA = "0x5C5B880")]
	public QuestPopup()
	{
	}
}
