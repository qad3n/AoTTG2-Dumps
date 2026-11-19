// ==================== AoTTG2 cross-reference ====================
// Type: Microsoft.Win32.SafeHandles.SafeBrotliEncoderHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Microsoft.Win32.SafeHandles;

[Token(Token = "0x200003E")]
internal sealed class SafeBrotliEncoderHandle : SafeHandle
{
	[Token(Token = "0x17000054")]
	public override bool IsInvalid
	{
		[Token(Token = "0x60001B0")]
		[Address(RVA = "0x5F76230", Offset = "0x5F75230", VA = "0x5F76230", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x5F76210", Offset = "0x5F75210", VA = "0x5F76210")]
	public SafeBrotliEncoderHandle()
	{
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x5F76220", Offset = "0x5F75220", VA = "0x5F76220", Slot = "7")]
	protected override bool ReleaseHandle()
	{
		return default(bool);
	}
}
