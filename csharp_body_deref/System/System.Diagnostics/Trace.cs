// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.Trace
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x20000C5")]
public sealed class Trace
{
	[Token(Token = "0x4000380")]
	[FieldOffset(Offset = "0x0")]
	private static CorrelationManager correlationManager;

	[Token(Token = "0x170000B7")]
	public static TraceListenerCollection Listeners
	{
		[Token(Token = "0x600046B")]
		[Address(RVA = "0x4924790", Offset = "0x4924790", VA = "0x4924790")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B8")]
	public static bool AutoFlush
	{
		[Token(Token = "0x600046C")]
		[Address(RVA = "0x4924B30", Offset = "0x4924B30", VA = "0x4924B30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000B9")]
	public static CorrelationManager CorrelationManager
	{
		[Token(Token = "0x600046D")]
		[Address(RVA = "0x4924C30", Offset = "0x4924C30", VA = "0x4924C30")]
		get
		{
			return null;
		}
	}
}
