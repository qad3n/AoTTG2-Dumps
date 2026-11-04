// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DoWorkEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000206")]
public class DoWorkEventArgs : CancelEventArgs
{
	[Token(Token = "0x4000788")]
	[FieldOffset(Offset = "0x18")]
	private object result;

	[Token(Token = "0x4000789")]
	[FieldOffset(Offset = "0x20")]
	private object argument;

	[Token(Token = "0x170002CB")]
	[SRDescription("Argument passed into the worker handler from BackgroundWorker.RunWorkerAsync.")]
	public object Argument
	{
		[Token(Token = "0x6000D8C")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002CC")]
	[SRDescription("Result from the worker function.")]
	public object Result
	{
		[Token(Token = "0x6000D8D")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D8E")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x6000D8B")]
	[Address(RVA = "0x28B25A0", Offset = "0x28B0BA0", VA = "0x1828B25A0")]
	public DoWorkEventArgs(object argument)
	{
	}
}
