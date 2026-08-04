// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.CodeAccessPermission
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.InteropServices;
using System.Security.Permissions;
using Il2CppDummyDll;

namespace System.Security;

[Serializable]
[Token(Token = "0x20002A1")]
[System.MonoTODO("CAS support is experimental (and unsupported).")]
[ComVisible(true)]
public abstract class CodeAccessPermission : IPermission, ISecurityEncodable
{
	[Token(Token = "0x6001770")]
	[Address(RVA = "0x3B1D120", Offset = "0x3B1D120", VA = "0x3B1D120")]
	protected CodeAccessPermission()
	{
	}

	[Token(Token = "0x6001771")]
	[Address(RVA = "0x3B1D130", Offset = "0x3B1D130", VA = "0x3B1D130", Slot = "7")]
	[Conditional("MONO_FEATURE_CAS")]
	public void Demand()
	{
	}

	[Token(Token = "0x6001772")]
	[Address(RVA = "0x3B1D270", Offset = "0x3B1D270", VA = "0x3B1D270", Slot = "0")]
	[ComVisible(false)]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001773")]
	[Address(RVA = "0x3B1D380", Offset = "0x3B1D380", VA = "0x3B1D380", Slot = "2")]
	[ComVisible(false)]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001774")]
	public abstract bool IsSubsetOf(IPermission target);

	[Token(Token = "0x6001775")]
	[Address(RVA = "0x3B1D390", Offset = "0x3B1D390", VA = "0x3B1D390", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001776")]
	public abstract SecurityElement ToXml();

	[Token(Token = "0x6001777")]
	[Address(RVA = "0x3B1D3D0", Offset = "0x3B1D3D0", VA = "0x3B1D3D0")]
	internal static PermissionState CheckPermissionState(PermissionState state, bool allowUnrestricted)
	{
		return default(PermissionState);
	}

	[Token(Token = "0x6001778")]
	[Address(RVA = "0x3B1D480", Offset = "0x3B1D480", VA = "0x3B1D480", Slot = "4")]
	private void System_002ESecurity_002EIPermission_002EDemand()
	{
	}
}
