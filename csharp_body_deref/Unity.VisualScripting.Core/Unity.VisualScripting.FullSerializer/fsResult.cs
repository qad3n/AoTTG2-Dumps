using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x2000216")]
public struct fsResult
{
	[Token(Token = "0x40009B3")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] EmptyStringArray;

	[Token(Token = "0x40009B4")]
	[FieldOffset(Offset = "0x0")]
	private bool _success;

	[Token(Token = "0x40009B5")]
	[FieldOffset(Offset = "0x8")]
	private List<string> _messages;

	[Token(Token = "0x40009B6")]
	[FieldOffset(Offset = "0x8")]
	public static fsResult Success;

	[Token(Token = "0x17000213")]
	public bool Failed
	{
		[Token(Token = "0x60012A9")]
		[Address(RVA = "0x4A5BC90", Offset = "0x4A5BC90", VA = "0x4A5BC90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000214")]
	public bool Succeeded
	{
		[Token(Token = "0x60012AA")]
		[Address(RVA = "0x4A5BCA0", Offset = "0x4A5BCA0", VA = "0x4A5BCA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000215")]
	public bool HasWarnings
	{
		[Token(Token = "0x60012AB")]
		[Address(RVA = "0x4A5BCB0", Offset = "0x4A5BCB0", VA = "0x4A5BCB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000216")]
	public Exception AsException
	{
		[Token(Token = "0x60012AE")]
		[Address(RVA = "0x4A5BD90", Offset = "0x4A5BD90", VA = "0x4A5BD90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000217")]
	public IEnumerable<string> RawMessages
	{
		[Token(Token = "0x60012AF")]
		[Address(RVA = "0x4A5C080", Offset = "0x4A5C080", VA = "0x4A5C080")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000218")]
	public string FormattedMessages
	{
		[Token(Token = "0x60012B0")]
		[Address(RVA = "0x4A5C0F0", Offset = "0x4A5C0F0", VA = "0x4A5C0F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60012A3")]
	[Address(RVA = "0x4A5B7D0", Offset = "0x4A5B7D0", VA = "0x4A5B7D0")]
	public void AddMessage(string message)
	{
	}

	[Token(Token = "0x60012A4")]
	[Address(RVA = "0x4A5B8C0", Offset = "0x4A5B8C0", VA = "0x4A5B8C0")]
	public void AddMessages(fsResult result)
	{
	}

	[Token(Token = "0x60012A5")]
	[Address(RVA = "0x4A5B970", Offset = "0x4A5B970", VA = "0x4A5B970")]
	public fsResult Merge(fsResult other)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012A6")]
	[Address(RVA = "0x4A5BA40", Offset = "0x4A5BA40", VA = "0x4A5BA40")]
	public static fsResult Warn(string warning)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012A7")]
	[Address(RVA = "0x4A5BB30", Offset = "0x4A5BB30", VA = "0x4A5BB30")]
	public static fsResult Fail(string warning)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012A8")]
	[Address(RVA = "0x4A5BC20", Offset = "0x4A5BC20", VA = "0x4A5BC20")]
	public static fsResult operator +(fsResult a, fsResult b)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012AC")]
	[Address(RVA = "0x4A5BCF0", Offset = "0x4A5BCF0", VA = "0x4A5BCF0")]
	public fsResult AssertSuccess()
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012AD")]
	[Address(RVA = "0x4A5BF40", Offset = "0x4A5BF40", VA = "0x4A5BF40")]
	public fsResult AssertSuccessWithoutWarnings()
	{
		return default(fsResult);
	}
}
