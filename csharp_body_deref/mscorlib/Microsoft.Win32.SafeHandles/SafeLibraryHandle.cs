// ==================== AoTTG2 cross-reference ====================
// Type: Microsoft.Win32.SafeHandles.SafeLibraryHandle
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Microsoft.Win32.SafeHandles;

[Token(Token = "0x2000080")]
internal sealed class SafeLibraryHandle : SafeHandleZeroOrMinusOneIsInvalid
{
	[Token(Token = "0x6000249")]
	[Address(RVA = "0x1967BE0", Offset = "0x19661E0", VA = "0x181967BE0")]
	internal SafeLibraryHandle()
	{
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x1967CE0", Offset = "0x19662E0", VA = "0x181967CE0", Slot = "7")]
	protected override bool ReleaseHandle()
	{
		return default(bool);
	}
}
