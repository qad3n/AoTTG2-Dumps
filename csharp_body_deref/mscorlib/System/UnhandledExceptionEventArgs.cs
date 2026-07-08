using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000128")]
public class UnhandledExceptionEventArgs : EventArgs
{
	[Token(Token = "0x4000422")]
	[FieldOffset(Offset = "0x10")]
	private object _exception;

	[Token(Token = "0x4000423")]
	[FieldOffset(Offset = "0x18")]
	private bool _isTerminating;

	[Token(Token = "0x170000FE")]
	public object ExceptionObject
	{
		[Token(Token = "0x6000B93")]
		[Address(RVA = "0x4FF47C0", Offset = "0x4FF47C0", VA = "0x4FF47C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FF")]
	public bool IsTerminating
	{
		[Token(Token = "0x6000B94")]
		[Address(RVA = "0x4FF47D0", Offset = "0x4FF47D0", VA = "0x4FF47D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000B92")]
	[Address(RVA = "0x4FF4750", Offset = "0x4FF4750", VA = "0x4FF4750")]
	public UnhandledExceptionEventArgs(object exception, bool isTerminating)
	{
	}
}
