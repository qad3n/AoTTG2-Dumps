// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.Design.RuntimeLicenseContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Diagnostics;
using System.IO;
using System.Reflection;
using Il2CppDummyDll;

namespace System.ComponentModel.Design;

[Token(Token = "0x2000325")]
internal class RuntimeLicenseContext : LicenseContext
{
	[Token(Token = "0x4000ED6")]
	[FieldOffset(Offset = "0x0")]
	private static TraceSwitch s_runtimeLicenseContextSwitch;

	[Token(Token = "0x4000ED7")]
	[FieldOffset(Offset = "0x10")]
	internal Hashtable savedLicenseKeys;

	[Token(Token = "0x600150C")]
	[Address(RVA = "0x48DF9A0", Offset = "0x48DF9A0", VA = "0x48DF9A0")]
	private string GetLocalPath(string fileName)
	{
		return null;
	}

	[Token(Token = "0x600150D")]
	[Address(RVA = "0x48DFA20", Offset = "0x48DFA20", VA = "0x48DFA20", Slot = "6")]
	public override string GetSavedLicenseKey(Type type, Assembly resourceAssembly)
	{
		return null;
	}

	[Token(Token = "0x600150E")]
	[Address(RVA = "0x48DFFD0", Offset = "0x48DFFD0", VA = "0x48DFFD0")]
	private Stream CaseInsensitiveManifestResourceStreamLookup(Assembly satellite, string name)
	{
		return null;
	}

	[Token(Token = "0x600150F")]
	[Address(RVA = "0x48E03D0", Offset = "0x48E03D0", VA = "0x48E03D0")]
	public RuntimeLicenseContext()
	{
	}
}
