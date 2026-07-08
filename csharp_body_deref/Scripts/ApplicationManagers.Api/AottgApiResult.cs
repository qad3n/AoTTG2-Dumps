using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace ApplicationManagers.Api;

[Token(Token = "0x2000766")]
public sealed class AottgApiResult
{
	[Token(Token = "0x17000DB6")]
	public bool Success
	{
		[Token(Token = "0x600479C")]
		[Address(RVA = "0x40B1490", Offset = "0x40B1490", VA = "0x40B1490")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600479D")]
		[Address(RVA = "0x40B14A0", Offset = "0x40B14A0", VA = "0x40B14A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DB7")]
	public long StatusCode
	{
		[Token(Token = "0x600479E")]
		[Address(RVA = "0x40B14B0", Offset = "0x40B14B0", VA = "0x40B14B0")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600479F")]
		[Address(RVA = "0x40B14C0", Offset = "0x40B14C0", VA = "0x40B14C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DB8")]
	public string ResponseText
	{
		[Token(Token = "0x60047A0")]
		[Address(RVA = "0x40B14D0", Offset = "0x40B14D0", VA = "0x40B14D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60047A1")]
		[Address(RVA = "0x40B14E0", Offset = "0x40B14E0", VA = "0x40B14E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DB9")]
	public JSONNode Json
	{
		[Token(Token = "0x60047A2")]
		[Address(RVA = "0x40B14F0", Offset = "0x40B14F0", VA = "0x40B14F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60047A3")]
		[Address(RVA = "0x40B1500", Offset = "0x40B1500", VA = "0x40B1500")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DBA")]
	public string Error
	{
		[Token(Token = "0x60047A4")]
		[Address(RVA = "0x40B1510", Offset = "0x40B1510", VA = "0x40B1510")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60047A5")]
		[Address(RVA = "0x40B1520", Offset = "0x40B1520", VA = "0x40B1520")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DBB")]
	public string RawError
	{
		[Token(Token = "0x60047A6")]
		[Address(RVA = "0x40B1530", Offset = "0x40B1530", VA = "0x40B1530")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60047A7")]
		[Address(RVA = "0x40B1540", Offset = "0x40B1540", VA = "0x40B1540")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DBC")]
	public bool IsCanceled
	{
		[Token(Token = "0x60047A8")]
		[Address(RVA = "0x40B1550", Offset = "0x40B1550", VA = "0x40B1550")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60047A9")]
		[Address(RVA = "0x40B1560", Offset = "0x40B1560", VA = "0x40B1560")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60047AA")]
	[Address(RVA = "0x40B0940", Offset = "0x40B0940", VA = "0x40B0940")]
	public static AottgApiResult Ok(long statusCode, string responseText, JSONNode json)
	{
		return null;
	}

	[Token(Token = "0x60047AB")]
	[Address(RVA = "0x40B0870", Offset = "0x40B0870", VA = "0x40B0870")]
	public static AottgApiResult Fail(long statusCode, string responseText, string error, string rawError, bool isCanceled = false)
	{
		return null;
	}

	[Token(Token = "0x60047AC")]
	[Address(RVA = "0x40B1570", Offset = "0x40B1570", VA = "0x40B1570")]
	public AottgApiResult()
	{
	}
}
