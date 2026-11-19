// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.FtpMethodInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000276")]
internal class FtpMethodInfo
{
	[Token(Token = "0x4000933")]
	[FieldOffset(Offset = "0x10")]
	internal string Method;

	[Token(Token = "0x4000934")]
	[FieldOffset(Offset = "0x18")]
	internal FtpOperation Operation;

	[Token(Token = "0x4000935")]
	[FieldOffset(Offset = "0x1C")]
	internal FtpMethodFlags Flags;

	[Token(Token = "0x4000936")]
	[FieldOffset(Offset = "0x20")]
	internal string HttpCommand;

	[Token(Token = "0x4000937")]
	[FieldOffset(Offset = "0x0")]
	private static readonly FtpMethodInfo[] s_knownMethodInfo;

	[Token(Token = "0x170003A8")]
	internal bool IsCommandOnly
	{
		[Token(Token = "0x6001153")]
		[Address(RVA = "0x629BA10", Offset = "0x629AA10", VA = "0x629BA10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003A9")]
	internal bool IsUpload
	{
		[Token(Token = "0x6001154")]
		[Address(RVA = "0x629C960", Offset = "0x629B960", VA = "0x629C960")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003AA")]
	internal bool IsDownload
	{
		[Token(Token = "0x6001155")]
		[Address(RVA = "0x629C970", Offset = "0x629B970", VA = "0x629C970")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003AB")]
	internal bool ShouldParseForResponseUri
	{
		[Token(Token = "0x6001156")]
		[Address(RVA = "0x6299BD0", Offset = "0x6298BD0", VA = "0x6299BD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001151")]
	[Address(RVA = "0x629DF00", Offset = "0x629CF00", VA = "0x629DF00")]
	internal FtpMethodInfo(string method, FtpOperation operation, FtpMethodFlags flags, string httpCommand)
	{
	}

	[Token(Token = "0x6001152")]
	[Address(RVA = "0x629B880", Offset = "0x629A880", VA = "0x629B880")]
	internal bool HasFlag(FtpMethodFlags flags)
	{
		return default(bool);
	}

	[Token(Token = "0x6001157")]
	[Address(RVA = "0x629DF60", Offset = "0x629CF60", VA = "0x629DF60")]
	internal static FtpMethodInfo GetMethodInfo(string method)
	{
		return null;
	}
}
