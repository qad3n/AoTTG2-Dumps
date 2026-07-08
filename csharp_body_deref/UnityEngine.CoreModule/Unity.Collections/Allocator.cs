using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace Unity.Collections;

[Token(Token = "0x2000042")]
[UnityEngine.Scripting.UsedByNativeCode]
public enum Allocator
{
	[Token(Token = "0x40000B8")]
	Invalid = 0,
	[Token(Token = "0x40000B9")]
	None = 1,
	[Token(Token = "0x40000BA")]
	Temp = 2,
	[Token(Token = "0x40000BB")]
	TempJob = 3,
	[Token(Token = "0x40000BC")]
	Persistent = 4,
	[Token(Token = "0x40000BD")]
	AudioKernel = 5,
	[Token(Token = "0x40000BE")]
	Domain = 6,
	[Token(Token = "0x40000BF")]
	FirstUserIndex = 64
}
