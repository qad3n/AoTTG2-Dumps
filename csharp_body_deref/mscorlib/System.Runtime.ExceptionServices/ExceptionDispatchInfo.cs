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
		[Address(RVA = "0x4EDAAE0", Offset = "0x4EDAAE0", VA = "0x4EDAAE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000466")]
	public Exception SourceException
	{
		[Token(Token = "0x6002247")]
		[Address(RVA = "0x4EDAAF0", Offset = "0x4EDAAF0", VA = "0x4EDAAF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002244")]
	[Address(RVA = "0x4EDA9A0", Offset = "0x4EDA9A0", VA = "0x4EDA9A0")]
	private ExceptionDispatchInfo(Exception exception)
	{
	}

	[Token(Token = "0x6002246")]
	[Address(RVA = "0x4EDA580", Offset = "0x4EDA580", VA = "0x4EDA580")]
	public static ExceptionDispatchInfo Capture(Exception source)
	{
		return null;
	}

	[Token(Token = "0x6002248")]
	[Address(RVA = "0x4EDA640", Offset = "0x4EDA640", VA = "0x4EDA640")]
	[System.Diagnostics.StackTraceHidden]
	public void Throw()
	{
	}

	[Token(Token = "0x6002249")]
	[Address(RVA = "0x4EDAB00", Offset = "0x4EDAB00", VA = "0x4EDAB00")]
	[System.Diagnostics.StackTraceHidden]
	public static void Throw(Exception source)
	{
	}
}
