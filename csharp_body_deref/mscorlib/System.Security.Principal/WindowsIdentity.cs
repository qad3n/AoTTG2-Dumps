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
[Token(Token = "0x2000336")]
[ComVisible(true)]
public class WindowsIdentity : ClaimsIdentity, IIdentity, IDeserializationCallback, ISerializable, IDisposable
{
	[Token(Token = "0x4000DB0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private IntPtr _token;

	[Token(Token = "0x4000DB1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private string _type;

	[Token(Token = "0x4000DB2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private WindowsAccountType _account;

	[Token(Token = "0x4000DB3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	private bool _authenticated;

	[Token(Token = "0x4000DB4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private string _name;

	[Token(Token = "0x4000DB5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private SerializationInfo _info;

	[Token(Token = "0x4000DB6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static IntPtr invalidWindows;

	[Token(Token = "0x1700031D")]
	public sealed override string AuthenticationType
	{
		[Token(Token = "0x6001C12")]
		[Address(RVA = "0x53649E0", Offset = "0x53639E0", VA = "0x53649E0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700031E")]
	public override string Name
	{
		[Token(Token = "0x6001C13")]
		[Address(RVA = "0x53649F0", Offset = "0x53639F0", VA = "0x53649F0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C0D")]
	[Address(RVA = "0x53645C0", Offset = "0x53635C0", VA = "0x53645C0")]
	public WindowsIdentity(IntPtr userToken, string type, WindowsAccountType acctType, bool isAuthenticated)
	{
	}

	[Token(Token = "0x6001C0E")]
	[Address(RVA = "0x53647D0", Offset = "0x53637D0", VA = "0x53647D0")]
	public WindowsIdentity(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001C0F")]
	[Address(RVA = "0x5364820", Offset = "0x5363820", VA = "0x5364820", Slot = "14")]
	[ComVisible(false)]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001C10")]
	[Address(RVA = "0x5364830", Offset = "0x5363830", VA = "0x5364830")]
	public static WindowsIdentity GetCurrent()
	{
		return null;
	}

	[Token(Token = "0x6001C11")]
	[Address(RVA = "0x5364910", Offset = "0x5363910", VA = "0x5364910", Slot = "15")]
	public virtual WindowsImpersonationContext Impersonate()
	{
		return null;
	}

	[Token(Token = "0x6001C14")]
	[Address(RVA = "0x5364A90", Offset = "0x5363A90", VA = "0x5364A90", Slot = "12")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6001C15")]
	[Address(RVA = "0x5364D90", Offset = "0x5363D90", VA = "0x5364D90", Slot = "13")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001C16")]
	[Address(RVA = "0x5364680", Offset = "0x5363680", VA = "0x5364680")]
	private void SetToken(IntPtr token)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C17")]
	[Address(RVA = "0x5364900", Offset = "0x5363900", VA = "0x5364900")]
	internal static extern IntPtr GetCurrentToken();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001C18")]
	[Address(RVA = "0x5364A80", Offset = "0x5363A80", VA = "0x5364A80")]
	private static extern string GetTokenName(IntPtr token);
}
