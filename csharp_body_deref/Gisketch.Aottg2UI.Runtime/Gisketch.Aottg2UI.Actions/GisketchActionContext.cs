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

[Token(Token = "0x20000FB")]
public readonly struct GisketchActionContext
{
	[Token(Token = "0x40004F0")]
	[FieldOffset(Offset = "0x0")]
	public readonly string ElementId;

	[Token(Token = "0x40004F1")]
	[FieldOffset(Offset = "0x8")]
	public readonly GameObject GameObject;

	[Token(Token = "0x40004F2")]
	[FieldOffset(Offset = "0x10")]
	public readonly GisketchNodeDefinition Node;

	[Token(Token = "0x40004F3")]
	[FieldOffset(Offset = "0x18")]
	public readonly GisketchActionInputSource InputSource;

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x190BA00", Offset = "0x190A000", VA = "0x18190BA00")]
	public GisketchActionContext(string elementId, GameObject gameObject, GisketchNodeDefinition node)
	{
	}

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x190B9A0", Offset = "0x1909FA0", VA = "0x18190B9A0")]
	public GisketchActionContext(string elementId, GameObject gameObject, GisketchNodeDefinition node, GisketchActionInputSource inputSource)
	{
	}
}
