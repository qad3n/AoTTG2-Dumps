using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngineInternal.Input;

[StructLayout((LayoutKind)2)]
[Token(Token = "0x2000003")]
internal struct NativeInputEventBuffer
{
	[Token(Token = "0x4000001")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public unsafe void* eventBuffer;

	[Token(Token = "0x4000002")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public int eventCount;

	[Token(Token = "0x4000003")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	public int sizeInBytes;

	[Token(Token = "0x4000004")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public int capacityInBytes;
}
