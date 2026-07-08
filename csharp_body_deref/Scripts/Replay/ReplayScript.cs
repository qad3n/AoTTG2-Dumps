using System.Collections.Generic;
using Il2CppDummyDll;
using Utility;

namespace Replay;

[Token(Token = "0x20000D7")]
internal class ReplayScript : BaseCSVContainer
{
	[Token(Token = "0x4000516")]
	[FieldOffset(Offset = "0x10")]
	public ReplayScriptOptions Options;

	[Token(Token = "0x4000517")]
	[FieldOffset(Offset = "0x18")]
	public List<ReplayScriptEvent> Events;

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x3E154A0", Offset = "0x3E154A0", VA = "0x3E154A0")]
	public ReplayScript()
	{
	}
}
