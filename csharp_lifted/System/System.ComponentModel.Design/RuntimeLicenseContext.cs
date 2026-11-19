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

[Token(Token = "0x20001F1")]
internal class RuntimeLicenseContext : LicenseContext
{
	[Token(Token = "0x400073E")]
	[FieldOffset(Offset = "0x0")]
	private static TraceSwitch s_runtimeLicenseContextSwitch;

	[Token(Token = "0x400073F")]
	[FieldOffset(Offset = "0x10")]
	internal Hashtable savedLicenseKeys;

	[Token(Token = "0x6000D94")]
	[Address(RVA = "0x627C960", Offset = "0x627B960", VA = "0x627C960")]
	private string GetLocalPath(string fileName)
	{
		return null;
	}

	[Token(Token = "0x6000D95")]
	[Address(RVA = "0x627C9E0", Offset = "0x627B9E0", VA = "0x627C9E0", Slot = "6")]
	public override string GetSavedLicenseKey(Type type, Assembly resourceAssembly)
	{
		return null;
	}

	[Token(Token = "0x6000D96")]
	[Address(RVA = "0x627CF90", Offset = "0x627BF90", VA = "0x627CF90")]
	private Stream CaseInsensitiveManifestResourceStreamLookup(Assembly satellite, string name)
	{
		return null;
	}

	[Token(Token = "0x6000D97")]
	[Address(RVA = "0x627D3B0", Offset = "0x627C3B0", VA = "0x627D3B0")]
	public RuntimeLicenseContext()
	{
	}
}
