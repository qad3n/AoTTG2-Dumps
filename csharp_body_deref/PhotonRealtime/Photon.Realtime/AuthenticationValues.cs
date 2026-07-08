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
		[Address(RVA = "0x3BD9AD0", Offset = "0x3BD9AD0", VA = "0x3BD9AD0")]
		get
		{
			return default(CustomAuthenticationType);
		}
		[Token(Token = "0x6000140")]
		[Address(RVA = "0x3BD9AE0", Offset = "0x3BD9AE0", VA = "0x3BD9AE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public string AuthGetParameters
	{
		[Token(Token = "0x6000141")]
		[Address(RVA = "0x3BD9AF0", Offset = "0x3BD9AF0", VA = "0x3BD9AF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000142")]
		[Address(RVA = "0x3BD9B00", Offset = "0x3BD9B00", VA = "0x3BD9B00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000039")]
	public object AuthPostData
	{
		[Token(Token = "0x6000143")]
		[Address(RVA = "0x3BD9B10", Offset = "0x3BD9B10", VA = "0x3BD9B10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000144")]
		[Address(RVA = "0x3BD9B20", Offset = "0x3BD9B20", VA = "0x3BD9B20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700003A")]
	public object Token
	{
		[Token(Token = "0x6000145")]
		[Address(RVA = "0x3BD9B30", Offset = "0x3BD9B30", VA = "0x3BD9B30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000146")]
		[Address(RVA = "0x3BD9B40", Offset = "0x3BD9B40", VA = "0x3BD9B40")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700003B")]
	public string UserId
	{
		[Token(Token = "0x6000147")]
		[Address(RVA = "0x3BD9B50", Offset = "0x3BD9B50", VA = "0x3BD9B50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000148")]
		[Address(RVA = "0x3BD9B60", Offset = "0x3BD9B60", VA = "0x3BD9B60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x3BC9260", Offset = "0x3BC9260", VA = "0x3BC9260")]
	public AuthenticationValues()
	{
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x3BD9B70", Offset = "0x3BD9B70", VA = "0x3BD9B70")]
	public AuthenticationValues(string userId)
	{
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x3BD9BA0", Offset = "0x3BD9BA0", VA = "0x3BD9BA0", Slot = "4")]
	public virtual void SetAuthPostData(string stringData)
	{
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x3BD9BE0", Offset = "0x3BD9BE0", VA = "0x3BD9BE0", Slot = "5")]
	public virtual void SetAuthPostData(byte[] byteData)
	{
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x3BD9BF0", Offset = "0x3BD9BF0", VA = "0x3BD9BF0", Slot = "6")]
	public virtual void SetAuthPostData(Dictionary<string, object> dictData)
	{
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x3BD9C00", Offset = "0x3BD9C00", VA = "0x3BD9C00", Slot = "7")]
	public virtual void AddAuthParameter(string key, string value)
	{
	}

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x3BD9E00", Offset = "0x3BD9E00", VA = "0x3BD9E00", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x3BDA090", Offset = "0x3BDA090", VA = "0x3BDA090")]
	public AuthenticationValues CopyTo(AuthenticationValues copy)
	{
		return null;
	}
}
