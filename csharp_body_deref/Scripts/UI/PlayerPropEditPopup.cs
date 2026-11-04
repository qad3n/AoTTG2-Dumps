// ==================== AoTTG2 cross-reference ====================
// Type: UI.PlayerPropEditPopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/PlayerPropEditPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using TMPro;

namespace UI;

[Token(Token = "0x20007AA")]
internal class PlayerPropEditPopup : AottgScoreboardPopup
{
	[Token(Token = "0x40026C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private Action<string> _onSave;

	[Token(Token = "0x40026C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private Action<string, string> _onAdd;

	[Token(Token = "0x40026C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private int _targetActorNumber;

	[Token(Token = "0x40026C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private TMP_InputField _keyInput;

	[Token(Token = "0x40026C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private TMP_InputField _valueInput;

	[Token(Token = "0x40026C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private TMP_Text _statusLabel;

	[Token(Token = "0x17000D6A")]
	protected override string DialogId
	{
		[Token(Token = "0x6004A95")]
		[Address(RVA = "0x2260DD0", Offset = "0x225F3D0", VA = "0x182260DD0", Slot = "62")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004A96")]
	[Address(RVA = "0x2260960", Offset = "0x225EF60", VA = "0x182260960", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004A97")]
	[Address(RVA = "0x2260C20", Offset = "0x225F220", VA = "0x182260C20")]
	public void ShowEdit(int targetActorNumber, string key, string currentValue, Action<string> onSave)
	{
	}

	[Token(Token = "0x6004A98")]
	[Address(RVA = "0x2260AC0", Offset = "0x225F0C0", VA = "0x182260AC0")]
	public void ShowAdd(int targetActorNumber, Action<string, string> onAdd)
	{
	}

	[Token(Token = "0x6004A99")]
	[Address(RVA = "0x2260CA0", Offset = "0x225F2A0", VA = "0x182260CA0")]
	private void ShowForm(int targetActorNumber, string key, string value, bool addMode)
	{
	}

	[Token(Token = "0x6004A9A")]
	[Address(RVA = "0x2260750", Offset = "0x225ED50", VA = "0x182260750")]
	internal void Save()
	{
	}

	[Token(Token = "0x6004A9B")]
	[Address(RVA = "0x225DAF0", Offset = "0x225C0F0", VA = "0x18225DAF0")]
	public PlayerPropEditPopup()
	{
	}
}
