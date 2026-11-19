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

[Token(Token = "0x20000DA")]
public sealed class GisketchChoiceOptionRenderContext
{
	[Token(Token = "0x4000473")]
	[FieldOffset(Offset = "0x10")]
	public GameObject Root;

	[Token(Token = "0x4000474")]
	[FieldOffset(Offset = "0x18")]
	public TextMeshProUGUI Label;

	[Token(Token = "0x4000475")]
	[FieldOffset(Offset = "0x20")]
	public GisketchChoiceOptionDefinition Option;

	[Token(Token = "0x4000476")]
	[FieldOffset(Offset = "0x28")]
	public string Text;

	[Token(Token = "0x4000477")]
	[FieldOffset(Offset = "0x30")]
	public string Value;

	[Token(Token = "0x4000478")]
	[FieldOffset(Offset = "0x38")]
	public int Index;

	[Token(Token = "0x4000479")]
	[FieldOffset(Offset = "0x3C")]
	public bool Enabled;

	[Token(Token = "0x400047A")]
	[FieldOffset(Offset = "0x3D")]
	public bool Selected;

	[Token(Token = "0x400047B")]
	[FieldOffset(Offset = "0x3E")]
	public bool ClosedValue;

	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x5297DE0", Offset = "0x5296DE0", VA = "0x5297DE0")]
	public GisketchChoiceOptionRenderContext()
	{
	}
}
