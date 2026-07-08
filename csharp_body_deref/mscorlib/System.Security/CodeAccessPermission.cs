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
	[Address(RVA = "0x4E37600", Offset = "0x4E37600", VA = "0x4E37600")]
	protected CodeAccessPermission()
	{
	}

	[Token(Token = "0x6001771")]
	[Address(RVA = "0x4E37610", Offset = "0x4E37610", VA = "0x4E37610", Slot = "7")]
	[Conditional("MONO_FEATURE_CAS")]
	public void Demand()
	{
	}

	[Token(Token = "0x6001772")]
	[Address(RVA = "0x4E37750", Offset = "0x4E37750", VA = "0x4E37750", Slot = "0")]
	[ComVisible(false)]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001773")]
	[Address(RVA = "0x4E37860", Offset = "0x4E37860", VA = "0x4E37860", Slot = "2")]
	[ComVisible(false)]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001774")]
	public abstract bool IsSubsetOf(IPermission target);

	[Token(Token = "0x6001775")]
	[Address(RVA = "0x4E37870", Offset = "0x4E37870", VA = "0x4E37870", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001776")]
	public abstract SecurityElement ToXml();

	[Token(Token = "0x6001777")]
	[Address(RVA = "0x4E378B0", Offset = "0x4E378B0", VA = "0x4E378B0")]
	internal static PermissionState CheckPermissionState(PermissionState state, bool allowUnrestricted)
	{
		return default(PermissionState);
	}

	[Token(Token = "0x6001778")]
	[Address(RVA = "0x4E37960", Offset = "0x4E37960", VA = "0x4E37960", Slot = "4")]
	private void System_002ESecurity_002EIPermission_002EDemand()
	{
	}
}
