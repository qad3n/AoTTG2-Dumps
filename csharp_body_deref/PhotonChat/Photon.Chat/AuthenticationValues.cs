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
		[Address(RVA = "0x3BC3400", Offset = "0x3BC3400", VA = "0x3BC3400")]
		get
		{
			return default(CustomAuthenticationType);
		}
		[Token(Token = "0x6000076")]
		[Address(RVA = "0x3BC3410", Offset = "0x3BC3410", VA = "0x3BC3410")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public string AuthGetParameters
	{
		[Token(Token = "0x6000077")]
		[Address(RVA = "0x3BC3420", Offset = "0x3BC3420", VA = "0x3BC3420")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000078")]
		[Address(RVA = "0x3BC3430", Offset = "0x3BC3430", VA = "0x3BC3430")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public object AuthPostData
	{
		[Token(Token = "0x6000079")]
		[Address(RVA = "0x3BC3440", Offset = "0x3BC3440", VA = "0x3BC3440")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600007A")]
		[Address(RVA = "0x3BC3450", Offset = "0x3BC3450", VA = "0x3BC3450")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public object Token
	{
		[Token(Token = "0x600007B")]
		[Address(RVA = "0x3BC3460", Offset = "0x3BC3460", VA = "0x3BC3460")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600007C")]
		[Address(RVA = "0x3BC3470", Offset = "0x3BC3470", VA = "0x3BC3470")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public string UserId
	{
		[Token(Token = "0x600007D")]
		[Address(RVA = "0x3BC3480", Offset = "0x3BC3480", VA = "0x3BC3480")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600007E")]
		[Address(RVA = "0x3BC3490", Offset = "0x3BC3490", VA = "0x3BC3490")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x3BBCC10", Offset = "0x3BBCC10", VA = "0x3BBCC10")]
	public AuthenticationValues()
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x3BC34A0", Offset = "0x3BC34A0", VA = "0x3BC34A0")]
	public AuthenticationValues(string userId)
	{
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x3BC34D0", Offset = "0x3BC34D0", VA = "0x3BC34D0", Slot = "4")]
	public virtual void SetAuthPostData(string stringData)
	{
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x3BC3510", Offset = "0x3BC3510", VA = "0x3BC3510", Slot = "5")]
	public virtual void SetAuthPostData(byte[] byteData)
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x3BC3520", Offset = "0x3BC3520", VA = "0x3BC3520", Slot = "6")]
	public virtual void SetAuthPostData(Dictionary<string, object> dictData)
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x3BC3530", Offset = "0x3BC3530", VA = "0x3BC3530", Slot = "7")]
	public virtual void AddAuthParameter(string key, string value)
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x3BC3730", Offset = "0x3BC3730", VA = "0x3BC3730", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x3BC38F0", Offset = "0x3BC38F0", VA = "0x3BC38F0")]
	public AuthenticationValues CopyTo(AuthenticationValues copy)
	{
		return null;
	}
}
