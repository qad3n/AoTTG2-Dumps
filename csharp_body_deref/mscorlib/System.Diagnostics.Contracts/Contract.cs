// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.Contracts.Contract
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.ConstrainedExecution;
using Il2CppDummyDll;

namespace System.Diagnostics.Contracts;

[Token(Token = "0x20005BB")]
public static class Contract
{
	[Token(Token = "0x6002B91")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public static bool ForAll<T>(IEnumerable<T> collection, Predicate<T> predicate)
	{
		return default(bool);
	}
}
