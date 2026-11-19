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

[Token(Token = "0x200089D")]
internal class MapEditorCameraPopup : PromptPopup
{
	[Token(Token = "0x4002B74")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private List<InputSettingElement> _inputs;

	[Token(Token = "0x4002B75")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private FloatSetting _positionX;

	[Token(Token = "0x4002B76")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private FloatSetting _positionY;

	[Token(Token = "0x4002B77")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private FloatSetting _positionZ;

	[Token(Token = "0x4002B78")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private FloatSetting _rotationX;

	[Token(Token = "0x4002B79")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private FloatSetting _rotationY;

	[Token(Token = "0x4002B7A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private FloatSetting _rotationZ;

	[Token(Token = "0x17000E6C")]
	protected override string Title
	{
		[Token(Token = "0x6005210")]
		[Address(RVA = "0x5C6BE50", Offset = "0x5C6AE50", VA = "0x5C6BE50", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E6D")]
	protected override float Width
	{
		[Token(Token = "0x6005211")]
		[Address(RVA = "0x5C6BEF0", Offset = "0x5C6AEF0", VA = "0x5C6BEF0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E6E")]
	protected override float Height
	{
		[Token(Token = "0x6005212")]
		[Address(RVA = "0x5C6BF00", Offset = "0x5C6AF00", VA = "0x5C6BF00", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E6F")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6005213")]
		[Address(RVA = "0x5C6BF10", Offset = "0x5C6AF10", VA = "0x5C6BF10", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E70")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6005214")]
		[Address(RVA = "0x5C6BF20", Offset = "0x5C6AF20", VA = "0x5C6BF20", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E71")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6005215")]
		[Address(RVA = "0x5C6BF30", Offset = "0x5C6AF30", VA = "0x5C6BF30", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6005216")]
	[Address(RVA = "0x5C6BF40", Offset = "0x5C6AF40", VA = "0x5C6BF40", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6005217")]
	[Address(RVA = "0x5C6C770", Offset = "0x5C6B770", VA = "0x5C6C770", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6005218")]
	[Address(RVA = "0x5C6CAC0", Offset = "0x5C6BAC0", VA = "0x5C6CAC0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6005219")]
	[Address(RVA = "0x5C6CC70", Offset = "0x5C6BC70", VA = "0x5C6CC70")]
	public MapEditorCameraPopup()
	{
	}
}
