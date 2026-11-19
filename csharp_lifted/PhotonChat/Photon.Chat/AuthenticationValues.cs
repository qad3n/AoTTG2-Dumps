// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Chat.AuthenticationValues
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonChat/Code/ChatPeer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Photon.Chat;

[Token(Token = "0x200000D")]
public class AuthenticationValues
{
	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0x10")]
	private CustomAuthenticationType authType;

	[Token(Token = "0x1700001B")]
	public CustomAuthenticationType AuthType
	{
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x56A5C70", Offset = "0x56A4C70", VA = "0x56A5C70")]
		get
		{
			return default(CustomAuthenticationType);
		}
		[Token(Token = "0x6000074")]
		[Address(RVA = "0x56A5C80", Offset = "0x56A4C80", VA = "0x56A5C80")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public string AuthGetParameters
	{
		[Token(Token = "0x6000075")]
		[Address(RVA = "0x56A5C90", Offset = "0x56A4C90", VA = "0x56A5C90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000076")]
		[Address(RVA = "0x56A5CA0", Offset = "0x56A4CA0", VA = "0x56A5CA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public object AuthPostData
	{
		[Token(Token = "0x6000077")]
		[Address(RVA = "0x56A5CB0", Offset = "0x56A4CB0", VA = "0x56A5CB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000078")]
		[Address(RVA = "0x56A5CC0", Offset = "0x56A4CC0", VA = "0x56A5CC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public object Token
	{
		[Token(Token = "0x6000079")]
		[Address(RVA = "0x56A5CD0", Offset = "0x56A4CD0", VA = "0x56A5CD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600007A")]
		[Address(RVA = "0x56A5CE0", Offset = "0x56A4CE0", VA = "0x56A5CE0")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public string UserId
	{
		[Token(Token = "0x600007B")]
		[Address(RVA = "0x56A5CF0", Offset = "0x56A4CF0", VA = "0x56A5CF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600007C")]
		[Address(RVA = "0x56A5D00", Offset = "0x56A4D00", VA = "0x56A5D00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x569F690", Offset = "0x569E690", VA = "0x569F690")]
	public AuthenticationValues()
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x56A5D10", Offset = "0x56A4D10", VA = "0x56A5D10")]
	public AuthenticationValues(string userId)
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x56A5D40", Offset = "0x56A4D40", VA = "0x56A5D40", Slot = "4")]
	public virtual void SetAuthPostData(string stringData)
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x56A5D80", Offset = "0x56A4D80", VA = "0x56A5D80", Slot = "5")]
	public virtual void SetAuthPostData(byte[] byteData)
	{
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x56A5D90", Offset = "0x56A4D90", VA = "0x56A5D90", Slot = "6")]
	public virtual void SetAuthPostData(Dictionary<string, object> dictData)
	{
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x56A5DA0", Offset = "0x56A4DA0", VA = "0x56A5DA0", Slot = "7")]
	public virtual void AddAuthParameter(string key, string value)
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x56A5FB0", Offset = "0x56A4FB0", VA = "0x56A5FB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x56A6170", Offset = "0x56A5170", VA = "0x56A6170")]
	public AuthenticationValues CopyTo(AuthenticationValues copy)
	{
		return null;
	}
}
