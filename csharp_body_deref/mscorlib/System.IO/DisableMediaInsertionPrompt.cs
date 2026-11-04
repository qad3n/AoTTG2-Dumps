// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.DisableMediaInsertionPrompt
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x200065E")]
internal struct DisableMediaInsertionPrompt : IDisposable
{
	[Token(Token = "0x400198F")]
	[FieldOffset(Offset = "0x0")]
	private bool _disableSuccess;

	[Token(Token = "0x4001990")]
	[FieldOffset(Offset = "0x4")]
	private uint _oldMode;

	[Token(Token = "0x4001991")]
	[FieldOffset(Offset = "0x0")]
	private static bool useUWPFallback;

	[Token(Token = "0x600308A")]
	[Address(RVA = "0x1ACD6F0", Offset = "0x1ACBCF0", VA = "0x181ACD6F0")]
	public static System.IO.DisableMediaInsertionPrompt Create()
	{
		return default(System.IO.DisableMediaInsertionPrompt);
	}

	[Token(Token = "0x600308B")]
	[Address(RVA = "0x1ACD770", Offset = "0x1ACBD70", VA = "0x181ACD770", Slot = "4")]
	public void Dispose()
	{
	}
}
