// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.fsResult
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x2000216")]
public struct fsResult
{
	[Token(Token = "0x40009B1")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] EmptyStringArray;

	[Token(Token = "0x40009B2")]
	[FieldOffset(Offset = "0x0")]
	private bool _success;

	[Token(Token = "0x40009B3")]
	[FieldOffset(Offset = "0x8")]
	private List<string> _messages;

	[Token(Token = "0x40009B4")]
	[FieldOffset(Offset = "0x8")]
	public static fsResult Success;

	[Token(Token = "0x17000216")]
	public bool Failed
	{
		[Token(Token = "0x60012B6")]
		[Address(RVA = "0x6869D80", Offset = "0x6868D80", VA = "0x6869D80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000217")]
	public bool Succeeded
	{
		[Token(Token = "0x60012B7")]
		[Address(RVA = "0x6869D90", Offset = "0x6868D90", VA = "0x6869D90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000218")]
	public bool HasWarnings
	{
		[Token(Token = "0x60012B8")]
		[Address(RVA = "0x6869DA0", Offset = "0x6868DA0", VA = "0x6869DA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000219")]
	public Exception AsException
	{
		[Token(Token = "0x60012BB")]
		[Address(RVA = "0x6869E80", Offset = "0x6868E80", VA = "0x6869E80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021A")]
	public IEnumerable<string> RawMessages
	{
		[Token(Token = "0x60012BC")]
		[Address(RVA = "0x686A130", Offset = "0x6869130", VA = "0x686A130")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021B")]
	public string FormattedMessages
	{
		[Token(Token = "0x60012BD")]
		[Address(RVA = "0x686A1A0", Offset = "0x68691A0", VA = "0x686A1A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60012B0")]
	[Address(RVA = "0x68698B0", Offset = "0x68688B0", VA = "0x68698B0")]
	public void AddMessage(string message)
	{
	}

	[Token(Token = "0x60012B1")]
	[Address(RVA = "0x68699A0", Offset = "0x68689A0", VA = "0x68699A0")]
	public void AddMessages(fsResult result)
	{
	}

	[Token(Token = "0x60012B2")]
	[Address(RVA = "0x6869A50", Offset = "0x6868A50", VA = "0x6869A50")]
	public fsResult Merge(fsResult other)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012B3")]
	[Address(RVA = "0x6869B20", Offset = "0x6868B20", VA = "0x6869B20")]
	public static fsResult Warn(string warning)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012B4")]
	[Address(RVA = "0x6869C20", Offset = "0x6868C20", VA = "0x6869C20")]
	public static fsResult Fail(string warning)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012B5")]
	[Address(RVA = "0x6869D10", Offset = "0x6868D10", VA = "0x6869D10")]
	public static fsResult operator +(fsResult a, fsResult b)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012B9")]
	[Address(RVA = "0x6869DE0", Offset = "0x6868DE0", VA = "0x6869DE0")]
	public fsResult AssertSuccess()
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012BA")]
	[Address(RVA = "0x686A000", Offset = "0x6869000", VA = "0x686A000")]
	public fsResult AssertSuccessWithoutWarnings()
	{
		return default(fsResult);
	}
}
