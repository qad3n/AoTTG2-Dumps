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
		[Token(Token = "0x60003D9")]
		[Address(RVA = "0x5418FC0", Offset = "0x5417FC0", VA = "0x5418FC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000055")]
	public override string Message
	{
		[Token(Token = "0x60003DB")]
		[Address(RVA = "0x54193C0", Offset = "0x54183C0", VA = "0x54193C0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x5417E60", Offset = "0x5416E60", VA = "0x5417E60")]
	public AggregateException()
	{
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x5417FD0", Offset = "0x5416FD0", VA = "0x5417FD0")]
	public AggregateException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x5418150", Offset = "0x5417150", VA = "0x5418150")]
	public AggregateException(IEnumerable<Exception> innerExceptions)
	{
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x5418250", Offset = "0x5417250", VA = "0x5418250")]
	public AggregateException(params Exception[] innerExceptions)
	{
	}

	[Token(Token = "0x60003D1")]
	[Address(RVA = "0x54181A0", Offset = "0x54171A0", VA = "0x54181A0")]
	public AggregateException(string message, IEnumerable<Exception> innerExceptions)
	{
	}

	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x54182A0", Offset = "0x54172A0", VA = "0x54182A0")]
	public AggregateException(string message, params Exception[] innerExceptions)
	{
	}

	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x54182B0", Offset = "0x54172B0", VA = "0x54182B0")]
	private AggregateException(string message, IList<Exception> innerExceptions)
	{
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x54186F0", Offset = "0x54176F0", VA = "0x54186F0")]
	internal AggregateException(IEnumerable<ExceptionDispatchInfo> innerExceptionInfos)
	{
	}

	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x5418740", Offset = "0x5417740", VA = "0x5418740")]
	internal AggregateException(string message, IEnumerable<ExceptionDispatchInfo> innerExceptionInfos)
	{
	}

	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x54187F0", Offset = "0x54177F0", VA = "0x54187F0")]
	private AggregateException(string message, IList<ExceptionDispatchInfo> innerExceptionInfos)
	{
	}

	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x5418CC0", Offset = "0x5417CC0", VA = "0x5418CC0")]
	protected AggregateException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x5418E90", Offset = "0x5417E90", VA = "0x5418E90", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x5418FD0", Offset = "0x5417FD0", VA = "0x5418FD0")]
	public AggregateException Flatten()
	{
		return null;
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x5419550", Offset = "0x5418550", VA = "0x5419550", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
