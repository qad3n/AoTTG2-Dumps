// ==================== AoTTG2 cross-reference ====================
// Type: Microsoft.Win32.SafeHandles.SafeFindHandle
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Microsoft.Win32.SafeHandles;

[Token(Token = "0x2000084")]
internal class SafeFindHandle : SafeHandleZeroOrMinusOneIsInvalid
{
	[Token(Token = "0x6000257")]
	[Address(RVA = "0x1967BE0", Offset = "0x19661E0", VA = "0x181967BE0")]
	internal SafeFindHandle()
	{
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x1967B90", Offset = "0x1966190", VA = "0x181967B90", Slot = "7")]
	protected override bool ReleaseHandle()
	{
		return default(bool);
	}
}
