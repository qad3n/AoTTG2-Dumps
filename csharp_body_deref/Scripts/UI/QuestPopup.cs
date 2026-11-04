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

[Token(Token = "0x2000806")]
internal class QuestPopup : BasePopup
{
	[Token(Token = "0x400285E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public StringSetting TierSelection;

	[Token(Token = "0x400285F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public StringSetting CompletedSelection;

	[Token(Token = "0x17000E24")]
	protected override string Title
	{
		[Token(Token = "0x6004D75")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E25")]
	protected override float Width
	{
		[Token(Token = "0x6004D76")]
		[Address(RVA = "0x229A1F0", Offset = "0x22987F0", VA = "0x18229A1F0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E26")]
	protected override float Height
	{
		[Token(Token = "0x6004D77")]
		[Address(RVA = "0x229A1E0", Offset = "0x22987E0", VA = "0x18229A1E0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E27")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x6004D78")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E28")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x6004D79")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E29")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x6004D7A")]
		[Address(RVA = "0x229A1B0", Offset = "0x22987B0", VA = "0x18229A1B0", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E2A")]
	protected override bool UseSound
	{
		[Token(Token = "0x6004D7B")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004D7C")]
	[Address(RVA = "0x229A0B0", Offset = "0x22986B0", VA = "0x18229A0B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004D7D")]
	[Address(RVA = "0x2299650", Offset = "0x2297C50", VA = "0x182299650")]
	public void CreateAchievementDropdowns(Transform panel)
	{
	}

	[Token(Token = "0x6004D7E")]
	[Address(RVA = "0x2299D50", Offset = "0x2298350", VA = "0x182299D50", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x6004D7F")]
	[Address(RVA = "0x22999F0", Offset = "0x2297FF0", VA = "0x1822999F0", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6004D80")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890", Slot = "25")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6004D81")]
	[Address(RVA = "0x2299B30", Offset = "0x2298130", VA = "0x182299B30")]
	private void SetupBottomButtons()
	{
	}

	[Token(Token = "0x6004D82")]
	[Address(RVA = "0x2299990", Offset = "0x2297F90", VA = "0x182299990")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6004D83")]
	[Address(RVA = "0x229A0E0", Offset = "0x22986E0", VA = "0x18229A0E0")]
	public QuestPopup()
	{
	}
}
