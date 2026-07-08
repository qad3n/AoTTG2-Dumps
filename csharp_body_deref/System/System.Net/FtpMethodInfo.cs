using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200012D")]
internal class FtpMethodInfo
{
	[Token(Token = "0x40005EC")]
	[FieldOffset(Offset = "0x10")]
	internal string Method;

	[Token(Token = "0x40005ED")]
	[FieldOffset(Offset = "0x18")]
	internal FtpOperation Operation;

	[Token(Token = "0x40005EE")]
	[FieldOffset(Offset = "0x1C")]
	internal FtpMethodFlags Flags;

	[Token(Token = "0x40005EF")]
	[FieldOffset(Offset = "0x20")]
	internal string HttpCommand;

	[Token(Token = "0x40005F0")]
	[FieldOffset(Offset = "0x0")]
	private static readonly FtpMethodInfo[] s_knownMethodInfo;

	[Token(Token = "0x17000182")]
	internal bool IsCommandOnly
	{
		[Token(Token = "0x6000752")]
		[Address(RVA = "0x462E040", Offset = "0x462E040", VA = "0x462E040")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000183")]
	internal bool IsUpload
	{
		[Token(Token = "0x6000753")]
		[Address(RVA = "0x462F030", Offset = "0x462F030", VA = "0x462F030")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000184")]
	internal bool IsDownload
	{
		[Token(Token = "0x6000754")]
		[Address(RVA = "0x462F040", Offset = "0x462F040", VA = "0x462F040")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000185")]
	internal bool ShouldParseForResponseUri
	{
		[Token(Token = "0x6000755")]
		[Address(RVA = "0x462C100", Offset = "0x462C100", VA = "0x462C100")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000750")]
	[Address(RVA = "0x4630820", Offset = "0x4630820", VA = "0x4630820")]
	internal FtpMethodInfo(string method, FtpOperation operation, FtpMethodFlags flags, string httpCommand)
	{
	}

	[Token(Token = "0x6000751")]
	[Address(RVA = "0x462DE90", Offset = "0x462DE90", VA = "0x462DE90")]
	internal bool HasFlag(FtpMethodFlags flags)
	{
		return default(bool);
	}

	[Token(Token = "0x6000756")]
	[Address(RVA = "0x4630880", Offset = "0x4630880", VA = "0x4630880")]
	internal static FtpMethodInfo GetMethodInfo(string method)
	{
		return null;
	}
}
