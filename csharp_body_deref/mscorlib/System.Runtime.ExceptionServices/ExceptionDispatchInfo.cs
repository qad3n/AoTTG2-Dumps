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

[Token(Token = "0x200048C")]
public sealed class ExceptionDispatchInfo
{
	[Token(Token = "0x40012E5")]
	[FieldOffset(Offset = "0x10")]
	private Exception m_Exception;

	[Token(Token = "0x40012E6")]
	[FieldOffset(Offset = "0x18")]
	private object m_stackTrace;

	[Token(Token = "0x17000468")]
	internal object BinaryStackTraceArray
	{
		[Token(Token = "0x60022C5")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000469")]
	public Exception SourceException
	{
		[Token(Token = "0x60022C7")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60022C4")]
	[Address(RVA = "0x1A2A180", Offset = "0x1A28780", VA = "0x181A2A180")]
	private ExceptionDispatchInfo(Exception exception)
	{
	}

	[Token(Token = "0x60022C6")]
	[Address(RVA = "0x1A29EF0", Offset = "0x1A284F0", VA = "0x181A29EF0")]
	public static ExceptionDispatchInfo Capture(Exception source)
	{
		return null;
	}

	[Token(Token = "0x60022C8")]
	[Address(RVA = "0x1A2A100", Offset = "0x1A28700", VA = "0x181A2A100")]
	[System.Diagnostics.StackTraceHidden]
	public void Throw()
	{
	}

	[Token(Token = "0x60022C9")]
	[Address(RVA = "0x1A2A150", Offset = "0x1A28750", VA = "0x181A2A150")]
	[System.Diagnostics.StackTraceHidden]
	public static void Throw(Exception source)
	{
	}
}
