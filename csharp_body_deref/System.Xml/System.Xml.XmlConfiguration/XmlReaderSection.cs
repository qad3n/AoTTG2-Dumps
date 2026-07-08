using System.ComponentModel;
using Il2CppDummyDll;

namespace System.Xml.XmlConfiguration;

[Token(Token = "0x2000158")]
[EditorBrowsable(EditorBrowsableState.Never)]
public sealed class XmlReaderSection
{
	[Token(Token = "0x170003E0")]
	internal static bool ProhibitDefaultUrlResolver
	{
		[Token(Token = "0x6000F13")]
		[Address(RVA = "0x4500070", Offset = "0x4500070", VA = "0x4500070")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003E1")]
	internal static bool CollapseWhiteSpaceIntoEmptyString
	{
		[Token(Token = "0x6000F15")]
		[Address(RVA = "0x45000C0", Offset = "0x45000C0", VA = "0x45000C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F14")]
	[Address(RVA = "0x4500080", Offset = "0x4500080", VA = "0x4500080")]
	internal static XmlResolver CreateDefaultResolver()
	{
		return null;
	}
}
