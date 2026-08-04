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

[Token(Token = "0x200020F")]
public struct fsResult
{
	[Token(Token = "0x40009A1")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] EmptyStringArray;

	[Token(Token = "0x40009A2")]
	[FieldOffset(Offset = "0x0")]
	private bool _success;

	[Token(Token = "0x40009A3")]
	[FieldOffset(Offset = "0x8")]
	private List<string> _messages;

	[Token(Token = "0x40009A4")]
	[FieldOffset(Offset = "0x8")]
	public static fsResult Success;

	[Token(Token = "0x17000209")]
	public bool Failed
	{
		[Token(Token = "0x600127E")]
		[Address(RVA = "0x4D68FA0", Offset = "0x4D68FA0", VA = "0x4D68FA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020A")]
	public bool Succeeded
	{
		[Token(Token = "0x600127F")]
		[Address(RVA = "0x4D80F90", Offset = "0x4D80F90", VA = "0x4D80F90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020B")]
	public bool HasWarnings
	{
		[Token(Token = "0x6001280")]
		[Address(RVA = "0x4D80FA0", Offset = "0x4D80FA0", VA = "0x4D80FA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020C")]
	public Exception AsException
	{
		[Token(Token = "0x6001283")]
		[Address(RVA = "0x4D80FE0", Offset = "0x4D80FE0", VA = "0x4D80FE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020D")]
	public IEnumerable<string> RawMessages
	{
		[Token(Token = "0x6001284")]
		[Address(RVA = "0x4D812D0", Offset = "0x4D812D0", VA = "0x4D812D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020E")]
	public string FormattedMessages
	{
		[Token(Token = "0x6001285")]
		[Address(RVA = "0x4D81340", Offset = "0x4D81340", VA = "0x4D81340")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001278")]
	[Address(RVA = "0x4D80DD0", Offset = "0x4D80DD0", VA = "0x4D80DD0")]
	public void AddMessage(string message)
	{
	}

	[Token(Token = "0x6001279")]
	[Address(RVA = "0x4D68EF0", Offset = "0x4D68EF0", VA = "0x4D68EF0")]
	public void AddMessages(fsResult result)
	{
	}

	[Token(Token = "0x600127A")]
	[Address(RVA = "0x4D80EC0", Offset = "0x4D80EC0", VA = "0x4D80EC0")]
	public fsResult Merge(fsResult other)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600127B")]
	[Address(RVA = "0x4D6C8F0", Offset = "0x4D6C8F0", VA = "0x4D6C8F0")]
	public static fsResult Warn(string warning)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600127C")]
	[Address(RVA = "0x4D6A2A0", Offset = "0x4D6A2A0", VA = "0x4D6A2A0")]
	public static fsResult Fail(string warning)
	{
		return default(fsResult);
	}

	[Token(Token = "0x600127D")]
	[Address(RVA = "0x4D69560", Offset = "0x4D69560", VA = "0x4D69560")]
	public static fsResult operator +(fsResult a, fsResult b)
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001281")]
	[Address(RVA = "0x4D7F0C0", Offset = "0x4D7F0C0", VA = "0x4D7F0C0")]
	public fsResult AssertSuccess()
	{
		return default(fsResult);
	}

	[Token(Token = "0x6001282")]
	[Address(RVA = "0x4D81190", Offset = "0x4D81190", VA = "0x4D81190")]
	public fsResult AssertSuccessWithoutWarnings()
	{
		return default(fsResult);
	}
}
