using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Bindings;

namespace UnityEngine.Networking;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000008")]
[UnityEngine.Bindings.NativeHeader("Modules/UnityWebRequest/Public/DownloadHandler/DownloadHandlerVFS.h")]
public sealed class DownloadHandlerFile : DownloadHandler
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000030")]
	[Address(RVA = "0x4DDF260", Offset = "0x4DDF260", VA = "0x4DDF260")]
	[UnityEngine.Bindings.NativeThrows]
	private static extern IntPtr Create(DownloadHandlerFile obj, string path, bool append);

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x4DDF2A0", Offset = "0x4DDF2A0", VA = "0x4DDF2A0")]
	private void InternalCreateVFS(string path, bool append)
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x4DDF350", Offset = "0x4DDF350", VA = "0x4DDF350")]
	public DownloadHandlerFile(string path)
	{
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x4DDF380", Offset = "0x4DDF380", VA = "0x4DDF380", Slot = "6")]
	protected override NativeArray<byte> GetNativeData()
	{
		return default(NativeArray<byte>);
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x4DDF3D0", Offset = "0x4DDF3D0", VA = "0x4DDF3D0", Slot = "7")]
	protected override byte[] GetData()
	{
		return null;
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x4DDF420", Offset = "0x4DDF420", VA = "0x4DDF420", Slot = "8")]
	protected override string GetText()
	{
		return null;
	}
}
