// ==================== AoTTG2 cross-reference ====================
// Type: Microsoft.Win32.SafeHandles.SafeBrotliDecoderHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Microsoft.Win32.SafeHandles;

[Token(Token = "0x200003F")]
internal sealed class SafeBrotliDecoderHandle : SafeHandle
{
	[Token(Token = "0x17000055")]
	public override bool IsInvalid
	{
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x5F76260", Offset = "0x5F75260", VA = "0x5F76260", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x5F76240", Offset = "0x5F75240", VA = "0x5F76240")]
	public SafeBrotliDecoderHandle()
	{
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x5F76250", Offset = "0x5F75250", VA = "0x5F76250", Slot = "7")]
	protected override bool ReleaseHandle()
	{
		return default(bool);
	}
}
