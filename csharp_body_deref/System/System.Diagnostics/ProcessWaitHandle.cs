using System.Threading;
using Il2CppDummyDll;
using Microsoft.Win32.SafeHandles;

namespace System.Diagnostics;

[Token(Token = "0x20000D8")]
internal class ProcessWaitHandle : WaitHandle
{
	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x4602E40", Offset = "0x4602E40", VA = "0x4602E40")]
	internal ProcessWaitHandle(SafeProcessHandle processHandle)
	{
	}
}
