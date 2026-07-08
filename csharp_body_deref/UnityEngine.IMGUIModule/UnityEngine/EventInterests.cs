using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000006")]
internal struct EventInterests
{
	[Token(Token = "0x1700001B")]
	public bool wantsMouseMove
	{
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x4B19520", Offset = "0x4B19520", VA = "0x4B19520")]
		[CompilerGenerated]
		readonly get
		{
			return default(bool);
		}
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x4B19530", Offset = "0x4B19530", VA = "0x4B19530")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public bool wantsMouseEnterLeaveWindow
	{
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x4B19540", Offset = "0x4B19540", VA = "0x4B19540")]
		[CompilerGenerated]
		readonly get
		{
			return default(bool);
		}
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x4B19550", Offset = "0x4B19550", VA = "0x4B19550")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public readonly bool wantsLessLayoutEvents
	{
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x4B19560", Offset = "0x4B19560", VA = "0x4B19560")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x4B19570", Offset = "0x4B19570", VA = "0x4B19570")]
	public bool WantsEvent(EventType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x4B19590", Offset = "0x4B19590", VA = "0x4B19590")]
	public bool WantsLayoutPass(EventType type)
	{
		return default(bool);
	}
}
