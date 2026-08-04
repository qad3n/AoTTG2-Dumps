// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.AuthenticationValues
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonChat/Code/ChatPeer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200003B")]
public class AuthenticationValues
{
	[Token(Token = "0x40001D4")]
	[FieldOffset(Offset = "0x10")]
	private CustomAuthenticationType authType;

	[Token(Token = "0x17000037")]
	public CustomAuthenticationType AuthType
	{
		[Token(Token = "0x600013F")]
		[Address(RVA = "0x3ECF420", Offset = "0x3ECF420", VA = "0x3ECF420")]
		get
		{
			return default(CustomAuthenticationType);
		}
		[Token(Token = "0x6000140")]
		[Address(RVA = "0x3ECF430", Offset = "0x3ECF430", VA = "0x3ECF430")]
		set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public string AuthGetParameters
	{
		[Token(Token = "0x6000141")]
		[Address(RVA = "0x3ECF440", Offset = "0x3ECF440", VA = "0x3ECF440")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000142")]
		[Address(RVA = "0x3ECF450", Offset = "0x3ECF450", VA = "0x3ECF450")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000039")]
	public object AuthPostData
	{
		[Token(Token = "0x6000143")]
		[Address(RVA = "0x3ECF460", Offset = "0x3ECF460", VA = "0x3ECF460")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000144")]
		[Address(RVA = "0x3ECF470", Offset = "0x3ECF470", VA = "0x3ECF470")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700003A")]
	public object Token
	{
		[Token(Token = "0x6000145")]
		[Address(RVA = "0x3ECF480", Offset = "0x3ECF480", VA = "0x3ECF480")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000146")]
		[Address(RVA = "0x3ECF490", Offset = "0x3ECF490", VA = "0x3ECF490")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700003B")]
	public string UserId
	{
		[Token(Token = "0x6000147")]
		[Address(RVA = "0x3ECF4A0", Offset = "0x3ECF4A0", VA = "0x3ECF4A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000148")]
		[Address(RVA = "0x3ECF4B0", Offset = "0x3ECF4B0", VA = "0x3ECF4B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x3EBEBB0", Offset = "0x3EBEBB0", VA = "0x3EBEBB0")]
	public AuthenticationValues()
	{
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x3ECF4C0", Offset = "0x3ECF4C0", VA = "0x3ECF4C0")]
	public AuthenticationValues(string userId)
	{
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x3ECF4F0", Offset = "0x3ECF4F0", VA = "0x3ECF4F0", Slot = "4")]
	public virtual void SetAuthPostData(string stringData)
	{
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x3ECF530", Offset = "0x3ECF530", VA = "0x3ECF530", Slot = "5")]
	public virtual void SetAuthPostData(byte[] byteData)
	{
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x3ECF540", Offset = "0x3ECF540", VA = "0x3ECF540", Slot = "6")]
	public virtual void SetAuthPostData(Dictionary<string, object> dictData)
	{
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x3ECF550", Offset = "0x3ECF550", VA = "0x3ECF550", Slot = "7")]
	public virtual void AddAuthParameter(string key, string value)
	{
	}

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x3ECF750", Offset = "0x3ECF750", VA = "0x3ECF750", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x3ECF9E0", Offset = "0x3ECF9E0", VA = "0x3ECF9E0")]
	public AuthenticationValues CopyTo(AuthenticationValues copy)
	{
		return null;
	}
}
