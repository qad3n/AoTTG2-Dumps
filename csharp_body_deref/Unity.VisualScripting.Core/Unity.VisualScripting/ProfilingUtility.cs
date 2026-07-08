using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20000DE")]
public static class ProfilingUtility
{
	[Token(Token = "0x4000152")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object @lock;

	[Token(Token = "0x17000117")]
	public static ProfiledSegment rootSegment
	{
		[Token(Token = "0x600052E")]
		[Address(RVA = "0x49954F0", Offset = "0x49954F0", VA = "0x49954F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600052F")]
		[Address(RVA = "0x4995560", Offset = "0x4995560", VA = "0x4995560")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000118")]
	public static ProfiledSegment currentSegment
	{
		[Token(Token = "0x6000530")]
		[Address(RVA = "0x49955C0", Offset = "0x49955C0", VA = "0x49955C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000531")]
		[Address(RVA = "0x4995630", Offset = "0x4995630", VA = "0x4995630")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600052D")]
	[Address(RVA = "0x4995390", Offset = "0x4995390", VA = "0x4995390")]
	static ProfilingUtility()
	{
	}

	[Token(Token = "0x6000532")]
	[Address(RVA = "0x4995690", Offset = "0x4995690", VA = "0x4995690")]
	[Conditional("ENABLE_PROFILER")]
	public static void Clear()
	{
	}

	[Token(Token = "0x6000533")]
	[Address(RVA = "0x49957D0", Offset = "0x49957D0", VA = "0x49957D0")]
	public static ProfilingScope SampleBlock(string name)
	{
		return default(ProfilingScope);
	}

	[Token(Token = "0x6000534")]
	[Address(RVA = "0x49957E0", Offset = "0x49957E0", VA = "0x49957E0")]
	[Conditional("ENABLE_PROFILER")]
	public static void BeginSample(string name)
	{
	}

	[Token(Token = "0x6000535")]
	[Address(RVA = "0x4995C80", Offset = "0x4995C80", VA = "0x4995C80")]
	[Conditional("ENABLE_PROFILER")]
	public static void EndSample()
	{
	}
}
