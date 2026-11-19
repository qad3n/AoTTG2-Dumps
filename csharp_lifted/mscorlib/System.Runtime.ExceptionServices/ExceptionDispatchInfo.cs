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

[Token(Token = "0x2000465")]
public sealed class ExceptionDispatchInfo
{
	[Token(Token = "0x4001245")]
	[FieldOffset(Offset = "0x10")]
	private Exception m_Exception;

	[Token(Token = "0x4001246")]
	[FieldOffset(Offset = "0x18")]
	private object m_stackTrace;

	[Token(Token = "0x17000467")]
	internal object BinaryStackTraceArray
	{
		[Token(Token = "0x6002292")]
		[Address(RVA = "0x53C7EF0", Offset = "0x53C6EF0", VA = "0x53C7EF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000468")]
	public Exception SourceException
	{
		[Token(Token = "0x6002294")]
		[Address(RVA = "0x53C7F00", Offset = "0x53C6F00", VA = "0x53C7F00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002291")]
	[Address(RVA = "0x53C7DB0", Offset = "0x53C6DB0", VA = "0x53C7DB0")]
	private ExceptionDispatchInfo(Exception exception)
	{
	}

	[Token(Token = "0x6002293")]
	[Address(RVA = "0x53C7990", Offset = "0x53C6990", VA = "0x53C7990")]
	public static ExceptionDispatchInfo Capture(Exception source)
	{
		return null;
	}

	[Token(Token = "0x6002295")]
	[Address(RVA = "0x53C7A50", Offset = "0x53C6A50", VA = "0x53C7A50")]
	[System.Diagnostics.StackTraceHidden]
	public void Throw()
	{
	}

	[Token(Token = "0x6002296")]
	[Address(RVA = "0x53C7F10", Offset = "0x53C6F10", VA = "0x53C7F10")]
	[System.Diagnostics.StackTraceHidden]
	public static void Throw(Exception source)
	{
	}
}
