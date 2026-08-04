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
		[Address(RVA = "0x3CDA2E0", Offset = "0x3CDA2E0", VA = "0x3CDA2E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FF")]
	public bool IsTerminating
	{
		[Token(Token = "0x6000B94")]
		[Address(RVA = "0x3CDA2F0", Offset = "0x3CDA2F0", VA = "0x3CDA2F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000B92")]
	[Address(RVA = "0x3CDA270", Offset = "0x3CDA270", VA = "0x3CDA270")]
	public UnhandledExceptionEventArgs(object exception, bool isTerminating)
	{
	}
}
