using System.Collections.Generic;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200008B")]
public abstract class UriParser
{
	[Token(Token = "0x200008C")]
	private enum UriQuirksVersion
	{
		[Token(Token = "0x4000232")]
		V2 = 2,
		[Token(Token = "0x4000233")]
		V3
	}

	[Token(Token = "0x200008D")]
	private class BuiltInUriParser : UriParser
	{
		[Token(Token = "0x6000276")]
		[Address(RVA = "0x45D8DC0", Offset = "0x45D8DC0", VA = "0x45D8DC0")]
		internal BuiltInUriParser(string lwrCaseScheme, int defaultPort, UriSyntaxFlags syntaxFlags)
		{
		}
	}

	[Token(Token = "0x4000217")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, UriParser> m_Table;

	[Token(Token = "0x4000218")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<string, UriParser> m_TempTable;

	[Token(Token = "0x4000219")]
	[FieldOffset(Offset = "0x10")]
	private UriSyntaxFlags m_Flags;

	[Token(Token = "0x400021A")]
	[FieldOffset(Offset = "0x14")]
	private UriSyntaxFlags m_UpdatableFlags;

	[Token(Token = "0x400021B")]
	[FieldOffset(Offset = "0x18")]
	private bool m_UpdatableFlagsUsed;

	[Token(Token = "0x400021C")]
	[FieldOffset(Offset = "0x1C")]
	private int m_Port;

	[Token(Token = "0x400021D")]
	[FieldOffset(Offset = "0x20")]
	private string m_Scheme;

	[Token(Token = "0x400021E")]
	[FieldOffset(Offset = "0x10")]
	internal static UriParser HttpUri;

	[Token(Token = "0x400021F")]
	[FieldOffset(Offset = "0x18")]
	internal static UriParser HttpsUri;

	[Token(Token = "0x4000220")]
	[FieldOffset(Offset = "0x20")]
	internal static UriParser WsUri;

	[Token(Token = "0x4000221")]
	[FieldOffset(Offset = "0x28")]
	internal static UriParser WssUri;

	[Token(Token = "0x4000222")]
	[FieldOffset(Offset = "0x30")]
	internal static UriParser FtpUri;

	[Token(Token = "0x4000223")]
	[FieldOffset(Offset = "0x38")]
	internal static UriParser FileUri;

	[Token(Token = "0x4000224")]
	[FieldOffset(Offset = "0x40")]
	internal static UriParser GopherUri;

	[Token(Token = "0x4000225")]
	[FieldOffset(Offset = "0x48")]
	internal static UriParser NntpUri;

	[Token(Token = "0x4000226")]
	[FieldOffset(Offset = "0x50")]
	internal static UriParser NewsUri;

	[Token(Token = "0x4000227")]
	[FieldOffset(Offset = "0x58")]
	internal static UriParser MailToUri;

	[Token(Token = "0x4000228")]
	[FieldOffset(Offset = "0x60")]
	internal static UriParser UuidUri;

	[Token(Token = "0x4000229")]
	[FieldOffset(Offset = "0x68")]
	internal static UriParser TelnetUri;

	[Token(Token = "0x400022A")]
	[FieldOffset(Offset = "0x70")]
	internal static UriParser LdapUri;

	[Token(Token = "0x400022B")]
	[FieldOffset(Offset = "0x78")]
	internal static UriParser NetTcpUri;

	[Token(Token = "0x400022C")]
	[FieldOffset(Offset = "0x80")]
	internal static UriParser NetPipeUri;

	[Token(Token = "0x400022D")]
	[FieldOffset(Offset = "0x88")]
	internal static UriParser VsMacrosUri;

	[Token(Token = "0x400022E")]
	[FieldOffset(Offset = "0x90")]
	private static readonly UriQuirksVersion s_QuirksVersion;

	[Token(Token = "0x400022F")]
	[FieldOffset(Offset = "0x94")]
	private static readonly UriSyntaxFlags HttpSyntaxFlags;

	[Token(Token = "0x4000230")]
	[FieldOffset(Offset = "0x98")]
	private static readonly UriSyntaxFlags FileSyntaxFlags;

	[Token(Token = "0x1700007D")]
	internal string SchemeName
	{
		[Token(Token = "0x600025D")]
		[Address(RVA = "0x45D77A0", Offset = "0x45D77A0", VA = "0x45D77A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007E")]
	internal int DefaultPort
	{
		[Token(Token = "0x600025E")]
		[Address(RVA = "0x45D77B0", Offset = "0x45D77B0", VA = "0x45D77B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700007F")]
	internal static bool ShouldUseLegacyV2Quirks
	{
		[Token(Token = "0x6000265")]
		[Address(RVA = "0x45D7640", Offset = "0x45D7640", VA = "0x45D7640")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000080")]
	internal UriSyntaxFlags Flags
	{
		[Token(Token = "0x6000267")]
		[Address(RVA = "0x45D8E60", Offset = "0x45D8E60", VA = "0x45D8E60")]
		get
		{
			return default(UriSyntaxFlags);
		}
	}

	[Token(Token = "0x17000081")]
	internal bool IsSimple
	{
		[Token(Token = "0x600026F")]
		[Address(RVA = "0x45D92F0", Offset = "0x45D92F0", VA = "0x45D92F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x45D77C0", Offset = "0x45D77C0", VA = "0x45D77C0", Slot = "4")]
	protected virtual UriParser OnNewUri()
	{
		return null;
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x45D77D0", Offset = "0x45D77D0", VA = "0x45D77D0", Slot = "5")]
	protected virtual void InitializeAndValidate(Uri uri, out UriFormatException parsingError)
	{
	}

	[Token(Token = "0x6000261")]
	[Address(RVA = "0x45D7800", Offset = "0x45D7800", VA = "0x45D7800", Slot = "6")]
	protected virtual string Resolve(Uri baseUri, Uri relativeUri, out UriFormatException parsingError)
	{
		return null;
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x45D79F0", Offset = "0x45D79F0", VA = "0x45D79F0", Slot = "7")]
	protected virtual bool IsBaseOf(Uri baseUri, Uri relativeUri)
	{
		return default(bool);
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x45D7A10", Offset = "0x45D7A10", VA = "0x45D7A10", Slot = "8")]
	protected virtual string GetComponents(Uri uri, UriComponents components, UriFormat format)
	{
		return null;
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x45D7C20", Offset = "0x45D7C20", VA = "0x45D7C20", Slot = "9")]
	protected virtual bool IsWellFormedOriginalString(Uri uri)
	{
		return default(bool);
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x45D7C40", Offset = "0x45D7C40", VA = "0x45D7C40")]
	static UriParser()
	{
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x45D3880", Offset = "0x45D3880", VA = "0x45D3880")]
	internal bool NotAny(UriSyntaxFlags flags)
	{
		return default(bool);
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x45D3840", Offset = "0x45D3840", VA = "0x45D3840")]
	internal bool InFact(UriSyntaxFlags flags)
	{
		return default(bool);
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x45D8EC0", Offset = "0x45D8EC0", VA = "0x45D8EC0")]
	internal bool IsAllSet(UriSyntaxFlags flags)
	{
		return default(bool);
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x45D8E70", Offset = "0x45D8E70", VA = "0x45D8E70")]
	private bool IsFullMatch(UriSyntaxFlags flags, UriSyntaxFlags expected)
	{
		return default(bool);
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x45D8F10", Offset = "0x45D8F10", VA = "0x45D8F10")]
	internal UriParser(UriSyntaxFlags flags)
	{
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x45D8F50", Offset = "0x45D8F50", VA = "0x45D8F50")]
	internal static UriParser FindOrFetchAsUnknownV1Syntax(string lwrCaseScheme)
	{
		return null;
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x45D3770", Offset = "0x45D3770", VA = "0x45D3770")]
	internal static UriParser GetSyntax(string lwrCaseScheme)
	{
		return null;
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x45D9300", Offset = "0x45D9300", VA = "0x45D9300")]
	internal UriParser InternalOnNewUri()
	{
		return null;
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x45D9360", Offset = "0x45D9360", VA = "0x45D9360")]
	internal void InternalValidate(Uri thisUri, out UriFormatException parsingError)
	{
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x45D9380", Offset = "0x45D9380", VA = "0x45D9380")]
	internal string InternalResolve(Uri thisBaseUri, Uri uriLink, out UriFormatException parsingError)
	{
		return null;
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x45D93A0", Offset = "0x45D93A0", VA = "0x45D93A0")]
	internal bool InternalIsBaseOf(Uri thisBaseUri, Uri uriLink)
	{
		return default(bool);
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x45D93C0", Offset = "0x45D93C0", VA = "0x45D93C0")]
	internal string InternalGetComponents(Uri thisUri, UriComponents uriComponents, UriFormat uriFormat)
	{
		return null;
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x45D93E0", Offset = "0x45D93E0", VA = "0x45D93E0")]
	internal bool InternalIsWellFormedOriginalString(Uri thisUri)
	{
		return default(bool);
	}
}
