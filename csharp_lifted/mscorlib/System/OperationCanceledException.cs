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
	[Token(Token = "0x4000385")]
	[FieldOffset(Offset = "0x90")]
	private CancellationToken _cancellationToken;

	[Token(Token = "0x170000A1")]
	public CancellationToken CancellationToken
	{
		[Token(Token = "0x6000950")]
		[Address(RVA = "0x54CC6C0", Offset = "0x54CB6C0", VA = "0x54CC6C0")]
		get
		{
			return default(CancellationToken);
		}
		[Token(Token = "0x6000951")]
		[Address(RVA = "0x54CC6D0", Offset = "0x54CB6D0", VA = "0x54CC6D0")]
		private set
		{
		}
	}

	[Token(Token = "0x6000952")]
	[Address(RVA = "0x54CC6F0", Offset = "0x54CB6F0", VA = "0x54CC6F0")]
	public OperationCanceledException()
	{
	}

	[Token(Token = "0x6000953")]
	[Address(RVA = "0x54CC800", Offset = "0x54CB800", VA = "0x54CC800")]
	public OperationCanceledException(string message)
	{
	}

	[Token(Token = "0x6000954")]
	[Address(RVA = "0x54CC860", Offset = "0x54CB860", VA = "0x54CC860")]
	public OperationCanceledException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x54CC920", Offset = "0x54CB920", VA = "0x54CC920")]
	public OperationCanceledException(CancellationToken token)
	{
	}

	[Token(Token = "0x6000956")]
	[Address(RVA = "0x54CC9F0", Offset = "0x54CB9F0", VA = "0x54CC9F0")]
	public OperationCanceledException(string message, CancellationToken token)
	{
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x54CCA70", Offset = "0x54CBA70", VA = "0x54CCA70")]
	public OperationCanceledException(string message, Exception innerException, CancellationToken token)
	{
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x54CCB00", Offset = "0x54CBB00", VA = "0x54CCB00")]
	protected OperationCanceledException(SerializationInfo info, StreamingContext context)
	{
	}
}
