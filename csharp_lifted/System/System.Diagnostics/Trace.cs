// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.Trace
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x20000C6")]
public sealed class Trace
{
	[Token(Token = "0x4000383")]
	[FieldOffset(Offset = "0x0")]
	private static CorrelationManager correlationManager;

	[Token(Token = "0x170000C1")]
	public static TraceListenerCollection Listeners
	{
		[Token(Token = "0x6000495")]
		[Address(RVA = "0x6200B50", Offset = "0x61FFB50", VA = "0x6200B50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C2")]
	public static bool AutoFlush
	{
		[Token(Token = "0x6000496")]
		[Address(RVA = "0x6200EC0", Offset = "0x61FFEC0", VA = "0x6200EC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C3")]
	public static CorrelationManager CorrelationManager
	{
		[Token(Token = "0x6000497")]
		[Address(RVA = "0x6200FC0", Offset = "0x61FFFC0", VA = "0x6200FC0")]
		get
		{
			return null;
		}
	}
}
