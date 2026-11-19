// ==================== AoTTG2 cross-reference ====================
// Type: Unity.IntegerTime.RationalTimeExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace Unity.IntegerTime;

[Token(Token = "0x2000022")]
public static class RationalTimeExtensions
{
	[Token(Token = "0x6000070")]
	[Address(RVA = "0x68B3EE0", Offset = "0x68B2EE0", VA = "0x68B3EE0")]
	[UnityEngine.Bindings.FreeFunction("IntegerTime::RationalTime::ConvertRate", IsFreeFunction = true, ThrowsException = true)]
	public static RationalTime Convert(this RationalTime time, RationalTime.TicksPerSecond rate)
	{
		return default(RationalTime);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000071")]
	[Address(RVA = "0x68B4A70", Offset = "0x68B3A70", VA = "0x68B4A70")]
	private static extern void Convert_Injected([In] ref RationalTime time, [In] ref RationalTime.TicksPerSecond rate, out RationalTime ret);
}
