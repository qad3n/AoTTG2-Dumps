using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20000DB")]
public class ProfiledSegment
{
	[Token(Token = "0x17000112")]
	public string name
	{
		[Token(Token = "0x600051F")]
		[Address(RVA = "0x49952B0", Offset = "0x49952B0", VA = "0x49952B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000520")]
		[Address(RVA = "0x49952C0", Offset = "0x49952C0", VA = "0x49952C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000113")]
	public Stopwatch stopwatch
	{
		[Token(Token = "0x6000521")]
		[Address(RVA = "0x49952D0", Offset = "0x49952D0", VA = "0x49952D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000522")]
		[Address(RVA = "0x49952E0", Offset = "0x49952E0", VA = "0x49952E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000114")]
	public long calls
	{
		[Token(Token = "0x6000523")]
		[Address(RVA = "0x49952F0", Offset = "0x49952F0", VA = "0x49952F0")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000524")]
		[Address(RVA = "0x4995300", Offset = "0x4995300", VA = "0x4995300")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000115")]
	public ProfiledSegment parent
	{
		[Token(Token = "0x6000525")]
		[Address(RVA = "0x4995310", Offset = "0x4995310", VA = "0x4995310")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000526")]
		[Address(RVA = "0x4995320", Offset = "0x4995320", VA = "0x4995320")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000116")]
	public ProfiledSegmentCollection children
	{
		[Token(Token = "0x6000527")]
		[Address(RVA = "0x4995330", Offset = "0x4995330", VA = "0x4995330")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000528")]
		[Address(RVA = "0x4995340", Offset = "0x4995340", VA = "0x4995340")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600051E")]
	[Address(RVA = "0x4995170", Offset = "0x4995170", VA = "0x4995170")]
	public ProfiledSegment(ProfiledSegment parent, string name)
	{
	}
}
