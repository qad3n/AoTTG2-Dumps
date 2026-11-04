// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.FtpMethodInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002B5")]
internal class FtpMethodInfo
{
	[Token(Token = "0x4000A02")]
	[FieldOffset(Offset = "0x10")]
	internal string Method;

	[Token(Token = "0x4000A03")]
	[FieldOffset(Offset = "0x18")]
	internal FtpOperation Operation;

	[Token(Token = "0x4000A04")]
	[FieldOffset(Offset = "0x1C")]
	internal FtpMethodFlags Flags;

	[Token(Token = "0x4000A05")]
	[FieldOffset(Offset = "0x20")]
	internal string HttpCommand;

	[Token(Token = "0x4000A06")]
	[FieldOffset(Offset = "0x0")]
	private static readonly FtpMethodInfo[] s_knownMethodInfo;

	[Token(Token = "0x170003D7")]
	internal bool IsCommandOnly
	{
		[Token(Token = "0x6001311")]
		[Address(RVA = "0x28F8E70", Offset = "0x28F7470", VA = "0x1828F8E70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003D8")]
	internal bool IsUpload
	{
		[Token(Token = "0x6001312")]
		[Address(RVA = "0x28F8E80", Offset = "0x28F7480", VA = "0x1828F8E80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003D9")]
	internal bool IsDownload
	{
		[Token(Token = "0x6001313")]
		[Address(RVA = "0x25D0F30", Offset = "0x25CF530", VA = "0x1825D0F30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003DA")]
	internal bool ShouldParseForResponseUri
	{
		[Token(Token = "0x6001314")]
		[Address(RVA = "0x28F8E90", Offset = "0x28F7490", VA = "0x1828F8E90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600130F")]
	[Address(RVA = "0x28F8E20", Offset = "0x28F7420", VA = "0x1828F8E20")]
	internal FtpMethodInfo(string method, FtpOperation operation, FtpMethodFlags flags, string httpCommand)
	{
	}

	[Token(Token = "0x6001310")]
	[Address(RVA = "0x28F8570", Offset = "0x28F6B70", VA = "0x1828F8570")]
	internal bool HasFlag(FtpMethodFlags flags)
	{
		return default(bool);
	}

	[Token(Token = "0x6001315")]
	[Address(RVA = "0x28F8410", Offset = "0x28F6A10", VA = "0x1828F8410")]
	internal static FtpMethodInfo GetMethodInfo(string method)
	{
		return null;
	}
}
