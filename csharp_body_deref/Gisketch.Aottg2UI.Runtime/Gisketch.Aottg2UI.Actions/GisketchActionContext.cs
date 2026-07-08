using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000D1")]
public readonly struct GisketchActionContext
{
	[Token(Token = "0x40003F9")]
	[FieldOffset(Offset = "0x0")]
	public readonly string ElementId;

	[Token(Token = "0x40003FA")]
	[FieldOffset(Offset = "0x8")]
	public readonly GameObject GameObject;

	[Token(Token = "0x40003FB")]
	[FieldOffset(Offset = "0x10")]
	public readonly GisketchNodeDefinition Node;

	[Token(Token = "0x40003FC")]
	[FieldOffset(Offset = "0x18")]
	public readonly GisketchActionInputSource InputSource;

	[Token(Token = "0x60005C7")]
	[Address(RVA = "0x3A1A770", Offset = "0x3A1A770", VA = "0x3A1A770")]
	public GisketchActionContext(string elementId, GameObject gameObject, GisketchNodeDefinition node)
	{
	}

	[Token(Token = "0x60005C8")]
	[Address(RVA = "0x3A1A2E0", Offset = "0x3A1A2E0", VA = "0x3A1A2E0")]
	public GisketchActionContext(string elementId, GameObject gameObject, GisketchNodeDefinition node, GisketchActionInputSource inputSource)
	{
	}
}
