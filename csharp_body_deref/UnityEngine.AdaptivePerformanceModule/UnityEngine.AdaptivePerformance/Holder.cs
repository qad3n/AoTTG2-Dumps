// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.Holder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x2000011")]
public static class Holder
{
	[Token(Token = "0x400005D")]
	[FieldOffset(Offset = "0x0")]
	private static IAdaptivePerformance m_Instance;

	[Token(Token = "0x400005E")]
	[FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static LifecycleEventHandler LifecycleEventHandler;

	[Token(Token = "0x17000033")]
	public static IAdaptivePerformance Instance
	{
		[Token(Token = "0x60000A9")]
		[Address(RVA = "0x6886010", Offset = "0x6885010", VA = "0x6886010")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000AA")]
		[Address(RVA = "0x6883F00", Offset = "0x6882F00", VA = "0x6883F00")]
		internal set
		{
		}
	}
}
