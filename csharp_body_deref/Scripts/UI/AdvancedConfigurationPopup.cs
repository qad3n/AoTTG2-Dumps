// ==================== AoTTG2 cross-reference ====================
// Type: UI.AdvancedConfigurationPopup
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/AdvancedConfigurationPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x200067E")]
internal class AdvancedConfigurationPopup : BasePopup
{
	[Token(Token = "0x4001FF0")]
	private const float KeyWidth = 140f;

	[Token(Token = "0x4001FF1")]
	private const float UrlWidth = 280f;

	[Token(Token = "0x4001FF2")]
	private const float SecretValueWidth = 280f;

	[Token(Token = "0x4001FF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Transform _serviceRowsContainer;

	[Token(Token = "0x4001FF4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Transform _secretRowsContainer;

	[Token(Token = "0x17000C73")]
	protected override string Title
	{
		[Token(Token = "0x6004126")]
		[Address(RVA = "0x42F8EE0", Offset = "0x42F8EE0", VA = "0x42F8EE0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C74")]
	protected override float Width
	{
		[Token(Token = "0x6004127")]
		[Address(RVA = "0x42F8F80", Offset = "0x42F8F80", VA = "0x42F8F80", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C75")]
	protected override float Height
	{
		[Token(Token = "0x6004128")]
		[Address(RVA = "0x42F8F90", Offset = "0x42F8F90", VA = "0x42F8F90", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C76")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004129")]
		[Address(RVA = "0x42F8FA0", Offset = "0x42F8FA0", VA = "0x42F8FA0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C77")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x600412A")]
		[Address(RVA = "0x42F8FB0", Offset = "0x42F8FB0", VA = "0x42F8FB0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C78")]
	protected override bool UseSound
	{
		[Token(Token = "0x600412B")]
		[Address(RVA = "0x42F8FC0", Offset = "0x42F8FC0", VA = "0x42F8FC0", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600412C")]
	[Address(RVA = "0x42F8FD0", Offset = "0x42F8FD0", VA = "0x42F8FD0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600412D")]
	[Address(RVA = "0x42F9B40", Offset = "0x42F9B40", VA = "0x42F9B40")]
	private void CreateHeaderLabel(Transform parent, ElementStyle style, string text, float width)
	{
	}

	[Token(Token = "0x600412E")]
	[Address(RVA = "0x42F9BE0", Offset = "0x42F9BE0", VA = "0x42F9BE0")]
	private void CreateServiceRow(StringSetting keySetting, StringSetting urlSetting)
	{
	}

	[Token(Token = "0x600412F")]
	[Address(RVA = "0x42F9EC0", Offset = "0x42F9EC0", VA = "0x42F9EC0")]
	private void CreateSecretRow(StringSetting keySetting, StringSetting valueSetting)
	{
	}

	[Token(Token = "0x6004130")]
	[Address(RVA = "0x42FA1B0", Offset = "0x42FA1B0", VA = "0x42FA1B0")]
	private void SetDeleteButtonColors(GameObject deleteButton)
	{
	}

	[Token(Token = "0x6004131")]
	[Address(RVA = "0x42FA370", Offset = "0x42FA370", VA = "0x42FA370")]
	private void ValidateUrl(StringSetting urlSetting)
	{
	}

	[Token(Token = "0x6004132")]
	[Address(RVA = "0x42FA500", Offset = "0x42FA500", VA = "0x42FA500")]
	private void OnAddServiceClick()
	{
	}

	[Token(Token = "0x6004133")]
	[Address(RVA = "0x42FA620", Offset = "0x42FA620", VA = "0x42FA620")]
	private void OnRemoveServiceClick(GameObject row, StringSetting keySetting, StringSetting urlSetting)
	{
	}

	[Token(Token = "0x6004134")]
	[Address(RVA = "0x42FA710", Offset = "0x42FA710", VA = "0x42FA710")]
	private void OnAddSecretClick()
	{
	}

	[Token(Token = "0x6004135")]
	[Address(RVA = "0x42FA830", Offset = "0x42FA830", VA = "0x42FA830")]
	private void OnRemoveSecretClick(GameObject row, StringSetting keySetting, StringSetting valueSetting)
	{
	}

	[Token(Token = "0x6004136")]
	[Address(RVA = "0x42FA920", Offset = "0x42FA920", VA = "0x42FA920")]
	private void OnSaveButtonClick()
	{
	}

	[Token(Token = "0x6004137")]
	[Address(RVA = "0x42FAA00", Offset = "0x42FAA00", VA = "0x42FAA00")]
	public AdvancedConfigurationPopup()
	{
	}
}
