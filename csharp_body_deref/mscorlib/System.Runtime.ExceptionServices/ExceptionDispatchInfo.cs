// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.ExceptionServices.ExceptionDispatchInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Runtime.ExceptionServices;

[Token(Token = "0x200045D")]
public sealed class ExceptionDispatchInfo
{
	[Token(Token = "0x40012E3")]
	[FieldOffset(Offset = "0x10")]
	private Exception m_Exception;

	[Token(Token = "0x40012E4")]
	[FieldOffset(Offset = "0x18")]
	private object m_stackTrace;

	[Token(Token = "0x17000465")]
	internal object BinaryStackTraceArray
	{
		[Token(Token = "0x6002245")]
		[Address(RVA = "0x3BC0600", Offset = "0x3BC0600", VA = "0x3BC0600")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000466")]
	public Exception SourceException
	{
		[Token(Token = "0x6002247")]
		[Address(RVA = "0x3BC0610", Offset = "0x3BC0610", VA = "0x3BC0610")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002244")]
	[Address(RVA = "0x3BC04C0", Offset = "0x3BC04C0", VA = "0x3BC04C0")]
	private ExceptionDispatchInfo(Exception exception)
	{
	}

	[Token(Token = "0x6002246")]
	[Address(RVA = "0x3BC00A0", Offset = "0x3BC00A0", VA = "0x3BC00A0")]
	public static ExceptionDispatchInfo Capture(Exception source)
	{
		return null;
	}

	[Token(Token = "0x6002248")]
	[Address(RVA = "0x3BC0160", Offset = "0x3BC0160", VA = "0x3BC0160")]
	[System.Diagnostics.StackTraceHidden]
	public void Throw()
	{
	}

	[Token(Token = "0x6002249")]
	[Address(RVA = "0x3BC0620", Offset = "0x3BC0620", VA = "0x3BC0620")]
	[System.Diagnostics.StackTraceHidden]
	public static void Throw(Exception source)
	{
	}
}
