// ==================== AoTTG2 cross-reference ====================
// Type: Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Microsoft.Win32.SafeHandles;

[Token(Token = "0x2000086")]
public abstract class SafeHandleZeroOrMinusOneIsInvalid : SafeHandle
{
	[Token(Token = "0x17000037")]
	public override bool IsInvalid
	{
		[Token(Token = "0x600025C")]
		[Address(RVA = "0x1967C90", Offset = "0x1966290", VA = "0x181967C90", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x1967C80", Offset = "0x1966280", VA = "0x181967C80")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	protected SafeHandleZeroOrMinusOneIsInvalid(bool ownsHandle)
	{
	}
}
