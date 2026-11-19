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
		[Address(RVA = "0x56BBA70", Offset = "0x56BAA70", VA = "0x56BBA70")]
		get
		{
			return default(CustomAuthenticationType);
		}
		[Token(Token = "0x600013E")]
		[Address(RVA = "0x56BBA80", Offset = "0x56BAA80", VA = "0x56BBA80")]
		set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public string AuthGetParameters
	{
		[Token(Token = "0x600013F")]
		[Address(RVA = "0x56BBA90", Offset = "0x56BAA90", VA = "0x56BBA90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000140")]
		[Address(RVA = "0x56BBAA0", Offset = "0x56BAAA0", VA = "0x56BBAA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000039")]
	public object AuthPostData
	{
		[Token(Token = "0x6000141")]
		[Address(RVA = "0x56BBAB0", Offset = "0x56BAAB0", VA = "0x56BBAB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000142")]
		[Address(RVA = "0x56BBAC0", Offset = "0x56BAAC0", VA = "0x56BBAC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700003A")]
	public object Token
	{
		[Token(Token = "0x6000143")]
		[Address(RVA = "0x56BBAD0", Offset = "0x56BAAD0", VA = "0x56BBAD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000144")]
		[Address(RVA = "0x56BBAE0", Offset = "0x56BAAE0", VA = "0x56BBAE0")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700003B")]
	public string UserId
	{
		[Token(Token = "0x6000145")]
		[Address(RVA = "0x56BBAF0", Offset = "0x56BAAF0", VA = "0x56BBAF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000146")]
		[Address(RVA = "0x56BBB00", Offset = "0x56BAB00", VA = "0x56BBB00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x56AB670", Offset = "0x56AA670", VA = "0x56AB670")]
	public AuthenticationValues()
	{
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x56BBB10", Offset = "0x56BAB10", VA = "0x56BBB10")]
	public AuthenticationValues(string userId)
	{
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x56BBB40", Offset = "0x56BAB40", VA = "0x56BBB40", Slot = "4")]
	public virtual void SetAuthPostData(string stringData)
	{
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x56BBB80", Offset = "0x56BAB80", VA = "0x56BBB80", Slot = "5")]
	public virtual void SetAuthPostData(byte[] byteData)
	{
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x56BBB90", Offset = "0x56BAB90", VA = "0x56BBB90", Slot = "6")]
	public virtual void SetAuthPostData(Dictionary<string, object> dictData)
	{
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x56BBBA0", Offset = "0x56BABA0", VA = "0x56BBBA0", Slot = "7")]
	public virtual void AddAuthParameter(string key, string value)
	{
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x56BBDB0", Offset = "0x56BADB0", VA = "0x56BBDB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x56BC040", Offset = "0x56BB040", VA = "0x56BC040")]
	public AuthenticationValues CopyTo(AuthenticationValues copy)
	{
		return null;
	}
}
