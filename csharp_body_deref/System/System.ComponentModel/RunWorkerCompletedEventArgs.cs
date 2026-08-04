// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.RunWorkerCompletedEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000307")]
public class RunWorkerCompletedEventArgs : AsyncCompletedEventArgs
{
	[Token(Token = "0x4000E98")]
	[FieldOffset(Offset = "0x28")]
	private object result;

	[Token(Token = "0x1700047E")]
	public object Result
	{
		[Token(Token = "0x60013E5")]
		[Address(RVA = "0x48C68B0", Offset = "0x48C68B0", VA = "0x48C68B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700047F")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Browsable(false)]
	public new object UserState
	{
		[Token(Token = "0x60013E6")]
		[Address(RVA = "0x48C68D0", Offset = "0x48C68D0", VA = "0x48C68D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60013E4")]
	[Address(RVA = "0x48C6870", Offset = "0x48C6870", VA = "0x48C6870")]
	public RunWorkerCompletedEventArgs(object result, Exception error, bool cancelled)
	{
	}
}
