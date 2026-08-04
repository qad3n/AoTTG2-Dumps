// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/GisketchUIColorPickerPopover.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.Events;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000082")]
internal sealed class GisketchUIColorPickerPopover : MonoBehaviour
{
	[Token(Token = "0x40002AD")]
	[FieldOffset(Offset = "0x20")]
	private string _id;

	[Token(Token = "0x40002AE")]
	[FieldOffset(Offset = "0x28")]
	private bool _enableAlpha;

	[Token(Token = "0x40002AF")]
	[FieldOffset(Offset = "0x30")]
	private GameObject _source;

	[Token(Token = "0x40002B0")]
	[FieldOffset(Offset = "0x38")]
	private GisketchUIRoot _root;

	[Token(Token = "0x40002B1")]
	[FieldOffset(Offset = "0x40")]
	private GisketchUIColorPickerValue _value;

	[Token(Token = "0x40002B2")]
	[FieldOffset(Offset = "0x50")]
	private TMP_InputField _r;

	[Token(Token = "0x40002B3")]
	[FieldOffset(Offset = "0x58")]
	private TMP_InputField _g;

	[Token(Token = "0x40002B4")]
	[FieldOffset(Offset = "0x60")]
	private TMP_InputField _b;

	[Token(Token = "0x40002B5")]
	[FieldOffset(Offset = "0x68")]
	private TMP_InputField _hex;

	[Token(Token = "0x40002B6")]
	[FieldOffset(Offset = "0x70")]
	private GisketchUIColorPickerVisual _visual;

	[Token(Token = "0x40002B7")]
	[FieldOffset(Offset = "0x78")]
	private bool _syncing;

	[Token(Token = "0x6000384")]
	[Address(RVA = "0x3A6D720", Offset = "0x3A6D720", VA = "0x3A6D720")]
	public void Setup(string id, GameObject source, GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000385")]
	[Address(RVA = "0x3A6F7B0", Offset = "0x3A6F7B0", VA = "0x3A6F7B0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000386")]
	[Address(RVA = "0x3A6F9B0", Offset = "0x3A6F9B0", VA = "0x3A6F9B0")]
	private void OnVisualChanged(GisketchUIColorPickerValue value)
	{
	}

	[Token(Token = "0x6000387")]
	[Address(RVA = "0x3A6FA60", Offset = "0x3A6FA60", VA = "0x3A6FA60")]
	private void OnRgbChanged(string _)
	{
	}

	[Token(Token = "0x6000388")]
	[Address(RVA = "0x3A70030", Offset = "0x3A70030", VA = "0x3A70030")]
	private void OnHexChanged(string text)
	{
	}

	[Token(Token = "0x6000389")]
	[Address(RVA = "0x3A702F0", Offset = "0x3A702F0", VA = "0x3A702F0")]
	private void Save()
	{
	}

	[Token(Token = "0x600038A")]
	[Address(RVA = "0x3A70420", Offset = "0x3A70420", VA = "0x3A70420")]
	private void Cancel()
	{
	}

	[Token(Token = "0x600038B")]
	[Address(RVA = "0x3A6FF30", Offset = "0x3A6FF30", VA = "0x3A6FF30")]
	private void SetValue(GisketchUIColorPickerValue value, bool visual)
	{
	}

	[Token(Token = "0x600038C")]
	[Address(RVA = "0x3A6F550", Offset = "0x3A6F550", VA = "0x3A6F550")]
	private void SyncFields()
	{
	}

	[Token(Token = "0x600038D")]
	[Address(RVA = "0x3A6FB40", Offset = "0x3A6FB40", VA = "0x3A6FB40")]
	private bool TryRgb(out byte r, out byte g, out byte b)
	{
		return default(bool);
	}

	[Token(Token = "0x600038E")]
	[Address(RVA = "0x3A6F0A0", Offset = "0x3A6F0A0", VA = "0x3A6F0A0")]
	private void WireRgbInput(TMP_InputField input)
	{
	}

	[Token(Token = "0x600038F")]
	[Address(RVA = "0x3A6F200", Offset = "0x3A6F200", VA = "0x3A6F200")]
	private void WireHexInput(TMP_InputField input)
	{
	}

	[Token(Token = "0x6000390")]
	[Address(RVA = "0x3A6F360", Offset = "0x3A6F360", VA = "0x3A6F360")]
	private void WireButton(string id, UnityAction action)
	{
	}

	[Token(Token = "0x6000391")]
	[Address(RVA = "0x3A704A0", Offset = "0x3A704A0", VA = "0x3A704A0")]
	private static void SetText(TMP_InputField input, string value)
	{
	}

	[Token(Token = "0x6000392")]
	[Address(RVA = "0x3A705E0", Offset = "0x3A705E0", VA = "0x3A705E0")]
	private static char ValidateDigit(string text, int charIndex, char addedChar)
	{
		return default(char);
	}

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x3A70600", Offset = "0x3A70600", VA = "0x3A70600")]
	private static char ValidateHex(string text, int charIndex, char addedChar)
	{
		return default(char);
	}

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x3A70660", Offset = "0x3A70660", VA = "0x3A70660")]
	public GisketchUIColorPickerPopover()
	{
	}
}
