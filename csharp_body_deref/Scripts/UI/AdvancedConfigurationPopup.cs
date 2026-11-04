// ==================== AoTTG2 cross-reference ====================
// Type: UI.AdvancedConfigurationPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/AdvancedConfigurationPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x20007D9")]
internal class AdvancedConfigurationPopup : BasePopup
{
	[Token(Token = "0x40027C8")]
	private const float KeyWidth = 140f;

	[Token(Token = "0x40027C9")]
	private const float UrlWidth = 280f;

	[Token(Token = "0x40027CA")]
	private const float SecretValueWidth = 280f;

	[Token(Token = "0x40027CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Transform _serviceRowsContainer;

	[Token(Token = "0x40027CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Transform _secretRowsContainer;

	[Token(Token = "0x17000DB9")]
	protected override string Title
	{
		[Token(Token = "0x6004C1B")]
		[Address(RVA = "0x2278780", Offset = "0x2276D80", VA = "0x182278780", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000DBA")]
	protected override float Width
	{
		[Token(Token = "0x6004C1C")]
		[Address(RVA = "0x2278820", Offset = "0x2276E20", VA = "0x182278820", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DBB")]
	protected override float Height
	{
		[Token(Token = "0x6004C1D")]
		[Address(RVA = "0x2278770", Offset = "0x2276D70", VA = "0x182278770", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DBC")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004C1E")]
		[Address(RVA = "0x2182AB0", Offset = "0x21810B0", VA = "0x182182AB0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DBD")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004C1F")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000DBE")]
	protected override bool UseSound
	{
		[Token(Token = "0x6004C20")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004C21")]
	[Address(RVA = "0x2277B10", Offset = "0x2276110", VA = "0x182277B10", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004C22")]
	[Address(RVA = "0x2276D80", Offset = "0x2275380", VA = "0x182276D80")]
	private void CreateHeaderLabel(Transform parent, ElementStyle style, string text, float width)
	{
	}

	[Token(Token = "0x6004C23")]
	[Address(RVA = "0x2277160", Offset = "0x2275760", VA = "0x182277160")]
	private void CreateServiceRow(StringSetting keySetting, StringSetting urlSetting)
	{
	}

	[Token(Token = "0x6004C24")]
	[Address(RVA = "0x2276E20", Offset = "0x2275420", VA = "0x182276E20")]
	private void CreateSecretRow(StringSetting keySetting, StringSetting valueSetting)
	{
	}

	[Token(Token = "0x6004C25")]
	[Address(RVA = "0x2277960", Offset = "0x2275F60", VA = "0x182277960")]
	private void SetDeleteButtonColors(GameObject deleteButton)
	{
	}

	[Token(Token = "0x6004C26")]
	[Address(RVA = "0x22785D0", Offset = "0x2276BD0", VA = "0x1822785D0")]
	private void ValidateUrl(StringSetting urlSetting)
	{
	}

	[Token(Token = "0x6004C27")]
	[Address(RVA = "0x22775B0", Offset = "0x2275BB0", VA = "0x1822775B0")]
	private void OnAddServiceClick()
	{
	}

	[Token(Token = "0x6004C28")]
	[Address(RVA = "0x22777B0", Offset = "0x2275DB0", VA = "0x1822777B0")]
	private void OnRemoveServiceClick(GameObject row, StringSetting keySetting, StringSetting urlSetting)
	{
	}

	[Token(Token = "0x6004C29")]
	[Address(RVA = "0x2277490", Offset = "0x2275A90", VA = "0x182277490")]
	private void OnAddSecretClick()
	{
	}

	[Token(Token = "0x6004C2A")]
	[Address(RVA = "0x22776D0", Offset = "0x2275CD0", VA = "0x1822776D0")]
	private void OnRemoveSecretClick(GameObject row, StringSetting keySetting, StringSetting valueSetting)
	{
	}

	[Token(Token = "0x6004C2B")]
	[Address(RVA = "0x2277890", Offset = "0x2275E90", VA = "0x182277890")]
	private void OnSaveButtonClick()
	{
	}

	[Token(Token = "0x6004C2C")]
	[Address(RVA = "0x21C11A0", Offset = "0x21BF7A0", VA = "0x1821C11A0")]
	public AdvancedConfigurationPopup()
	{
	}
}
