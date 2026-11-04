// ==================== AoTTG2 cross-reference ====================
// Type: Microsoft.Win32.SafeHandles.SafeHandleMinusOneIsInvalid
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Microsoft.Win32.SafeHandles;

[Token(Token = "0x2000087")]
public abstract class SafeHandleMinusOneIsInvalid : SafeHandle
{
	[Token(Token = "0x17000038")]
	public override bool IsInvalid
	{
		[Token(Token = "0x600025E")]
		[Address(RVA = "0x1967C40", Offset = "0x1966240", VA = "0x181967C40", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x1967BF0", Offset = "0x19661F0", VA = "0x181967BF0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	protected SafeHandleMinusOneIsInvalid(bool ownsHandle)
	{
	}
}
