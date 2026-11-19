// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.ExceptionHolder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.ExceptionServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200011C")]
internal class ExceptionHolder
{
	[Token(Token = "0x4000430")]
	[FieldOffset(Offset = "0x10")]
	private ExceptionDispatchInfo exception;

	[Token(Token = "0x4000431")]
	[FieldOffset(Offset = "0x18")]
	private bool calledGet;

	[Token(Token = "0x60006CF")]
	[Address(RVA = "0x62D9DC0", Offset = "0x62D8DC0", VA = "0x62D9DC0")]
	public ExceptionHolder(ExceptionDispatchInfo exception)
	{
	}

	[Token(Token = "0x60006D0")]
	[Address(RVA = "0x62D9DF0", Offset = "0x62D8DF0", VA = "0x62D9DF0")]
	public ExceptionDispatchInfo GetException()
	{
		return null;
	}

	[Token(Token = "0x60006D1")]
	[Address(RVA = "0x62D9E50", Offset = "0x62D8E50", VA = "0x62D9E50", Slot = "1")]
	~ExceptionHolder()
	{
	}
}
