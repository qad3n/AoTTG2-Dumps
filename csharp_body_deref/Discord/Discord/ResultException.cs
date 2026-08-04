// ==================== AoTTG2 cross-reference ====================
// Type: Discord.ResultException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/Core.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x200005E")]
public class ResultException : Exception
{
	[Token(Token = "0x4000101")]
	[FieldOffset(Offset = "0x8C")]
	public readonly Result Result;

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x232C7D0", Offset = "0x232C7D0", VA = "0x232C7D0")]
	public ResultException(Result result)
	{
	}
}
