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

[Token(Token = "0x2000012")]
internal sealed class SafeBrotliDecoderHandle : SafeHandle
{
	[Token(Token = "0x1700000C")]
	public override bool IsInvalid
	{
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x46649B0", Offset = "0x46649B0", VA = "0x46649B0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x465F580", Offset = "0x465F580", VA = "0x465F580")]
	public SafeBrotliDecoderHandle()
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x46649A0", Offset = "0x46649A0", VA = "0x46649A0", Slot = "7")]
	protected override bool ReleaseHandle()
	{
		return default(bool);
	}
}
