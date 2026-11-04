// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.UnobservedTaskExceptionEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200028C")]
public class UnobservedTaskExceptionEventArgs : EventArgs
{
	[Token(Token = "0x4000B4F")]
	[FieldOffset(Offset = "0x10")]
	private AggregateException m_exception;

	[Token(Token = "0x4000B50")]
	[FieldOffset(Offset = "0x18")]
	internal bool m_observed;

	[Token(Token = "0x6001563")]
	[Address(RVA = "0x1BC4960", Offset = "0x1BC2F60", VA = "0x181BC4960")]
	public UnobservedTaskExceptionEventArgs(AggregateException exception)
	{
	}
}
