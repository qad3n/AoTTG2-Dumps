// ==================== AoTTG2 cross-reference ====================
// Type: UI.PlayerPropEditPopup
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000855")]
internal class PlayerPropEditPopup : AottgScoreboardPopup
{
	[Token(Token = "0x4002A3D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private Action<string> _onSave;

	[Token(Token = "0x4002A3E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private Action<string, string> _onAdd;

	[Token(Token = "0x4002A3F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private int _targetActorNumber;

	[Token(Token = "0x4002A40")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private TMP_InputField _keyInput;

	[Token(Token = "0x4002A41")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private TMP_InputField _valueInput;

	[Token(Token = "0x4002A42")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private TMP_Text _statusLabel;

	[Token(Token = "0x17000DDB")]
	protected override string DialogId
	{
		[Token(Token = "0x6004FAC")]
		[Address(RVA = "0x5C3BA30", Offset = "0x5C3AA30", VA = "0x5C3BA30", Slot = "62")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004FAD")]
	[Address(RVA = "0x5C3BA60", Offset = "0x5C3AA60", VA = "0x5C3BA60", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004FAE")]
	[Address(RVA = "0x5C3BBC0", Offset = "0x5C3ABC0", VA = "0x5C3BBC0")]
	public void ShowEdit(int targetActorNumber, string key, string currentValue, Action<string> onSave)
	{
	}

	[Token(Token = "0x6004FAF")]
	[Address(RVA = "0x5C3BE00", Offset = "0x5C3AE00", VA = "0x5C3BE00")]
	public void ShowAdd(int targetActorNumber, Action<string, string> onAdd)
	{
	}

	[Token(Token = "0x6004FB0")]
	[Address(RVA = "0x5C3BC20", Offset = "0x5C3AC20", VA = "0x5C3BC20")]
	private void ShowForm(int targetActorNumber, string key, string value, bool addMode)
	{
	}

	[Token(Token = "0x6004FB1")]
	[Address(RVA = "0x5C3BE70", Offset = "0x5C3AE70", VA = "0x5C3BE70")]
	internal void Save()
	{
	}

	[Token(Token = "0x6004FB2")]
	[Address(RVA = "0x5C3C120", Offset = "0x5C3B120", VA = "0x5C3C120")]
	public PlayerPropEditPopup()
	{
	}
}
