using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Bindings;

namespace UnityEngine.Networking;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000007")]
[UnityEngine.Bindings.NativeHeader("Modules/UnityWebRequest/Public/DownloadHandler/DownloadHandlerBuffer.h")]
public sealed class DownloadHandlerBuffer : DownloadHandler
{
	[Token(Token = "0x4000015")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private NativeArray<byte> m_NativeData;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002B")]
	[Address(RVA = "0x4DDF130", Offset = "0x4DDF130", VA = "0x4DDF130")]
	private static extern IntPtr Create(DownloadHandlerBuffer obj);

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x4DDF160", Offset = "0x4DDF160", VA = "0x4DDF160")]
	private void InternalCreateBuffer()
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x4DDF1A0", Offset = "0x4DDF1A0", VA = "0x4DDF1A0")]
	public DownloadHandlerBuffer()
	{
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4DDF1E0", Offset = "0x4DDF1E0", VA = "0x4DDF1E0", Slot = "6")]
	protected override NativeArray<byte> GetNativeData()
	{
		return default(NativeArray<byte>);
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x4DDF1F0", Offset = "0x4DDF1F0", VA = "0x4DDF1F0", Slot = "5")]
	public override void Dispose()
	{
	}
}
