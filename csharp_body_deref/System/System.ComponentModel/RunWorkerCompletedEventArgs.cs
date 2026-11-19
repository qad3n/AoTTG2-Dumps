// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.RunWorkerCompletedEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001D3")]
public class RunWorkerCompletedEventArgs : AsyncCompletedEventArgs
{
	[Token(Token = "0x4000700")]
	[FieldOffset(Offset = "0x28")]
	private object result;

	[Token(Token = "0x170002BE")]
	public object Result
	{
		[Token(Token = "0x6000C6D")]
		[Address(RVA = "0x62646D0", Offset = "0x62636D0", VA = "0x62646D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002BF")]
	[Browsable(false)]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public new object UserState
	{
		[Token(Token = "0x6000C6E")]
		[Address(RVA = "0x62646F0", Offset = "0x62636F0", VA = "0x62646F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C6C")]
	[Address(RVA = "0x6264690", Offset = "0x6263690", VA = "0x6264690")]
	public RunWorkerCompletedEventArgs(object result, Exception error, bool cancelled)
	{
	}
}
