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

[Token(Token = "0x20006C4")]
internal class MapEditorCameraPopup : PromptPopup
{
	[Token(Token = "0x40020E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private List<InputSettingElement> _inputs;

	[Token(Token = "0x40020E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private FloatSetting _positionX;

	[Token(Token = "0x40020E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private FloatSetting _positionY;

	[Token(Token = "0x40020E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private FloatSetting _positionZ;

	[Token(Token = "0x40020E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private FloatSetting _rotationX;

	[Token(Token = "0x40020E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private FloatSetting _rotationY;

	[Token(Token = "0x40020EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private FloatSetting _rotationZ;

	[Token(Token = "0x17000D25")]
	protected override string Title
	{
		[Token(Token = "0x6004379")]
		[Address(RVA = "0x43230B0", Offset = "0x43230B0", VA = "0x43230B0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D26")]
	protected override float Width
	{
		[Token(Token = "0x600437A")]
		[Address(RVA = "0x43230E0", Offset = "0x43230E0", VA = "0x43230E0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D27")]
	protected override float Height
	{
		[Token(Token = "0x600437B")]
		[Address(RVA = "0x43230F0", Offset = "0x43230F0", VA = "0x43230F0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D28")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600437C")]
		[Address(RVA = "0x4323100", Offset = "0x4323100", VA = "0x4323100", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D29")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600437D")]
		[Address(RVA = "0x4323110", Offset = "0x4323110", VA = "0x4323110", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D2A")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x600437E")]
		[Address(RVA = "0x4323120", Offset = "0x4323120", VA = "0x4323120", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600437F")]
	[Address(RVA = "0x4323130", Offset = "0x4323130", VA = "0x4323130", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004380")]
	[Address(RVA = "0x4323800", Offset = "0x4323800", VA = "0x4323800", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6004381")]
	[Address(RVA = "0x4323B40", Offset = "0x4323B40", VA = "0x4323B40")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004382")]
	[Address(RVA = "0x4323CD0", Offset = "0x4323CD0", VA = "0x4323CD0")]
	public MapEditorCameraPopup()
	{
	}
}
