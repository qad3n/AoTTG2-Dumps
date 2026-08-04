// ==================== AoTTG2 cross-reference ====================
// Type: UI.Vector3SettingElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/Vector3SettingElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/Vector3SettingElement.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000605")]
internal class Vector3SettingElement : BaseSettingElement
{
	[Token(Token = "0x4001CE0")]
	[FieldOffset(Offset = "0x38")]
	private Text _text;

	[Token(Token = "0x4001CE1")]
	[FieldOffset(Offset = "0x40")]
	private Vector3Popup _vector3Popup;

	[Token(Token = "0x4001CE2")]
	[FieldOffset(Offset = "0x48")]
	private UnityAction _onChangeVector;

	[Token(Token = "0x17000B90")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6003CE4")]
		[Address(RVA = "0x429A120", Offset = "0x429A120", VA = "0x429A120", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003CE5")]
	[Address(RVA = "0x429A1A0", Offset = "0x429A1A0", VA = "0x429A1A0")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, Vector3Popup vector3Popup, string tooltip, float elementWidth, float elementHeight, UnityAction onChangeVector)
	{
	}

	[Token(Token = "0x6003CE6")]
	[Address(RVA = "0x429A5C0", Offset = "0x429A5C0", VA = "0x429A5C0")]
	protected void OnButtonClicked()
	{
	}

	[Token(Token = "0x6003CE7")]
	[Address(RVA = "0x429A640", Offset = "0x429A640", VA = "0x429A640", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6003CE8")]
	[Address(RVA = "0x429A730", Offset = "0x429A730", VA = "0x429A730")]
	public Vector3SettingElement()
	{
	}
}
