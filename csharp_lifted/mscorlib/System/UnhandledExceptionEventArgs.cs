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
	[Token(Token = "0x40003DD")]
	[FieldOffset(Offset = "0x10")]
	private object _exception;

	[Token(Token = "0x40003DE")]
	[FieldOffset(Offset = "0x18")]
	private bool _isTerminating;

	[Token(Token = "0x170000FF")]
	public object ExceptionObject
	{
		[Token(Token = "0x6000BB7")]
		[Address(RVA = "0x54DE4A0", Offset = "0x54DD4A0", VA = "0x54DE4A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000100")]
	public bool IsTerminating
	{
		[Token(Token = "0x6000BB8")]
		[Address(RVA = "0x54DE4B0", Offset = "0x54DD4B0", VA = "0x54DE4B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000BB6")]
	[Address(RVA = "0x54DE430", Offset = "0x54DD430", VA = "0x54DE430")]
	public UnhandledExceptionEventArgs(object exception, bool isTerminating)
	{
	}
}
