// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.RunWorkerCompletedEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000212")]
public class RunWorkerCompletedEventArgs : AsyncCompletedEventArgs
{
	[Token(Token = "0x40007CF")]
	[FieldOffset(Offset = "0x28")]
	private object result;

	[Token(Token = "0x170002ED")]
	public object Result
	{
		[Token(Token = "0x6000E2D")]
		[Address(RVA = "0x28DB220", Offset = "0x28D9820", VA = "0x1828DB220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002EE")]
	[Browsable(false)]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public new object UserState
	{
		[Token(Token = "0x6000E2E")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E2C")]
	[Address(RVA = "0x28DB1D0", Offset = "0x28D97D0", VA = "0x1828DB1D0")]
	public RunWorkerCompletedEventArgs(object result, Exception error, bool cancelled)
	{
	}
}
