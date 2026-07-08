using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.Events;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x200007F")]
internal sealed class GisketchUIColorPickerPopover : MonoBehaviour
{
	[Token(Token = "0x4000291")]
	[FieldOffset(Offset = "0x20")]
	private string _id;

	[Token(Token = "0x4000292")]
	[FieldOffset(Offset = "0x28")]
	private bool _enableAlpha;

	[Token(Token = "0x4000293")]
	[FieldOffset(Offset = "0x30")]
	private GameObject _source;

	[Token(Token = "0x4000294")]
	[FieldOffset(Offset = "0x38")]
	private GisketchUIRoot _root;

	[Token(Token = "0x4000295")]
	[FieldOffset(Offset = "0x40")]
	private GisketchUIColorPickerValue _value;

	[Token(Token = "0x4000296")]
	[FieldOffset(Offset = "0x50")]
	private TMP_InputField _r;

	[Token(Token = "0x4000297")]
	[FieldOffset(Offset = "0x58")]
	private TMP_InputField _g;

	[Token(Token = "0x4000298")]
	[FieldOffset(Offset = "0x60")]
	private TMP_InputField _b;

	[Token(Token = "0x4000299")]
	[FieldOffset(Offset = "0x68")]
	private TMP_InputField _hex;

	[Token(Token = "0x400029A")]
	[FieldOffset(Offset = "0x70")]
	private GisketchUIColorPickerVisual _visual;

	[Token(Token = "0x400029B")]
	[FieldOffset(Offset = "0x78")]
	private bool _syncing;

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x3A017E0", Offset = "0x3A017E0", VA = "0x3A017E0")]
	public void Setup(string id, GameObject source, GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x3A037F0", Offset = "0x3A037F0", VA = "0x3A037F0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x3A039F0", Offset = "0x3A039F0", VA = "0x3A039F0")]
	private void OnVisualChanged(GisketchUIColorPickerValue value)
	{
	}

	[Token(Token = "0x6000367")]
	[Address(RVA = "0x3A03AA0", Offset = "0x3A03AA0", VA = "0x3A03AA0")]
	private void OnRgbChanged(string _)
	{
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x3A04070", Offset = "0x3A04070", VA = "0x3A04070")]
	private void OnHexChanged(string text)
	{
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x3A04330", Offset = "0x3A04330", VA = "0x3A04330")]
	private void Save()
	{
	}

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x3A04460", Offset = "0x3A04460", VA = "0x3A04460")]
	private void Cancel()
	{
	}

	[Token(Token = "0x600036B")]
	[Address(RVA = "0x3A03F70", Offset = "0x3A03F70", VA = "0x3A03F70")]
	private void SetValue(GisketchUIColorPickerValue value, bool visual)
	{
	}

	[Token(Token = "0x600036C")]
	[Address(RVA = "0x3A03590", Offset = "0x3A03590", VA = "0x3A03590")]
	private void SyncFields()
	{
	}

	[Token(Token = "0x600036D")]
	[Address(RVA = "0x3A03B80", Offset = "0x3A03B80", VA = "0x3A03B80")]
	private bool TryRgb(out byte r, out byte g, out byte b)
	{
		return default(bool);
	}

	[Token(Token = "0x600036E")]
	[Address(RVA = "0x3A030E0", Offset = "0x3A030E0", VA = "0x3A030E0")]
	private void WireRgbInput(TMP_InputField input)
	{
	}

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x3A03240", Offset = "0x3A03240", VA = "0x3A03240")]
	private void WireHexInput(TMP_InputField input)
	{
	}

	[Token(Token = "0x6000370")]
	[Address(RVA = "0x3A033A0", Offset = "0x3A033A0", VA = "0x3A033A0")]
	private void WireButton(string id, UnityAction action)
	{
	}

	[Token(Token = "0x6000371")]
	[Address(RVA = "0x3A044E0", Offset = "0x3A044E0", VA = "0x3A044E0")]
	private static void SetText(TMP_InputField input, string value)
	{
	}

	[Token(Token = "0x6000372")]
	[Address(RVA = "0x3A04620", Offset = "0x3A04620", VA = "0x3A04620")]
	private static char ValidateDigit(string text, int charIndex, char addedChar)
	{
		return default(char);
	}

	[Token(Token = "0x6000373")]
	[Address(RVA = "0x3A04640", Offset = "0x3A04640", VA = "0x3A04640")]
	private static char ValidateHex(string text, int charIndex, char addedChar)
	{
		return default(char);
	}

	[Token(Token = "0x6000374")]
	[Address(RVA = "0x3A046A0", Offset = "0x3A046A0", VA = "0x3A046A0")]
	public GisketchUIColorPickerPopover()
	{
	}
}
