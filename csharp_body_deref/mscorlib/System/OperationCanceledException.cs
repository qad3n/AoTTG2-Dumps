using System.Runtime.Serialization;
using System.Threading;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000FA")]
public class OperationCanceledException : SystemException
{
	[NonSerialized]
	[Token(Token = "0x40003A5")]
	[FieldOffset(Offset = "0x90")]
	private CancellationToken _cancellationToken;

	[Token(Token = "0x170000A1")]
	public CancellationToken CancellationToken
	{
		[Token(Token = "0x600093A")]
		[Address(RVA = "0x4FE32B0", Offset = "0x4FE32B0", VA = "0x4FE32B0")]
		get
		{
			return default(CancellationToken);
		}
		[Token(Token = "0x600093B")]
		[Address(RVA = "0x4FE32C0", Offset = "0x4FE32C0", VA = "0x4FE32C0")]
		private set
		{
		}
	}

	[Token(Token = "0x600093C")]
	[Address(RVA = "0x4FE32E0", Offset = "0x4FE32E0", VA = "0x4FE32E0")]
	public OperationCanceledException()
	{
	}

	[Token(Token = "0x600093D")]
	[Address(RVA = "0x4FE33F0", Offset = "0x4FE33F0", VA = "0x4FE33F0")]
	public OperationCanceledException(string message)
	{
	}

	[Token(Token = "0x600093E")]
	[Address(RVA = "0x4FE3450", Offset = "0x4FE3450", VA = "0x4FE3450")]
	public OperationCanceledException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x600093F")]
	[Address(RVA = "0x4FE3510", Offset = "0x4FE3510", VA = "0x4FE3510")]
	public OperationCanceledException(CancellationToken token)
	{
	}

	[Token(Token = "0x6000940")]
	[Address(RVA = "0x4FE35E0", Offset = "0x4FE35E0", VA = "0x4FE35E0")]
	public OperationCanceledException(string message, CancellationToken token)
	{
	}

	[Token(Token = "0x6000941")]
	[Address(RVA = "0x4FE3660", Offset = "0x4FE3660", VA = "0x4FE3660")]
	public OperationCanceledException(string message, Exception innerException, CancellationToken token)
	{
	}

	[Token(Token = "0x6000942")]
	[Address(RVA = "0x4FE36F0", Offset = "0x4FE36F0", VA = "0x4FE36F0")]
	protected OperationCanceledException(SerializationInfo info, StreamingContext context)
	{
	}
}
