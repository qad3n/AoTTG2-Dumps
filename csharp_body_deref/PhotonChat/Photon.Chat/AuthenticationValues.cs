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

[Token(Token = "0x200000F")]
public class AuthenticationValues
{
	[Token(Token = "0x400008A")]
	[FieldOffset(Offset = "0x10")]
	private CustomAuthenticationType authType;

	[Token(Token = "0x1700001B")]
	public CustomAuthenticationType AuthType
	{
		[Token(Token = "0x6000075")]
		[Address(RVA = "0x3EB8D50", Offset = "0x3EB8D50", VA = "0x3EB8D50")]
		get
		{
			return default(CustomAuthenticationType);
		}
		[Token(Token = "0x6000076")]
		[Address(RVA = "0x3EB8D60", Offset = "0x3EB8D60", VA = "0x3EB8D60")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public string AuthGetParameters
	{
		[Token(Token = "0x6000077")]
		[Address(RVA = "0x3EB8D70", Offset = "0x3EB8D70", VA = "0x3EB8D70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000078")]
		[Address(RVA = "0x3EB8D80", Offset = "0x3EB8D80", VA = "0x3EB8D80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public object AuthPostData
	{
		[Token(Token = "0x6000079")]
		[Address(RVA = "0x3EB8D90", Offset = "0x3EB8D90", VA = "0x3EB8D90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600007A")]
		[Address(RVA = "0x3EB8DA0", Offset = "0x3EB8DA0", VA = "0x3EB8DA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public object Token
	{
		[Token(Token = "0x600007B")]
		[Address(RVA = "0x3EB8DB0", Offset = "0x3EB8DB0", VA = "0x3EB8DB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600007C")]
		[Address(RVA = "0x3EB8DC0", Offset = "0x3EB8DC0", VA = "0x3EB8DC0")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public string UserId
	{
		[Token(Token = "0x600007D")]
		[Address(RVA = "0x3EB8DD0", Offset = "0x3EB8DD0", VA = "0x3EB8DD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600007E")]
		[Address(RVA = "0x3EB8DE0", Offset = "0x3EB8DE0", VA = "0x3EB8DE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x3EB2560", Offset = "0x3EB2560", VA = "0x3EB2560")]
	public AuthenticationValues()
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x3EB8DF0", Offset = "0x3EB8DF0", VA = "0x3EB8DF0")]
	public AuthenticationValues(string userId)
	{
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x3EB8E20", Offset = "0x3EB8E20", VA = "0x3EB8E20", Slot = "4")]
	public virtual void SetAuthPostData(string stringData)
	{
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x3EB8E60", Offset = "0x3EB8E60", VA = "0x3EB8E60", Slot = "5")]
	public virtual void SetAuthPostData(byte[] byteData)
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x3EB8E70", Offset = "0x3EB8E70", VA = "0x3EB8E70", Slot = "6")]
	public virtual void SetAuthPostData(Dictionary<string, object> dictData)
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x3EB8E80", Offset = "0x3EB8E80", VA = "0x3EB8E80", Slot = "7")]
	public virtual void AddAuthParameter(string key, string value)
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x3EB9080", Offset = "0x3EB9080", VA = "0x3EB9080", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x3EB9240", Offset = "0x3EB9240", VA = "0x3EB9240")]
	public AuthenticationValues CopyTo(AuthenticationValues copy)
	{
		return null;
	}
}
