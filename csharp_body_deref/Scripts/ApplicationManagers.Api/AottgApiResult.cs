// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Api.AottgApiResult
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Api/AottgApiResult.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace ApplicationManagers.Api;

[Token(Token = "0x20007C8")]
public sealed class AottgApiResult
{
	[Token(Token = "0x17000E52")]
	public bool Success
	{
		[Token(Token = "0x6004A8F")]
		[Address(RVA = "0x43CEE10", Offset = "0x43CEE10", VA = "0x43CEE10")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6004A90")]
		[Address(RVA = "0x43CEE20", Offset = "0x43CEE20", VA = "0x43CEE20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E53")]
	public long StatusCode
	{
		[Token(Token = "0x6004A91")]
		[Address(RVA = "0x43CEE30", Offset = "0x43CEE30", VA = "0x43CEE30")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6004A92")]
		[Address(RVA = "0x43CEE40", Offset = "0x43CEE40", VA = "0x43CEE40")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E54")]
	public string ResponseText
	{
		[Token(Token = "0x6004A93")]
		[Address(RVA = "0x43CEE50", Offset = "0x43CEE50", VA = "0x43CEE50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004A94")]
		[Address(RVA = "0x43CEE60", Offset = "0x43CEE60", VA = "0x43CEE60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E55")]
	public JSONNode Json
	{
		[Token(Token = "0x6004A95")]
		[Address(RVA = "0x43CEE70", Offset = "0x43CEE70", VA = "0x43CEE70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004A96")]
		[Address(RVA = "0x43CEE80", Offset = "0x43CEE80", VA = "0x43CEE80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E56")]
	public string Error
	{
		[Token(Token = "0x6004A97")]
		[Address(RVA = "0x43CEE90", Offset = "0x43CEE90", VA = "0x43CEE90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004A98")]
		[Address(RVA = "0x43CEEA0", Offset = "0x43CEEA0", VA = "0x43CEEA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E57")]
	public string RawError
	{
		[Token(Token = "0x6004A99")]
		[Address(RVA = "0x43CEEB0", Offset = "0x43CEEB0", VA = "0x43CEEB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004A9A")]
		[Address(RVA = "0x43CEEC0", Offset = "0x43CEEC0", VA = "0x43CEEC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E58")]
	public bool IsCanceled
	{
		[Token(Token = "0x6004A9B")]
		[Address(RVA = "0x43CEED0", Offset = "0x43CEED0", VA = "0x43CEED0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6004A9C")]
		[Address(RVA = "0x43CEEE0", Offset = "0x43CEEE0", VA = "0x43CEEE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6004A9D")]
	[Address(RVA = "0x43CE2C0", Offset = "0x43CE2C0", VA = "0x43CE2C0")]
	public static AottgApiResult Ok(long statusCode, string responseText, JSONNode json)
	{
		return null;
	}

	[Token(Token = "0x6004A9E")]
	[Address(RVA = "0x43CE1F0", Offset = "0x43CE1F0", VA = "0x43CE1F0")]
	public static AottgApiResult Fail(long statusCode, string responseText, string error, string rawError, bool isCanceled = false)
	{
		return null;
	}

	[Token(Token = "0x6004A9F")]
	[Address(RVA = "0x43CEEF0", Offset = "0x43CEEF0", VA = "0x43CEEF0")]
	public AottgApiResult()
	{
	}
}
