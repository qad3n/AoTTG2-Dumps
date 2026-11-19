// ==================== AoTTG2 cross-reference ====================
// Type: Internal.Runtime.Augments.RuntimeAugments
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Internal.Runtime.Augments;

[Token(Token = "0x2000062")]
internal class RuntimeAugments
{
	[Token(Token = "0x4000195")]
	[FieldOffset(Offset = "0x0")]
	private static Internal.Runtime.Augments.ReflectionExecutionDomainCallbacks s_reflectionExecutionDomainCallbacks;

	[Token(Token = "0x1700003B")]
	internal static Internal.Runtime.Augments.ReflectionExecutionDomainCallbacks Callbacks
	{
		[Token(Token = "0x600022D")]
		[Address(RVA = "0x52FE2F0", Offset = "0x52FD2F0", VA = "0x52FE2F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x52FE2D0", Offset = "0x52FD2D0", VA = "0x52FE2D0")]
	public static void ReportUnhandledException(Exception exception)
	{
	}
}
