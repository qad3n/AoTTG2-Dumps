using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x2000678")]
internal class MapEditorCameraPopup : PromptPopup
{
	[Token(Token = "0x4001F8F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private List<InputSettingElement> _inputs;

	[Token(Token = "0x4001F90")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private FloatSetting _positionX;

	[Token(Token = "0x4001F91")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private FloatSetting _positionY;

	[Token(Token = "0x4001F92")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private FloatSetting _positionZ;

	[Token(Token = "0x4001F93")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private FloatSetting _rotationX;

	[Token(Token = "0x4001F94")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private FloatSetting _rotationY;

	[Token(Token = "0x4001F95")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private FloatSetting _rotationZ;

	[Token(Token = "0x17000CAB")]
	protected override string Title
	{
		[Token(Token = "0x600411B")]
		[Address(RVA = "0x400EBE0", Offset = "0x400EBE0", VA = "0x400EBE0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CAC")]
	protected override float Width
	{
		[Token(Token = "0x600411C")]
		[Address(RVA = "0x400EC10", Offset = "0x400EC10", VA = "0x400EC10", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CAD")]
	protected override float Height
	{
		[Token(Token = "0x600411D")]
		[Address(RVA = "0x400EC20", Offset = "0x400EC20", VA = "0x400EC20", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CAE")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600411E")]
		[Address(RVA = "0x400EC30", Offset = "0x400EC30", VA = "0x400EC30", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CAF")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600411F")]
		[Address(RVA = "0x400EC40", Offset = "0x400EC40", VA = "0x400EC40", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CB0")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6004120")]
		[Address(RVA = "0x400EC50", Offset = "0x400EC50", VA = "0x400EC50", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004121")]
	[Address(RVA = "0x400EC60", Offset = "0x400EC60", VA = "0x400EC60", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004122")]
	[Address(RVA = "0x400F330", Offset = "0x400F330", VA = "0x400F330", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6004123")]
	[Address(RVA = "0x400F670", Offset = "0x400F670", VA = "0x400F670")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004124")]
	[Address(RVA = "0x400F800", Offset = "0x400F800", VA = "0x400F800")]
	public MapEditorCameraPopup()
	{
	}
}
