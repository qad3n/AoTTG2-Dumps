// ==================== AoTTG2 cross-reference ====================
// Type: UI.Vector3Popup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/Vector3Popup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/Vector3Popup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000591")]
internal class Vector3Popup : PromptPopup
{
	[Token(Token = "0x4001B77")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Vector3Setting _setting;

	[Token(Token = "0x4001B78")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private FloatSetting _x;

	[Token(Token = "0x4001B79")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private FloatSetting _y;

	[Token(Token = "0x4001B7A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private FloatSetting _z;

	[Token(Token = "0x4001B7B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private List<GameObject> _inputs;

	[Token(Token = "0x4001B7C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private UnityAction _onChangeVector;

	[Token(Token = "0x4001B7D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private Text _text;

	[Token(Token = "0x17000AFD")]
	protected override string Title
	{
		[Token(Token = "0x60039AD")]
		[Address(RVA = "0x42564B0", Offset = "0x42564B0", VA = "0x42564B0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000AFE")]
	protected override float Width
	{
		[Token(Token = "0x60039AE")]
		[Address(RVA = "0x42564E0", Offset = "0x42564E0", VA = "0x42564E0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AFF")]
	protected override float Height
	{
		[Token(Token = "0x60039AF")]
		[Address(RVA = "0x42564F0", Offset = "0x42564F0", VA = "0x42564F0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B00")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60039B0")]
		[Address(RVA = "0x4256500", Offset = "0x4256500", VA = "0x4256500", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B01")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x60039B1")]
		[Address(RVA = "0x4256510", Offset = "0x4256510", VA = "0x4256510", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x60039B2")]
	[Address(RVA = "0x4256520", Offset = "0x4256520", VA = "0x4256520", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60039B3")]
	[Address(RVA = "0x42566D0", Offset = "0x42566D0", VA = "0x42566D0")]
	public void Show(Vector3Setting setting, Text text, UnityAction onChangeVector)
	{
	}

	[Token(Token = "0x60039B4")]
	[Address(RVA = "0x4256800", Offset = "0x4256800", VA = "0x4256800")]
	private void CreateInputs()
	{
	}

	[Token(Token = "0x60039B5")]
	[Address(RVA = "0x4256C50", Offset = "0x4256C50", VA = "0x4256C50")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60039B6")]
	[Address(RVA = "0x4256E00", Offset = "0x4256E00", VA = "0x4256E00")]
	public Vector3Popup()
	{
	}
}
