using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x200029D")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/AsyncGPUReadbackManaged.h")]
internal struct AsyncRequestNativeArrayData
{
	[Token(Token = "0x40006E6")]
	[FieldOffset(Offset = "0x0")]
	public unsafe void* nativeArrayBuffer;

	[Token(Token = "0x40006E7")]
	[FieldOffset(Offset = "0x8")]
	public long lengthInBytes;
}
