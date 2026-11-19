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

[Token(Token = "0x2000803")]
internal class Vector3SettingElement : BaseSettingElement
{
	[Token(Token = "0x40027E6")]
	[FieldOffset(Offset = "0x38")]
	private Text _text;

	[Token(Token = "0x40027E7")]
	[FieldOffset(Offset = "0x40")]
	private Vector3Popup _vector3Popup;

	[Token(Token = "0x40027E8")]
	[FieldOffset(Offset = "0x48")]
	private UnityAction _onChangeVector;

	[Token(Token = "0x17000D58")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004CBF")]
		[Address(RVA = "0x5BF97E0", Offset = "0x5BF87E0", VA = "0x5BF97E0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004CC0")]
	[Address(RVA = "0x5BF9860", Offset = "0x5BF8860", VA = "0x5BF9860")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, Vector3Popup vector3Popup, string tooltip, float elementWidth, float elementHeight, UnityAction onChangeVector)
	{
	}

	[Token(Token = "0x6004CC1")]
	[Address(RVA = "0x5BF9C20", Offset = "0x5BF8C20", VA = "0x5BF9C20")]
	protected void OnButtonClicked()
	{
	}

	[Token(Token = "0x6004CC2")]
	[Address(RVA = "0x5BF9CA0", Offset = "0x5BF8CA0", VA = "0x5BF9CA0", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6004CC3")]
	[Address(RVA = "0x5BF9D90", Offset = "0x5BF8D90", VA = "0x5BF9D90")]
	public Vector3SettingElement()
	{
	}
}
