using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000624")]
internal class WheelPopup : BasePopup
{
	[Token(Token = "0x4001E4D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _centerText;

	[Token(Token = "0x4001E4E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private List<GameObject> _buttons;

	[Token(Token = "0x4001E4F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public int SelectedItem;

	[Token(Token = "0x4001E50")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private UnityAction _callback;

	[Token(Token = "0x17000BDA")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6003E4F")]
		[Address(RVA = "0x3FDB590", Offset = "0x3FDB590", VA = "0x3FDB590", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BDB")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6003E50")]
		[Address(RVA = "0x3FDB5A0", Offset = "0x3FDB5A0", VA = "0x3FDB5A0", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x6003E51")]
	[Address(RVA = "0x3FDB5B0", Offset = "0x3FDB5B0", VA = "0x3FDB5B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003E52")]
	[Address(RVA = "0x3FDBA40", Offset = "0x3FDBA40", VA = "0x3FDBA40")]
	public void Show(string openKey, List<string> options, UnityAction callback)
	{
	}

	[Token(Token = "0x6003E53")]
	[Address(RVA = "0x3FDBDA0", Offset = "0x3FDBDA0", VA = "0x3FDBDA0")]
	private void SetCenterText(string openKey)
	{
	}

	[Token(Token = "0x6003E54")]
	[Address(RVA = "0x3FDBF40", Offset = "0x3FDBF40", VA = "0x3FDBF40")]
	private void OnButtonClick(int index)
	{
	}

	[Token(Token = "0x6003E55")]
	[Address(RVA = "0x3FDBF70", Offset = "0x3FDBF70", VA = "0x3FDBF70")]
	private void Update()
	{
	}

	[Token(Token = "0x6003E56")]
	[Address(RVA = "0x3FDC0D0", Offset = "0x3FDC0D0", VA = "0x3FDC0D0")]
	public WheelPopup()
	{
	}
}
