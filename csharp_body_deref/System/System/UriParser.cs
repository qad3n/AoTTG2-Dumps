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

[Token(Token = "0x20000CA")]
public abstract class UriParser
{
	[Token(Token = "0x20000CB")]
	private enum UriQuirksVersion
	{
		[Token(Token = "0x4000302")]
		V2 = 2,
		[Token(Token = "0x4000303")]
		V3
	}

	[Token(Token = "0x20000CC")]
	private class BuiltInUriParser : UriParser
	{
		[Token(Token = "0x600042A")]
		[Address(RVA = "0x28485F0", Offset = "0x2846BF0", VA = "0x1828485F0")]
		internal BuiltInUriParser(string lwrCaseScheme, int defaultPort, UriSyntaxFlags syntaxFlags)
		{
		}
	}

	[Token(Token = "0x40002E7")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, UriParser> m_Table;

	[Token(Token = "0x40002E8")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<string, UriParser> m_TempTable;

	[Token(Token = "0x40002E9")]
	[FieldOffset(Offset = "0x10")]
	private UriSyntaxFlags m_Flags;

	[Token(Token = "0x40002EA")]
	[FieldOffset(Offset = "0x14")]
	private UriSyntaxFlags m_UpdatableFlags;

	[Token(Token = "0x40002EB")]
	[FieldOffset(Offset = "0x18")]
	private bool m_UpdatableFlagsUsed;

	[Token(Token = "0x40002EC")]
	[FieldOffset(Offset = "0x1C")]
	private int m_Port;

	[Token(Token = "0x40002ED")]
	[FieldOffset(Offset = "0x20")]
	private string m_Scheme;

	[Token(Token = "0x40002EE")]
	[FieldOffset(Offset = "0x10")]
	internal static UriParser HttpUri;

	[Token(Token = "0x40002EF")]
	[FieldOffset(Offset = "0x18")]
	internal static UriParser HttpsUri;

	[Token(Token = "0x40002F0")]
	[FieldOffset(Offset = "0x20")]
	internal static UriParser WsUri;

	[Token(Token = "0x40002F1")]
	[FieldOffset(Offset = "0x28")]
	internal static UriParser WssUri;

	[Token(Token = "0x40002F2")]
	[FieldOffset(Offset = "0x30")]
	internal static UriParser FtpUri;

	[Token(Token = "0x40002F3")]
	[FieldOffset(Offset = "0x38")]
	internal static UriParser FileUri;

	[Token(Token = "0x40002F4")]
	[FieldOffset(Offset = "0x40")]
	internal static UriParser GopherUri;

	[Token(Token = "0x40002F5")]
	[FieldOffset(Offset = "0x48")]
	internal static UriParser NntpUri;

	[Token(Token = "0x40002F6")]
	[FieldOffset(Offset = "0x50")]
	internal static UriParser NewsUri;

	[Token(Token = "0x40002F7")]
	[FieldOffset(Offset = "0x58")]
	internal static UriParser MailToUri;

	[Token(Token = "0x40002F8")]
	[FieldOffset(Offset = "0x60")]
	internal static UriParser UuidUri;

	[Token(Token = "0x40002F9")]
	[FieldOffset(Offset = "0x68")]
	internal static UriParser TelnetUri;

	[Token(Token = "0x40002FA")]
	[FieldOffset(Offset = "0x70")]
	internal static UriParser LdapUri;

	[Token(Token = "0x40002FB")]
	[FieldOffset(Offset = "0x78")]
	internal static UriParser NetTcpUri;

	[Token(Token = "0x40002FC")]
	[FieldOffset(Offset = "0x80")]
	internal static UriParser NetPipeUri;

	[Token(Token = "0x40002FD")]
	[FieldOffset(Offset = "0x88")]
	internal static UriParser VsMacrosUri;

	[Token(Token = "0x40002FE")]
	[FieldOffset(Offset = "0x90")]
	private static readonly UriQuirksVersion s_QuirksVersion;

	[Token(Token = "0x40002FF")]
	[FieldOffset(Offset = "0x94")]
	private static readonly UriSyntaxFlags HttpSyntaxFlags;

	[Token(Token = "0x4000300")]
	[FieldOffset(Offset = "0x98")]
	private static readonly UriSyntaxFlags FileSyntaxFlags;

	[Token(Token = "0x170000AC")]
	internal string SchemeName
	{
		[Token(Token = "0x6000411")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AD")]
	internal int DefaultPort
	{
		[Token(Token = "0x6000412")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000AE")]
	internal static bool ShouldUseLegacyV2Quirks
	{
		[Token(Token = "0x6000419")]
		[Address(RVA = "0x28464A0", Offset = "0x2844AA0", VA = "0x1828464A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000AF")]
	internal UriSyntaxFlags Flags
	{
		[Token(Token = "0x600041B")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(UriSyntaxFlags);
		}
	}

	[Token(Token = "0x170000B0")]
	internal bool IsSimple
	{
		[Token(Token = "0x6000423")]
		[Address(RVA = "0x2846490", Offset = "0x2844A90", VA = "0x182846490")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "4")]
	protected virtual UriParser OnNewUri()
	{
		return null;
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x28452A0", Offset = "0x28438A0", VA = "0x1828452A0", Slot = "5")]
	protected virtual void InitializeAndValidate(Uri uri, out UriFormatException parsingError)
	{
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x2845540", Offset = "0x2843B40", VA = "0x182845540", Slot = "6")]
	protected virtual string Resolve(Uri baseUri, Uri relativeUri, out UriFormatException parsingError)
	{
		return null;
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x2845440", Offset = "0x2843A40", VA = "0x182845440", Slot = "7")]
	protected virtual bool IsBaseOf(Uri baseUri, Uri relativeUri)
	{
		return default(bool);
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x2844EF0", Offset = "0x28434F0", VA = "0x182844EF0", Slot = "8")]
	protected virtual string GetComponents(Uri uri, UriComponents components, UriFormat format)
	{
		return null;
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x28454C0", Offset = "0x2843AC0", VA = "0x1828454C0", Slot = "9")]
	protected virtual bool IsWellFormedOriginalString(Uri uri)
	{
		return default(bool);
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x2845770", Offset = "0x2843D70", VA = "0x182845770")]
	static UriParser()
	{
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x28454E0", Offset = "0x2843AE0", VA = "0x1828454E0")]
	internal bool NotAny(UriSyntaxFlags flags)
	{
		return default(bool);
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x2845240", Offset = "0x2843840", VA = "0x182845240")]
	internal bool InFact(UriSyntaxFlags flags)
	{
		return default(bool);
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x28453E0", Offset = "0x28439E0", VA = "0x1828453E0")]
	internal bool IsAllSet(UriSyntaxFlags flags)
	{
		return default(bool);
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x2845470", Offset = "0x2843A70", VA = "0x182845470")]
	private bool IsFullMatch(UriSyntaxFlags flags, UriSyntaxFlags expected)
	{
		return default(bool);
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x2846440", Offset = "0x2844A40", VA = "0x182846440")]
	internal UriParser(UriSyntaxFlags flags)
	{
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x2844BA0", Offset = "0x28431A0", VA = "0x182844BA0")]
	internal static UriParser FindOrFetchAsUnknownV1Syntax(string lwrCaseScheme)
	{
		return null;
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x2845160", Offset = "0x2843760", VA = "0x182845160")]
	internal static UriParser GetSyntax(string lwrCaseScheme)
	{
		return null;
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x2845340", Offset = "0x2843940", VA = "0x182845340")]
	internal UriParser InternalOnNewUri()
	{
		return null;
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x28453C0", Offset = "0x28439C0", VA = "0x1828453C0")]
	internal void InternalValidate(Uri thisUri, out UriFormatException parsingError)
	{
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x28453A0", Offset = "0x28439A0", VA = "0x1828453A0")]
	internal string InternalResolve(Uri thisBaseUri, Uri uriLink, out UriFormatException parsingError)
	{
		return null;
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x2845300", Offset = "0x2843900", VA = "0x182845300")]
	internal bool InternalIsBaseOf(Uri thisBaseUri, Uri uriLink)
	{
		return default(bool);
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x28452E0", Offset = "0x28438E0", VA = "0x1828452E0")]
	internal string InternalGetComponents(Uri thisUri, UriComponents uriComponents, UriFormat uriFormat)
	{
		return null;
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x2845320", Offset = "0x2843920", VA = "0x182845320")]
	internal bool InternalIsWellFormedOriginalString(Uri thisUri)
	{
		return default(bool);
	}
}
