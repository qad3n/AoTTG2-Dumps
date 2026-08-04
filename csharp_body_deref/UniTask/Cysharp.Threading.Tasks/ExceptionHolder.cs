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

[Token(Token = "0x200011E")]
internal class ExceptionHolder
{
	[Token(Token = "0x4000435")]
	[FieldOffset(Offset = "0x10")]
	private ExceptionDispatchInfo exception;

	[Token(Token = "0x4000436")]
	[FieldOffset(Offset = "0x18")]
	private bool calledGet;

	[Token(Token = "0x60006D1")]
	[Address(RVA = "0x49EACB0", Offset = "0x49EACB0", VA = "0x49EACB0")]
	public ExceptionHolder(ExceptionDispatchInfo exception)
	{
	}

	[Token(Token = "0x60006D2")]
	[Address(RVA = "0x49EACE0", Offset = "0x49EACE0", VA = "0x49EACE0")]
	public ExceptionDispatchInfo GetException()
	{
		return null;
	}

	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x49EAD40", Offset = "0x49EAD40", VA = "0x49EAD40", Slot = "1")]
	~ExceptionHolder()
	{
	}
}
