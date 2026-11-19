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

[Token(Token = "0x20000A0")]
internal sealed class GisketchUIColorPickerPopover : MonoBehaviour
{
	[Token(Token = "0x4000364")]
	[FieldOffset(Offset = "0x20")]
	private string _id;

	[Token(Token = "0x4000365")]
	[FieldOffset(Offset = "0x28")]
	private bool _enableAlpha;

	[Token(Token = "0x4000366")]
	[FieldOffset(Offset = "0x30")]
	private GameObject _source;

	[Token(Token = "0x4000367")]
	[FieldOffset(Offset = "0x38")]
	private GisketchUIRoot _root;

	[Token(Token = "0x4000368")]
	[FieldOffset(Offset = "0x40")]
	private GisketchUIColorPickerValue _value;

	[Token(Token = "0x4000369")]
	[FieldOffset(Offset = "0x50")]
	private TMP_InputField _r;

	[Token(Token = "0x400036A")]
	[FieldOffset(Offset = "0x58")]
	private TMP_InputField _g;

	[Token(Token = "0x400036B")]
	[FieldOffset(Offset = "0x60")]
	private TMP_InputField _b;

	[Token(Token = "0x400036C")]
	[FieldOffset(Offset = "0x68")]
	private TMP_InputField _hex;

	[Token(Token = "0x400036D")]
	[FieldOffset(Offset = "0x70")]
	private GisketchUIColorPickerVisual _visual;

	[Token(Token = "0x400036E")]
	[FieldOffset(Offset = "0x78")]
	private bool _syncing;

	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x5275760", Offset = "0x5274760", VA = "0x5275760")]
	public void Setup(string id, GameObject source, GisketchUIRoot root)
	{
	}

	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x52777B0", Offset = "0x52767B0", VA = "0x52777B0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x52779B0", Offset = "0x52769B0", VA = "0x52779B0")]
	private void OnVisualChanged(GisketchUIColorPickerValue value)
	{
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x5277A60", Offset = "0x5276A60", VA = "0x5277A60")]
	private void OnRgbChanged(string _)
	{
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x5278030", Offset = "0x5277030", VA = "0x5278030")]
	private void OnHexChanged(string text)
	{
	}

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x52782E0", Offset = "0x52772E0", VA = "0x52782E0")]
	private void Save()
	{
	}

	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x5278410", Offset = "0x5277410", VA = "0x5278410")]
	private void Cancel()
	{
	}

	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x5277F30", Offset = "0x5276F30", VA = "0x5277F30")]
	private void SetValue(GisketchUIColorPickerValue value, bool visual)
	{
	}

	[Token(Token = "0x60004EB")]
	[Address(RVA = "0x5277550", Offset = "0x5276550", VA = "0x5277550")]
	private void SyncFields()
	{
	}

	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x5277B40", Offset = "0x5276B40", VA = "0x5277B40")]
	private bool TryRgb(out byte r, out byte g, out byte b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x52770A0", Offset = "0x52760A0", VA = "0x52770A0")]
	private void WireRgbInput(TMP_InputField input)
	{
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x5277200", Offset = "0x5276200", VA = "0x5277200")]
	private void WireHexInput(TMP_InputField input)
	{
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x5277360", Offset = "0x5276360", VA = "0x5277360")]
	private void WireButton(string id, UnityAction action)
	{
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x5278490", Offset = "0x5277490", VA = "0x5278490")]
	private static void SetText(TMP_InputField input, string value)
	{
	}

	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x52785D0", Offset = "0x52775D0", VA = "0x52785D0")]
	private static char ValidateDigit(string text, int charIndex, char addedChar)
	{
		return default(char);
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x52785E0", Offset = "0x52775E0", VA = "0x52785E0")]
	private static char ValidateHex(string text, int charIndex, char addedChar)
	{
		return default(char);
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x5278640", Offset = "0x5277640", VA = "0x5278640")]
	public GisketchUIColorPickerPopover()
	{
	}
}
