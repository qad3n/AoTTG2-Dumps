// ==================== AoTTG2 cross-reference ====================
// Type: System.UriParser
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200008B")]
public abstract class UriParser
{
	[Token(Token = "0x200008C")]
	private enum UriQuirksVersion
	{
		[Token(Token = "0x4000233")]
		V2 = 2,
		[Token(Token = "0x4000234")]
		V3
	}

	[Token(Token = "0x200008D")]
	private class BuiltInUriParser : UriParser
	{
		[Token(Token = "0x6000276")]
		[Address(RVA = "0x61DA740", Offset = "0x61D9740", VA = "0x61DA740")]
		internal BuiltInUriParser(string lwrCaseScheme, int defaultPort, UriSyntaxFlags syntaxFlags)
		{
		}
	}

	[Token(Token = "0x4000218")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, UriParser> m_Table;

	[Token(Token = "0x4000219")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<string, UriParser> m_TempTable;

	[Token(Token = "0x400021A")]
	[FieldOffset(Offset = "0x10")]
	private UriSyntaxFlags m_Flags;

	[Token(Token = "0x400021B")]
	[FieldOffset(Offset = "0x14")]
	private UriSyntaxFlags m_UpdatableFlags;

	[Token(Token = "0x400021C")]
	[FieldOffset(Offset = "0x18")]
	private bool m_UpdatableFlagsUsed;

	[Token(Token = "0x400021D")]
	[FieldOffset(Offset = "0x1C")]
	private int m_Port;

	[Token(Token = "0x400021E")]
	[FieldOffset(Offset = "0x20")]
	private string m_Scheme;

	[Token(Token = "0x400021F")]
	[FieldOffset(Offset = "0x10")]
	internal static UriParser HttpUri;

	[Token(Token = "0x4000220")]
	[FieldOffset(Offset = "0x18")]
	internal static UriParser HttpsUri;

	[Token(Token = "0x4000221")]
	[FieldOffset(Offset = "0x20")]
	internal static UriParser WsUri;

	[Token(Token = "0x4000222")]
	[FieldOffset(Offset = "0x28")]
	internal static UriParser WssUri;

	[Token(Token = "0x4000223")]
	[FieldOffset(Offset = "0x30")]
	internal static UriParser FtpUri;

	[Token(Token = "0x4000224")]
	[FieldOffset(Offset = "0x38")]
	internal static UriParser FileUri;

	[Token(Token = "0x4000225")]
	[FieldOffset(Offset = "0x40")]
	internal static UriParser GopherUri;

	[Token(Token = "0x4000226")]
	[FieldOffset(Offset = "0x48")]
	internal static UriParser NntpUri;

	[Token(Token = "0x4000227")]
	[FieldOffset(Offset = "0x50")]
	internal static UriParser NewsUri;

	[Token(Token = "0x4000228")]
	[FieldOffset(Offset = "0x58")]
	internal static UriParser MailToUri;

	[Token(Token = "0x4000229")]
	[FieldOffset(Offset = "0x60")]
	internal static UriParser UuidUri;

	[Token(Token = "0x400022A")]
	[FieldOffset(Offset = "0x68")]
	internal static UriParser TelnetUri;

	[Token(Token = "0x400022B")]
	[FieldOffset(Offset = "0x70")]
	internal static UriParser LdapUri;

	[Token(Token = "0x400022C")]
	[FieldOffset(Offset = "0x78")]
	internal static UriParser NetTcpUri;

	[Token(Token = "0x400022D")]
	[FieldOffset(Offset = "0x80")]
	internal static UriParser NetPipeUri;

	[Token(Token = "0x400022E")]
	[FieldOffset(Offset = "0x88")]
	internal static UriParser VsMacrosUri;

	[Token(Token = "0x400022F")]
	[FieldOffset(Offset = "0x90")]
	private static readonly UriQuirksVersion s_QuirksVersion;

	[Token(Token = "0x4000230")]
	[FieldOffset(Offset = "0x94")]
	private static readonly UriSyntaxFlags HttpSyntaxFlags;

	[Token(Token = "0x4000231")]
	[FieldOffset(Offset = "0x98")]
	private static readonly UriSyntaxFlags FileSyntaxFlags;

	[Token(Token = "0x1700007D")]
	internal string SchemeName
	{
		[Token(Token = "0x600025D")]
		[Address(RVA = "0x61D9120", Offset = "0x61D8120", VA = "0x61D9120")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007E")]
	internal int DefaultPort
	{
		[Token(Token = "0x600025E")]
		[Address(RVA = "0x61D9130", Offset = "0x61D8130", VA = "0x61D9130")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700007F")]
	internal static bool ShouldUseLegacyV2Quirks
	{
		[Token(Token = "0x6000265")]
		[Address(RVA = "0x61D8FC0", Offset = "0x61D7FC0", VA = "0x61D8FC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000080")]
	internal UriSyntaxFlags Flags
	{
		[Token(Token = "0x6000267")]
		[Address(RVA = "0x61DA7E0", Offset = "0x61D97E0", VA = "0x61DA7E0")]
		get
		{
			return default(UriSyntaxFlags);
		}
	}

	[Token(Token = "0x17000081")]
	internal bool IsSimple
	{
		[Token(Token = "0x600026F")]
		[Address(RVA = "0x61DAC50", Offset = "0x61D9C50", VA = "0x61DAC50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x61D9140", Offset = "0x61D8140", VA = "0x61D9140", Slot = "4")]
	protected virtual UriParser OnNewUri()
	{
		return null;
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x61D9150", Offset = "0x61D8150", VA = "0x61D9150", Slot = "5")]
	protected virtual void InitializeAndValidate(Uri uri, out UriFormatException parsingError)
	{
	}

	[Token(Token = "0x6000261")]
	[Address(RVA = "0x61D9180", Offset = "0x61D8180", VA = "0x61D9180", Slot = "6")]
	protected virtual string Resolve(Uri baseUri, Uri relativeUri, out UriFormatException parsingError)
	{
		return null;
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x61D9360", Offset = "0x61D8360", VA = "0x61D9360", Slot = "7")]
	protected virtual bool IsBaseOf(Uri baseUri, Uri relativeUri)
	{
		return default(bool);
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x61D9380", Offset = "0x61D8380", VA = "0x61D9380", Slot = "8")]
	protected virtual string GetComponents(Uri uri, UriComponents components, UriFormat format)
	{
		return null;
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x61D9580", Offset = "0x61D8580", VA = "0x61D9580", Slot = "9")]
	protected virtual bool IsWellFormedOriginalString(Uri uri)
	{
		return default(bool);
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x61D95A0", Offset = "0x61D85A0", VA = "0x61D95A0")]
	static UriParser()
	{
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x61D4ED0", Offset = "0x61D3ED0", VA = "0x61D4ED0")]
	internal bool NotAny(UriSyntaxFlags flags)
	{
		return default(bool);
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x61D4E90", Offset = "0x61D3E90", VA = "0x61D4E90")]
	internal bool InFact(UriSyntaxFlags flags)
	{
		return default(bool);
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x61DA840", Offset = "0x61D9840", VA = "0x61DA840")]
	internal bool IsAllSet(UriSyntaxFlags flags)
	{
		return default(bool);
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x61DA7F0", Offset = "0x61D97F0", VA = "0x61DA7F0")]
	private bool IsFullMatch(UriSyntaxFlags flags, UriSyntaxFlags expected)
	{
		return default(bool);
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x61DA890", Offset = "0x61D9890", VA = "0x61DA890")]
	internal UriParser(UriSyntaxFlags flags)
	{
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x61DA8D0", Offset = "0x61D98D0", VA = "0x61DA8D0")]
	internal static UriParser FindOrFetchAsUnknownV1Syntax(string lwrCaseScheme)
	{
		return null;
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x61D4DC0", Offset = "0x61D3DC0", VA = "0x61D4DC0")]
	internal static UriParser GetSyntax(string lwrCaseScheme)
	{
		return null;
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x61DAC60", Offset = "0x61D9C60", VA = "0x61DAC60")]
	internal UriParser InternalOnNewUri()
	{
		return null;
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x61DACC0", Offset = "0x61D9CC0", VA = "0x61DACC0")]
	internal void InternalValidate(Uri thisUri, out UriFormatException parsingError)
	{
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x61DACE0", Offset = "0x61D9CE0", VA = "0x61DACE0")]
	internal string InternalResolve(Uri thisBaseUri, Uri uriLink, out UriFormatException parsingError)
	{
		return null;
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x61DAD00", Offset = "0x61D9D00", VA = "0x61DAD00")]
	internal bool InternalIsBaseOf(Uri thisBaseUri, Uri uriLink)
	{
		return default(bool);
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x61DAD20", Offset = "0x61D9D20", VA = "0x61DAD20")]
	internal string InternalGetComponents(Uri thisUri, UriComponents uriComponents, UriFormat uriFormat)
	{
		return null;
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x61DAD40", Offset = "0x61D9D40", VA = "0x61DAD40")]
	internal bool InternalIsWellFormedOriginalString(Uri thisUri)
	{
		return default(bool);
	}
}
