// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.CancellationCallbackCoreWorkArguments
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3D2CE10", Offset = "0x3D2CE10", VA = "0x3D2CE10")]
	public CancellationCallbackCoreWorkArguments(System.Threading.SparselyPopulatedArrayFragment<System.Threading.CancellationCallbackInfo> currArrayFragment, int currArrayIndex)
	{
	}
}
