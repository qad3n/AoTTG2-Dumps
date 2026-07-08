using System.Configuration;
using System.Xml;
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x20003A7")]
[Obsolete("This class has been deprecated.  http://go.microsoft.com/fwlink/?linkid=14202")]
public class DiagnosticsConfigurationHandler : IConfigurationSectionHandler
{
	[Token(Token = "0x6001854")]
	[Address(RVA = "0x45D0920", Offset = "0x45D0920", VA = "0x45D0920")]
	public DiagnosticsConfigurationHandler()
	{
	}

	[Token(Token = "0x6001855")]
	[Address(RVA = "0x45D0950", Offset = "0x45D0950", VA = "0x45D0950", Slot = "4")]
	public virtual object Create(object parent, object configContext, XmlNode section)
	{
		return null;
	}
}
