using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000316")]
public struct BatchCullingOutput
{
	[Token(Token = "0x40009CB")]
	[FieldOffset(Offset = "0x0")]
	public NativeArray<BatchCullingOutputDrawCommands> drawCommands;
}
