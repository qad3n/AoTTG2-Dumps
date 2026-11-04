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

[Token(Token = "0x2000230")]
internal class RuntimeLicenseContext : LicenseContext
{
	[Token(Token = "0x400080D")]
	[FieldOffset(Offset = "0x0")]
	private static TraceSwitch s_runtimeLicenseContextSwitch;

	[Token(Token = "0x400080E")]
	[FieldOffset(Offset = "0x10")]
	internal Hashtable savedLicenseKeys;

	[Token(Token = "0x6000F54")]
	[Address(RVA = "0x28DB430", Offset = "0x28D9A30", VA = "0x1828DB430")]
	private string GetLocalPath(string fileName)
	{
		return null;
	}

	[Token(Token = "0x6000F55")]
	[Address(RVA = "0x28DB4B0", Offset = "0x28D9AB0", VA = "0x1828DB4B0", Slot = "6")]
	public override string GetSavedLicenseKey(Type type, Assembly resourceAssembly)
	{
		return null;
	}

	[Token(Token = "0x6000F56")]
	[Address(RVA = "0x28DB240", Offset = "0x28D9840", VA = "0x1828DB240")]
	private Stream CaseInsensitiveManifestResourceStreamLookup(Assembly satellite, string name)
	{
		return null;
	}

	[Token(Token = "0x6000F57")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public RuntimeLicenseContext()
	{
	}
}
