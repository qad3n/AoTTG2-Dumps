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
[Token(Token = "0x20002D0")]
[ComVisible(true)]
[System.MonoTODO("CAS support is experimental (and unsupported).")]
public abstract class CodeAccessPermission : IPermission, ISecurityEncodable
{
	[Token(Token = "0x60017D8")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected CodeAccessPermission()
	{
	}

	[Token(Token = "0x60017D9")]
	[Address(RVA = "0x198AB20", Offset = "0x1989120", VA = "0x18198AB20", Slot = "7")]
	[Conditional("MONO_FEATURE_CAS")]
	public void Demand()
	{
	}

	[Token(Token = "0x60017DA")]
	[Address(RVA = "0x198AB50", Offset = "0x1989150", VA = "0x18198AB50", Slot = "0")]
	[ComVisible(false)]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60017DB")]
	[Address(RVA = "0x198AC80", Offset = "0x1989280", VA = "0x18198AC80", Slot = "2")]
	[ComVisible(false)]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60017DC")]
	public abstract bool IsSubsetOf(IPermission target);

	[Token(Token = "0x60017DD")]
	[Address(RVA = "0x198AC90", Offset = "0x1989290", VA = "0x18198AC90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60017DE")]
	public abstract SecurityElement ToXml();

	[Token(Token = "0x60017DF")]
	[Address(RVA = "0x198AA60", Offset = "0x1989060", VA = "0x18198AA60")]
	internal static PermissionState CheckPermissionState(PermissionState state, bool allowUnrestricted)
	{
		return default(PermissionState);
	}

	[Token(Token = "0x60017E0")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	private void System_002ESecurity_002EIPermission_002EDemand()
	{
	}
}
