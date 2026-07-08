using System.Runtime.InteropServices;
using GameManagers;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200067B")]
internal class MapEditorCustomLogicPopup : PromptPopup
{
	[Token(Token = "0x4001F9E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private StringSetting _logic;

	[Token(Token = "0x4001F9F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private GameObject _logicInput;

	[Token(Token = "0x4001FA0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x4001FA1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Text _error;

	[Token(Token = "0x17000CB7")]
	protected override string Title
	{
		[Token(Token = "0x600413C")]
		[Address(RVA = "0x40116B0", Offset = "0x40116B0", VA = "0x40116B0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CB8")]
	protected override float Width
	{
		[Token(Token = "0x600413D")]
		[Address(RVA = "0x40116E0", Offset = "0x40116E0", VA = "0x40116E0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CB9")]
	protected override float Height
	{
		[Token(Token = "0x600413E")]
		[Address(RVA = "0x40116F0", Offset = "0x40116F0", VA = "0x40116F0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CBA")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600413F")]
		[Address(RVA = "0x4011700", Offset = "0x4011700", VA = "0x4011700", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CBB")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004140")]
		[Address(RVA = "0x4011710", Offset = "0x4011710", VA = "0x4011710", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004141")]
	[Address(RVA = "0x4011720", Offset = "0x4011720", VA = "0x4011720", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004142")]
	[Address(RVA = "0x4011970", Offset = "0x4011970", VA = "0x4011970", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6004143")]
	[Address(RVA = "0x4011C10", Offset = "0x4011C10", VA = "0x4011C10")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004144")]
	[Address(RVA = "0x4011FF0", Offset = "0x4011FF0", VA = "0x4011FF0")]
	public MapEditorCustomLogicPopup()
	{
	}
}
