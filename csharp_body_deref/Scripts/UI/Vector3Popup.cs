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

[Token(Token = "0x2000703")]
internal class Vector3Popup : PromptPopup
{
	[Token(Token = "0x4002331")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Vector3Setting _setting;

	[Token(Token = "0x4002332")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private FloatSetting _x;

	[Token(Token = "0x4002333")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private FloatSetting _y;

	[Token(Token = "0x4002334")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private FloatSetting _z;

	[Token(Token = "0x4002335")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private List<GameObject> _inputs;

	[Token(Token = "0x4002336")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private UnityAction _onChangeVector;

	[Token(Token = "0x4002337")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private Text _text;

	[Token(Token = "0x17000C55")]
	protected override string Title
	{
		[Token(Token = "0x60044DD")]
		[Address(RVA = "0x21E9100", Offset = "0x21E7700", VA = "0x1821E9100", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C56")]
	protected override float Width
	{
		[Token(Token = "0x60044DE")]
		[Address(RVA = "0x2182BD0", Offset = "0x21811D0", VA = "0x182182BD0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C57")]
	protected override float Height
	{
		[Token(Token = "0x60044DF")]
		[Address(RVA = "0x21D2010", Offset = "0x21D0610", VA = "0x1821D2010", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C58")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60044E0")]
		[Address(RVA = "0x2168BC0", Offset = "0x21671C0", VA = "0x182168BC0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C59")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x60044E1")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x60044E2")]
	[Address(RVA = "0x21E8C20", Offset = "0x21E7220", VA = "0x1821E8C20", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60044E3")]
	[Address(RVA = "0x21E8DE0", Offset = "0x21E73E0", VA = "0x1821E8DE0")]
	public void Show(Vector3Setting setting, Text text, UnityAction onChangeVector)
	{
	}

	[Token(Token = "0x60044E4")]
	[Address(RVA = "0x21E85D0", Offset = "0x21E6BD0", VA = "0x1821E85D0")]
	private void CreateInputs()
	{
	}

	[Token(Token = "0x60044E5")]
	[Address(RVA = "0x21E8A50", Offset = "0x21E7050", VA = "0x1821E8A50")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60044E6")]
	[Address(RVA = "0x21E8F90", Offset = "0x21E7590", VA = "0x1821E8F90")]
	public Vector3Popup()
	{
	}
}
