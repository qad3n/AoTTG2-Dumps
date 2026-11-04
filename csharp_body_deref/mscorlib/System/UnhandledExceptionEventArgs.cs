// ==================== AoTTG2 cross-reference ====================
// Type: System.UnhandledExceptionEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200014F")]
public class UnhandledExceptionEventArgs : EventArgs
{
	[Token(Token = "0x400047F")]
	[FieldOffset(Offset = "0x10")]
	private object _exception;

	[Token(Token = "0x4000480")]
	[FieldOffset(Offset = "0x18")]
	private bool _isTerminating;

	[Token(Token = "0x170000FF")]
	public object ExceptionObject
	{
		[Token(Token = "0x6000BD9")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000100")]
	public bool IsTerminating
	{
		[Token(Token = "0x6000BDA")]
		[Address(RVA = "0x111AD30", Offset = "0x1119330", VA = "0x18111AD30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000BD8")]
	[Address(RVA = "0x1B57C70", Offset = "0x1B56270", VA = "0x181B57C70")]
	public UnhandledExceptionEventArgs(object exception, bool isTerminating)
	{
	}
}
