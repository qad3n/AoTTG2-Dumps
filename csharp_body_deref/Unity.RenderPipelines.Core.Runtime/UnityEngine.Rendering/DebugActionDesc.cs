// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DebugActionDesc
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000C0")]
internal class DebugActionDesc
{
	[Token(Token = "0x40002C2")]
	[FieldOffset(Offset = "0x10")]
	public string axisTrigger;

	[Token(Token = "0x40002C3")]
	[FieldOffset(Offset = "0x18")]
	public List<string[]> buttonTriggerList;

	[Token(Token = "0x40002C4")]
	[FieldOffset(Offset = "0x20")]
	public List<KeyCode[]> keyTriggerList;

	[Token(Token = "0x40002C5")]
	[FieldOffset(Offset = "0x28")]
	public DebugActionRepeatMode repeatMode;

	[Token(Token = "0x40002C6")]
	[FieldOffset(Offset = "0x2C")]
	public float repeatDelay;

	[Token(Token = "0x6000733")]
	[Address(RVA = "0x4BA5950", Offset = "0x4BA5950", VA = "0x4BA5950")]
	public DebugActionDesc()
	{
	}
}
