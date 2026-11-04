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
		[Address(RVA = "0x12906C0", Offset = "0x128ECC0", VA = "0x1812906C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000217")]
	public bool Succeeded
	{
		[Token(Token = "0x60012B7")]
		[Address(RVA = "0xAE2930", Offset = "0xAE0F30", VA = "0x180AE2930")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000218")]
	public bool HasWarnings
	{
		[Token(Token = "0x60012B8")]
		[Address(RVA = "0x2E72C00", Offset = "0x2E71200", VA = "0x182E72C00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000219")]
	public Exception AsException
	{
		[Token(Token = "0x60012BB")]
		[Address(RVA = "0x2E729C0", Offset = "0x2E70FC0", VA = "0x182E729C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021A")]
	public IEnumerable<string> RawMessages
	{
		[Token(Token = "0x60012BC")]
		[Address(RVA = "0x2E72C50", Offset = "0x2E71250", VA = "0x182E72C50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021B")]
	public string FormattedMessages
	{
		[Token(Token = "0x60012BD")]
		[Address(RVA = "0x2E72B30", Offset = "0x2E71130", VA = "0x182E72B30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60012B0")]
	[Address(RVA = "0x2E722B0", Offset = "0x2E708B0", VA = "0x182E722B0")]
	public void AddMessage(string message)
	{
	}

	[Token(Token = "0x60012B1")]
	[Address(RVA = "0x2E723B0", Offset = "0x2E709B0", VA = "0x182E723B0")]
	public void AddMessages(fsResult result)
	{
	}

	[Token(Token = "0x60012B2")]
	[Address(RVA = "0x2E72730", Offset = "0x2E70D30", VA = "0x182E72730")]
	public fsResult Merge(fsResult other)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012B3")]
	[Address(RVA = "0x2E72810", Offset = "0x2E70E10", VA = "0x182E72810")]
	public static fsResult Warn(string warning)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012B4")]
	[Address(RVA = "0x2E72630", Offset = "0x2E70C30", VA = "0x182E72630")]
	public static fsResult Fail(string warning)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012B5")]
	[Address(RVA = "0x2E72CC0", Offset = "0x2E712C0", VA = "0x182E72CC0")]
	public static fsResult operator +(fsResult a, fsResult b)
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012B9")]
	[Address(RVA = "0x2E72590", Offset = "0x2E70B90", VA = "0x182E72590")]
	public fsResult AssertSuccess()
	{
		return default(fsResult);
	}

	[Token(Token = "0x60012BA")]
	[Address(RVA = "0x2E72470", Offset = "0x2E70A70", VA = "0x182E72470")]
	public fsResult AssertSuccessWithoutWarnings()
	{
		return default(fsResult);
	}
}
