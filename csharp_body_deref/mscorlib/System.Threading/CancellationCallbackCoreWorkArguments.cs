using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001E6")]
internal struct CancellationCallbackCoreWorkArguments
{
	[Token(Token = "0x4000973")]
	[FieldOffset(Offset = "0x0")]
	internal System.Threading.SparselyPopulatedArrayFragment<System.Threading.CancellationCallbackInfo> _currArrayFragment;

	[Token(Token = "0x4000974")]
	[FieldOffset(Offset = "0x8")]
	internal int _currArrayIndex;

	[Token(Token = "0x60011DF")]
	[Address(RVA = "0x50472F0", Offset = "0x50472F0", VA = "0x50472F0")]
	public CancellationCallbackCoreWorkArguments(System.Threading.SparselyPopulatedArrayFragment<System.Threading.CancellationCallbackInfo> currArrayFragment, int currArrayIndex)
	{
	}
}
