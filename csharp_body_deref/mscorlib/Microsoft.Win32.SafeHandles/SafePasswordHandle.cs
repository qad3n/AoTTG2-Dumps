// ==================== AoTTG2 cross-reference ====================
// Type: Microsoft.Win32.SafeHandles.SafePasswordHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Microsoft.Win32.SafeHandles;

[Token(Token = "0x200005A")]
internal sealed class SafePasswordHandle : SafeHandle
{
	[Token(Token = "0x17000036")]
	public override bool IsInvalid
	{
		[Token(Token = "0x6000216")]
		[Address(RVA = "0x3AF30A0", Offset = "0x3AF30A0", VA = "0x3AF30A0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x3AF2E90", Offset = "0x3AF2E90", VA = "0x3AF2E90")]
	private IntPtr CreateHandle(string password)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x3AF2F00", Offset = "0x3AF2F00", VA = "0x3AF2F00")]
	private void FreeHandle()
	{
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x3AF2F60", Offset = "0x3AF2F60", VA = "0x3AF2F60")]
	public SafePasswordHandle(string password)
	{
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x3AF2FD0", Offset = "0x3AF2FD0", VA = "0x3AF2FD0", Slot = "7")]
	protected override bool ReleaseHandle()
	{
		return default(bool);
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x3AF3040", Offset = "0x3AF3040", VA = "0x3AF3040", Slot = "6")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x3AF30C0", Offset = "0x3AF30C0", VA = "0x3AF30C0")]
	internal string Mono_DangerousGetString()
	{
		return null;
	}
}
