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

[Token(Token = "0x20003A7")]
[Obsolete("This class has been deprecated.  http://go.microsoft.com/fwlink/?linkid=14202")]
public class DiagnosticsConfigurationHandler : IConfigurationSectionHandler
{
	[Token(Token = "0x6001854")]
	[Address(RVA = "0x48F5A20", Offset = "0x48F5A20", VA = "0x48F5A20")]
	public DiagnosticsConfigurationHandler()
	{
	}

	[Token(Token = "0x6001855")]
	[Address(RVA = "0x48F5A50", Offset = "0x48F5A50", VA = "0x48F5A50", Slot = "4")]
	public virtual object Create(object parent, object configContext, XmlNode section)
	{
		return null;
	}
}
