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

[Token(Token = "0x20007AD")]
internal class Vector3Popup : PromptPopup
{
	[Token(Token = "0x40026AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Vector3Setting _setting;

	[Token(Token = "0x40026AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private FloatSetting _x;

	[Token(Token = "0x40026B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private FloatSetting _y;

	[Token(Token = "0x40026B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private FloatSetting _z;

	[Token(Token = "0x40026B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private List<GameObject> _inputs;

	[Token(Token = "0x40026B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private UnityAction _onChangeVector;

	[Token(Token = "0x40026B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private Text _text;

	[Token(Token = "0x17000CD9")]
	protected override string Title
	{
		[Token(Token = "0x6004A04")]
		[Address(RVA = "0x5BC8A20", Offset = "0x5BC7A20", VA = "0x5BC8A20", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CDA")]
	protected override float Width
	{
		[Token(Token = "0x6004A05")]
		[Address(RVA = "0x5BC8A50", Offset = "0x5BC7A50", VA = "0x5BC8A50", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CDB")]
	protected override float Height
	{
		[Token(Token = "0x6004A06")]
		[Address(RVA = "0x5BC8A60", Offset = "0x5BC7A60", VA = "0x5BC8A60", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CDC")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004A07")]
		[Address(RVA = "0x5BC8A70", Offset = "0x5BC7A70", VA = "0x5BC8A70", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CDD")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004A08")]
		[Address(RVA = "0x5BC8A80", Offset = "0x5BC7A80", VA = "0x5BC8A80", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x6004A09")]
	[Address(RVA = "0x5BC8A90", Offset = "0x5BC7A90", VA = "0x5BC8A90", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004A0A")]
	[Address(RVA = "0x5BC8C40", Offset = "0x5BC7C40", VA = "0x5BC8C40")]
	public void Show(Vector3Setting setting, Text text, UnityAction onChangeVector)
	{
	}

	[Token(Token = "0x6004A0B")]
	[Address(RVA = "0x5BC8D70", Offset = "0x5BC7D70", VA = "0x5BC8D70")]
	private void CreateInputs()
	{
	}

	[Token(Token = "0x6004A0C")]
	[Address(RVA = "0x5BC91B0", Offset = "0x5BC81B0", VA = "0x5BC91B0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004A0D")]
	[Address(RVA = "0x5BC9360", Offset = "0x5BC8360", VA = "0x5BC9360")]
	public Vector3Popup()
	{
	}
}
