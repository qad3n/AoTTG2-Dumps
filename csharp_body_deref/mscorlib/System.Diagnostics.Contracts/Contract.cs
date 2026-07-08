using System.Collections.Generic;
using System.Runtime.ConstrainedExecution;
using Il2CppDummyDll;

namespace System.Diagnostics.Contracts;

[Token(Token = "0x20005E9")]
public static class Contract
{
	[Token(Token = "0x6002E84")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public static bool ForAll<T>(IEnumerable<T> collection, Predicate<T> predicate)
	{
		return default(bool);
	}
}
