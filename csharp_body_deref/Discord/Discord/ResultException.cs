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

[Token(Token = "0x200005C")]
public class ResultException : Exception
{
	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x90")]
	public readonly Result Result;

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x53A890", Offset = "0x538E90", VA = "0x18053A890")]
	public ResultException(Result result)
	{
	}
}
