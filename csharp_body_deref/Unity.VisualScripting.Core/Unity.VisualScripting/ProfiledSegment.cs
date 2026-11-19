// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.ProfiledSegment
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20000DB")]
public class ProfiledSegment
{
	[Token(Token = "0x17000115")]
	public string name
	{
		[Token(Token = "0x6000529")]
		[Address(RVA = "0x67A8980", Offset = "0x67A7980", VA = "0x67A8980")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600052A")]
		[Address(RVA = "0x67A8990", Offset = "0x67A7990", VA = "0x67A8990")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000116")]
	public Stopwatch stopwatch
	{
		[Token(Token = "0x600052B")]
		[Address(RVA = "0x67A89A0", Offset = "0x67A79A0", VA = "0x67A89A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600052C")]
		[Address(RVA = "0x67A89B0", Offset = "0x67A79B0", VA = "0x67A89B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000117")]
	public long calls
	{
		[Token(Token = "0x600052D")]
		[Address(RVA = "0x67A89C0", Offset = "0x67A79C0", VA = "0x67A89C0")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600052E")]
		[Address(RVA = "0x67A89D0", Offset = "0x67A79D0", VA = "0x67A89D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000118")]
	public ProfiledSegment parent
	{
		[Token(Token = "0x600052F")]
		[Address(RVA = "0x67A89E0", Offset = "0x67A79E0", VA = "0x67A89E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000530")]
		[Address(RVA = "0x67A89F0", Offset = "0x67A79F0", VA = "0x67A89F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000119")]
	public ProfiledSegmentCollection children
	{
		[Token(Token = "0x6000531")]
		[Address(RVA = "0x67A8A00", Offset = "0x67A7A00", VA = "0x67A8A00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000532")]
		[Address(RVA = "0x67A8A10", Offset = "0x67A7A10", VA = "0x67A8A10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000528")]
	[Address(RVA = "0x67A8840", Offset = "0x67A7840", VA = "0x67A8840")]
	public ProfiledSegment(ProfiledSegment parent, string name)
	{
	}
}
