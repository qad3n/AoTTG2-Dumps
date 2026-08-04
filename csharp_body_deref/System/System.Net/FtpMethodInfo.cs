// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.FtpMethodInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4953140", Offset = "0x4953140", VA = "0x4953140")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000183")]
	internal bool IsUpload
	{
		[Token(Token = "0x6000753")]
		[Address(RVA = "0x4954130", Offset = "0x4954130", VA = "0x4954130")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000184")]
	internal bool IsDownload
	{
		[Token(Token = "0x6000754")]
		[Address(RVA = "0x4954140", Offset = "0x4954140", VA = "0x4954140")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000185")]
	internal bool ShouldParseForResponseUri
	{
		[Token(Token = "0x6000755")]
		[Address(RVA = "0x4951200", Offset = "0x4951200", VA = "0x4951200")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000750")]
	[Address(RVA = "0x4955920", Offset = "0x4955920", VA = "0x4955920")]
	internal FtpMethodInfo(string method, FtpOperation operation, FtpMethodFlags flags, string httpCommand)
	{
	}

	[Token(Token = "0x6000751")]
	[Address(RVA = "0x4952F90", Offset = "0x4952F90", VA = "0x4952F90")]
	internal bool HasFlag(FtpMethodFlags flags)
	{
		return default(bool);
	}

	[Token(Token = "0x6000756")]
	[Address(RVA = "0x4955980", Offset = "0x4955980", VA = "0x4955980")]
	internal static FtpMethodInfo GetMethodInfo(string method)
	{
		return null;
	}
}
