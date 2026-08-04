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
[Token(Token = "0x200032E")]
[ComVisible(true)]
public class WindowsIdentity : ClaimsIdentity, IIdentity, IDeserializationCallback, ISerializable, IDisposable
{
	[Token(Token = "0x4000E43")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private IntPtr _token;

	[Token(Token = "0x4000E44")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private string _type;

	[Token(Token = "0x4000E45")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private WindowsAccountType _account;

	[Token(Token = "0x4000E46")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	private bool _authenticated;

	[Token(Token = "0x4000E47")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private string _name;

	[Token(Token = "0x4000E48")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private SerializationInfo _info;

	[Token(Token = "0x4000E49")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static IntPtr invalidWindows;

	[Token(Token = "0x1700031C")]
	public sealed override string AuthenticationType
	{
		[Token(Token = "0x6001BCD")]
		[Address(RVA = "0x3B5AD70", Offset = "0x3B5AD70", VA = "0x3B5AD70", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700031D")]
	public override string Name
	{
		[Token(Token = "0x6001BCE")]
		[Address(RVA = "0x3B5AD80", Offset = "0x3B5AD80", VA = "0x3B5AD80", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001BC8")]
	[Address(RVA = "0x3B5A930", Offset = "0x3B5A930", VA = "0x3B5A930")]
	public WindowsIdentity(IntPtr userToken, string type, WindowsAccountType acctType, bool isAuthenticated)
	{
	}

	[Token(Token = "0x6001BC9")]
	[Address(RVA = "0x3B5AB60", Offset = "0x3B5AB60", VA = "0x3B5AB60")]
	public WindowsIdentity(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001BCA")]
	[Address(RVA = "0x3B5ABB0", Offset = "0x3B5ABB0", VA = "0x3B5ABB0", Slot = "14")]
	[ComVisible(false)]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001BCB")]
	[Address(RVA = "0x3B5ABC0", Offset = "0x3B5ABC0", VA = "0x3B5ABC0")]
	public static WindowsIdentity GetCurrent()
	{
		return null;
	}

	[Token(Token = "0x6001BCC")]
	[Address(RVA = "0x3B5ACA0", Offset = "0x3B5ACA0", VA = "0x3B5ACA0", Slot = "15")]
	public virtual WindowsImpersonationContext Impersonate()
	{
		return null;
	}

	[Token(Token = "0x6001BCF")]
	[Address(RVA = "0x3B5AE20", Offset = "0x3B5AE20", VA = "0x3B5AE20", Slot = "12")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6001BD0")]
	[Address(RVA = "0x3B5B120", Offset = "0x3B5B120", VA = "0x3B5B120", Slot = "13")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001BD1")]
	[Address(RVA = "0x3B5A9F0", Offset = "0x3B5A9F0", VA = "0x3B5A9F0")]
	private void SetToken(IntPtr token)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001BD2")]
	[Address(RVA = "0x3B5AC90", Offset = "0x3B5AC90", VA = "0x3B5AC90")]
	internal static extern IntPtr GetCurrentToken();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001BD3")]
	[Address(RVA = "0x3B5AE10", Offset = "0x3B5AE10", VA = "0x3B5AE10")]
	private static extern string GetTokenName(IntPtr token);
}
