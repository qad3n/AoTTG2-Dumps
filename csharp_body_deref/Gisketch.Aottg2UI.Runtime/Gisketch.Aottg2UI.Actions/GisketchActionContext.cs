// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchActionContext
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchActionContext.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x2000101")]
public readonly struct GisketchActionContext
{
	[Token(Token = "0x4000517")]
	[FieldOffset(Offset = "0x0")]
	public readonly string ElementId;

	[Token(Token = "0x4000518")]
	[FieldOffset(Offset = "0x8")]
	public readonly GameObject GameObject;

	[Token(Token = "0x4000519")]
	[FieldOffset(Offset = "0x10")]
	public readonly GisketchNodeDefinition Node;

	[Token(Token = "0x400051A")]
	[FieldOffset(Offset = "0x18")]
	public readonly GisketchActionInputSource InputSource;

	[Token(Token = "0x170000BD")]
	public string InputText
	{
		[Token(Token = "0x60007C3")]
		[Address(RVA = "0x52AB3D0", Offset = "0x52AA3D0", VA = "0x52AB3D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007C1")]
	[Address(RVA = "0x52AB330", Offset = "0x52AA330", VA = "0x52AB330")]
	public GisketchActionContext(string elementId, GameObject gameObject, GisketchNodeDefinition node)
	{
	}

	[Token(Token = "0x60007C2")]
	[Address(RVA = "0x52AB380", Offset = "0x52AA380", VA = "0x52AB380")]
	public GisketchActionContext(string elementId, GameObject gameObject, GisketchNodeDefinition node, GisketchActionInputSource inputSource)
	{
	}
}
