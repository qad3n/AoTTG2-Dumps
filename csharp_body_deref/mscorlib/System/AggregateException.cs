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
[Token(Token = "0x20000B1")]
[DebuggerDisplay("Count = {InnerExceptionCount}")]
public class AggregateException : Exception
{
	[Token(Token = "0x4000283")]
	[FieldOffset(Offset = "0x90")]
	private ReadOnlyCollection<Exception> m_innerExceptions;

	[Token(Token = "0x17000054")]
	public ReadOnlyCollection<Exception> InnerExceptions
	{
		[Token(Token = "0x6000404")]
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000055")]
	public override string Message
	{
		[Token(Token = "0x6000406")]
		[Address(RVA = "0x1A77870", Offset = "0x1A75E70", VA = "0x181A77870", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x1A77740", Offset = "0x1A75D40", VA = "0x181A77740")]
	public AggregateException()
	{
	}

	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x1A772C0", Offset = "0x1A758C0", VA = "0x181A772C0")]
	public AggregateException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x1A76E30", Offset = "0x1A75430", VA = "0x181A76E30")]
	public AggregateException(IEnumerable<Exception> innerExceptions)
	{
	}

	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x1A776F0", Offset = "0x1A75CF0", VA = "0x181A776F0")]
	public AggregateException(params Exception[] innerExceptions)
	{
	}

	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x1A76FA0", Offset = "0x1A755A0", VA = "0x181A76FA0")]
	public AggregateException(string message, IEnumerable<Exception> innerExceptions)
	{
	}

	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x1A76EF0", Offset = "0x1A754F0", VA = "0x181A76EF0")]
	public AggregateException(string message, params Exception[] innerExceptions)
	{
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x1A77040", Offset = "0x1A75640", VA = "0x181A77040")]
	private AggregateException(string message, IList<Exception> innerExceptions)
	{
	}

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x1A77450", Offset = "0x1A75A50", VA = "0x181A77450")]
	internal AggregateException(IEnumerable<ExceptionDispatchInfo> innerExceptionInfos)
	{
	}

	[Token(Token = "0x6000400")]
	[Address(RVA = "0x1A76F00", Offset = "0x1A75500", VA = "0x181A76F00")]
	internal AggregateException(string message, IEnumerable<ExceptionDispatchInfo> innerExceptionInfos)
	{
	}

	[Token(Token = "0x6000401")]
	[Address(RVA = "0x1A76B70", Offset = "0x1A75170", VA = "0x181A76B70")]
	private AggregateException(string message, IList<ExceptionDispatchInfo> innerExceptionInfos)
	{
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x1A77510", Offset = "0x1A75B10", VA = "0x181A77510")]
	protected AggregateException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x1A76840", Offset = "0x1A74E40", VA = "0x181A76840", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x1A765A0", Offset = "0x1A74BA0", VA = "0x181A765A0")]
	public AggregateException Flatten()
	{
		return null;
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x1A76970", Offset = "0x1A74F70", VA = "0x181A76970", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
