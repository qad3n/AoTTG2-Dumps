// ==================== AoTTG2 cross-reference ====================
// Type: UI.PlayerPropEditPopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/PlayerPropEditPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200064C")]
internal class PlayerPropEditPopup : PromptPopup
{
	[Token(Token = "0x4001EF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private readonly StringSetting _keySetting;

	[Token(Token = "0x4001EF4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private readonly StringSetting _valueSetting;

	[Token(Token = "0x4001EF5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Action<string> _onSave;

	[Token(Token = "0x4001EF6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Action<string, string> _onAdd;

	[Token(Token = "0x4001EF7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private bool _addMode;

	[Token(Token = "0x4001EF8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xCC")]
	private int _targetActorNumber;

	[Token(Token = "0x4001EF9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private InputField _keyInputField;

	[Token(Token = "0x4001EFA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private Text _statusLabel;

	[Token(Token = "0x17000C14")]
	protected override string Title
	{
		[Token(Token = "0x6003F8F")]
		[Address(RVA = "0x42D9400", Offset = "0x42D9400", VA = "0x42D9400", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C15")]
	protected override float Width
	{
		[Token(Token = "0x6003F90")]
		[Address(RVA = "0x42D9450", Offset = "0x42D9450", VA = "0x42D9450", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C16")]
	protected override float Height
	{
		[Token(Token = "0x6003F91")]
		[Address(RVA = "0x42D9460", Offset = "0x42D9460", VA = "0x42D9460", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C17")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003F92")]
		[Address(RVA = "0x42D9470", Offset = "0x42D9470", VA = "0x42D9470", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C18")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003F93")]
		[Address(RVA = "0x42D9480", Offset = "0x42D9480", VA = "0x42D9480", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C19")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6003F94")]
		[Address(RVA = "0x42D9490", Offset = "0x42D9490", VA = "0x42D9490", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x6003F95")]
	[Address(RVA = "0x42D94A0", Offset = "0x42D94A0", VA = "0x42D94A0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003F96")]
	[Address(RVA = "0x42D9840", Offset = "0x42D9840", VA = "0x42D9840")]
	public void ShowEdit(int targetActorNumber, string key, string currentValue, Action<string> onSave)
	{
	}

	[Token(Token = "0x6003F97")]
	[Address(RVA = "0x42D99D0", Offset = "0x42D99D0", VA = "0x42D99D0")]
	public void ShowAdd(int targetActorNumber, Action<string, string> onAdd)
	{
	}

	[Token(Token = "0x6003F98")]
	[Address(RVA = "0x42D9B50", Offset = "0x42D9B50", VA = "0x42D9B50")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003F99")]
	[Address(RVA = "0x42D9DC0", Offset = "0x42D9DC0", VA = "0x42D9DC0")]
	public PlayerPropEditPopup()
	{
	}
}
