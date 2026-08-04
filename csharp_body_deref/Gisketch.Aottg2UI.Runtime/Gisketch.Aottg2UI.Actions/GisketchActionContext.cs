// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchActionContext
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchActionContext.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000D6")]
public readonly struct GisketchActionContext
{
	[Token(Token = "0x400042A")]
	[FieldOffset(Offset = "0x0")]
	public readonly string ElementId;

	[Token(Token = "0x400042B")]
	[FieldOffset(Offset = "0x8")]
	public readonly GameObject GameObject;

	[Token(Token = "0x400042C")]
	[FieldOffset(Offset = "0x10")]
	public readonly GisketchNodeDefinition Node;

	[Token(Token = "0x400042D")]
	[FieldOffset(Offset = "0x18")]
	public readonly GisketchActionInputSource InputSource;

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x3A9D200", Offset = "0x3A9D200", VA = "0x3A9D200")]
	public GisketchActionContext(string elementId, GameObject gameObject, GisketchNodeDefinition node)
	{
	}

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x3A9D250", Offset = "0x3A9D250", VA = "0x3A9D250")]
	public GisketchActionContext(string elementId, GameObject gameObject, GisketchNodeDefinition node, GisketchActionInputSource inputSource)
	{
	}
}
