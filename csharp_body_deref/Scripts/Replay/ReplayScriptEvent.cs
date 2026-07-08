using System.Collections.Generic;
using Il2CppDummyDll;
using Utility;

namespace Replay;

[Token(Token = "0x20000D8")]
internal class ReplayScriptEvent : BaseCSVRow
{
	[Token(Token = "0x4000518")]
	[FieldOffset(Offset = "0x10")]
	public float Time;

	[Token(Token = "0x4000519")]
	[FieldOffset(Offset = "0x18")]
	public string Category;

	[Token(Token = "0x400051A")]
	[FieldOffset(Offset = "0x20")]
	public string Action;

	[Token(Token = "0x400051B")]
	[FieldOffset(Offset = "0x28")]
	public List<string> Parameters;

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x3E154B0", Offset = "0x3E154B0", VA = "0x3E154B0")]
	public ReplayScriptEvent()
	{
	}
}
