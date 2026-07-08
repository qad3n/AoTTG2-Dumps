using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace Unity.IO.Archive;

[Token(Token = "0x2000038")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/VirtualFileSystem/ArchiveFileSystem/ArchiveFileHandle.h")]
public struct ArchiveHandle
{
	[Token(Token = "0x40000B5")]
	[FieldOffset(Offset = "0x0")]
	internal ulong Handle;
}
