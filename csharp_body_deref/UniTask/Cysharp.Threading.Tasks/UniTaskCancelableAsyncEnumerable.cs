using System.Runtime.InteropServices;
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[StructLayout((LayoutKind)3)]
[Token(Token = "0x2000036")]
public readonly struct UniTaskCancelableAsyncEnumerable<T>
{
	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000037")]
	public readonly struct Enumerator
	{
		[Token(Token = "0x4000093")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly IUniTaskAsyncEnumerator<T> enumerator;

		[Token(Token = "0x17000024")]
		public T Current
		{
			[Token(Token = "0x6000116")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x6000115")]
		internal Enumerator(IUniTaskAsyncEnumerator<T> enumerator)
		{
		}

		[Token(Token = "0x6000117")]
		public UniTask<bool> MoveNextAsync()
		{
			return default(UniTask<bool>);
		}

		[Token(Token = "0x6000118")]
		public UniTask DisposeAsync()
		{
			return default(UniTask);
		}
	}

	[Token(Token = "0x4000091")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly IUniTaskAsyncEnumerable<T> enumerable;

	[Token(Token = "0x4000092")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly CancellationToken cancellationToken;

	[Token(Token = "0x6000113")]
	internal UniTaskCancelableAsyncEnumerable(IUniTaskAsyncEnumerable<T> enumerable, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000114")]
	public Enumerator GetAsyncEnumerator()
	{
		return default(Enumerator);
	}
}
