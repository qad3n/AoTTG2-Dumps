// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.DiagnosticsConfigurationHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Configuration;
using System.Xml;
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x20003BE")]
[Obsolete("This class has been deprecated.  http://go.microsoft.com/fwlink/?linkid=14202")]
public class DiagnosticsConfigurationHandler : IConfigurationSectionHandler
{
	[Token(Token = "0x600193E")]
	[Address(RVA = "0x61D2510", Offset = "0x61D1510", VA = "0x61D2510")]
	public DiagnosticsConfigurationHandler()
	{
	}

	[Token(Token = "0x600193F")]
	[Address(RVA = "0x61D2540", Offset = "0x61D1540", VA = "0x61D2540", Slot = "4")]
	public virtual object Create(object parent, object configContext, XmlNode section)
	{
		return null;
	}
}
