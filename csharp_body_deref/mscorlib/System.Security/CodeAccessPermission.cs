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
[Token(Token = "0x20002A9")]
[System.MonoTODO("CAS support is experimental (and unsupported).")]
[ComVisible(true)]
public abstract class CodeAccessPermission : IPermission, ISecurityEncodable
{
	[Token(Token = "0x60017B5")]
	[Address(RVA = "0x5327170", Offset = "0x5326170", VA = "0x5327170")]
	protected CodeAccessPermission()
	{
	}

	[Token(Token = "0x60017B6")]
	[Address(RVA = "0x5327180", Offset = "0x5326180", VA = "0x5327180", Slot = "7")]
	[Conditional("MONO_FEATURE_CAS")]
	public void Demand()
	{
	}

	[Token(Token = "0x60017B7")]
	[Address(RVA = "0x53272C0", Offset = "0x53262C0", VA = "0x53272C0", Slot = "0")]
	[ComVisible(false)]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60017B8")]
	[Address(RVA = "0x53273D0", Offset = "0x53263D0", VA = "0x53273D0", Slot = "2")]
	[ComVisible(false)]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60017B9")]
	public abstract bool IsSubsetOf(IPermission target);

	[Token(Token = "0x60017BA")]
	[Address(RVA = "0x53273E0", Offset = "0x53263E0", VA = "0x53273E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60017BB")]
	public abstract SecurityElement ToXml();

	[Token(Token = "0x60017BC")]
	[Address(RVA = "0x5327420", Offset = "0x5326420", VA = "0x5327420")]
	internal static PermissionState CheckPermissionState(PermissionState state, bool allowUnrestricted)
	{
		return default(PermissionState);
	}

	[Token(Token = "0x60017BD")]
	[Address(RVA = "0x53274D0", Offset = "0x53264D0", VA = "0x53274D0", Slot = "4")]
	private void System_002ESecurity_002EIPermission_002EDemand()
	{
	}
}
