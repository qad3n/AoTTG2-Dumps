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
		[Address(RVA = "0x45FF690", Offset = "0x45FF690", VA = "0x45FF690")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B8")]
	public static bool AutoFlush
	{
		[Token(Token = "0x600046C")]
		[Address(RVA = "0x45FFA30", Offset = "0x45FFA30", VA = "0x45FFA30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000B9")]
	public static CorrelationManager CorrelationManager
	{
		[Token(Token = "0x600046D")]
		[Address(RVA = "0x45FFB30", Offset = "0x45FFB30", VA = "0x45FFB30")]
		get
		{
			return null;
		}
	}
}
