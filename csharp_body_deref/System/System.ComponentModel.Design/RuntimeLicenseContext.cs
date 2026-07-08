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
	[Address(RVA = "0x45BA8A0", Offset = "0x45BA8A0", VA = "0x45BA8A0")]
	private string GetLocalPath(string fileName)
	{
		return null;
	}

	[Token(Token = "0x600150D")]
	[Address(RVA = "0x45BA920", Offset = "0x45BA920", VA = "0x45BA920", Slot = "6")]
	public override string GetSavedLicenseKey(Type type, Assembly resourceAssembly)
	{
		return null;
	}

	[Token(Token = "0x600150E")]
	[Address(RVA = "0x45BAED0", Offset = "0x45BAED0", VA = "0x45BAED0")]
	private Stream CaseInsensitiveManifestResourceStreamLookup(Assembly satellite, string name)
	{
		return null;
	}

	[Token(Token = "0x600150F")]
	[Address(RVA = "0x45BB2D0", Offset = "0x45BB2D0", VA = "0x45BB2D0")]
	public RuntimeLicenseContext()
	{
	}
}
