using Il2CppDummyDll;
using Utility;

namespace Replay;

[Token(Token = "0x20000D9")]
internal class ReplayScriptOptions : BaseCSVRow
{
	[Token(Token = "0x400051C")]
	[FieldOffset(Offset = "0x10")]
	public string Version;

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x3E15530", Offset = "0x3E15530", VA = "0x3E15530")]
	public ReplayScriptOptions()
	{
	}
}
