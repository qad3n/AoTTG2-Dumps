using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005C0")]
internal class Vector3SettingElement : BaseSettingElement
{
	[Token(Token = "0x4001BCD")]
	[FieldOffset(Offset = "0x38")]
	private Text _text;

	[Token(Token = "0x4001BCE")]
	[FieldOffset(Offset = "0x40")]
	private Vector3Popup _vector3Popup;

	[Token(Token = "0x4001BCF")]
	[FieldOffset(Offset = "0x48")]
	private UnityAction _onChangeVector;

	[Token(Token = "0x17000B26")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6003AD4")]
		[Address(RVA = "0x3F8C1B0", Offset = "0x3F8C1B0", VA = "0x3F8C1B0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003AD5")]
	[Address(RVA = "0x3F8C230", Offset = "0x3F8C230", VA = "0x3F8C230")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, Vector3Popup vector3Popup, string tooltip, float elementWidth, float elementHeight, UnityAction onChangeVector)
	{
	}

	[Token(Token = "0x6003AD6")]
	[Address(RVA = "0x3F8C650", Offset = "0x3F8C650", VA = "0x3F8C650")]
	protected void OnButtonClicked()
	{
	}

	[Token(Token = "0x6003AD7")]
	[Address(RVA = "0x3F8C6D0", Offset = "0x3F8C6D0", VA = "0x3F8C6D0", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6003AD8")]
	[Address(RVA = "0x3F8C7C0", Offset = "0x3F8C7C0", VA = "0x3F8C7C0")]
	public Vector3SettingElement()
	{
	}
}
