// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.UniTaskCancelableAsyncEnumerable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[StructLayout((LayoutKind)3)]
[Token(Token = "0x2000037")]
public readonly struct UniTaskCancelableAsyncEnumerable<T>
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000038")]
	public readonly struct Enumerator
	{
		[Token(Token = "0x4000096")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly IUniTaskAsyncEnumerator<T> enumerator;

		[Token(Token = "0x17000024")]
		public T Current
		{
			[Token(Token = "0x600011C")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x600011B")]
		internal Enumerator(IUniTaskAsyncEnumerator<T> enumerator)
		{
		}

		[Token(Token = "0x600011D")]
		public UniTask<bool> MoveNextAsync()
		{
			return default(UniTask<bool>);
		}

		[Token(Token = "0x600011E")]
		public UniTask DisposeAsync()
		{
			return default(UniTask);
		}
	}

	[Token(Token = "0x4000094")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly IUniTaskAsyncEnumerable<T> enumerable;

	[Token(Token = "0x4000095")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly CancellationToken cancellationToken;

	[Token(Token = "0x6000119")]
	internal UniTaskCancelableAsyncEnumerable(IUniTaskAsyncEnumerable<T> enumerable, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x600011A")]
	public Enumerator GetAsyncEnumerator()
	{
		return default(Enumerator);
	}
}
