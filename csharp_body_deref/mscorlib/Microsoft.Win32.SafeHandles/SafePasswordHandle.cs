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

[Token(Token = "0x2000082")]
internal sealed class SafePasswordHandle : SafeHandle
{
	[Token(Token = "0x17000036")]
	public override bool IsInvalid
	{
		[Token(Token = "0x6000253")]
		[Address(RVA = "0x1967F30", Offset = "0x1966530", VA = "0x181967F30", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x1967CF0", Offset = "0x19662F0", VA = "0x181967CF0")]
	private IntPtr CreateHandle(string password)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x1967DA0", Offset = "0x19663A0", VA = "0x181967DA0")]
	private void FreeHandle()
	{
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x1967EC0", Offset = "0x19664C0", VA = "0x181967EC0")]
	public SafePasswordHandle(string password)
	{
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x1967E40", Offset = "0x1966440", VA = "0x181967E40", Slot = "7")]
	protected override bool ReleaseHandle()
	{
		return default(bool);
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x1967D40", Offset = "0x1966340", VA = "0x181967D40", Slot = "6")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x1967DF0", Offset = "0x19663F0", VA = "0x181967DF0")]
	internal string Mono_DangerousGetString()
	{
		return null;
	}
}
