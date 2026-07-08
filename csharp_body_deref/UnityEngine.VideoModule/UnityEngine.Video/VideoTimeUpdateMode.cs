using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Video;

[Token(Token = "0x200000A")]
[UnityEngine.Scripting.RequiredByNativeCode]
public enum VideoTimeUpdateMode
{
	[Token(Token = "0x400001E")]
	DSPTime,
	[Token(Token = "0x400001F")]
	GameTime,
	[Token(Token = "0x4000020")]
	UnscaledGameTime
}
