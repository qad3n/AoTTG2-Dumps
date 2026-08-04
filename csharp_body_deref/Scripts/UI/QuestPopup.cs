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

[Token(Token = "0x20006AB")]
internal class QuestPopup : BasePopup
{
	[Token(Token = "0x400208A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public StringSetting TierSelection;

	[Token(Token = "0x400208B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public StringSetting CompletedSelection;

	[Token(Token = "0x17000CDE")]
	protected override string Title
	{
		[Token(Token = "0x6004281")]
		[Address(RVA = "0x4312340", Offset = "0x4312340", VA = "0x4312340", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CDF")]
	protected override float Width
	{
		[Token(Token = "0x6004282")]
		[Address(RVA = "0x4312360", Offset = "0x4312360", VA = "0x4312360", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CE0")]
	protected override float Height
	{
		[Token(Token = "0x6004283")]
		[Address(RVA = "0x4312370", Offset = "0x4312370", VA = "0x4312370", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CE1")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x6004284")]
		[Address(RVA = "0x4312380", Offset = "0x4312380", VA = "0x4312380", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CE2")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x6004285")]
		[Address(RVA = "0x4312390", Offset = "0x4312390", VA = "0x4312390", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CE3")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x6004286")]
		[Address(RVA = "0x43123A0", Offset = "0x43123A0", VA = "0x43123A0", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CE4")]
	protected override bool UseSound
	{
		[Token(Token = "0x6004287")]
		[Address(RVA = "0x43123D0", Offset = "0x43123D0", VA = "0x43123D0", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004288")]
	[Address(RVA = "0x43123E0", Offset = "0x43123E0", VA = "0x43123E0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004289")]
	[Address(RVA = "0x430FDA0", Offset = "0x430FDA0", VA = "0x430FDA0")]
	public void CreateAchievementDropdowns(Transform panel)
	{
	}

	[Token(Token = "0x600428A")]
	[Address(RVA = "0x4312640", Offset = "0x4312640", VA = "0x4312640", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x600428B")]
	[Address(RVA = "0x43129D0", Offset = "0x43129D0", VA = "0x43129D0", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x600428C")]
	[Address(RVA = "0x4312B10", Offset = "0x4312B10", VA = "0x4312B10", Slot = "25")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x600428D")]
	[Address(RVA = "0x4312400", Offset = "0x4312400", VA = "0x4312400")]
	private void SetupBottomButtons()
	{
	}

	[Token(Token = "0x600428E")]
	[Address(RVA = "0x4312B30", Offset = "0x4312B30", VA = "0x4312B30")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x600428F")]
	[Address(RVA = "0x4312BA0", Offset = "0x4312BA0", VA = "0x4312BA0")]
	public QuestPopup()
	{
	}
}
