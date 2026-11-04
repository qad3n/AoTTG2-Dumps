// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.Trace
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x2000105")]
public sealed class Trace
{
	[Token(Token = "0x4000452")]
	[FieldOffset(Offset = "0x0")]
	private static CorrelationManager correlationManager;

	[Token(Token = "0x170000F0")]
	public static TraceListenerCollection Listeners
	{
		[Token(Token = "0x600064B")]
		[Address(RVA = "0x28774F0", Offset = "0x2875AF0", VA = "0x1828774F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F1")]
	public static bool AutoFlush
	{
		[Token(Token = "0x600064C")]
		[Address(RVA = "0x28773B0", Offset = "0x28759B0", VA = "0x1828773B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F2")]
	public static CorrelationManager CorrelationManager
	{
		[Token(Token = "0x600064D")]
		[Address(RVA = "0x2877440", Offset = "0x2875A40", VA = "0x182877440")]
		get
		{
			return null;
		}
	}
}
