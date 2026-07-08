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
		[Address(RVA = "0x4F2D250", Offset = "0x4F2D250", VA = "0x4F2D250")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000055")]
	public override string Message
	{
		[Token(Token = "0x60003D3")]
		[Address(RVA = "0x4F2D650", Offset = "0x4F2D650", VA = "0x4F2D650", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x4F2C110", Offset = "0x4F2C110", VA = "0x4F2C110")]
	public AggregateException()
	{
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x4F2C280", Offset = "0x4F2C280", VA = "0x4F2C280")]
	public AggregateException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x4F2C400", Offset = "0x4F2C400", VA = "0x4F2C400")]
	public AggregateException(IEnumerable<Exception> innerExceptions)
	{
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x4F2C4F0", Offset = "0x4F2C4F0", VA = "0x4F2C4F0")]
	public AggregateException(params Exception[] innerExceptions)
	{
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x4F2C440", Offset = "0x4F2C440", VA = "0x4F2C440")]
	public AggregateException(string message, IEnumerable<Exception> innerExceptions)
	{
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x4F2C530", Offset = "0x4F2C530", VA = "0x4F2C530")]
	public AggregateException(string message, params Exception[] innerExceptions)
	{
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x4F2C540", Offset = "0x4F2C540", VA = "0x4F2C540")]
	private AggregateException(string message, IList<Exception> innerExceptions)
	{
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x4F2C990", Offset = "0x4F2C990", VA = "0x4F2C990")]
	internal AggregateException(IEnumerable<ExceptionDispatchInfo> innerExceptionInfos)
	{
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x4F2C9D0", Offset = "0x4F2C9D0", VA = "0x4F2C9D0")]
	internal AggregateException(string message, IEnumerable<ExceptionDispatchInfo> innerExceptionInfos)
	{
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x4F2CA80", Offset = "0x4F2CA80", VA = "0x4F2CA80")]
	private AggregateException(string message, IList<ExceptionDispatchInfo> innerExceptionInfos)
	{
	}

	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x4F2CF50", Offset = "0x4F2CF50", VA = "0x4F2CF50")]
	protected AggregateException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x4F2D120", Offset = "0x4F2D120", VA = "0x4F2D120", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x4F2D260", Offset = "0x4F2D260", VA = "0x4F2D260")]
	public AggregateException Flatten()
	{
		return null;
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x4F2D7E0", Offset = "0x4F2D7E0", VA = "0x4F2D7E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
