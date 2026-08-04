// ==================== AoTTG2 cross-reference ====================
// Type: System.AggregateException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Runtime.ExceptionServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000088")]
[DebuggerDisplay("Count = {InnerExceptionCount}")]
public class AggregateException : Exception
{
	[Token(Token = "0x40001DA")]
	[FieldOffset(Offset = "0x90")]
	private ReadOnlyCollection<Exception> m_innerExceptions;

	[Token(Token = "0x17000054")]
	public ReadOnlyCollection<Exception> InnerExceptions
	{
		[Token(Token = "0x60003D1")]
		[Address(RVA = "0x3C12D70", Offset = "0x3C12D70", VA = "0x3C12D70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000055")]
	public override string Message
	{
		[Token(Token = "0x60003D3")]
		[Address(RVA = "0x3C13170", Offset = "0x3C13170", VA = "0x3C13170", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x3C11C30", Offset = "0x3C11C30", VA = "0x3C11C30")]
	public AggregateException()
	{
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x3C11DA0", Offset = "0x3C11DA0", VA = "0x3C11DA0")]
	public AggregateException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x3C11F20", Offset = "0x3C11F20", VA = "0x3C11F20")]
	public AggregateException(IEnumerable<Exception> innerExceptions)
	{
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x3C12010", Offset = "0x3C12010", VA = "0x3C12010")]
	public AggregateException(params Exception[] innerExceptions)
	{
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x3C11F60", Offset = "0x3C11F60", VA = "0x3C11F60")]
	public AggregateException(string message, IEnumerable<Exception> innerExceptions)
	{
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x3C12050", Offset = "0x3C12050", VA = "0x3C12050")]
	public AggregateException(string message, params Exception[] innerExceptions)
	{
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x3C12060", Offset = "0x3C12060", VA = "0x3C12060")]
	private AggregateException(string message, IList<Exception> innerExceptions)
	{
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x3C124B0", Offset = "0x3C124B0", VA = "0x3C124B0")]
	internal AggregateException(IEnumerable<ExceptionDispatchInfo> innerExceptionInfos)
	{
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x3C124F0", Offset = "0x3C124F0", VA = "0x3C124F0")]
	internal AggregateException(string message, IEnumerable<ExceptionDispatchInfo> innerExceptionInfos)
	{
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x3C125A0", Offset = "0x3C125A0", VA = "0x3C125A0")]
	private AggregateException(string message, IList<ExceptionDispatchInfo> innerExceptionInfos)
	{
	}

	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x3C12A70", Offset = "0x3C12A70", VA = "0x3C12A70")]
	protected AggregateException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x3C12C40", Offset = "0x3C12C40", VA = "0x3C12C40", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x3C12D80", Offset = "0x3C12D80", VA = "0x3C12D80")]
	public AggregateException Flatten()
	{
		return null;
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x3C13300", Offset = "0x3C13300", VA = "0x3C13300", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
