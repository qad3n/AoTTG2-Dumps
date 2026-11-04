// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.CancellationCallbackCoreWorkArguments
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000211")]
internal struct CancellationCallbackCoreWorkArguments
{
	[Token(Token = "0x40009C6")]
	[FieldOffset(Offset = "0x0")]
	internal System.Threading.SparselyPopulatedArrayFragment<System.Threading.CancellationCallbackInfo> _currArrayFragment;

	[Token(Token = "0x40009C7")]
	[FieldOffset(Offset = "0x8")]
	internal int _currArrayIndex;

	[Token(Token = "0x600123A")]
	[Address(RVA = "0xCFB160", Offset = "0xCF9760", VA = "0x180CFB160")]
	public CancellationCallbackCoreWorkArguments(System.Threading.SparselyPopulatedArrayFragment<System.Threading.CancellationCallbackInfo> currArrayFragment, int currArrayIndex)
	{
	}
}
