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

[Token(Token = "0x200075B")]
internal class Vector3SettingElement : BaseSettingElement
{
	[Token(Token = "0x4002475")]
	[FieldOffset(Offset = "0x38")]
	private Text _text;

	[Token(Token = "0x4002476")]
	[FieldOffset(Offset = "0x40")]
	private Vector3Popup _vector3Popup;

	[Token(Token = "0x4002477")]
	[FieldOffset(Offset = "0x48")]
	private UnityAction _onChangeVector;

	[Token(Token = "0x17000CD5")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x600479D")]
		[Address(RVA = "0x223AC00", Offset = "0x2239200", VA = "0x18223AC00", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600479E")]
	[Address(RVA = "0x223A710", Offset = "0x2238D10", VA = "0x18223A710")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, Vector3Popup vector3Popup, string tooltip, float elementWidth, float elementHeight, UnityAction onChangeVector)
	{
	}

	[Token(Token = "0x600479F")]
	[Address(RVA = "0x223A670", Offset = "0x2238C70", VA = "0x18223A670")]
	protected void OnButtonClicked()
	{
	}

	[Token(Token = "0x60047A0")]
	[Address(RVA = "0x223AB00", Offset = "0x2239100", VA = "0x18223AB00", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x60047A1")]
	[Address(RVA = "0x190EDA0", Offset = "0x190D3A0", VA = "0x18190EDA0")]
	public Vector3SettingElement()
	{
	}
}
