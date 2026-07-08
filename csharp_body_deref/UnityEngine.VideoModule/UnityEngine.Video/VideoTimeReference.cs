using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Video;

[Token(Token = "0x2000008")]
[UnityEngine.Scripting.RequiredByNativeCode]
public enum VideoTimeReference
{
	[Token(Token = "0x4000017")]
	Freerun,
	[Token(Token = "0x4000018")]
	InternalTime,
	[Token(Token = "0x4000019")]
	ExternalTime
}
