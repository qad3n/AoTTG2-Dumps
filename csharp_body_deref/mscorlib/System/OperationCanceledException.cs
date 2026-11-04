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
[Token(Token = "0x2000122")]
public class OperationCanceledException : SystemException
{
	[NonSerialized]
	[Token(Token = "0x400042A")]
	[FieldOffset(Offset = "0x90")]
	private CancellationToken _cancellationToken;

	[Token(Token = "0x170000A1")]
	public CancellationToken CancellationToken
	{
		[Token(Token = "0x6000975")]
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
		get
		{
			return default(CancellationToken);
		}
		[Token(Token = "0x6000976")]
		[Address(RVA = "0x1B45580", Offset = "0x1B43B80", VA = "0x181B45580")]
		private set
		{
		}
	}

	[Token(Token = "0x6000977")]
	[Address(RVA = "0x1B45370", Offset = "0x1B43970", VA = "0x181B45370")]
	public OperationCanceledException()
	{
	}

	[Token(Token = "0x6000978")]
	[Address(RVA = "0x1B45480", Offset = "0x1B43A80", VA = "0x181B45480")]
	public OperationCanceledException(string message)
	{
	}

	[Token(Token = "0x6000979")]
	[Address(RVA = "0x1B452F0", Offset = "0x1B438F0", VA = "0x181B452F0")]
	public OperationCanceledException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x600097A")]
	[Address(RVA = "0x1B45240", Offset = "0x1B43840", VA = "0x181B45240")]
	public OperationCanceledException(CancellationToken token)
	{
	}

	[Token(Token = "0x600097B")]
	[Address(RVA = "0x1B454F0", Offset = "0x1B43AF0", VA = "0x181B454F0")]
	public OperationCanceledException(string message, CancellationToken token)
	{
	}

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x1B45400", Offset = "0x1B43A00", VA = "0x181B45400")]
	public OperationCanceledException(string message, Exception innerException, CancellationToken token)
	{
	}

	[Token(Token = "0x600097D")]
	[Address(RVA = "0x1B3E0C0", Offset = "0x1B3C6C0", VA = "0x181B3E0C0")]
	protected OperationCanceledException(SerializationInfo info, StreamingContext context)
	{
	}
}
