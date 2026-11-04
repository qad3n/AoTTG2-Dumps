// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.Holder
// Update status: NEW in this game update
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
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static LifecycleEventHandler LifecycleEventHandler;

	[Token(Token = "0x17000033")]
	public static IAdaptivePerformance Instance
	{
		[Token(Token = "0x60000A9")]
		[Address(RVA = "0x2E91570", Offset = "0x2E8FB70", VA = "0x182E91570")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000AA")]
		[Address(RVA = "0x2E915B0", Offset = "0x2E8FBB0", VA = "0x182E915B0")]
		internal set
		{
		}
	}
}
