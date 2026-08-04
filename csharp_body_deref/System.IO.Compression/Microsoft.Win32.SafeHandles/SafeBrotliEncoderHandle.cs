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

[Token(Token = "0x2000011")]
internal sealed class SafeBrotliEncoderHandle : SafeHandle
{
	[Token(Token = "0x1700000B")]
	public override bool IsInvalid
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x4664990", Offset = "0x4664990", VA = "0x4664990", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x465F700", Offset = "0x465F700", VA = "0x465F700")]
	public SafeBrotliEncoderHandle()
	{
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x4664980", Offset = "0x4664980", VA = "0x4664980", Slot = "7")]
	protected override bool ReleaseHandle()
	{
		return default(bool);
	}
}
