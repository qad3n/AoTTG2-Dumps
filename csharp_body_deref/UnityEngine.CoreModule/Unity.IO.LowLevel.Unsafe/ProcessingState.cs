using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace Unity.IO.LowLevel.Unsafe;

[Token(Token = "0x2000032")]
[UnityEngine.Bindings.NativeHeader("Runtime/File/AsyncReadManagerMetrics.h")]
public enum ProcessingState
{
	[Token(Token = "0x4000092")]
	Unknown,
	[Token(Token = "0x4000093")]
	InQueue,
	[Token(Token = "0x4000094")]
	Reading,
	[Token(Token = "0x4000095")]
	Completed,
	[Token(Token = "0x4000096")]
	Failed,
	[Token(Token = "0x4000097")]
	Canceled
}
