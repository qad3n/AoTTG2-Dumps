// ==================== AoTTG2 cross-reference ====================
// Type: System.OperationCanceledException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3CC8DD0", Offset = "0x3CC8DD0", VA = "0x3CC8DD0")]
		get
		{
			return default(CancellationToken);
		}
		[Token(Token = "0x600093B")]
		[Address(RVA = "0x3CC8DE0", Offset = "0x3CC8DE0", VA = "0x3CC8DE0")]
		private set
		{
		}
	}

	[Token(Token = "0x600093C")]
	[Address(RVA = "0x3CC8E00", Offset = "0x3CC8E00", VA = "0x3CC8E00")]
	public OperationCanceledException()
	{
	}

	[Token(Token = "0x600093D")]
	[Address(RVA = "0x3CC8F10", Offset = "0x3CC8F10", VA = "0x3CC8F10")]
	public OperationCanceledException(string message)
	{
	}

	[Token(Token = "0x600093E")]
	[Address(RVA = "0x3CC8F70", Offset = "0x3CC8F70", VA = "0x3CC8F70")]
	public OperationCanceledException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x600093F")]
	[Address(RVA = "0x3CC9030", Offset = "0x3CC9030", VA = "0x3CC9030")]
	public OperationCanceledException(CancellationToken token)
	{
	}

	[Token(Token = "0x6000940")]
	[Address(RVA = "0x3CC9100", Offset = "0x3CC9100", VA = "0x3CC9100")]
	public OperationCanceledException(string message, CancellationToken token)
	{
	}

	[Token(Token = "0x6000941")]
	[Address(RVA = "0x3CC9180", Offset = "0x3CC9180", VA = "0x3CC9180")]
	public OperationCanceledException(string message, Exception innerException, CancellationToken token)
	{
	}

	[Token(Token = "0x6000942")]
	[Address(RVA = "0x3CC9210", Offset = "0x3CC9210", VA = "0x3CC9210")]
	protected OperationCanceledException(SerializationInfo info, StreamingContext context)
	{
	}
}
