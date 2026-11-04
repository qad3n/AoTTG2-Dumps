// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Principal.WindowsIdentity
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using System.Security.Claims;
using Il2CppDummyDll;

namespace System.Security.Principal;

[Serializable]
[Token(Token = "0x200035D")]
[ComVisible(true)]
public class WindowsIdentity : ClaimsIdentity, IIdentity, IDeserializationCallback, ISerializable, IDisposable
{
	[Token(Token = "0x4000E50")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private IntPtr _token;

	[Token(Token = "0x4000E51")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private string _type;

	[Token(Token = "0x4000E52")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private WindowsAccountType _account;

	[Token(Token = "0x4000E53")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	private bool _authenticated;

	[Token(Token = "0x4000E54")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private string _name;

	[Token(Token = "0x4000E55")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private SerializationInfo _info;

	[Token(Token = "0x4000E56")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static IntPtr invalidWindows;

	[Token(Token = "0x1700031E")]
	public sealed override string AuthenticationType
	{
		[Token(Token = "0x6001C3B")]
		[Address(RVA = "0x58A5D0", Offset = "0x588BD0", VA = "0x18058A5D0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700031F")]
	public override string Name
	{
		[Token(Token = "0x6001C3C")]
		[Address(RVA = "0x19E9770", Offset = "0x19E7D70", VA = "0x1819E9770", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C36")]
	[Address(RVA = "0x19E9550", Offset = "0x19E7B50", VA = "0x1819E9550")]
	public WindowsIdentity(IntPtr userToken, string type, WindowsAccountType acctType, bool isAuthenticated)
	{
	}

	[Token(Token = "0x6001C37")]
	[Address(RVA = "0x19E9710", Offset = "0x19E7D10", VA = "0x1819E9710")]
	public WindowsIdentity(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001C38")]
	[Address(RVA = "0x19E8C40", Offset = "0x19E7240", VA = "0x1819E8C40", Slot = "14")]
	[ComVisible(false)]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001C39")]
	[Address(RVA = "0x19E8C60", Offset = "0x19E7260", VA = "0x1819E8C60")]
	public static WindowsIdentity GetCurrent()
	{
		return null;
	}

	[Token(Token = "0x6001C3A")]
	[Address(RVA = "0x19E8E80", Offset = "0x19E7480", VA = "0x1819E8E80", Slot = "15")]
	public virtual WindowsImpersonationContext Impersonate()
	{
		return null;
	}

	[Token(Token = "0x6001C3D")]
	[Address(RVA = "0x19E90A0", Offset = "0x19E76A0", VA = "0x1819E90A0", Slot = "12")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6001C3E")]
	[Address(RVA = "0x19E93E0", Offset = "0x19E79E0", VA = "0x1819E93E0", Slot = "13")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001C3F")]
	[Address(RVA = "0x19E8F40", Offset = "0x19E7540", VA = "0x1819E8F40")]
	private void SetToken(IntPtr token)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C40")]
	[Address(RVA = "0x19E8C50", Offset = "0x19E7250", VA = "0x1819E8C50")]
	internal static extern IntPtr GetCurrentToken();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C41")]
	[Address(RVA = "0x19E8E70", Offset = "0x19E7470", VA = "0x1819E8E70")]
	private static extern string GetTokenName(IntPtr token);
}
