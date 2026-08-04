// ==================== AoTTG2 cross-reference ====================
// Type: UI.WheelPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/WheelPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/WheelPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200066F")]
internal class WheelPopup : BasePopup
{
	[Token(Token = "0x4001F94")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _centerText;

	[Token(Token = "0x4001F95")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private List<GameObject> _buttons;

	[Token(Token = "0x4001F96")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public int SelectedItem;

	[Token(Token = "0x4001F97")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private UnityAction _callback;

	[Token(Token = "0x17000C52")]
	protected override float AnimationTime
	{
		[Token(Token = "0x600409C")]
		[Address(RVA = "0x42EDFB0", Offset = "0x42EDFB0", VA = "0x42EDFB0", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C53")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x600409D")]
		[Address(RVA = "0x42EDFC0", Offset = "0x42EDFC0", VA = "0x42EDFC0", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x600409E")]
	[Address(RVA = "0x42EDFD0", Offset = "0x42EDFD0", VA = "0x42EDFD0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600409F")]
	[Address(RVA = "0x42EE460", Offset = "0x42EE460", VA = "0x42EE460")]
	public void Show(string openKey, List<string> options, UnityAction callback)
	{
	}

	[Token(Token = "0x60040A0")]
	[Address(RVA = "0x42EE7C0", Offset = "0x42EE7C0", VA = "0x42EE7C0")]
	private void SetCenterText(string openKey)
	{
	}

	[Token(Token = "0x60040A1")]
	[Address(RVA = "0x42EE960", Offset = "0x42EE960", VA = "0x42EE960")]
	private void OnButtonClick(int index)
	{
	}

	[Token(Token = "0x60040A2")]
	[Address(RVA = "0x42EE990", Offset = "0x42EE990", VA = "0x42EE990")]
	private void Update()
	{
	}

	[Token(Token = "0x60040A3")]
	[Address(RVA = "0x42EEAF0", Offset = "0x42EEAF0", VA = "0x42EEAF0")]
	public WheelPopup()
	{
	}
}
