using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace Unity.IO.Archive;

[Token(Token = "0x2000037")]
[UnityEngine.Bindings.NativeHeader("Runtime/VirtualFileSystem/ArchiveFileSystem/ArchiveFileHandle.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct ArchiveFileInfo
{
	[Token(Token = "0x40000B3")]
	[FieldOffset(Offset = "0x0")]
	public string Filename;

	[Token(Token = "0x40000B4")]
	[FieldOffset(Offset = "0x8")]
	public ulong FileSize;
}
