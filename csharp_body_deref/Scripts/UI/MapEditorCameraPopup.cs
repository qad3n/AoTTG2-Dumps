// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorCameraPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorCameraPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorCameraPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x200081F")]
internal class MapEditorCameraPopup : PromptPopup
{
	[Token(Token = "0x40028BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private List<InputSettingElement> _inputs;

	[Token(Token = "0x40028BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private FloatSetting _positionX;

	[Token(Token = "0x40028BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private FloatSetting _positionY;

	[Token(Token = "0x40028BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private FloatSetting _positionZ;

	[Token(Token = "0x40028BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private FloatSetting _rotationX;

	[Token(Token = "0x40028C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private FloatSetting _rotationY;

	[Token(Token = "0x40028C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private FloatSetting _rotationZ;

	[Token(Token = "0x17000E6B")]
	protected override string Title
	{
		[Token(Token = "0x6004E74")]
		[Address(RVA = "0x22A9630", Offset = "0x22A7C30", VA = "0x1822A9630", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E6C")]
	protected override float Width
	{
		[Token(Token = "0x6004E75")]
		[Address(RVA = "0x22A9660", Offset = "0x22A7C60", VA = "0x1822A9660", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E6D")]
	protected override float Height
	{
		[Token(Token = "0x6004E76")]
		[Address(RVA = "0x21DC6C0", Offset = "0x21DACC0", VA = "0x1821DC6C0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E6E")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004E77")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E6F")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004E78")]
		[Address(RVA = "0x2168BC0", Offset = "0x21671C0", VA = "0x182168BC0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E70")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6004E79")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004E7A")]
	[Address(RVA = "0x22A8870", Offset = "0x22A6E70", VA = "0x1822A8870", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004E7B")]
	[Address(RVA = "0x22A8FF0", Offset = "0x22A75F0", VA = "0x1822A8FF0", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6004E7C")]
	[Address(RVA = "0x22A86A0", Offset = "0x22A6CA0", VA = "0x1822A86A0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004E7D")]
	[Address(RVA = "0x22A9480", Offset = "0x22A7A80", VA = "0x1822A9480")]
	public MapEditorCameraPopup()
	{
	}
}
