// ==================== AoTTG2 cross-reference ====================
// Type: Microsoft.Win32.SafeHandles.SafeRegistryHandle
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Microsoft.Win32.SafeHandles;

[Token(Token = "0x2000081")]
public sealed class SafeRegistryHandle : SafeHandleZeroOrMinusOneIsInvalid
{
	[Token(Token = "0x600024B")]
	[Address(RVA = "0x1967F60", Offset = "0x1966560", VA = "0x181967F60", Slot = "7")]
	protected override bool ReleaseHandle()
	{
		return default(bool);
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x1967BE0", Offset = "0x19661E0", VA = "0x181967BE0")]
	internal SafeRegistryHandle()
	{
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x1967B60", Offset = "0x1966160", VA = "0x181967B60")]
	public SafeRegistryHandle(IntPtr preexistingHandle, bool ownsHandle)
	{
	}
}
