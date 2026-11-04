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

[Token(Token = "0x2000039")]
public class AuthenticationValues
{
	[Token(Token = "0x40001CF")]
	[FieldOffset(Offset = "0x10")]
	private CustomAuthenticationType authType;

	[Token(Token = "0x17000037")]
	public CustomAuthenticationType AuthType
	{
		[Token(Token = "0x600013D")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		get
		{
			return default(CustomAuthenticationType);
		}
		[Token(Token = "0x600013E")]
		[Address(RVA = "0x11124D0", Offset = "0x1110AD0", VA = "0x1811124D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public string AuthGetParameters
	{
		[Token(Token = "0x600013F")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000140")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000039")]
	public object AuthPostData
	{
		[Token(Token = "0x6000141")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000142")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700003A")]
	public object Token
	{
		[Token(Token = "0x6000143")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000144")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700003B")]
	public string UserId
	{
		[Token(Token = "0x6000145")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000146")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x1D0ACC0", Offset = "0x1D092C0", VA = "0x181D0ACC0")]
	public AuthenticationValues()
	{
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x1D0ACD0", Offset = "0x1D092D0", VA = "0x181D0ACD0")]
	public AuthenticationValues(string userId)
	{
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x1D0AA80", Offset = "0x1D09080", VA = "0x181D0AA80", Slot = "4")]
	public virtual void SetAuthPostData(string stringData)
	{
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0", Slot = "5")]
	public virtual void SetAuthPostData(byte[] byteData)
	{
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0", Slot = "6")]
	public virtual void SetAuthPostData(Dictionary<string, object> dictData)
	{
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x1D11BE0", Offset = "0x1D101E0", VA = "0x181D11BE0", Slot = "7")]
	public virtual void AddAuthParameter(string key, string value)
	{
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x1D11E20", Offset = "0x1D10420", VA = "0x181D11E20", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x1D0AA10", Offset = "0x1D09010", VA = "0x181D0AA10")]
	public AuthenticationValues CopyTo(AuthenticationValues copy)
	{
		return null;
	}
}
