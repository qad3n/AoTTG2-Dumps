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
	[Address(RVA = "0x4880860", Offset = "0x4880860", VA = "0x4880860")]
	public DebugActionDesc()
	{
	}
}
