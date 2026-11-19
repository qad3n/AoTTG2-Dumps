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
		[Token(Token = "0x6000218")]
		[Address(RVA = "0x52FDE90", Offset = "0x52FCE90", VA = "0x52FDE90", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x52FDC80", Offset = "0x52FCC80", VA = "0x52FDC80")]
	private IntPtr CreateHandle(string password)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x52FDCF0", Offset = "0x52FCCF0", VA = "0x52FDCF0")]
	private void FreeHandle()
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x52FDD50", Offset = "0x52FCD50", VA = "0x52FDD50")]
	public SafePasswordHandle(string password)
	{
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x52FDDC0", Offset = "0x52FCDC0", VA = "0x52FDDC0", Slot = "7")]
	protected override bool ReleaseHandle()
	{
		return default(bool);
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x52FDE30", Offset = "0x52FCE30", VA = "0x52FDE30", Slot = "6")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x52FDEB0", Offset = "0x52FCEB0", VA = "0x52FDEB0")]
	internal string Mono_DangerousGetString()
	{
		return null;
	}
}
