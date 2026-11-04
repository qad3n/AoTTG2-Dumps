// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorVersionConversionPopup
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MapEditorVersionConversionPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Map;
using UnityEngine;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x200085D")]
internal class MapEditorVersionConversionPopup : ConfirmPopup
{
	[Token(Token = "0x17000EC0")]
	protected override float Width
	{
		[Token(Token = "0x60050CA")]
		[Address(RVA = "0x2278770", Offset = "0x2276D70", VA = "0x182278770", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EC1")]
	protected override float Height
	{
		[Token(Token = "0x60050CB")]
		[Address(RVA = "0x21C0BD0", Offset = "0x21BF1D0", VA = "0x1821C0BD0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EC2")]
	protected override float LabelHeight
	{
		[Token(Token = "0x60050CC")]
		[Address(RVA = "0x21D9B60", Offset = "0x21D8160", VA = "0x1821D9B60", Slot = "62")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EC3")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60050CD")]
		[Address(RVA = "0x229AC60", Offset = "0x2299260", VA = "0x18229AC60", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000EC4")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x60050CE")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x60050CF")]
	[Address(RVA = "0x22DBEA0", Offset = "0x22DA4A0", VA = "0x1822DBEA0")]
	public void Show(MapVersionConversionResult result, UnityAction onConfirm)
	{
	}

	[Token(Token = "0x60050D0")]
	[Address(RVA = "0x1DD9CD0", Offset = "0x1DD82D0", VA = "0x181DD9CD0")]
	public MapEditorVersionConversionPopup()
	{
	}
}
