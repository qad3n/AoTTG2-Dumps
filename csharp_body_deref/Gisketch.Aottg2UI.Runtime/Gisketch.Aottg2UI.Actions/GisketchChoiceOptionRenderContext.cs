// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchChoiceOptionRenderContext
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchChoiceOptionRenderContext.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000D4")]
public sealed class GisketchChoiceOptionRenderContext
{
	[Token(Token = "0x400044C")]
	[FieldOffset(Offset = "0x10")]
	public GameObject Root;

	[Token(Token = "0x400044D")]
	[FieldOffset(Offset = "0x18")]
	public TextMeshProUGUI Label;

	[Token(Token = "0x400044E")]
	[FieldOffset(Offset = "0x20")]
	public GisketchChoiceOptionDefinition Option;

	[Token(Token = "0x400044F")]
	[FieldOffset(Offset = "0x28")]
	public string Text;

	[Token(Token = "0x4000450")]
	[FieldOffset(Offset = "0x30")]
	public string Value;

	[Token(Token = "0x4000451")]
	[FieldOffset(Offset = "0x38")]
	public int Index;

	[Token(Token = "0x4000452")]
	[FieldOffset(Offset = "0x3C")]
	public bool Enabled;

	[Token(Token = "0x4000453")]
	[FieldOffset(Offset = "0x3D")]
	public bool Selected;

	[Token(Token = "0x4000454")]
	[FieldOffset(Offset = "0x3E")]
	public bool ClosedValue;

	[Token(Token = "0x600067E")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public GisketchChoiceOptionRenderContext()
	{
	}
}
