using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200054C")]
internal class Vector3Popup : PromptPopup
{
	[Token(Token = "0x4001A64")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Vector3Setting _setting;

	[Token(Token = "0x4001A65")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private FloatSetting _x;

	[Token(Token = "0x4001A66")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private FloatSetting _y;

	[Token(Token = "0x4001A67")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private FloatSetting _z;

	[Token(Token = "0x4001A68")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private List<GameObject> _inputs;

	[Token(Token = "0x4001A69")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private UnityAction _onChangeVector;

	[Token(Token = "0x4001A6A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private Text _text;

	[Token(Token = "0x17000A93")]
	protected override string Title
	{
		[Token(Token = "0x600379E")]
		[Address(RVA = "0x3F2CCD0", Offset = "0x3F2CCD0", VA = "0x3F2CCD0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A94")]
	protected override float Width
	{
		[Token(Token = "0x600379F")]
		[Address(RVA = "0x3F2CD00", Offset = "0x3F2CD00", VA = "0x3F2CD00", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A95")]
	protected override float Height
	{
		[Token(Token = "0x60037A0")]
		[Address(RVA = "0x3F2CD10", Offset = "0x3F2CD10", VA = "0x3F2CD10", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A96")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60037A1")]
		[Address(RVA = "0x3F2CD20", Offset = "0x3F2CD20", VA = "0x3F2CD20", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A97")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x60037A2")]
		[Address(RVA = "0x3F2CD30", Offset = "0x3F2CD30", VA = "0x3F2CD30", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x60037A3")]
	[Address(RVA = "0x3F2CD40", Offset = "0x3F2CD40", VA = "0x3F2CD40", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60037A4")]
	[Address(RVA = "0x3F2CEF0", Offset = "0x3F2CEF0", VA = "0x3F2CEF0")]
	public void Show(Vector3Setting setting, Text text, UnityAction onChangeVector)
	{
	}

	[Token(Token = "0x60037A5")]
	[Address(RVA = "0x3F2D020", Offset = "0x3F2D020", VA = "0x3F2D020")]
	private void CreateInputs()
	{
	}

	[Token(Token = "0x60037A6")]
	[Address(RVA = "0x3F2D470", Offset = "0x3F2D470", VA = "0x3F2D470")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60037A7")]
	[Address(RVA = "0x3F2D620", Offset = "0x3F2D620", VA = "0x3F2D620")]
	public Vector3Popup()
	{
	}
}
