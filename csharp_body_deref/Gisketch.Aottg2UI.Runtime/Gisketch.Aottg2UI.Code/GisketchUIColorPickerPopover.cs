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

[Token(Token = "0x200009A")]
internal sealed class GisketchUIColorPickerPopover : MonoBehaviour
{
	[Token(Token = "0x400033D")]
	[FieldOffset(Offset = "0x20")]
	private string _id;

	[Token(Token = "0x400033E")]
	[FieldOffset(Offset = "0x28")]
	private bool _enableAlpha;

	[Token(Token = "0x400033F")]
	[FieldOffset(Offset = "0x30")]
	private GameObject _source;

	[Token(Token = "0x4000340")]
	[FieldOffset(Offset = "0x38")]
	private GisketchUIRoot _root;

	[Token(Token = "0x4000341")]
	[FieldOffset(Offset = "0x40")]
	private GisketchUIColorPickerValue _value;

	[Token(Token = "0x4000342")]
	[FieldOffset(Offset = "0x50")]
	private TMP_InputField _r;

	[Token(Token = "0x4000343")]
	[FieldOffset(Offset = "0x58")]
	private TMP_InputField _g;

	[Token(Token = "0x4000344")]
	[FieldOffset(Offset = "0x60")]
	private TMP_InputField _b;

	[Token(Token = "0x4000345")]
	[FieldOffset(Offset = "0x68")]
	private TMP_InputField _hex;

	[Token(Token = "0x4000346")]
	[FieldOffset(Offset = "0x70")]
	private GisketchUIColorPickerVisual _visual;

	[Token(Token = "0x4000347")]
	[FieldOffset(Offset = "0x78")]
	private bool _syncing;

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x18EF1D0", Offset = "0x18ED7D0", VA = "0x1818EF1D0")]
	public void Setup(string id, GameObject source, GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x18EEB10", Offset = "0x18ED110", VA = "0x1818EEB10")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x18EEE70", Offset = "0x18ED470", VA = "0x1818EEE70")]
	private void OnVisualChanged(GisketchUIColorPickerValue value)
	{
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x18EED70", Offset = "0x18ED370", VA = "0x1818EED70")]
	private void OnRgbChanged(string _)
	{
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x18EEC70", Offset = "0x18ED270", VA = "0x1818EEC70")]
	private void OnHexChanged(string text)
	{
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x18EEF10", Offset = "0x18ED510", VA = "0x1818EEF10")]
	private void Save()
	{
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x18EEA80", Offset = "0x18ED080", VA = "0x1818EEA80")]
	private void Cancel()
	{
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x18EF0D0", Offset = "0x18ED6D0", VA = "0x1818EF0D0")]
	private void SetValue(GisketchUIColorPickerValue value, bool visual)
	{
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x18EF840", Offset = "0x18EDE40", VA = "0x1818EF840")]
	private void SyncFields()
	{
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x18EFBA0", Offset = "0x18EE1A0", VA = "0x1818EFBA0")]
	private bool TryRgb(out byte r, out byte g, out byte b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x18F01B0", Offset = "0x18EE7B0", VA = "0x1818F01B0")]
	private void WireRgbInput(TMP_InputField input)
	{
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x18F0040", Offset = "0x18EE640", VA = "0x1818F0040")]
	private void WireHexInput(TMP_InputField input)
	{
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x18EFF60", Offset = "0x18EE560", VA = "0x1818EFF60")]
	private void WireButton(string id, UnityAction action)
	{
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x18EF040", Offset = "0x18ED640", VA = "0x1818EF040")]
	private static void SetText(TMP_InputField input, string value)
	{
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x18EFEC0", Offset = "0x18EE4C0", VA = "0x1818EFEC0")]
	private static char ValidateDigit(string text, int charIndex, char addedChar)
	{
		return default(char);
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x18EFED0", Offset = "0x18EE4D0", VA = "0x1818EFED0")]
	private static char ValidateHex(string text, int charIndex, char addedChar)
	{
		return default(char);
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public GisketchUIColorPickerPopover()
	{
	}
}
