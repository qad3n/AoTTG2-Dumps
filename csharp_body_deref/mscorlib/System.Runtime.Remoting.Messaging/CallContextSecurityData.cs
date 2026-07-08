using System.Security.Principal;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Serializable]
[Token(Token = "0x2000398")]
internal class CallContextSecurityData : ICloneable
{
	[Token(Token = "0x4000F3C")]
	[FieldOffset(Offset = "0x10")]
	private IPrincipal _principal;

	[Token(Token = "0x1700039C")]
	internal bool HasInfo
	{
		[Token(Token = "0x6001DFE")]
		[Address(RVA = "0x4EA07F0", Offset = "0x4EA07F0", VA = "0x4EA07F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001DFF")]
	[Address(RVA = "0x4EA0770", Offset = "0x4EA0770", VA = "0x4EA0770", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6001E00")]
	[Address(RVA = "0x4EA09E0", Offset = "0x4EA09E0", VA = "0x4EA09E0")]
	public CallContextSecurityData()
	{
	}
}
