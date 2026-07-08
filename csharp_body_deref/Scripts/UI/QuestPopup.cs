using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x200065F")]
internal class QuestPopup : BasePopup
{
	[Token(Token = "0x4001F35")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public StringSetting TierSelection;

	[Token(Token = "0x4001F36")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public StringSetting CompletedSelection;

	[Token(Token = "0x17000C64")]
	protected override string Title
	{
		[Token(Token = "0x6004024")]
		[Address(RVA = "0x3FFE000", Offset = "0x3FFE000", VA = "0x3FFE000", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C65")]
	protected override float Width
	{
		[Token(Token = "0x6004025")]
		[Address(RVA = "0x3FFE020", Offset = "0x3FFE020", VA = "0x3FFE020", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C66")]
	protected override float Height
	{
		[Token(Token = "0x6004026")]
		[Address(RVA = "0x3FFE030", Offset = "0x3FFE030", VA = "0x3FFE030", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C67")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x6004027")]
		[Address(RVA = "0x3FFE040", Offset = "0x3FFE040", VA = "0x3FFE040", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C68")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x6004028")]
		[Address(RVA = "0x3FFE050", Offset = "0x3FFE050", VA = "0x3FFE050", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C69")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x6004029")]
		[Address(RVA = "0x3FFE060", Offset = "0x3FFE060", VA = "0x3FFE060", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C6A")]
	protected override bool UseSound
	{
		[Token(Token = "0x600402A")]
		[Address(RVA = "0x3FFE090", Offset = "0x3FFE090", VA = "0x3FFE090", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600402B")]
	[Address(RVA = "0x3FFE0A0", Offset = "0x3FFE0A0", VA = "0x3FFE0A0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600402C")]
	[Address(RVA = "0x3FFBA60", Offset = "0x3FFBA60", VA = "0x3FFBA60")]
	public void CreateAchievementDropdowns(Transform panel)
	{
	}

	[Token(Token = "0x600402D")]
	[Address(RVA = "0x3FFE300", Offset = "0x3FFE300", VA = "0x3FFE300", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x600402E")]
	[Address(RVA = "0x3FFE690", Offset = "0x3FFE690", VA = "0x3FFE690", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x600402F")]
	[Address(RVA = "0x3FFE7D0", Offset = "0x3FFE7D0", VA = "0x3FFE7D0", Slot = "25")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6004030")]
	[Address(RVA = "0x3FFE0C0", Offset = "0x3FFE0C0", VA = "0x3FFE0C0")]
	private void SetupBottomButtons()
	{
	}

	[Token(Token = "0x6004031")]
	[Address(RVA = "0x3FFE7F0", Offset = "0x3FFE7F0", VA = "0x3FFE7F0")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6004032")]
	[Address(RVA = "0x3FFE860", Offset = "0x3FFE860", VA = "0x3FFE860")]
	public QuestPopup()
	{
	}
}
