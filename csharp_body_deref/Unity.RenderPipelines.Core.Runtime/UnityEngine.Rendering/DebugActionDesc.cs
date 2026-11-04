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

[Token(Token = "0x2000090")]
internal class DebugActionDesc
{
	[Token(Token = "0x40001FA")]
	[FieldOffset(Offset = "0x10")]
	public string axisTrigger;

	[Token(Token = "0x40001FB")]
	[FieldOffset(Offset = "0x18")]
	public List<string[]> buttonTriggerList;

	[Token(Token = "0x40001FC")]
	[FieldOffset(Offset = "0x20")]
	public List<KeyCode[]> keyTriggerList;

	[Token(Token = "0x40001FD")]
	[FieldOffset(Offset = "0x28")]
	public DebugActionRepeatMode repeatMode;

	[Token(Token = "0x40001FE")]
	[FieldOffset(Offset = "0x2C")]
	public float repeatDelay;

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x2AD3D80", Offset = "0x2AD2380", VA = "0x182AD3D80")]
	public DebugActionDesc()
	{
	}
}
